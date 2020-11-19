section	.text
	global ft_write

ft_write:
	mov rax, 1  ;syscall write
	mov rbx, rdi  ;fd
	mov rcx, rsi  ;msg to write ; rdx length == third parameter
	syscall       ;kernel call
	mov rax, rdx
	ret
