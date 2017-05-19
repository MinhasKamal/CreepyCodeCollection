# a nice piece of code
# written by xxc3nsoredxx
# written for the MARS MIPS simulator

.text
	xori $t0, $0, 0x55555555
	xori $t1, $t0, 0x555D1515
	xori $t2, $t1, 0x39214042
	xori $t3, $t2, 0x31390012
	sw $t2, c
	sw $t3, d
	sw $t1, b
b:	nop
c:	nop
d:	nop
