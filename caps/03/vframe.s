	.file	"vframe.c"
	.text
	.globl	vframe
	.type	vframe, @function
vframe:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	15(,%rdi,8), %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	leaq	7(%rsp), %rax
	shrq	$3, %rax
	leaq	0(,%rax,8), %r8
	movq	%r8, %rcx
	leaq	-8(%rbp), %r9
	movq	%r9, 0(,%rax,8)
	movq	$1, -8(%rbp)
.L2:
	movq	-8(%rbp), %rax
	cmpq	%rax, %rdi
	jle	.L5
	movq	%rdx, (%rcx,%rax,8)
	addq	$1, -8(%rbp)
	jmp	.L2
.L5:
	movq	(%r8,%rsi,8), %rax
	movq	(%rax), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	vframe, .-vframe
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
