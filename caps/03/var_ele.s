	.file	"var_ele.c"
	.text
	.globl	var_ele
	.type	var_ele, @function
var_ele:
.LFB0:
	.cfi_startproc
	imulq	%rdi, %rdx
	leaq	(%rsi,%rdx,4), %rax
	movl	(%rax,%rcx,4), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	var_ele, .-var_ele
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
