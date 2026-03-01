	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	mov	x0, #0                          ; =0x0
	bl	_time
                                        ; kill: def $w0 killed $w0 killed $x0
	bl	_srand
	stur	wzr, [x29, #-8]
	stur	wzr, [x29, #-12]
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	stur	wzr, [x29, #-20]
	b	LBB0_1
LBB0_1:                                 ; =>This Inner Loop Header: Depth=1
	ldur	w8, [x29, #-20]
	subs	w8, w8, #100
	b.ge	LBB0_20
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w9, [x29, #-20]
	mov	w8, #100                        ; =0x64
	subs	w11, w8, w9
	ldur	w8, [x29, #-8]
                                        ; kill: def $x8 killed $w8
	mov	x9, sp
                                        ; implicit-def: $x10
	mov	x10, x11
	str	x10, [x9]
	str	x8, [x9, #8]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	mov	x9, sp
	sub	x8, x29, #12
	str	x8, [x9]
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	bl	_scanf
	ldur	w8, [x29, #-12]
	str	w8, [sp, #24]                   ; 4-byte Folded Spill
	cbz	w8, LBB0_6
	b	LBB0_3
LBB0_3:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #24]                   ; 4-byte Folded Reload
	subs	w8, w8, #1
	b.eq	LBB0_7
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #24]                   ; 4-byte Folded Reload
	subs	w8, w8, #2
	b.eq	LBB0_8
	b	LBB0_5
LBB0_5:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #24]                   ; 4-byte Folded Reload
	subs	w8, w8, #3
	b.eq	LBB0_12
	b	LBB0_18
LBB0_6:
	stur	wzr, [x29, #-4]
	b	LBB0_21
LBB0_7:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-8]
	add	w8, w8, #19
	stur	w8, [x29, #-8]
	adrp	x0, l_.str.5@PAGE
	add	x0, x0, l_.str.5@PAGEOFF
	bl	_printf
	b	LBB0_18
LBB0_8:                                 ;   in Loop: Header=BB0_1 Depth=1
	bl	_rand
	stur	w0, [x29, #-16]
	ldur	w8, [x29, #-16]
	mov	w10, #2                         ; =0x2
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	cbnz	w8, LBB0_10
	b	LBB0_9
LBB0_9:                                 ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.6@PAGE
	add	x0, x0, l_.str.6@PAGEOFF
	bl	_printf
	ldur	w8, [x29, #-8]
	add	w8, w8, #100
	stur	w8, [x29, #-8]
	b	LBB0_11
LBB0_10:
	adrp	x0, l_.str.7@PAGE
	add	x0, x0, l_.str.7@PAGEOFF
	bl	_printf
	stur	wzr, [x29, #-4]
	b	LBB0_21
LBB0_11:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_18
LBB0_12:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-8]
	subs	w8, w8, #20
	b.ge	LBB0_14
	b	LBB0_13
LBB0_13:                                ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.8@PAGE
	add	x0, x0, l_.str.8@PAGEOFF
	bl	_printf
	b	LBB0_18
LBB0_14:                                ;   in Loop: Header=BB0_1 Depth=1
	bl	_rand
	stur	w0, [x29, #-16]
	ldur	w8, [x29, #-16]
	mov	w10, #10                        ; =0xa
	sdiv	w9, w8, w10
	mul	w9, w9, w10
	subs	w8, w8, w9
	cbnz	w8, LBB0_16
	b	LBB0_15
LBB0_15:                                ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.9@PAGE
	add	x0, x0, l_.str.9@PAGEOFF
	bl	_printf
	ldur	w8, [x29, #-8]
	add	w8, w8, #1000
	stur	w8, [x29, #-8]
	b	LBB0_17
LBB0_16:                                ;   in Loop: Header=BB0_1 Depth=1
	adrp	x0, l_.str.10@PAGE
	add	x0, x0, l_.str.10@PAGEOFF
	bl	_printf
	ldur	w8, [x29, #-8]
	subs	w8, w8, #20
	stur	w8, [x29, #-8]
	b	LBB0_17
LBB0_17:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_18
LBB0_18:                                ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_19
LBB0_19:                                ;   in Loop: Header=BB0_1 Depth=1
	ldur	w8, [x29, #-20]
	add	w8, w8, #1
	stur	w8, [x29, #-20]
	b	LBB0_1
LBB0_20:
	adrp	x0, l_.str.11@PAGE
	add	x0, x0, l_.str.11@PAGEOFF
	bl	_printf
	stur	wzr, [x29, #-4]
	b	LBB0_21
LBB0_21:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Welcome to the Hundred Steps RPG\n"

l_.str.1:                               ; @.str.1
	.asciz	"Your commands are:\n 0: Quit, 1: Get $19 guranteed 2: 50 percent chance of getting 100 dollars or dying 3: Gamble 20 dollars for small chance of getting 1000\n"

l_.str.2:                               ; @.str.2
	.asciz	"You have %d steps left, and your current money is %d.\n\n"

l_.str.3:                               ; @.str.3
	.asciz	"What would you like to do? "

l_.str.4:                               ; @.str.4
	.asciz	"%d"

l_.str.5:                               ; @.str.5
	.asciz	"You got 19 moneys\n"

l_.str.6:                               ; @.str.6
	.asciz	"You survived.\n"

l_.str.7:                               ; @.str.7
	.asciz	"You fucking died.\n"

l_.str.8:                               ; @.str.8
	.asciz	"You don't have enough money.\n"

l_.str.9:                               ; @.str.9
	.asciz	"YOU WON!\n"

l_.str.10:                              ; @.str.10
	.asciz	"You lost.\n"

l_.str.11:                              ; @.str.11
	.asciz	"You are out of steps\n"

.subsections_via_symbols
