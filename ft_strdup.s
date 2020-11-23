extern ft_strlen
extern malloc
extern ft_strcpy
extern error

section	.text
	global ft_strdup

ft_strdup: ;rdi = src
	call ft_strlen
	cmp rax, 0
	jz end
	inc rax

	mov rbx, rdi ;sauv src
	mov rdi, rax
	call malloc
	cmp rax, 0
	jz erreur_malloc

	mov rsi, rbx
	mov rdi, rax
	call ft_strcpy
	jmp end

erreur_malloc:
	call error
	jmp end

end:
	ret
