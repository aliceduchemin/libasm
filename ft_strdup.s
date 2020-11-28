extern ft_strlen
extern malloc
extern ft_strcpy
extern __errno_location

section	.text
	global ft_strdup

ft_strdup:
	call ft_strlen
	inc rax

	mov rbx, rdi
	mov rdi, rax
	call malloc
	cmp rax, 0
	jz erreur_malloc

	mov rsi, rbx
	mov rdi, rax
	call ft_strcpy
	jmp fin

erreur_malloc:
	neg rax
	mov rbx, rax
	call __errno_location
	mov [rax], rbx
	mov rax, 0
	jmp fin

fin:
	ret
