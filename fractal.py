# -*- coding: utf-8 -*-
"""
Created on Fri May  1 09:52:24 2020

@author: InakyOrdiales
"""

import turtle


def fractal(lado, largo, angulo):
    if (largo <= 1):
        turtle.right(angulo)
        turtle.forward(2*largo)
        turtle.right(180-angulo)
        return
    for i in range(lado-1):
        turtle.forward(largo/3)
        turtle.left(angulo)
        fractal(lado, largo/3, angulo)
        
    turtle.left(180)
    turtle.forward(largo)
    turtle.right(180-angulo)
    return


def forma(lado, largo, angulo):
    for i in range(lado):
        turtle.forward(largo/3)
        turtle.left(angulo)
        fractal(lado, largo/3, angulo)
    
    return

def main():
    turtle.clearscreen()
    turtle.right(180)
    turtle.speed(0)
    turtle.color("green")
    lado = int(input("\nNumero de lados: "))
    largo = int(input("\nLargo de lado: "))
    angulo = (lado-2)*(180/lado)
    
    forma(lado, largo, angulo)
    
    return 0


main()