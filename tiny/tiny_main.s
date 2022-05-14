	.file	"tiny_main.s"
	.text
	.globl	main
	.type	main, @function
main:
	movl	$42, %eax
	ret
