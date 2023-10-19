global main
extern printf

section .data
format db "Hello, Holberton\n", 0  ; The format string

section .text
main:
    mov edi, format   ; Load the address of the format string into edi
    xor eax, eax      ; Clear eax to indicate no floating-point arguments
    call printf       ; Call the printf function
    mov eax, 0        ; Set the return value to 0 (return success)
    ret               ; Return from the main function
