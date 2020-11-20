extern ___error

section	.text
	global ft_read

ft_read:
	mov rax, 0    ;syscall read
;	mov rbx, rdi  ;fd
;	mov rcx, rsi  ;msg read
	syscall       ;kernel call
;	mov rax, rdx
	ret
