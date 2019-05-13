	.file	"struct.c"
	.text
	.globl	i2j
	.type	i2j, @function
i2j:
.LFB0:
	.cfi_startproc
	movl	(%rdi), %eax
	movl	%eax, 4(%rdi)
	ret
	.cfi_endproc
.LFE0:
	.size	i2j, .-i2j
	.globl	cp
	.type	cp, @function
cp:
.LFB1:
	.cfi_startproc
	movl	4(%rdi), %eax
	addl	(%rdi), %eax
	cltq
	leaq	8(%rdi,%rax,4), %rax
	movq	%rax, 16(%rdi)
	ret
	.cfi_endproc
.LFE1:
	.size	cp, .-cp
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
