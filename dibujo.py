# -*- coding: utf-8 -*-

"""
Created on Thu Apr 30 16:24:39 2020

@author: InakyOrdiales
"""

import turtle




def dibujo(n):
    for i in range(n):
        turtle.forward(50)
        turtle.left(90)
        turtle.forward(50)
        turtle.left(90)
        turtle.forward(50)
        turtle.left(90)
        turtle.forward(50)
        turtle.left(90)
        turtle.right(360/n)
    return

def circulo(r):
    turtle.circle(r)

def main():
    turtle.clearscreen()
    numero = int(input("Numero de cuadros: "))
    dibujo(numero)
    turtle.right(90)
    turtle.penup()
    turtle.forward(50)
    turtle.left(90)
    turtle.pendown()
    circulo(50)
    turtle.right(90)
    turtle.penup()
    turtle.forward(21)
    turtle.left(90)
    turtle.pendown()
    circulo(71)
    return 0

main()
# turtle.clearscreen()