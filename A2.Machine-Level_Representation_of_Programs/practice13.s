	.file	"practice13.c"
	.text
	.globl	compa
	.type	compa, @function
compa:
.LFB0:
	.cfi_startproc
	cmpl	%esi, %edi
	setl	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	compa, .-compa
	.globl	compb
	.type	compb, @function
compb:
.LFB1:
	.cfi_startproc
	cmpw	%si, %di
	setge	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	compb, .-compb
	.globl	compc
	.type	compc, @function
compc:
.LFB2:
	.cfi_startproc
	cmpb	%sil, %dil
	setbe	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE2:
	.size	compc, .-compc
	.globl	comp1
	.type	comp1, @function
comp1:
.LFB3:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE3:
	.size	comp1, .-comp1
	.globl	comp2
	.type	comp2, @function
comp2:
.LFB4:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE4:
	.size	comp2, .-comp2
	.globl	comp3
	.type	comp3, @function
comp3:
.LFB5:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE5:
	.size	comp3, .-comp3
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
