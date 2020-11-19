section	.text
	global ft_write

ft_write:
	mov rbx, rdi  ;fd
	mov rcx, rsi  ;msg to write
	mov rdx, rdx  ;length
	mov rax, 4    ;syscall write
	int 0x80      ;kernel call
	mov rax, rdx
	ret
