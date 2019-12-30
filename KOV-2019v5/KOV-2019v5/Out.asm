.586
	.model flat, stdcall
	includelib libucrt.lib
	includelib kernel32.lib
	includelib ../Debug/Library.lib
	ExitProcess PROTO :DWORD

EXTRN Random: proc
	EXTRN Strlen: proc
	EXTRN Line: proc
	EXTRN OutInt: proc
	EXTRN Strcmp: proc
	EXTRN OutStr: proc

.stack 4096


.const
	divisionByZero db 'ERROR: DIVIDE BY ZERO', 0
	belowZeroNum db 'ERROR: NUM IS BELOVER THAN ZERO', 0
	L1 BYTE "Hello", 0
	L2 SDWORD 0
	L3 SDWORD 2
	L4 BYTE "my first kursach", 0
	L5 BYTE "my First kursach", 0
	L6 SDWORD 36
	L7 SDWORD 28
	L8 BYTE "Works", 0
	L9 BYTE "Not works", 0

.data
	mathr DWORD ?
	mathsr SDWORD 0
	mathresult SDWORD 0
	gol SDWORD 0
	gos SDWORD 0
	gof SDWORD 0
	golen DWORD ?
	gocmp DWORD ?
	gox SDWORD 0
	gorc SDWORD 0

.code

math PROC mathone : DWORD, mathtwo : DWORD
	push offset L1
	pop mathr
	push mathone
	pop edx
	push mathone
	call Strlen;
	push eax
	pop mathsr
	push mathone
	push mathtwo
	pop eax
	pop ebx
	add eax, ebx
	push eax
	push mathtwo
	pop eax
	pop ebx
	mul ebx
	push eax
	push mathsr
	pop eax
	pop ebx
	add eax, ebx
	push eax
	pop mathresult
	push mathresult
	call OutInt
	call Line
	push mathresult
	jmp local0
local0:
	pop eax
	ret
math ENDP

main PROC
	push L2
	pop gol
	push L2
	pop gos
	push math
	push L3
	push L3
	pop edx
	pop edx
	push L3
	push L3
	call math
	push eax
	pop gof
	push offset L4
	pop golen
	push offset L5
	pop gocmp
	push L6
	pop gox
	push golen
	push gocmp
	pop edx
	pop edx
	push gocmp
	push golen
	call Strcmp; 
	push eax
	pop gorc
	mov eax, gol
	cmp eax, L7
	jle m0
	jge m1
	je m1
m0:
	push offset L8
	call OutStr
	call Line
	jmp e0
m1:
	push offset L9
	call OutStr
	call Line
e0:
	finish:
	push offset divisionByZero
	call ExitProcess
main ENDP
end main