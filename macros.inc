verify MACRO
	local try, pop, popa, popb, clr ,popc 
try:
	mov ah, 07h
	int 21h
	cmp al, 41h
	je pop
	cmp al, 61h
	je popa
	cmp al, 42h	
	je pop
	cmp al, 62h
	je popb
	cmp al,43h
	je pop
	cmp al,63h
	je popc

	jne try

popa:
	mov ah, 02
	mov dl, al
	int 21h

	mov ah, 00h
	sub al, 20h
	push ax
	jmp clr

popb:
	mov ah, 02
	mov dl, al
	int 21h

	mov ah,00h
	sub al, 20h
	push ax
	jmp clr
pop:
	mov ah, 02
	mov dl, al
	int 21h

	mov ah, 00h
	push ax
	jmp clr 

popc:
	mov ah, 02
	mov dl, al
	int 21h

	mov ah,00h
	sub al,20h
	push ax

clr:
	mov ax,0000h
ENDm 

     
k1 macro 		

	mov ax,0600h
	mov bh,0ebh
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,0dbh
	mov cx,0204h
	mov dx,164bh
	int 10h 

        mov ax,0600h
	mov bh,10h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,20h
	mov cx,060eh
	mov dx,1341h
	int 10h
    
	mov ah, 02h
	mov dx, 0714h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q1
	int 21h

	mov ah, 02h
	mov dx, 081fh
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, D
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, E
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, F
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, G
	int 21h

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, H
	int 21h

                
endm
    
    
k2 macro 			
        mov ax,0600h
	mov bh,0dbh
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,0cbh
	mov cx,0204h
	mov dx,164bh
	int 10h 

	mov ax,0600h
	mov bh,21h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,31h
	mov cx,060eh
	mov dx,1341h
	int 10h

	mov ah, 02h
	mov dx, 071ah
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q2
	int 21h

	mov ah, 02h
	mov dx, 0817h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, M
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, I
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, J
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, K
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, L
	int 21h
                
endm
    
k3 macro 
        
	mov ax,0600h
	mov bh,03bh
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,02bh
	mov cx,0204h
	mov dx,164bh
	int 10h  

    mov ax,0600h
	mov bh,32h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,42h
	mov cx,060eh
	mov dx,1341h
	int 10h

	mov ah, 02h
	mov dx, 0715h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q3
	int 21h

	mov ah, 02h
	mov dx, 081bh
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, U1
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, N
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, O
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, P
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, Q
	int 21h
                
endm

k4 macro 
        
	mov ax,0600h
	mov bh,23h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,63h
	mov cx,0204h
	mov dx,164bh
	int 10h  

  	mov ax,0600h
	mov bh,43h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,53h
	mov cx,060eh
	mov dx,1341h
	int 10h
    
   	mov ah, 02h
	mov dx, 0717h
	mov bh, 00h
	int 10h 

    
	mov ah, 09h
	lea dx, q4
	int 21h

	mov ah, 02h
	mov dx, 081ch
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, W1
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, R
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, S
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, T
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, U
	int 21h

                
endm

k5 macro 
        
	mov ax,0600h
	mov bh,73h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,83h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
   	mov ax,0600h
	mov bh,54h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,64h
	mov cx,060eh
	mov dx,1341h
	int 10h
    
    	mov ah, 02h
	mov dx, 0713h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q5
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, V
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, W
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, X
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, Y
	int 21h


                
endm

k6 macro 
        
	mov ax,0600h
	mov bh,53h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,03h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
   	mov ax,0600h
	mov bh,65h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,75h
	mov cx,060eh
	mov dx,1341h
	int 10h
    
    	mov ah, 02h
	mov dx, 0713h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q6
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, Z
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, A1
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, B1
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, C1
	int 21h

                
endm

k7 macro 
        
	 mov ax,0600h
	mov bh,0d3h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,0e3h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
    	mov ax,0600h
	mov bh,76h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,86h
	mov cx,060eh
	mov dx,1341h
	int 10h   
	
    	mov ah, 02h
	mov dx, 0714h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q7
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, D1
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, E1
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, F1
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, G1
	int 21h

                
endm

k8 macro 
        
	
    	mov ax,0600h
	mov bh,0a3h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,0b3h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
    	mov ax,0600h
	mov bh,87h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,97h
	mov cx,060eh
	mov dx,1341h
	int 10h   
	
    	mov ah, 02h
	mov dx, 0712h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q8
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, H1
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, I1
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, J1
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, X1
	int 21h

                
endm

k9 macro 
        
	mov ax,0600h
	mov bh,0f3h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,0e3h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
    	mov ax,0600h
	mov bh,89h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,0a8h
	mov cx,060eh
	mov dx,1341h
	int 10h   
	
   	mov ah, 02h
	mov dx, 0717h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, q9
	int 21h

	mov ah, 02h
	mov dx, 081fh
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, Y1
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, L1
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, M1
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, N1
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, O1
	int 21h

                
endm

k10 macro 
        
	mov ax,0600h
	mov bh,019h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,029h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
    	mov ax,0600h
	mov bh,0a9h
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,0b9h
	mov cx,060eh
	mov dx,1341h
	int 10h 
	
	mov ah, 02h
	mov dx, 071bh
	mov bh, 00h
	int 10h   
	
 	mov ah, 09h
	lea dx, q10
	int 21h
	
	mov ah, 02h
	mov dx, 081ch
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, Z1
	int 21h

	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, P1
	int 21h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, R1
	int 21h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, S1
	int 21h	

	mov ah, 02h
	mov dx, 1115h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, T1
	int 21h


                
endm

ma macro 
        mov ax, 0000h
	mov ax,0600h
	mov bh,059h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,069h
	mov cx,0204h
	mov dx,164bh
	int 10h  
         
    	mov ax,0600h
	mov bh,0cbh
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,0dbh
	mov cx,060eh
	mov dx,1341h
	int 10h   
	
	mov ah, 02h
	mov dx, 0825h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, MostlyA
	int 21h
	
	mov ah, 02h
	mov dx, 0921h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, V2
	int 21h
	
	mov ah, 02h
	mov dx, 0b17h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, G2
	int 21h
	
	mov ah, 02h
	mov dx, 0c17h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, C2
	int 21h

	mov ah, 02h
	mov dx, 0d17h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, D2
	int 21h	

	mov ah, 02h
	mov dx, 0e17h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, E2
	int 21h

	mov ah, 02h
	mov dx, 0f17h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, F2
	int 21h

	mov ah, 02h
	mov dx, 1117h
	mov bh, 00h
	int 10h   

	mov ah, 09h
	lea dx, B2
	int 21h
                
endm

mb macro 
        
	 mov ax,0600h
	mov bh,069h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,079h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
    	mov ax,0600h
	mov bh,0DCh
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,0ECh
	mov cx,060eh
	mov dx,1341h
	int 10h   
	
	mov ah, 02h
	mov dx, 0823h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, MostlyB
	int 21h
	
	mov ah, 02h
	mov dx, 0921h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, H2
	int 21h
	
	mov ah, 02h
	mov dx, 0b16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, I2
	int 21h
	
	mov ah, 02h
	mov dx, 0c16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, J2
	int 21h

	mov ah, 02h
	mov dx, 0d16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, U2
	int 21h	

	mov ah, 02h
	mov dx, 0e16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, L2
	int 21h

	mov ah, 02h
	mov dx, 0f16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, M2
	int 21h

	mov ah, 02h
	mov dx, 1116h
	mov bh, 00h
	int 10h   

	mov ah, 09h
	lea dx, N2
	int 21h

                
endm

mc macro 
        
	mov ax,0600h
	mov bh,069h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,079h
	mov cx,0204h
	mov dx,164bh
	int 10h  
           
      
           
           
    	mov ax,0600h
	mov bh,0DCh
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,0ECh
	mov cx,060eh
	mov dx,1341h
	int 10h   
	

	mov ah, 02h
	mov dx, 0823h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, MostlyC
	int 21h
	
	mov ah, 02h
	mov dx, 0922h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, W2
	int 21h
	
	mov ah, 02h
	mov dx, 0b16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, X2
	int 21h
	
	mov ah, 02h
	mov dx, 0c16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, O2
	int 21h

	mov ah, 02h
	mov dx, 0d16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, R2
	int 21h	

	mov ah, 02h
	mov dx, 0e16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, S2
	int 21h

	mov ah, 02h
	mov dx, 0f16h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, T2
	int 21h

	mov ah, 02h
	mov dx, 1116h
	mov bh, 00h
	int 10h   

	mov ah, 09h
	lea dx, P2
	int 21h
	
endm

front macro
	mov ax,0600h
	mov bh,0ebh
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,0dbh
	mov cx,0204h
	mov dx,164bh
	int 10h 
 


	mov ah, 02h
	mov dx, 0306h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, A3
	int 21h
	
	mov ah, 02h
	mov dx, 0406h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, B3
	int 21h
	
	mov ah, 02h
	mov dx, 0506h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, C3
	int 21h
	
	mov ah, 02h
	mov dx, 0606h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, D3
	int 21h

	mov ah, 02h
	mov dx, 0706h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, E3
	int 21h	

	mov ah, 02h
	mov dx, 0806h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, F3
	int 21h

	mov ah, 02h
	mov dx, 0A06h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, G3
	int 21h

	mov ah, 02h
	mov dx, 0B06h
	mov bh, 00h
	int 10h 
	
	mov ah, 09h
	lea dx, H3
	int 21h 
	
	mov ah, 02h
	mov dx, 0C06h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, I3
	int 21h   
	
	mov ah, 02h
	mov dx, 0D06h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, J3
	int 21h   
	
	mov ah, 02h
	mov dx, 0E06h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, R3
	int 21h   
	
	mov ah, 02h
	mov dx, 1006h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, L3
	int 21h

	mov ah, 02h
	mov dx, 1106h
	mov bh, 00h
	int 10h 
	
	mov ah, 09h
	lea dx, M3
	int 21h 
	
	mov ah, 02h
	mov dx, 1206h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, N3
	int 21h   
	
	mov ah, 02h
	mov dx, 1306h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, O3
	int 21h   
	
	mov ah, 02h
	mov dx, 1406h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, P3
	int 21h 
         
	 
endm   

ans macro
	mov ax, 0003h
	int 10h

	mov ax,0600h
	mov bh,01bh
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,00bh
	mov cx,0204h
	mov dx,164bh
	int 10h  

        mov ax,0600h
	mov bh,0bah
	mov cx,050ch
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,0cah
	mov cx,060eh
	mov dx,1341h
	int 10h

endm

penguin macro

	mov ax,0600h
	mov bh,090h   ;color
	mov cx,0713h  ;cx = row,column            
	mov dx,071Ah  ;dx= row,column
	int 10h  

	mov ax,0600h
	mov bh,090h   ;color
	mov cx,0812h  ;cx = row,column            
	mov dx,081Bh  ;dx= row,column
	int 10h 

	mov ax,0600h
	mov bh,090h   ;color
	mov cx,0912h  ;cx = row,column            
	mov dx,0F1Bh  ;dx= row,column
	int 10h 

	mov ax,0600h
	mov bh,80h   ;color
	mov cx,0914h  ;cx = row,column            
	mov dx,0914h  ;dx= row,column
	int 10h

	mov ax,0600h
	mov bh,80h   ;color
	mov cx,0919h  ;cx = row,column            
	mov dx,0919h  ;dx= row,column
	int 10h


	mov ax,0600h
	mov bh,090h   ;color
	mov cx,0A12h  ;cx = row,column            
	mov dx,0A1Bh  ;dx= row,column
	int 10h 


	mov ax,0600h
	mov bh,0e2h   ;color
	mov cx,0A15h  ;cx = row,column            
	mov dx,0A18h  ;dx= row,column
	int 10h  
   

	mov ax,0600h
	mov bh,0F0h   ;color
	mov cx,0B15h  ;cx = row,column            
	mov dx,0B18h  ;dx= row,column
	int 10h 

	mov ax,0600h
	mov bh,0F0h   ;color
	mov cx,0C14h  ;cx = row,column            
	mov dx,0F19h  ;dx= row,column
	int 10h

	mov ax,0600h
	mov bh,0e2h   ;color
	mov cx,0F12h  ;cx = row,column            
	mov dx,0F13h  ;dx= row,column
	int 10h  

	mov ax,0600h
	mov bh,0e2h  ;color
	mov cx,0F1Ah  ;cx = row,column            
	mov dx,0F1Bh  ;dx= row,column
	int 10h 

	mov ax,0600h
	mov bh,0F0h   ;color
	mov cx,1011h  ;cx = row,column            
	mov dx,101Ch  ;dx= row,column
	int 10h 

	mov ax,0600h
	mov bh,0e2h   ;color
	mov cx,1011h  ;cx = row,column            
	mov dx,1014h  ;dx= row,column
	int 10h 

	mov ax,0600h
	mov bh,0e2h   ;color
	mov cx,1019h  ;cx = row,column            
	mov dx,101Ch  ;dx= row,column
	int 10h     
                

 	mov ah, 02h
	mov dx, 113ah
	mov bh, 00h            ;cursor
int 10h  





endm




    
    
    