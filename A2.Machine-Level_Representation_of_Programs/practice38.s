	.file	"practice38.c"
	.text
	.globl	sum_element
	.type	sum_element, @function
sum_element:
.LFB0:
	.cfi_startproc
	leaq	0(,%rdi,8), %rdx
	subq	%rdi, %rdx
	addq	%rsi, %rdx
	leaq	(%rsi,%rsi,4), %rax
	addq	%rdi, %rax
	leaq	Q(%rip), %rcx
	movq	(%rcx,%rax,8), %rax
	leaq	P(%rip), %rcx
	addq	(%rcx,%rdx,8), %rax
	ret
	.cfi_endproc
.LFE0:
	.size	sum_element, .-sum_element
	.comm	Q,280,32
	.comm	P,280,32
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
