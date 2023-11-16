; File: hello.asm
; Compile with: nasm -f elf64 hello.asm && gcc hello.o -o
hello
; Run with: ./hello

	global main
	extern printf

	section .data
msg db "Hello, Holberton", 10, 0 ; message string with newline and null terminator

	section .text
main:
	; save the base pointer and stack pointer
	push  rbp
	mov   rbp, rsp

	; pass the message string as the first argument to printf
	mov   rdi, msg
	; call printf
	call  printf

	; restore the base pointer and stack pointer
	mov   rsp, rbp
	pop   rbp

	; exit with code 0
	mov   rax, 0
	ret
