	.file	"practice17.c"
	.text
	.globl	abs_diff_se_case1
	.type	abs_diff_se_case1, @function
abs_diff_se_case1:
.LFB0:
	.cfi_startproc
	cmpq	%rsi, %rdi
	jge	.L4
	addq	$1, lt_cnt(%rip)
	movq	%rsi, %rax
	subq	%rdi, %rax
	ret
.L4:
	addq	$1, ge_cnt(%rip)
	movq	%rdi, %rax
	subq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	abs_diff_se_case1, .-abs_diff_se_case1
	.globl	abs_diff_se_case2
	.type	abs_diff_se_case2, @function
abs_diff_se_case2:
.LFB1:
	.cfi_startproc
	cmpq	%rsi, %rdi
	jl	.L8
	addq	$1, ge_cnt(%rip)
	movq	%rdi, %rax
	subq	%rsi, %rax
	ret
.L8:
	addq	$1, lt_cnt(%rip)
	movq	%rsi, %rax
	subq	%rdi, %rax
	ret
	.cfi_endproc
.LFE1:
	.size	abs_diff_se_case2, .-abs_diff_se_case2
	.globl	ge_cnt
	.bss
	.align 8
	.type	ge_cnt, @object
	.size	ge_cnt, 8
ge_cnt:
	.zero	8
	.globl	lt_cnt
	.align 8
	.type	lt_cnt, @object
	.size	lt_cnt, 8
lt_cnt:
	.zero	8
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
