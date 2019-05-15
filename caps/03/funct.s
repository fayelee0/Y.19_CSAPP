	.file	"funct.c"
	.text
	.globl	funct
	.type	funct, @function
funct:
.LFB0:
	.cfi_startproc
	vcvtss2sd	%xmm1, %xmm1, %xmm1
	vmulsd	%xmm0, %xmm1, %xmm1
	vxorpd	%xmm0, %xmm0, %xmm0
	vcvtsi2sd	%edi, %xmm0, %xmm0
	vdivsd	%xmm0, %xmm2, %xmm0
	vsubsd	%xmm0, %xmm1, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	funct, .-funct
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
