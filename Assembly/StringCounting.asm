.MODEL SMALL
.STACK 100H
.DATA
VL DB '0'
CN DB '0'

.CODE      
MOV AX, @DATA
MOV DS, AX

MAIN PROC
    MOV VL, 0
    MOV CN, 0
    MOV AH, 1
    FOR: INT 21H
        CMP AL, 0DH
        JE RESULT
        
        CMP AL, 'A'
        JE VOWEL
        CMP AL, 'a'
        JE VOWEL
        CMP AL, 'E'
        JE VOWEL
        CMP AL, 'e'
        JE VOWEL
        CMP AL, 'I'
        JE VOWEL
        CMP AL, 'i'
        JE VOWEL
        CMP AL, 'O'
        JE VOWEL
        CMP AL, 'o'
        JE VOWEL
        CMP AL, 'U'
        JE VOWEL
        CMP AL, 'u'
        JE VOWEL
        
        JMP CONSONENT
    
    VOWEL: INC VL
        JMP FOR
        
    CONSONENT: INC CN
        JMP FOR
    
    RESULT:
    
        MOV AH, 2
        MOV DL, 0AH
        INT 21H
        MOV DL, 0DH
        INT 21H
    
        MOV AH,2
        ADD VL, 48
        MOV DL, 'V' 
        INT 21H
        MOV DL, 'L' 
        INT 21H
        MOV DL, ':' 
        INT 21H
        MOV DL, VL 
        INT 21H
        
        MOV AH, 2
        MOV DL, 0AH
        INT 21H
        MOV DL, 0DH
        INT 21H
        
        MOV AH,2
        ADD CN, 48
        MOV DL, 'C' 
        INT 21H
        MOV DL, 'N' 
        INT 21H
        MOV DL, ':' 
        INT 21H
        MOV DL, CN 
        INT 21H
        
        MOV AH, 4CH
        INT 21H
MAIN ENDP
END MAIN