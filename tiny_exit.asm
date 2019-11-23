; tiny.asm
  BITS 64
  EXTERN _exit
  GLOBAL _start
  SECTION .text
  _start:
    mov    rax, 60
    mov    rdi, 42
    syscall