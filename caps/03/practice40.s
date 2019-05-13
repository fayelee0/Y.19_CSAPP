	.file	"practice40.c"
	.text
	.globl	fix_set_diag
	.type	fix_set_diag, @function
fix_set_diag:
.LFB0:
	.cfi_startproc
	movq	%rdi, %rax
	addq	$1088, %rdi
.L2:
	movl	%esi, (%rax)
	addq	$68, %rax
	cmpq	%rdi, %rax
	jne	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	fix_set_diag, .-fix_set_diag
	.globl	fix_set_diag_opt
	.type	fix_set_diag_opt, @function
fix_set_diag_opt:
.LFB1:
	.cfi_startproc
	movq	%rdi, %rax
	addq	$1088, %rdi
.L5:
	movl	%esi, (%rax)
	addq	$68, %rax
	cmpq	%rdi, %rax
	jne	.L5
	ret
	.cfi_endproc
.LFE1:
	.size	fix_set_diag_opt, .-fix_set_diag_opt
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
