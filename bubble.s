	.file	"bubble.c"
	.text
	.p2align 4
	.globl	bubbleSort
	.type	bubbleSort, @function
bubbleSort:
.LFB23:
	.cfi_startproc
	leal	-1(%rsi), %r8d
	testl	%r8d, %r8d
	jle	.L1
	movslq	%r8d, %rax
	leaq	(%rdi,%rax,4), %rsi
	.p2align 4,,10
	.p2align 3
.L3:
	movq	%rdi, %rax
	testl	%r8d, %r8d
	jle	.L18
	.p2align 4,,10
	.p2align 3
.L5:
	movq	(%rax), %xmm0
	pshufd	$0xe5, %xmm0, %xmm1
	movd	%xmm0, %edx
	movd	%xmm1, %ecx
	cmpl	%edx, %ecx
	jge	.L4
	pshufd	$225, %xmm0, %xmm0
	movq	%xmm0, (%rax)
.L4:
	addq	$4, %rax
	cmpq	%rsi, %rax
	jne	.L5
	subq	$4, %rsi
	subl	$1, %r8d
	jne	.L3
.L1:
	ret
	.p2align 4,,10
	.p2align 3
.L18:
	subl	$1, %r8d
	subq	$4, %rsi
	jmp	.L3
	.cfi_endproc
.LFE23:
	.size	bubbleSort, .-bubbleSort
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC2:
	.string	"%d "
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	movl	$7, %esi
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	leaq	.LC2(%rip), %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$48, %rsp
	.cfi_def_cfa_offset 80
	movdqa	.LC0(%rip), %xmm0
	movq	%fs:40, %rax
	movq	%rax, 40(%rsp)
	xorl	%eax, %eax
	movq	%rsp, %rbx
	leaq	28(%rsp), %r12
	movq	.LC1(%rip), %rax
	movq	%rbx, %rdi
	movl	$90, 24(%rsp)
	movq	%rax, 16(%rsp)
	movaps	%xmm0, (%rsp)
	call	bubbleSort@PLT
	.p2align 4,,10
	.p2align 3
.L20:
	movl	(%rbx), %edx
	movq	%rbp, %rsi
	movl	$2, %edi
	xorl	%eax, %eax
	addq	$4, %rbx
	call	__printf_chk@PLT
	cmpq	%rbx, %r12
	jne	.L20
	movl	$10, %edi
	call	putchar@PLT
	movq	40(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L24
	addq	$48, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 32
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
.L24:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.long	64
	.long	34
	.long	25
	.long	12
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC1:
	.long	22
	.long	11
	.ident	"GCC: (GNU) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
