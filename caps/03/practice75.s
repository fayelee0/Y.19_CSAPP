	.file	"practice75.c"
	.text
	.globl	c_image
	.type	c_image, @function
c_image:
.LFB0:
	.cfi_startproc
	movapd	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	c_image, .-c_image
	.globl	c_real
	.type	c_real, @function
c_real:
.LFB1:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE1:
	.size	c_real, .-c_real
	.globl	c_sub
	.type	c_sub, @function
c_sub:
.LFB2:
	.cfi_startproc
	subsd	%xmm2, %xmm0
	subsd	%xmm3, %xmm1
	ret
	.cfi_endproc
.LFE2:
	.size	c_sub, .-c_sub
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
