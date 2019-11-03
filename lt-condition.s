	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_lt                     ## -- Begin function lt
	.p2align	4, 0x90
_lt:                                    ## @lt
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-8(%rbp), %esi
	cmpl	-12(%rbp), %esi
	jge	LBB0_2
## %bb.1:
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$1, -4(%rbp)
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -4(%rbp)
	movl	%eax, -20(%rbp)         ## 4-byte Spill
LBB0_3:
	movl	-4(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$42, -8(%rbp)
	movl	$73, -12(%rbp)
	movl	-8(%rbp), %edi
	movl	-12(%rbp), %esi
	callq	_lt
	xorl	%esi, %esi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movl	%esi, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"x is LT Y"

L_.str.1:                               ## @.str.1
	.asciz	"x is GTE Y"


.subsections_via_symbols
