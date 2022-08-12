

section .data
msg: db "Hello, Holberton",0
fmt: db "%s", 10, 0

section .text
global_start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	call printf

	mov rax, 60
	mov rdi, 0
	call printf
