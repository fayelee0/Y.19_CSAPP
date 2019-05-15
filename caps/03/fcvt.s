	.file	"fcvt.c"
	.text
	.globl	fcvt
	.type	fcvt, @function
fcvt:
.LFB0:
	.cfi_startproc
	vmovss	(%rsi), %xmm0
	movq	(%rcx), %rax
	vcvttsd2siq	(%rdx), %r8
	movq	%r8, (%rcx)
	vxorps	%xmm1, %xmm1, %xmm1
	vcvtsi2ss	%edi, %xmm1, %xmm1
	vmovss	%xmm1, (%rsi)
	vxorpd	%xmm1, %xmm1, %xmm1
	vcvtsi2sdq	%rax, %xmm1, %xmm1
	vmovsd	%xmm1, (%rdx)
	vcvtss2sd	%xmm0, %xmm0, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	fcvt, .-fcvt
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
