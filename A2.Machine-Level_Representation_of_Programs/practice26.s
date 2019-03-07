	.file	"practice26.c"
	.text
	.globl	fun_a
	.type	fun_a, @function
fun_a:
.LFB0:
	.cfi_startproc
	movl	$0, %eax
.L2:
	testq	%rdi, %rdi
	je	.L4
	xorq	%rdi, %rax
	shrq	%rdi
	jmp	.L2
.L4:
	andl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	fun_a, .-fun_a
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
