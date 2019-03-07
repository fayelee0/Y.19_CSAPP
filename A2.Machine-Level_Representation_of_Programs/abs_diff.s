	.file	"abs_diff.c"
	.text
	.globl	abs_diff
	.type	abs_diff, @function
abs_diff:
.LFB0:
	.cfi_startproc
	cmpq	%rsi, %rdi
	jge	.L2
	movq	%rsi, %rax
	subq	%rdi, %rax
	ret
.L2:
	movq	%rdi, %rax
	subq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	abs_diff, .-abs_diff
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
