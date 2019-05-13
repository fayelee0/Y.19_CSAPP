	.file	"var_prod_ele.c"
	.text
	.globl	var_prod_ele
	.type	var_prod_ele, @function
var_prod_ele:
.LFB0:
	.cfi_startproc
	movq	%rdi, %r11
	movl	$0, %r9d
	movl	$0, %eax
	cmpq	%r9, %rdi
	jle	.L7
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
.L3:
	movq	%rcx, %r10
	imulq	%r11, %r10
	leaq	(%rsi,%r10,4), %rbx
	movq	%r9, %r10
	imulq	%r11, %r10
	leaq	(%rdx,%r10,4), %r10
	movl	(%r10,%r8,4), %r10d
	imull	(%rbx,%r9,4), %r10d
	addl	%r10d, %eax
	addq	$1, %r9
	cmpq	%r9, %rdi
	jg	.L3
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L7:
	.cfi_restore 3
	ret
	.cfi_endproc
.LFE0:
	.size	var_prod_ele, .-var_prod_ele
	.globl	var_prod_ele_opt
	.type	var_prod_ele_opt, @function
var_prod_ele_opt:
.LFB1:
	.cfi_startproc
	leaq	0(,%rdi,4), %r11
	imulq	%rdi, %rcx
	leaq	(%rdx,%r8,4), %r9
	movl	$0, %edx
	movl	$0, %eax
.L9:
	cmpq	%rdx, %rdi
	jle	.L11
	leaq	(%rcx,%rdx), %r10
	movl	(%r9), %r8d
	imull	(%rsi,%r10,4), %r8d
	addl	%r8d, %eax
	addq	%r11, %r9
	addq	$1, %rdx
	jmp	.L9
.L11:
	ret
	.cfi_endproc
.LFE1:
	.size	var_prod_ele_opt, .-var_prod_ele_opt
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
