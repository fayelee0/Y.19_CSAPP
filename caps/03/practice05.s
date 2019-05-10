	.file	"practice05.c"
	.text
	.globl	decode1
	.type	decode1, @function
decode1:
.LFB0:
	.cfi_startproc
	movq	(%rdi), %rcx
	movq	(%rsi), %rax
	movq	(%rdx), %r8
	movq	%r8, (%rdi)
	movq	%rcx, (%rsi)
	movq	%rax, (%rdx)
	ret
	.cfi_endproc
.LFE0:
	.size	decode1, .-decode1
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
