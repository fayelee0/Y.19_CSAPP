	.file	"practice33.c"
	.text
	.globl	procprob
	.type	procprob, @function
procprob:
.LFB11:
	.cfi_startproc
	movslq	%edi, %rdi
	addq	%rdi, (%rdx)
	addb	%sil, (%rcx)
	movl	$6, %eax
	ret
	.cfi_endproc
.LFE11:
	.size	procprob, .-procprob
	.globl	procprob2
	.type	procprob2, @function
procprob2:
.LFB12:
	.cfi_startproc
	addb	%sil, (%rcx)
	movslq	%edi, %rdi
	addq	%rdi, (%rdx)
	movl	$6, %eax
	ret
	.cfi_endproc
.LFE12:
	.size	procprob2, .-procprob2
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
