section	.text
	global ft_strcmp

ft_strcmp:
	mov rbx, 0

boucle:
	mov ch, byte [rsi+rbx]
	cmp byte [rdi+rbx], ch
	ja plus_grand
	jb plus_petit
	cmp byte [rdi+rbx], 0
	jz fin_s1
	cmp byte [rsi+rbx], 0
	jz fin_s2
	inc rbx
	jmp boucle

fin_s1:
	cmp byte [rsi+rbx], 0
	jz egaux
	jnz plus_grand

fin_s2:
	cmp byte [rdi+rbx], 0
	jz egaux
	jnz plus_petit

plus_grand:
	mov rax, 1
	ret

plus_petit:
	mov rax, -1
	ret

egaux:
	mov rax, 0
	ret
