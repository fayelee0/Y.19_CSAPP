	.file	"practice63.c"
	.text
	.globl	decode2
	.type	decode2, @function
decode2:
.LFB0:
	.cfi_startproc
	movq	%rsi, %rax
	subq	%rdx, %rax
	movq	%rax, %rdx
	imulq	%rdi, %rdx
	movabsq	$-9223372036854775808, %rax
	andq	%rax, %rsi
	movq	%rdx, %rax
	xorq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	decode2, .-decode2
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
