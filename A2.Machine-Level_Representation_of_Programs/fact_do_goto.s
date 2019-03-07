	.file	"fact_do_goto.c"
	.text
	.globl	fact_do_goto
	.type	fact_do_goto, @function
fact_do_goto:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
.L2:
	imulq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$1, %rdi
	jg	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	fact_do_goto, .-fact_do_goto
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
