extern ft_strlen
extern malloc
extern ft_strcpy

section	.text
	global ft_strdup

ft_strdup: ;rdi = src
	call ft_strlen
	inc rax

	mov rbx, rdi ;sauv src
	mov rdi, rax
	call malloc

	mov rsi, rbx
	mov rdi, rax
	call ft_strcpy
	ret
