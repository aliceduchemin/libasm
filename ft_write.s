extern __errno_location

section	.text
	global ft_write

ft_write:
	mov rax, 1  ;syscall write
	syscall       ;kernel call
	cmp rax, 0
	jl erreur_syscall
	jmp fin

erreur_syscall:
	neg	rax
	mov rbx, rax
	call __errno_location
	mov [rax], rbx
	mov rax, -1
	jmp fin

fin:
	ret
