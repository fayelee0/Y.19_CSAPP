	.file	"practice35.c"
	.text
	.globl	rfun
	.type	rfun, @function
rfun:
.LFB0:
	.cfi_startproc
	testq	%rdi, %rdi
	jne	.L8
	movl	$0, %eax
	ret
.L8:
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx
	shrq	$2, %rdi
	call	rfun
	addq	%rbx, %rax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	rfun, .-rfun
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
