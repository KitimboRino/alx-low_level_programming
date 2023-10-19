global main
extern printf

main:
    mov edi, format   ; Load the address of the format string into edi
    xor eax, eax      ; Clear eax to indicate no floating-point arguments
    call printf       ; Call the printf function
    mov eax, 0        ; Set the return value to 0 (return success)
    ret               ; Return from the main function

format db "Hello, Holberton",10,0  ; The format string, 10 represents a new line
