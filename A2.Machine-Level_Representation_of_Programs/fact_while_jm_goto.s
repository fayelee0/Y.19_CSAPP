	.file	"fact_while_jm_goto.c"
	.text
	.globl	fact_while_jm_goto
	.type	fact_while_jm_goto, @function
fact_while_jm_goto:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
.L2:
	cmpq	$1, %rdi
	jle	.L1
	imulq	%rdi, %rax
	subq	$1, %rdi
	jmp	.L2
.L1:
	ret
	.cfi_endproc
.LFE0:
	.size	fact_while_jm_goto, .-fact_while_jm_goto
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
