section	.text
	global ft_strlen

ft_strlen:
	mov rax, 0

boucle:
	cmp byte [rdi+rax], 0
	jz	fin
	inc rax
	jmp boucle

fin:
	ret
