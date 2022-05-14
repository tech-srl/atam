	.file	"tiny_exit.s"
	.text
	.globl	_start
	.type	_start, @function
_start:
	mov	$60, %eax
	mov    $42, %rdi
	syscall
