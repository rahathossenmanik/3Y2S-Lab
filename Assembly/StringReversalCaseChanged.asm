.MODEL SMALL
.STACK 100H
.DATA
X DB 80 DUP
.CODE      
MOV AX, @DATA
MOV DS, AX
MAIN PROC
    MOV SI, 0
    MOV AH, 1
    FOR: INT 21H
        CMP AL, 0DH
        JE EXIT
        MOV X[SI], AL
        INC SI
        JMP FOR
    EXIT: DEC SI

    MOV AH, 2
    MOV DL, 0AH
    INT 21H
    MOV DL, 0DH
    INT 21H
    
    FOR2:
        MOV AH,2
        MOV DL, X[SI] 
        INT 21H
        CMP SI, 0
        JE END
        DEC SI
        JMP FOR2
    END: MOV AH, 4CH
        INT 21H
MAIN ENDP
END MAIN