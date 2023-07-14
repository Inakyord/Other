# -*- coding: utf-8 -*-
"""
Created on Fri Sep  4 12:12:53 2020

@author: InakyO
"""


#Prueba de turtle escrbir letras.

import turtle




def getWord():
    palabra = input("Palabras para la tortuga:\n\n");
    return palabra.upper()
    
def paintWord(palabra):
    
    
    t = turtle.Turtle()
    #turtle.reset()
    turtle.clearscreen()
    
    altura = 20
    ancho = 10
    
    
    Xinicial = -300
    Yinicial = 100
    
    t.goto(Xinicial, Yinicial)
    t.speed(0)
    print(palabra)
    
    for i in range(len(palabra)):
        
        if (Xinicial >= 300):
            Xinicial = -300
            Yinicial = Yinicial - altura*1.5
            
        if (palabra[i] == 'A'):
            print('A')
            t.pendown()
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.backward(ancho)
            t.left(90)
            t.forward(ancho)
            t.left(90)
            
            
        elif (palabra[i] == 'B'):
            print('B')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.backward(ancho)
            t.left(90)
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.right(180)
            
        
        elif (palabra[i] == 'C'):
            print('C')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.penup()
            t.forward(altura)
            t.pendown()
            t.right(90)
            t.forward(ancho)
            t.right(180)
        
        elif (palabra[i] == 'D'):
            print('D')
            t.left(90)
            t.forward(altura)
            t.right(135)
            t.goto(Xinicial+ancho, Yinicial+(0.5*altura))
            t.goto(Xinicial, Yinicial)
            t.left(45)
        
        elif (palabra[i] == 'E'):
            print('E')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.penup()
            t.forward(ancho)
            t.pendown()
            t.right(90)
            t.forward(ancho)
            t.backward(ancho)
            t.left(90)
            t.penup()
            t.forward(ancho)
            t.right(90)
            t.pendown()
            t.forward(ancho)
            t.right(180)
        
        elif (palabra[i] == 'F'):
            print('F')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.penup()
            t.forward(ancho)
            t.pendown()
            t.right(90)
            t.forward(ancho)
            t.backward(ancho)
            t.left(180)
        
        elif (palabra[i] == 'G'):
            print('G')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.penup()
            t.forward(ancho)
            t.pendown()
            t.right(90)
            t.forward(ancho*0.5)
            t.backward(ancho*0.5)
            t.left(90)
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.right(180)
        
        elif (palabra[i] == 'H'):
            print('H')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.penup()
            t.forward(ancho)
            t.right(90)
            t.pendown()
            t.forward(ancho)
            t.right(90)
            t.forward(ancho)
            t.backward(ancho)
            t.left(90)
            t.forward(ancho)
            t.left(90)
        
        elif (palabra[i] == 'I'):
            print('I')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.right(90)
            t.pendown()
            t.forward(ancho)
            t.backward(ancho*0.5)
            t.right(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho*0.5)
            t.right(180)
            t.forward(ancho)
        
        elif (palabra[i] == 'J'):
            print('J')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.right(90)
            t.pendown()
            t.forward(ancho)
            t.backward(ancho*0.5)
            t.right(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho*0.5)
            t.right(90)
            t.forward(altura*0.5)
            t.right(90)
        
        elif (palabra[i] == 'K'):
            print('K')
            t.left(90)
            t.forward(altura)
            t.backward(altura*0.5)
            t.goto(Xinicial+ancho, Yinicial+altura)
            t.goto(Xinicial, Yinicial+altura*0.5)
            t.goto(Xinicial+ancho, Yinicial)
            t.right(90)
        
        elif (palabra[i] == 'L'):
            print('L')
            t.forward(ancho)
            t.backward(ancho)
            t.left(90)
            t.forward(altura)
            t.right(90)
        
        elif (palabra[i] == 'M'):
            print('M')
            t.left(90)
            t.forward(altura)
            t.goto(Xinicial+0.5*ancho, Yinicial+0.5*altura)
            t.goto(Xinicial+ancho, Yinicial+altura)
            t.right(180)
            t.forward(altura)
            t.left(90)
            
        
        elif (palabra[i] == 'N'):
            print('N')
            t.left(90)
            t.forward(altura)
            t.goto(Xinicial+ancho, Yinicial)
            t.forward(altura)
            t.right(90)
        
        elif (palabra[i] == 'Ñ'):
            print('Ñ')
            t.left(90)
            t.forward(altura)
            t.goto(Xinicial+ancho, Yinicial)
            t.forward(altura)
            t.penup()
            t.goto(Xinicial+2, Yinicial + altura+2)
            t.pendown()
            t.goto(Xinicial+ancho-2, Yinicial+altura+2)
            t.right(90)
        
        elif (palabra[i] == 'O'):
            print('O')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(180)
        
        elif (palabra[i] == 'P'):
            print('P')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(altura*0.5)
            t.right(90)
            t.forward(ancho)
            t.right(180)
        
        elif (palabra[i] == 'Q'):
            print('Q')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(180)
            t.penup()
            t.goto(Xinicial+0.5*ancho, Yinicial + altura*0.25)
            t.pendown()
            t.goto(Xinicial+1.2*ancho, Yinicial-altura*0.2)
        
        elif (palabra[i] == 'R'):
            print('R')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(90)
            t.forward(altura*0.5)
            t.right(90)
            t.forward(ancho)
            t.right(180)
            t.goto(Xinicial+ancho, Yinicial)
        
        elif (palabra[i] == 'S'):
            print('S')
            t.forward(ancho)
            t.left(90)
            t.forward(altura*0.5)
            t.left(90)
            t.forward(ancho)
            t.right(90)
            t.forward(altura*0.5)
            t.right(90)
            t.forward(ancho)
        
        elif (palabra[i] == 'T'):
            print('T')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.right(90)
            t.pendown()
            t.forward(ancho)
            t.backward(ancho*0.5)
            t.right(90)
            t.forward(altura)
            t.left(90)
        
        elif (palabra[i] == 'U'):
            print('U')
            t.left(90)
            t.forward(altura)
            t.right(90)
            t.penup()
            t.forward(ancho)
            t.right(90)
            t.pendown()
            t.forward(altura)
            t.right(90)
            t.forward(ancho)
            t.right(180)
        
        elif (palabra[i] == 'V'):
            print('V')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.right(90)
            t.pendown()
            t.goto(Xinicial+0.5*ancho, Yinicial)
            t.goto(Xinicial+ancho, Yinicial+altura)
        
        elif (palabra[i] == 'W'):
            print('W')
            t.left(90)
            t.forward(altura)
            t.backward(altura)
            t.goto(Xinicial+ancho*0.5, Yinicial+altura*0.5)
            t.goto(Xinicial+ancho, Yinicial)
            t.forward(altura)
            t.right(90)
        
        elif (palabra[i] == 'X'):
            print('X')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.pendown()
            t.goto(Xinicial+ancho, Yinicial)
            t.penup()
            t.forward(altura)
            t.pendown()
            t.goto(Xinicial, Yinicial)
            t.right(90)
        
        elif (palabra[i] == 'Y'):
            print('Y')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.pendown()
            t.goto(Xinicial+ancho*0.5, Yinicial+altura*0.5)
            t.right(180)
            t.forward(altura*0.5)
            t.backward(altura*0.5)
            t.left(90)
            t.goto(Xinicial+ancho, Yinicial+altura)
        
        elif (palabra[i] == 'Z'):
            print('Z')
            t.left(90)
            t.penup()
            t.forward(altura)
            t.pendown()
            t.right(90)
            t.forward(ancho)
            t.goto(Xinicial, Yinicial)
            t.forward(ancho)
        
        elif (palabra[i] == '.'):
            print('.')
            t.pensize(2)
            t.penup()
            t.forward(ancho*0.5)
            t.pendown()
            t.goto(Xinicial+0.3*ancho, Yinicial)
            t.pensize(1)
        
        elif (palabra[i] == ','):
            print(',')
            t.pensize(2)
            t.penup()
            t.forward(ancho*0.5)
            t.pendown()
            t.goto(Xinicial+0.2*ancho, Yinicial-altura*0.2)
            t.pensize(1)
        
        elif (palabra[i] == ' '):
            print(' ')
            t.penup()
            t.forward(ancho*0.8)
    
    
        Xinicial += (3*ancho)/2
        t.penup()
        t.goto(Xinicial, Yinicial)
        t.pendown()
        
        
        

def main():
    
    paintWord(getWord())
    
    return 0









main()