

section .data
msg db "Hello, Holberton",10

section .text
global_start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	call printf

	mov rax, 60
	mov rdi, 0
	call printf
