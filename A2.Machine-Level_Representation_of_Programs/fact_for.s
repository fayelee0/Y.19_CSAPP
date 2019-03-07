	.file	"fact_for.c"
	.text
	.globl	fact_for
	.type	fact_for, @function
fact_for:
.LFB0:
	.cfi_startproc
	cmpq	$1, %rdi
	jle	.L4
	addq	$1, %rdi
	movl	$2, %edx
	movl	$1, %eax
.L3:
	imulq	%rdx, %rax
	addq	$1, %rdx
	cmpq	%rdi, %rdx
	jne	.L3
	ret
.L4:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fact_for, .-fact_for
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
