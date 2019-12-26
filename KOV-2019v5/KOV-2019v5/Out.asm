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
	L1 SDWORD 2
	L2 SDWORD 0
	L3 SDWORD 1
	L4 SDWORD 0
	L5 BYTE "my first kursach", 0
	L6 BYTE "my First kursach", 0
	L7 BYTE "help", 0
	L8 SDWORD 3
	L9 BYTE "even", 0
	L10 BYTE "odd", 0
	L11 SDWORD 36
	L12 SDWORD 89
	L13 BYTE "Works", 0
	L14 BYTE "Not works", 0

.data
	mathresult SDWORD 0
	fcheckboo SDWORD 0
	fcheckres SDWORD 0
	gof SDWORD 0
	golen DWORD ?
	gocmp DWORD ?
	goboo SDWORD 0
	goeo SDWORD 0
	gox SDWORD 0
	gooe SDWORD 0

.code

math PROC mathone : DWORD, mathtwo : DWORD
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
	pop mathresult
	push mathresult
	jmp local0
local0:
	pop eax
	ret
math ENDP

fcheck PROC fchecknumb : DWORD
	push fchecknumb
	push L1
	pop ebx
	mov edx, 0 
	pop eax
	idiv ebx
	push edx
	mov eax, edx
	pop fcheckres
	mov eax, fcheckres
	cmp eax, L2
	jz m0
	jnz m1
	je m1
m0:
	push L3
	pop fcheckboo
	jmp e0
m1:
	push L4
	pop fcheckboo
e0:
	push fcheckboo
	jmp local1
local1:
	pop eax
	ret
fcheck ENDP

main PROC
	push math
	push L1
	push L1
	pop edx
	pop edx
	push L1
	push L1
	call Strcmp; не понимаю зачем ты вылезло
	push eax
	pop gof
	push gof
	call OutInt
	call Line
	push offset L5
	pop golen
	push offset L6
	pop gocmp
	push L3
	pop goboo
	mov eax, goboo
	cmp eax, 1
	jz m2
	jnz m3
	je m3
m2:
	push golen
	call OutStr
	call Line
	jmp e1
m3:
	push offset L7
	call OutStr
	call Line
e1:
	push fcheck
	push L8
	pop edx
	push L8
	call Strcmp; не понимаю зачем ты вылезло
	push eax
	pop goeo
	mov eax, goeo
	cmp eax, 1
	jz m4
	jnz m5
	je m5
m4:
	push offset L9
	call OutStr
	call Line
	jmp e2
m5:
	push offset L10
	call OutStr
	call Line
e2:
	push L11
	pop gox
	push golen
	push gocmp
	pop edx
	pop edx
	push gocmp
	push golen
	call Strcmp; не понимаю зачем ты вылезло
	push eax
	pop gooe
	mov eax, gox
	cmp eax, L12
	jl m6
	jg m7
	je m7
m6:
	push offset L13
	call OutStr
	call Line
	jmp e3
m7:
	push offset L14
	call OutStr
	call Line
e3:
	finish:
	push offset divisionByZero
main ENDP
end main