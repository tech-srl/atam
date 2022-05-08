example1:
movl %ebx, %eax
example1_5:
movl (%esp), %eax
example2: 
movl 4(%rdx), %ecx 
example3:
movl 4(%rdx,%rsi,4), %ecx 
example4:
movl 4(%rdx,%rsi,8), %ecx 
example5:
movl 4(%rdx,%rsi,4), %r8d 
example6:
movl %r8d, 4(%rdx,%rsi,4)
example7:
movq %r8, 4(%rdx,%rsi,4)
example8:
movq $8, 4(%rdx,%rsi,4)
example9:
movw $8, 4(%rdx,%rsi,4)
example10:
movw $8, 4(%edx,%esi,4)
example11:
movw $8, 4(%r8d,%esi,4)
