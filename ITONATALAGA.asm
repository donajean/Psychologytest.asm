include 'macros.inc'
.model large
.stack 100h
.data 

 
;questions
q1    db 'If you could design your own WELCOME mat,$'
D     db 'what would it say? $'
E     db 'a.WELCOME $'
F     db 'b.PARTY THIS WAY $'
G     db 'c.GREETINGS, EARTHLING $ ' 
H     db 'Choose a letter: $'
   
q2    db 'Which of these names would you$'
M     db 'be most likely to give to a puffle?$'
I     db 'a.Fluppy$'
J     db 'b.Lady Gaga$'
K     db 'c.Megatron$ '
L     db 'Choose a letter: $'

q3    db 'What is the most penguins you have ever$'
U1    db 'had partying in your iggy?$'
N     db 'a.Less than 5$'
O     db 'b.More than 10$'
P     db 'c.Between 5 and 10$ ' 
Q     db  'Choose a letter: $'
   
q4    db 'Which of these items would you most$'
W1    db 'likely have in your iggy?$'
R     db 'a.Fireplace$'
S     db 'b.Spotlight$'
T     db 'c.Detector$'   
U     db 'Choose a letter: $'
    
q5    db 'What would you rather sit on in your iggy?$'
V     db 'a.Pink Beanbag Chair$'
W     db 'b.Orange inflatable Sofa$'
X     db 'Double dunk chair $'
Y     db 'Choose a letter: $'
   
q6    db 'What is your perfect type of igloo music?$'
Z     db 'a.Something Jazzy and Cool$'
A1    db 'b.My latest DJ3k beats$'
B1    db 'c.Music? I am too busy watching 3d movies$ '
C1    db 'Choose a letter: $'
   
q7    db 'Choose the floor item you like the most?$'
D1    db 'a.Woolen flooring$'
E1    db 'b.Tile flooring$'
F1    db 'c.Wood flooring $'
G1    db 'Choose a letter: $'

q8    db 'Which of these igloo games sounds the best?$'
H1    db 'a.Charades$'
I1    db 'b.Dance Contest$'
J1    db 'c.Fashion show $'
X1    db 'Choose a letter: $'
    
q9    db 'Which of these zones do you hang$' 
Y1    db 'out in the most?$'
L1    db 'a.The coffee shop$'
M1    db 'b.The night club$'
N1    db 'c.EPF headquarters $' 
O1    db 'Choose a letter: $'

q10   db 'What would you choose to$'
Z1    db 'lighten up your igloo?$'
P1    db 'a.Candle$'
R1    db 'b.Disco Ball$'
S1    db 'c.Lamp$'    
T1    db 'Choose a letter: $'
    
again db "Would you like to try again? (Y/N> $"  
try db "Would you like to try again? (Y/N> $"


MostlyA   db 'Mostly A$' 
V2        db 'Home Sweet Home$'
G2        db 'Club penguin is a busy island,$'
C2        db "So your perfect igloo is a place$"
D2        db "to relax and chill out with your$"
E2        db "close friends and puffle. Cosy $" 
F2        db "comfort and acup of tea all the way. $"
B2        db 'Most like: Aunt Arctic$'
  
MostlyB   db 'Mostly B$' 
H2        db 'Party Palace$'
I2        db 'For you, home is where the party is!$'
J2        db "You are the happiest when loads of$"
U2        db "penguins and puffles are packing out $"
L2        db "your iggy, dancing, eating, playing $" 
M2        db "games and having a laugh. $"
N2        db 'Most like: Cadence$'

MostlyC   db 'Mostly C$'
W2        db 'Gadget Pad$'
X2        db "nothing gets you more excited than $"
O2        db "a furniture catalogue update!  You$"
R2        db "love to try out the latest weird and$"
S2        db "wonderful items, from hi-tech gizmos$"
T2        db "to dragon statues.$" 
P2        db 'Most Like: Gary$'

A3  db '            HH     HH  HH  HH   HHHH   HHHHHH  HH  HHHHH  $'
B3  db '            HH     HH  HH  HH  HH  HH    HH    HH  HH HH  $' 
C3  db '            HH  H  HH  HH  HH  HH  HH    HH     H  HH      $'
D3  db '            HH HHH HH  HHHHHH  HHHHHH    HH        HHHHH    $'
E3  db '            HHHH HHHH  HH  HH  HH  HH    HH           HH    $'
F3  db '            HH     HH  HH  HH  HH  HH    HH        HHHHH    $'
G3  db 'HH  HH    HH    HH  HH  HHHHHH  HHHHHH  HHHHH   HHHHH    HH    HH     $'
H3  db 'HH  HH  HH  HH  HH  HH  HH  HH    HH    HH   H  HH     HH  HH  HH      $' 
I3  db ' HHHH   HH  HH  HH  HH  HHHHHH    HH    HH   H  HHHH   HHHHHH  HH        $ '
J3  db '  HH    HH  HH  HH  HH  HH HH     HH    HH   H  HH     HH  HH  HH       $'  
R3  db '  HH      HH      HH    HH  HH  HHHHHH  HHHHH   HHHHH  HH  HH  HHHHH  $' 
L3  db '          HHHHHH   HHHH   HH       HH      HH       HHHHHH   $' 
M3  db '            HH    HH      HH     HH  HH  HH  HH    HH   HH  $' 
N3  db '            HH    HH HHH  HH     HH  HH  HH  HH        HH $' 
O3  db '            HH    HH  HH  HH     HH  HH  HH  HH        $' 
P3  db '          HHHHHH   HHHHH  HHHHH    HH      HH          HH $' 
A db "Numbers of A you've answered : $"
B db "Numbers of B you've answered: $"
C db "Numbers of C you've answered: $" 

TY    db 13, 10, '                                  MMMMM M               M          '   
      db 13, 10, '                                    M   MMMM MMMM M MMM M M        '   
      db 13, 10, '                                    M   M  M    M MM  M MM         '   
      db 13, 10, '                                    M   M  M MMMM M   M M M        '   
      db 13, 10, '                                    M   M  M MMMM M   M M  M       '
      db 13, 10, '                                              '                  
      db 13, 10, '                                      H   H            III         '   
      db 13, 10, '                                       H H  HHHH H  H  III         '         
      db 13, 10, '                                        H   H HH H  H  III         '
      db 13, 10, '                                        H   HH H H  H              '
      db 13, 10, '                                        H   HHHH HHHH   I          '
      db 13, 10, '                                            $ '
 


altc db ?   			    ;alternative c variable
alta db ?  		 	        ;alternative a variable



ten db "10$" 			    ; because ASCII cannot print '10' so we need to improvise


.code              		    ;code start


mov ax, data
mov es,ax
mov ds,ax
new:


	mov bl,0000h        	;clearing values of bl,altc,alta for retry
	mov altc,0000h
	mov alta,0000h

	mov ah,00h              ; page set to 0
	mov al,03h
	int 10h

	front

                        	; press any key to continue, 0ffh(highest value in the ascii>
	mov ah, 07h
	int 21h
	cmp al, 0ffh
	jbe start

start:
 
 
				            ;first question        
	mov ah,00h		        ;first page
	mov al,03h
	int 10h

	k1                      ;k macro for design of background and print
	verify                  ;verify para sa looping formula

				;2 question
	k2
	verify  
				;3 question

	k3
	verify
				;4 question

	k4
	verify
				;5 question
	k5
	verify
				;6 question
	k6
	verify 
				;7 question
	k7
	verify 
				;8 question
	k8
	verify 
				;9 question
	k9
	verify
				;10 question
	k10
	verify

				            ;total accumulate
                          
	ans                    	; macro design for the result a,b,c

	mov bx, 0000h           	;
	mov cl, 0Ah
loop:
	pop ax             	    ;loop , counts A,B,C 
	cmp al,41h
	je counta
	cmp al,42h
	je countb
	cmp al,43h
	je countc
counta:
	inc alta             	; counts A then end loop when 10 questions are looped
	dec cl
	cmp cl,00h
	jnz loop
	jz eloop
countb:                		; counts B then end loop when 10 questions are looped
	inc bl
	dec cl
	cmp cl,00h
	jnz loop
	jz eloop
countc:            	   	    ; counts C then end loop when 10 questions are looped
	inc altc
	dec cl
	cmp cl,00h
	jnz loop
	jz eloop  
eloop:
	cmp alta,bl          	; if A > B proceed to conc if A<B proceed to conb
	jg conc
	jl conb
conb:
	cmp bl,altc         	;if B>C proceed to ansB if C>B proceed to ansC
	jg ansb
	jl ansc

conc:                		;if A>C proceed to ansA if C>A proceed to ansC
	cmp alta,bl
	jg ansa
	jl ansc
ansa:
	cmp alta,0ah            ;since the value of '10' cannot be printed because if has
	je tenprinta           	;two digits, use print method
	add alta,30h            ; add 30h to convert from ascii to decimal

	mov ah, 02h
	mov dx, 0D15h          ; cursor
	mov bh, 00h
	int 10h

	mov ah, 09h            ; print the count number of A
	lea dx, A
	int 21h
 
	mov ah,02h
	mov dl,alta            ; get value from alta(a)
	int 21h 

after:

	add bl,30h             ; add 30h to convert from ascii to decimal

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h             ; cursor
	int 10h 
	
	mov ah, 09h             ;print count value B
	lea dx, B
	int 21h                 ; print the count number of B
 
	mov ah,02h              ;get value from bl to print bl
	mov dl,bl 
	add bl,30h              ; add 30h to convert from ascii to decimal number
	int 21h

	add altc,30h            ; add 30h to convert from ascii to decimal number

	mov ah, 02h
	mov dx, 0F15h           ;cursor row,column
	mov bh, 00h
	int 10h 

	mov ah, 09h         	; print count value C
	lea dx, C
	int 21h
 
	mov ah,02h
	mov dl,altc             ; get value from altc<c>
	int 21h

	mov ah, 07h           	;get value
	int 21h
	cmp al, 0ffh            ; press any key to go AA
	jbe AA

ansb:                       ; same procedure as ansA
	add alta,30h

	mov ah, 02h
	mov dx, 0D15h	        ;cursor for string A
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, A		        ;output string A
	int 21h
 
	mov ah,02h
	mov dl,alta		        ;output char alta
	int 21h
  
	cmp bl,0ah		        ;if bl = 10 jmp to print mostly B
	je tenprintb
  
	add bl,30h

	mov ah, 02h
	mov dx, 0E15h		    ;cursor for string B
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, B		        ;output string A
	int 21h

	mov ah,02h
	mov dl,bl		        ;output char bl
	int 21h

after2:

	add altc,30h

	mov ah, 02h
	mov dx, 0F15h		    ;cursor for string C
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, C		        ;output string C
	int 21h

	mov ah,02h
	mov dl,altc		        ;output char altc
	int 21h                 

 
	mov ah, 07h
	int 21h			        ;input w/o echo any char
	cmp al, 0ffh
	jbe BB

ansc:                    	; same procedure as ansA



	add alta,30h

	mov ah, 02h
	mov dx, 0D15h		    ;cursor for string A
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, A		        ;output string A
	int 21h
  
	mov ah,02h
	mov dl,alta
	int 21h

	add bl,30h

	mov ah, 02h
	mov dx, 0E15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, B
	int 21h
  
	mov ah,02h
	mov dl,bl
	int 21h

	cmp altc,000ah		    ;if altc = 10 jmp to print mostly C
	je tenprintc 

	add altc,30h

	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h 

	mov ah, 09h
	lea dx, C
	int 21h
 
	mov ah,02h
	mov dl,altc
	int 21h

blyat:                      ; press any key to proceed to CC
	mov ah, 07h
	int 21h
	cmp al, 0ffh
	jbe CC
tenprintb:
	mov ah, 02h
	mov dx, 0E15h          	;cursor
	mov bh, 00h
	int 10h
	mov ah, 09h
	lea dx, B              	;print B
	int 21h
	mov ah, 09h            	;print the value of ten
	lea dx, ten
	int 21h
	jmp after2              ;proceed to looping @ ansb
tenprinta:                 	; same procedure as tenprint a
	mov ah, 02h
	mov dx, 0D15h
	mov bh, 00h
	int 10h
	mov ah, 09h
	lea dx, A
	int 21h
	mov ah, 09h
	lea dx, ten
	int 21h
	jmp after 
tenprintc: 
	mov ah, 02h
	mov dx, 0F15h
	mov bh, 00h
	int 10h
	mov ah, 09h
	lea dx, C
	int 21h
	mov ah, 09h
	lea dx, ten
	int 21h
	jmp blyat
AA:
	ma			            ; from macro.inc background design,cursor and print

	mov ah, 07h         	;press any key to continue
	int 21h
	cmp al, 0ffh
	jbe another         	; jump to another<try again page>
BB:                 
				            ; same procedure as AA
	mb

	mov ah, 07h
	int 21h
	cmp al, 0ffh
	jbe another 
CC:                 		;same procedure as CC
	mc

	mov ah, 07h
	int 21h
	cmp al, 0ffh
	jbe another
another: 
	mov ax,0600h
	mov bh,059h
	mov cx,0000h
	mov dx,184fh
	int 10h
   
	mov ax,0600h
	mov bh,089h
	mov cx,0204h
	mov dx,164bh
	int 10h   

	mov ax,0600h
	mov bh,0f3h
	mov cx,050ch            ;design
	mov dx,1443h
	int 10h
   
	mov ax,0600h
	mov bh,003h             ;design
	mov cx,060eh
	mov dx,1341h
	int 10h 


	mov ah, 02h
	mov dx, 0638h
	mov bh, 00h
	int 10h


	mov ah,09h
	lea dx, TY         	    ;print <would you like to try again <y/n>
	int 21h

 	penguin 		        ;macro.inc


	mov ah, 02h
	mov dx, 1217h
	mov bh, 00h
	int 10h

	mov ah,09h
	lea dx, again           ;print <would you like to try again <y/n>
	int 21h                 

retry:   
	mov ah, 07h             ; if entered Y, go to retry ; if entered N program will end
	int 21h
	cmp al, 59h
	je new
	cmp al, 79h
	je new
	cmp al, 4eh
	je halt
	cmp al, 6eh
	je halt
	jmp retry

halt:
end 






