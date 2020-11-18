section	.text
	global _start ;must be declared for linker ld

_start: ;tell linker entry point
	mov	edx,len ;msg length
	mov	ecx,msg ;msg to write
	mov	ebx,1 ;fd 1
	mov	eax,4 ;sys_write
	int	0x80 ;call kernel

	mov	eax,1
	int	0x80

section	.data
msg db 'Hello, world!', 0xa
len	equ $ - msg ;length of msg. $ points to the byte after the last character of msg
;equiv msg db 'Hello, world!', 0
