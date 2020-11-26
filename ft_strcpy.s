section	.text
	global ft_strcpy

ft_strcpy:
	mov rbx, 0

boucle:
	mov ch, byte [rsi+rbx]
	mov byte [rdi+rbx], ch
	cmp byte ch, 0
	jz	fin
	inc rbx
	jmp boucle

fin:
	mov byte [rdi+rbx], 0
	mov rax, rdi
	ret
