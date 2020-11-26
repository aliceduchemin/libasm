extern __errno_location

section	.text
	global ft_read

ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	jl erreur_syscall
	jmp fin

erreur_syscall:
	neg rax
	mov rbx, rax
	call __errno_location
	mov [rax], rbx
	mov rax, -1
	jmp fin

fin:
	ret
