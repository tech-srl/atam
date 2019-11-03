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
	movl	%edi, -4(%rbp)       # first parameter -> x (local of lt)
	movl	%esi, -8(%rbp)       # second parameter -> y (local of lt)
	movl	-4(%rbp), %esi       # mov x into esi so we can compare 
	cmpl	-8(%rbp), %esi       # cmp y (from stack) to x in esi 
	setl	%al                  # get result from EFLAGS sign into AL
	andb	$1, %al              # 
	movzbl	%al, %eax            # zero extend EAX 
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
	movl	$42, -8(%rbp)          # 42 -> a (local of main) 
	movl	$73, -12(%rbp)         # 73 -> b (local of main)
	movl	-8(%rbp), %edi         # a -> edi, first parameter 
	movl	-12(%rbp), %esi        # b -> esi, second parameter
	callq	_lt
	xorl	%esi, %esi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movl	%esi, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
