 ; tiny.asm
  BITS 64
  GLOBAL _start
  SECTION .text
  _start:
    mov     eax, 42
    ret