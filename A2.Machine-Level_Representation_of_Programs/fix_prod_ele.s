	.file	"fix_prod_ele.c"
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
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
