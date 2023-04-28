global main
extern printf

section .data
    format db 'Hello, Holberton', 0x0A, 0

section .text
main:
    mov edi, format  ; Set the first argument to the format string
    xor eax, eax     ; Set the return value to 0
    call printf      ; Call printf with the format string
    mov eax, 0       ; Set the return value to 0
    ret              ; Return to the operating system
