	.file	"practice14.c"
	.text
	.globl	testa
	.type	testa, @function
testa:
.LFB0:
	.cfi_startproc
	movq	%rdi, %rax
	notq	%rax
	shrq	$63, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	testa, .-testa
	.globl	testb1
	.type	testb1, @function
testb1:
.LFB1:
	.cfi_startproc
	testw	%di, %di
	sete	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE1:
	.size	testb1, .-testb1
	.globl	testb2
	.type	testb2, @function
testb2:
.LFB2:
	.cfi_startproc
	testw	%di, %di
	sete	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE2:
	.size	testb2, .-testb2
	.globl	testc
	.type	testc, @function
testc:
.LFB3:
	.cfi_startproc
	testb	%dil, %dil
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE3:
	.size	testc, .-testc
	.globl	testd1
	.type	testd1, @function
testd1:
.LFB4:
	.cfi_startproc
	testl	%edi, %edi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE4:
	.size	testd1, .-testd1
	.globl	testd2
	.type	testd2, @function
testd2:
.LFB5:
	.cfi_startproc
	testl	%edi, %edi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE5:
	.size	testd2, .-testd2
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
