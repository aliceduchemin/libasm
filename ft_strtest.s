section	.text
	global ft_strlen

ft_strlen:
;	mov rsp, rbp ;copy the stack pointer. ables to access the function parameters
	mov rax, 0

s1:
;	cmp byte [rdi+rax], 0
	cmp byte [rsp], 0
	jz	end
	inc rax
	mov rsp, [rsp+rax]
	jmp s1

end:
;	mov rbp, rsp
	ret
