	.file	"cmovdiff.c"
	.text
	.p2align 4,,15
	.globl	absdiff
	.type	absdiff, @function
absdiff:
.LFB0:
	.cfi_startproc
	movq	%rsi, %rdx
	movq	%rdi, %rax
	subq	%rdi, %rdx
	subq	%rsi, %rax
	cmpq	%rdi, %rsi
	cmovg	%rdx, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	absdiff, .-absdiff
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
