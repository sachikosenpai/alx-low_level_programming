; File 101-holberton.asm
; Auth: Abisola F Popoola
; Desc: 64-bit assembly program that prints
; Hello, Holberton followed by a new line.

extern printf

section .data
msg: db "Hello, Holberton",10

section .text
global_start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	call printf

	mov rax, 60
	mov rdi, 0
	syscall
