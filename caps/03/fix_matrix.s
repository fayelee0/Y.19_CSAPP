	.file	"fix_matrix.c"
	.text
	.globl	fix_prod_ele
	.type	fix_prod_ele, @function
fix_prod_ele:
.LFB0:
	.cfi_startproc
	salq	$6, %rdx
	addq	%rdx, %rdi
	leaq	(%rsi,%rcx,4), %rdx
	leaq	1024(%rdx), %rsi
	movl	$0, %eax
.L2:
	movl	(%rdi), %ecx
	imull	(%rdx), %ecx
	addl	%ecx, %eax
	addq	$4, %rdi
	addq	$64, %rdx
	cmpq	%rsi, %rdx
	jne	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	fix_prod_ele, .-fix_prod_ele
	.globl	fix_prod_ele_opt
	.type	fix_prod_ele_opt, @function
fix_prod_ele_opt:
.LFB1:
	.cfi_startproc
	salq	$6, %rdx
	addq	%rdx, %rdi
	salq	$2, %rcx
	leaq	(%rsi,%rcx), %rdx
	leaq	1024(%rsi,%rcx), %rsi
	movl	$0, %eax
.L5:
	movl	(%rdi), %ecx
	imull	(%rdx), %ecx
	addl	%ecx, %eax
	addq	$4, %rdi
	addq	$64, %rdx
	cmpq	%rdx, %rsi
	jne	.L5
	ret
	.cfi_endproc
.LFE1:
	.size	fix_prod_ele_opt, .-fix_prod_ele_opt
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
