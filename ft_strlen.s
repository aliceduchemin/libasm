section	.text
	global ft_strlen

ft_strlen:
	mov rax, 0

s1:
	cmp byte [rdi+rax], 0
	jz	end
	inc rax
	jmp s1

end:
	ret
