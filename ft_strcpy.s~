section	.text
	global ft_strcpy

ft_strcpy:
	mov rbx, 0

boucle:
	cmp byte [rsi+rbx], 0
	mov ch, byte [rsi+rbx]
	mov byte [rdi+rbx], ch
	cmp byte [rsi+rbx], 0
	jz	end
	inc rbx
	jmp boucle

end:
	mov rax, rdi
	ret
