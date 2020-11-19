section	.text
	global ft_strdup

ft_strdup:
	mov rax, 11  ;syscall munmap
	xor rbx, rbx ;addr
	mov rdx, 4 ;length
	syscall
	mov rax, rdi
	ret
