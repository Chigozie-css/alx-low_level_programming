global main
extern printf

section .data
combined db "Hello, Holberton", 10, 0

section .text
main:
mov rdi, combined
call printf
mov eax, 60
xor edi, edi
syscall
