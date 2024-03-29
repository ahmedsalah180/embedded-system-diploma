.global reset
reset:
	ldr sp , = stack_top
	bl main
end: b end