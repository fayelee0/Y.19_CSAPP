	.file	"fact_while.c"
	.text
	.globl	fact_while
	.type	fact_while, @function
fact_while:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
.L2:
	cmpq	$1, %rdi
	jle	.L4
	imulq	%rdi, %rax
	subq	$1, %rdi
	jmp	.L2
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	fact_while, .-fact_while
	.globl	fact_while_jm_goto
	.type	fact_while_jm_goto, @function
fact_while_jm_goto:
.LFB1:
	.cfi_startproc
	movl	$1, %eax
.L6:
	cmpq	$1, %rdi
	jle	.L5
	imulq	%rdi, %rax
	subq	$1, %rdi
	jmp	.L6
.L5:
	ret
	.cfi_endproc
.LFE1:
	.size	fact_while_jm_goto, .-fact_while_jm_goto
	.globl	fact_while_gd_goto
	.type	fact_while_gd_goto, @function
fact_while_gd_goto:
.LFB2:
	.cfi_startproc
	cmpq	$1, %rdi
	jle	.L11
	movl	$1, %eax
.L10:
	imulq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$1, %rdi
	jne	.L10
	ret
.L11:
	movl	$1, %eax
.L9:
	ret
	.cfi_endproc
.LFE2:
	.size	fact_while_gd_goto, .-fact_while_gd_goto
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
