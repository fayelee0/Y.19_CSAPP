	.file	"cmov_diff.c"
	.text
	.globl	cmov_diff
	.type	cmov_diff, @function
cmov_diff:
.LFB0:
	.cfi_startproc
	movq	%rsi, %rdx
	subq	%rdi, %rdx
	movq	%rdi, %rax
	subq	%rsi, %rax
	cmpq	%rdi, %rsi
	jle	.L1
	movq	%rdx, %rax
.L1:
	ret
	.cfi_endproc
.LFE0:
	.size	cmov_diff, .-cmov_diff
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
