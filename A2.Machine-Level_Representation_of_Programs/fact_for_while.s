	.file	"fact_for_while.c"
	.text
	.globl	fact_for_while
	.type	fact_for_while, @function
fact_for_while:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
	movl	$2, %edx
.L2:
	cmpq	%rdi, %rdx
	jg	.L4
	imulq	%rdx, %rax
	addq	$1, %rdx
	jmp	.L2
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	fact_for_while, .-fact_for_while
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
