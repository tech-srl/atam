	.file	"tiny.s"
	.text
	.globl	_start
	.type	_start, @function
_start:
	movl	$42, %eax
	ret
