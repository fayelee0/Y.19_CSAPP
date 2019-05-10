	.file	"fact_for.c"
	.text
	.globl	fact_for
	.type	fact_for, @function
fact_for:
.LFB0:
	.cfi_startproc
	movl	$1, %edx
	movl	$1, %eax
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
	.size	fact_for, .-fact_for
	.globl	fact_for_while
	.type	fact_for_while, @function
fact_for_while:
.LFB1:
	.cfi_startproc
	movl	$1, %eax
	movl	$2, %edx
.L6:
	cmpq	%rdi, %rdx
	jg	.L8
	imulq	%rdx, %rax
	addq	$1, %rdx
	jmp	.L6
.L8:
	ret
	.cfi_endproc
.LFE1:
	.size	fact_for_while, .-fact_for_while
	.globl	fact_for_jm_goto
	.type	fact_for_jm_goto, @function
fact_for_jm_goto:
.LFB2:
	.cfi_startproc
	movl	$1, %eax
	movl	$2, %edx
.L10:
	cmpq	%rdi, %rdx
	jg	.L9
	imulq	%rdx, %rax
	addq	$1, %rdx
	jmp	.L10
.L9:
	ret
	.cfi_endproc
.LFE2:
	.size	fact_for_jm_goto, .-fact_for_jm_goto
	.globl	fact_for_gd
	.type	fact_for_gd, @function
fact_for_gd:
.LFB3:
	.cfi_startproc
	cmpq	$1, %rdi
	jle	.L15
	movl	$1, %eax
	movl	$2, %edx
.L14:
	imulq	%rdx, %rax
	addq	$1, %rdx
	cmpq	%rdx, %rdi
	jge	.L14
	ret
.L15:
	movl	$1, %eax
.L13:
	ret
	.cfi_endproc
.LFE3:
	.size	fact_for_gd, .-fact_for_gd
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
