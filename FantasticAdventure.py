import time
print( "╭━━━┳━━━┳━╮╱╭┳━━━━┳━━━┳━━━┳━━━━┳━━┳━━━╮")
time.sleep(0.5)
print("┃╭━━┫╭━╮┃┃╰╮┃┃╭╮╭╮┃╭━╮┃╭━╮┃╭╮╭╮┣┫┣┫╭━╮┃")
time.sleep(0.5)
print("┃╰━━┫┃╱┃┃╭╮╰╯┣╯┃┃╰┫┃╱┃┃╰━━╋╯┃┃╰╯┃┃┃┃╱╰╯")
time.sleep(0.5)
print("┃╭━━┫╰━╯┃┃╰╮┃┃╱┃┃╱┃╰━╯┣━━╮┃╱┃┃╱╱┃┃┃┃╱╭╮")
time.sleep(0.5)
print("┃┃╱╱┃╭━╮┃┃╱┃┃┃╱┃┃╱┃╭━╮┃╰━╯┃╱┃┃╱╭┫┣┫╰━╯┃")
time.sleep(0.5)
print("╰╯╱╱╰╯╱╰┻╯╱╰━╯╱╰╯╱╰╯╱╰┻━━━╯╱╰╯╱╰━━┻━━━╯")
time.sleep(0.5)
print("╭━━━┳━━━┳╮╱╱╭┳━━━┳━╮╱╭┳━━━━┳╮╱╭┳━━━┳━━━╮")
time.sleep(0.5)
print("┃╭━╮┣╮╭╮┃╰╮╭╯┃╭━━┫┃╰╮┃┃╭╮╭╮┃┃╱┃┃╭━╮┃╭━━╯")
time.sleep(0.5)
print("┃┃╱┃┃┃┃┃┣╮┃┃╭┫╰━━┫╭╮╰╯┣╯┃┃╰┫┃╱┃┃╰━╯┃╰━━╮")
time.sleep(0.5)
print("┃╰━╯┃┃┃┃┃┃╰╯┃┃╭━━┫┃╰╮┃┃╱┃┃╱┃┃╱┃┃╭╮╭┫╭━━╯")
time.sleep(0.5)
print("┃╭━╮┣╯╰╯┃╰╮╭╯┃╰━━┫┃╱┃┃┃╱┃┃╱┃╰━╯┃┃┃╰┫╰━━╮")
time.sleep(0.5)
print("╰╯╱╰┻━━━╯╱╰╯╱╰━━━┻╯╱╰━╯╱╰╯╱╰━━━┻╯╰━┻━━━╯")

import random

class Personaje:
    def __init__(self, nombre, vida, fuerza):
        self.nombre = nombre
        self.vida = vida
        self.fuerza = fuerza

    def atacar_1(self, objetivo):
        daño = random.randint(15, self.fuerza)
        objetivo.vida -= daño
        print(f"\n{self.nombre} ha atacado al {objetivo.nombre}, causando {daño} puntos de daño")

    def atacar_2(self, objetivo):
        if random.random() < 0.5:
            daño = 2 * random.randint(10, self.fuerza)
            objetivo.vida -= daño
            print(f"\n¡Ataque doble de {self.nombre}!")
            print(f"{self.nombre} ha atacado al {objetivo.nombre}, causando {daño} puntos de daño")
        else:
            daño = random.randint(10, self.fuerza)
            objetivo.vida -= daño
            print(f"\n{self.nombre} ha atacado al {objetivo.nombre}, causando {daño} puntos de daño")

    def atacar_3(self, objetivo):
        daño = random.randint(10, self.fuerza)
        objetivo.vida -= daño
        cura = int(daño * 0.4)
        self.vida += cura
        print(f"\n{self.nombre} ha atacado al {objetivo.nombre}, causando {daño} puntos de daño y recuperando {cura} puntos de vida")

class Enemigo:
    def __init__(self, nombre, vida, fuerza):
        self.nombre = nombre
        self.vida = vida
        self.fuerza = fuerza

    def atacar(self, objetivo):
        daño = random.randint(10, self.fuerza)
        objetivo.vida -= daño
        print(f"{self.nombre} ha atacado a {objetivo.nombre}, causando {daño} puntos de daño")

class Pocion:
    def __init__(self, vida, usos):
        self.vida = vida
        self.usos = usos

    def usar(self, personaje):
        if self.usos > 0:
            personaje.vida += self.vida
            self.usos -= 1
            print(f"{nombre} ha usado una poción y ha recuperado {self.vida} puntos de vida")
        else:
            print("Ya no quedan usos para esta poción")

nombre = input("Ingresa el nombre de tu personaje: ")
time.sleep(0.5)
p1 = Personaje(nombre, 100, 35)
p2 = Personaje(nombre, 100, 25)
p3 = Personaje(nombre, 100, 20)
e1 = Enemigo("Fantasma", 60, 25)
e2 = Enemigo("Hombre Lobo", 70, 15)
e3 = Enemigo("Centauro", 50, 30)
e4 = Enemigo("Guardian del Bosque", 80, 40)
e5 = Enemigo("Caballero sin cabeza", 70, 25)
e6 = Enemigo("Frankestein", 80, 20)
e7 = Enemigo("Gigante", 75, 25)
e8 = Enemigo("Vampiro", 80, 35)
pocion_1 = Pocion(30, 2)

print(f"¿Qué tipo de personaje quieres crear {nombre}?")
time.sleep(1)
print("1. Espadachin (Tiene mas daño de ataque)")
time.sleep(1)
print("2. Mago (Tiene (50%) de probabilidad de hacer el doble de daño)")
time.sleep(1)
print("3. Curandero (Se cura un (40%) del daño de su ataque)")
time.sleep(1)
opcion = int(input("Elige una opción (1-3): \n"))
time.sleep(1)

if opcion == 1:
    pj = p1
    
elif opcion == 2:
    pj = p2
    
elif opcion == 3:
    pj = p3
    
else:
    print("ingrese una opcion valida (1-3)")
    time.sleep(0.5)

def historia(personaje, enemigo_1, enemigo_2, enemigo_3, enemigo_4, enemigo_5, enemigo_6, enemigo_7, enemigo_8):
        print(f"\nBienvenido al Gremio de aventureros {nombre}")
        time.sleep(1)
        print("Las misiones disponibles son:")
        time.sleep(1)
        print("1. Explorar el Bosque en busca de pistas de porque la gente desaperece ultimamente")
        time.sleep(1)
        print("2. Explorar el Castillo dado que hay rumores de sobrevivientes que hay un vampiro")
        time.sleep(1)
        print("Escoge una de las misiones:\n 1. Explorar el bosque\n 2. Ir al castillo")
        opcion_1 = int(input("Elige una opción (1-2): \n"))

        if opcion_1 == 1:
            print("\nHas decidido explorar el bosque.")
            print("De repente, aparece un Fantasma.")
            opcion_2 = int(input("¿Qué quieres hacer?\n 1. Luchar con el Fantasma\n 2. Huir\n Elige una opción (1-2):"))

            if opcion_2 == 1:
                print("\nHas decidido atacar al Fantasma.")
                while personaje.vida > 0 and enemigo_1.vida > 0:
                    opcion_3 = int(input("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida (dos usos)\nElige una opción (1-2):"))

                    if opcion_3 == 1:
                        if personaje == p1:
                            personaje.atacar_1(enemigo_1)
                            print(f"Vida de {e1.nombre}: {e1.vida} HP")
                        elif personaje == p2:
                            personaje.atacar_2(enemigo_1)
                            print(f"Vida de {e1.nombre}: {e1.vida} HP")
                        elif personaje == p3:
                            personaje.atacar_3(enemigo_1)
                            print(f"Vida de {e1.nombre}: {e1.vida} HP")
                        
                        if enemigo_1.vida <= 0:
                            print("¡Has derrotado al Fantasma!")
                            opcion_11 = int(input("\nLuego de derrotar al Fantasma te encuentras con senderos\n 1. Sendero Izquierdo\n 2. Sendero Derecho\nElige una opción (1-2):"))

                            if opcion_11 == 1:
                                print("\nHaz decidido entrar por el sendero Izquierdo.")
                                opcion_12 = int(input("De repente, aparece el Hombre Lobo. ¿Qué quieres hacer?\n 1. Luchar con el Hombre Lobo\n 2. Huir\nElige una opción (1-2):"))
                                if opcion_12 == 1:
                                    print("\nHas decidido atacar al Hombre Lobo.")
                                    while personaje.vida > 0 and enemigo_2.vida > 0:
                                        opcion_13 = int(input("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida\nElige una opción (1-2):"))
                                        if opcion_13 == 1:
                                            if personaje == p1:
                                                personaje.atacar_1(enemigo_2)
                                                print(f"Vida de {e2.nombre}: {e2.vida} HP")
                                            elif personaje == p2:
                                                personaje.atacar_2(enemigo_2)
                                                print(f"Vida de {e2.nombre}: {e2.vida} HP")
                                            elif personaje == p3:
                                                personaje.atacar_3(enemigo_2)
                                                print(f"Vida de {e2.nombre}: {e2.vida} HP")
                                    
                                            if enemigo_2.vida <= 0:
                                                print("¡Has derrotado al Hombre Lobo!")
                                                opcion_16 = int(input("Luego de vencer al Hombre Lobo sigues por el sendero y de entre los arboles sale el autodenominado Guardian del Bosque\n¿Que quieres hacer?\n 1. Luchar con el Guardian del Bosque\n 2. Huir\nElige una opción (1-2):"))

                                                if opcion_16 == 1:
                                                    print("\nHas decidido atacar al Guardian del Bosque.")
                                                    while personaje.vida > 0 and enemigo_4.vida > 0:
                                                        opcion_17 = int(input("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida\nElige una opción (1-2):"))

                                                        if opcion_17 == 1:
                                                            if personaje == p1:
                                                                personaje.atacar_1(enemigo_4)
                                                                print(f"Vida de {e4.nombre}: {e4.vida} HP")
                                                            elif personaje == p2:
                                                                personaje.atacar_2(enemigo_4)
                                                                print(f"Vida de {e4.nombre}: {e4.vida} HP")
                                                            elif personaje == p3:
                                                                personaje.atacar_3(enemigo_4)
                                                                print(f"Vida de {e4.nombre}: {e4.vida} HP")
                                                    
                                                            if enemigo_4.vida <= 0:
                                                                print("¡HAS DERROTADO AL GUARDIAN DEL BOSQUE!")
                                                                print("Y VUELVES VICTORIOSO AL GREMIO DE AVENTUREROS")
                                                            else:
                                                                enemigo_4.atacar(personaje)
                                                                print(f"Tu vida es de: {pj.vida} HP")
                                                                if personaje.vida <= 0:
                                                                    opcion_18 = int(input("\nEl Guardian del Bosque te ha derrotado pero te da dos opciones:\n 1. Ser su sirviente y olvidar todo lo que ha pasado en tu vida\n 2. Morir con Honor\nElige una opción (1-2):"))
                                                                    if opcion_18 == 1:
                                                                        opcion_19 = int(input("\nEl Guardian del Bosque te da lo opcion de convertirte en Centauro o Hombre lobo\n 1. Centauro\n 2. Hombre Lobo\nElige una de las opciones (1-2):"))
                                                                        if opcion_19 == 1:
                                                                            print("El Guardian del Bosque te convierte en Centauro y pasas el resto de tu vida como su sirviente")
                                                                        elif opcion_19 == 2:
                                                                            print("El Guardian del Bosque te convierte en Hombre Lobo y pasas el resto de tu vida como su sirviente")
                                                                    elif opcion_18 == 2:
                                                                        print("Eliges morir con honor y tus hazañas nunca seran olvidadas")
                                                        elif opcion_17 == 2:
                                                            pocion_1.usar(personaje)
                                                            print(f"Tu vida es de: {personaje.vida} HP")
                                                        else:
                                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                                elif opcion_16 == 2:
                                                    print("Has decidido huir del Hombre Lobo\n Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
                                                else:
                                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                                            else:
                                                enemigo_2.atacar(personaje)
                                                print(f"Tu vida es de: {pj.vida} HP")
                                                if personaje.vida <= 0:
                                                    print("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES.")
                                        elif opcion_13 == 2:
                                            pocion_1.usar(personaje)
                                            print(f"Tu vida es de: {personaje.vida} HP")
                                        else:
                                            print("Opción inválida. Selecciona una opción válida (1-2).")

                                elif opcion_12 == 2:
                                    print("Has decidido huir del caballero sin cabeza.")
                                    print("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
                                else:
                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                            elif opcion_11 == 2:
                                print("\nHaz decidido entrar por el sendero derecho.")
                                print("De repente, aparece el Centauro. ¿Qué quieres hacer?")
                                opcion_14 = int(input("1. Luchar con el Centauro\n 2. Huir\n Elige una opción (1-2): \n"))
                                if opcion_14 == 1:
                                    print("Has decidido atacar al Centauro.")
                                    while personaje.vida > 0 and enemigo_3.vida > 0:
                                        print("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida")
                                        opcion_15 = int(input("Elige una opción (1-2): \n"))
                                        if opcion_15 == 1:
                                            if personaje == p1:
                                                personaje.atacar_1(enemigo_3)
                                                print(f"Vida de {e3.nombre}: {e3.vida} HP")
                                            elif personaje == p2:
                                                personaje.atacar_2(enemigo_3)
                                                print(f"Vida de {e3.nombre}: {e3.vida} HP")
                                            elif personaje == p3:
                                                personaje.atacar_3(enemigo_3)
                                                print(f"Vida de {e3.nombre}: {e3.vida} HP")
                                            else:
                                                print("Opción inválida.")
                                            if enemigo_3.vida <= 0:
                                                print("¡Has derrotado al Centauro!")
                                                print("Luego de vencer al Hombre Lobo sigues por el sendero")
                                                print("Y de entre los arboles sale el autodenominado Guardian del Bosque")
                                                opcion_23 = int(input("¿Que quieres hacer?\n 1. Luchar con el Guardian del Bosque\n 2. Huir\nElige una opción (1-2): \n"))
                                                if opcion_23 == 1:
                                                    print("Has decidido atacar al Guardian del Bosque.")
                                                    while personaje.vida > 0 and enemigo_4.vida > 0:
                                                        print("\n¿Qué quieres hacer?")
                                                        print("1. Atacar")
                                                        print("2. Usar poción de vida")
                                                        opcion_24 = int(input("Elige una opción (1-2): \n"))
                                                        if opcion_24 == 1:
                                                            if personaje == p1:
                                                                personaje.atacar_1(enemigo_4)
                                                                print(f"Vida de {e4.nombre}: {e4.vida} HP")
                                                            elif personaje == p2:
                                                                personaje.atacar_2(enemigo_4)
                                                                print(f"Vida de {e4.nombre}: {e4.vida} HP")
                                                            elif personaje == p3:
                                                                personaje.atacar_3(enemigo_4)
                                                                print(f"Vida de {e4.nombre}: {e4.vida} HP")
                                                            else:
                                                                print("Opción inválida.")
                                                            if enemigo_4.vida <= 0:
                                                                print("¡HAS DERROTADO AL GUARDIAN DEL BOSQUE!")
                                                                print("Y VUELVES VICTORIOSO AL GREMIO DE AVENTUREROS")
                                                            else:
                                                                enemigo_4.atacar(personaje)
                                                                print(f"Tu vida es de: {pj.vida} HP")
                                                                if personaje.vida <= 0:
                                                                    print("El Guardian del Bosque te ha derrotado pero te da dos opciones:")
                                                                    print("1. Ser su sirviente y olvidar todo lo que ha pasado en tu vida")
                                                                    print("2. Morir con Honor")
                                                                    opcion_18 = int(input("Elige una opción (1-2): \n"))

                                                                    if opcion_18 == 1:
                                                                        print("El Guardian del Bosque te da lo opcion de convertirte en Centauro o Hombre lobo")
                                                                        print("1. Centauro")
                                                                        print("2. Hombre Lobo")
                                                                        opcion_19 = int(input("Elige una de las opciones (1-2): \n"))

                                                                        if opcion_19 == 1:
                                                                            print("El Guardian del Bosque te convierte en Centauro y pasas el resto de tu vida como su sirviente")
                                                                        elif opcion_19 == 2:
                                                                            print("El Guardian del Bosque te convierte en Hombre Lobo y pasas el resto de tu vida como su sirviente")
                                                                    elif opcion_18 == 2:
                                                                        print("Eliges morir con honor y tus hazañas nunca seran olvidadas")
                                                        elif opcion_24 == 2:
                                                            pocion_1.usar(personaje)
                                                            print(f"Tu vida es de: {personaje.vida} HP")
                                                        else:
                                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                                elif opcion_23 == 2:
                                                    print("Has decidido huir del Guardian del Bosque.")
                                                    print("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
                                                else:
                                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                                            else:
                                                enemigo_3.atacar(personaje)
                                                print(f"Tu vida es de: {pj.vida} HP")
                                                if personaje.vida <= 0:
                                                    print("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES.")
                                        elif opcion_15 == 2:
                                            pocion_1.usar(personaje)
                                            print(f"Tu vida es de: {personaje.vida} HP")
                                        else:
                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                elif opcion_14 == 2:
                                    print("Has decidido huir del Centauro.")
                                    print("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
                                else:
                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                        else:
                            enemigo_1.atacar(personaje)
                            print(f"Tu vida es de: {pj.vida} HP")
                            if personaje.vida <= 0:
                                print("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES.")
                    elif opcion_3 == 2:
                        pocion_1.usar(personaje)
                        print(f"Tu vida es de: {personaje.vida} HP")
                    else:
                        print("Opción inválida. Selecciona una opción válida (1-2).")
            elif opcion_2 == 2:
                print("Has decidido huir del Fantasma.")
                print("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
            else:
                print("Opción inválida. Selecciona una opción válida (1-2).")
        
        elif opcion_1 == 2:
            print("Has decidido ir al castillo.")
            print("\nDe repente, aparece un caballero sin cabeza. ¿Qué quieres hacer?")
            print("1. Luchar con el caballero sin cabeza\n 2. Huir")
            opcion_4 = int(input("Elige una opción (1-2): "))

            if opcion_4 == 1:
                print("\nHas decidido atacar al caballero sin cabeza.")
                while personaje.vida > 0 and enemigo_5.vida > 0:
                    print("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida (dos usos)")
                    opcion_5 = int(input("Elige una opción (1-2): "))

                    if opcion_5 == 1:
                        if personaje == p1:
                            personaje.atacar_1(enemigo_5)
                            print(f"Vida de {e5.nombre}: {e5.vida} HP")
                        elif personaje == p2:
                            personaje.atacar_2(enemigo_5)
                            print(f"Vida de {e5.nombre}: {e5.vida} HP")
                        elif personaje == p3:
                            personaje.atacar_3(enemigo_5)
                            print(f"Vida de {e5.nombre}: {e5.vida} HP")
                        else:
                            print("Opción inválida.")
                        if enemigo_5.vida <= 0:
                            print("¡Has derrotado al caballero sin cabeza!")
                            print("Luego de derrotar al caballero sin cabeza te encuentras con dos puertas")
                            print("1. Puerta 1")
                            print("2. Puerta 2")
                            opcion_6 = int(input("Elige una opción (1-2): \n"))
                            if opcion_6 == 1:
                                print("\nHas decidido entrar en la -Puerta 1-.")
                                print("De repente, aparece Frankestein. ¿Qué quieres hacer?\n 1. Luchar con Frankestein\n 2. Huir")
                                opcion_7 = int(input("Elige una opción (1-2): \n"))
                                if opcion_7 == 1:
                                    print("Has decidido atacar a Frankestein.")
                                    while personaje.vida > 0 and enemigo_6.vida > 0:
                                        print("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida")
                                        opcion_8 = int(input("Elige una opción (1-2): \n"))
                                        if opcion_8 == 1:
                                            if personaje == p1:
                                                personaje.atacar_1(enemigo_6)
                                                print(f"Vida de {e6.nombre}: {e6.vida} HP")
                                            elif personaje == p2:
                                                personaje.atacar_2(enemigo_6)
                                                print(f"Vida de {e6.nombre}: {e6.vida} HP")
                                            elif personaje == p3:
                                                personaje.atacar_3(enemigo_6)
                                                print(f"Vida de {e6.nombre}: {e6.vida} HP")
                                            else:
                                                print("Opción inválida.")
                                            if enemigo_6.vida <= 0:
                                                print("¡Has derrotado a Frankestein!")
                                                print("Luego de vencer a Frankestein sigues explorando el castillo cuando de repente aparece Dracula")
                                                print("¿Que quieres hacer?\n 1. Luchar con Dracula\n 2. Huir")
                                                opcion_22 = int(input("Elige una opción (1-2): \n"))
                                                if opcion_22 == 1:
                                                    print("\nHas decidido atacar a Dracula.")
                                                    while personaje.vida > 0 and enemigo_8.vida > 0:
                                                        print("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida")
                                                        opcion_23 = int(input("Elige una opción (1-2): \n"))
                                                        if opcion_23 == 1:
                                                            if personaje == p1:
                                                                personaje.atacar_1(enemigo_8)
                                                                print(f"Vida de {e8.nombre}: {e8.vida} HP")
                                                            elif personaje == p2:
                                                                personaje.atacar_2(enemigo_8)
                                                                print(f"Vida de {e8.nombre}: {e8.vida} HP")
                                                            elif personaje == p3:
                                                                personaje.atacar_3(enemigo_8)
                                                                print(f"Vida de {e8.nombre}: {e8.vida} HP")
                                                            else:
                                                                print("Opción inválida.")
                                                            if enemigo_8.vida <= 0:
                                                                print("¡Has derrotado a Dracula!")
                                                                print("HAS VENCIDO A TODOS LOS ENEMIGOS Y REGRESAS VICTORIOSO AL GREMIO DE AVENTUREROS")
                                                            else:
                                                                enemigo_8.atacar(personaje)
                                                                print(f"Tu vida es de: {pj.vida} HP")
                                                                if personaje.vida <= 0:
                                                                    print("HAS MUERTO Y EL VAMPIRO TE TRANSFORMA EN UNO DE SUS LACAYOS")
                                                        elif opcion_23 == 2:
                                                            pocion_1.usar(personaje)
                                                            print(f"Tu vida es de: {personaje.vida} HP")
                                                        else:
                                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                                elif opcion_22 == 2:
                                                    print("Has decidido huir de Frankestein.")
                                                    print("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
                                                else:
                                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                                            else:
                                                enemigo_6.atacar(personaje)
                                                print(f"Tu vida es de: {pj.vida} HP")
                                                if personaje.vida <= 0:
                                                    print("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES")
                                        elif opcion_8 == 2:
                                            pocion_1.usar(personaje)
                                            print(f"Tu vida es de: {personaje.vida} HP")
                                        else:
                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                elif opcion_7 == 2:
                                    print("Has decidido huir de Frankestein.")
                                    print("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
                                else:
                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                            elif opcion_6 == 2:
                                print("\nHas decidido entrar en la -Puerta 2-.")
                                print("De repente, aparece un Gigante. ¿Qué quieres hacer?\n 1. Luchar con el Gigante\n 2. Huir")
                                opcion_9 = int(input("Elige una opción (1-2): \n"))
                                if opcion_9 == 1:
                                    print("Has decidido atacar al Gigante.")
                                    while personaje.vida > 0 and enemigo_7.vida > 0:
                                        print("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida")
                                        opcion_10 = int(input("Elige una opción (1-2): \n"))
                                        
                                        if opcion_10 == 1:
                                            if personaje == p1:
                                                personaje.atacar_1(enemigo_7)
                                                print(f"Vida de {e7.nombre}: {e7.vida} HP")
                                            elif personaje == p2:
                                                personaje.atacar_2(enemigo_7)
                                                print(f"Vida de {e7.nombre}: {e7.vida} HP")
                                            elif personaje == p3:
                                                personaje.atacar_3(enemigo_7)
                                                print(f"Vida de {e7.nombre}: {e7.vida} HP")
                                            else:
                                                print("Opción inválida.")
                                            if enemigo_7.vida <= 0:
                                                print("¡Has derrotado al Gigante!")
                                                print("Luego de vencer al Gigante sigues explorando el castillo cuando de repente aparece Dracula")
                                                print("¿Que quieres hacer?\n 1. Luchar con Dracula\n 2. Huir")
                                                opcion_20 = int(input("Elige una opción (1-2): \n"))

                                                if opcion_20 == 1:
                                                    print("\nHas decidido atacar a Dracula.")
                                                    while personaje.vida > 0 and enemigo_8.vida > 0:
                                                        print("\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida")
                                                        opcion_21 = int(input("Elige una opción (1-2): \n"))

                                                        if opcion_21 == 1:
                                                            if personaje == p1:
                                                                personaje.atacar_1(enemigo_8)
                                                                print(f"Vida de {e8.nombre}: {e8.vida} HP")
                                                            elif personaje == p2:
                                                                personaje.atacar_2(enemigo_8)
                                                                print(f"Vida de {e8.nombre}: {e8.vida} HP")
                                                            elif personaje == p3:
                                                                personaje.atacar_3(enemigo_8)
                                                                print(f"Vida de {e8.nombre}: {e8.vida} HP")
                                                            else:
                                                                print("Opción inválida.")
                                                            if enemigo_8.vida <= 0:
                                                                print("¡Has derrotado a Dracula!\n HAZ VENCIDO A TODOS LOS ENEMIGOS Y REGRESAS VICTORIOSO AL GREMIO DE AVENTUREROS")
                                                            else:
                                                                enemigo_8.atacar(personaje)
                                                                print("Tu vida es de: {} HP".format(pj.vida))
                                                                if personaje.vida <= 0:
                                                                    print("Has muerto. Fin de la aventura.")
                                                        elif opcion_21 == 2:
                                                            pocion_1.usar(personaje)
                                                            print(f"Tu vida es de: {personaje.vida} HP")
                                                        else:
                                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                            else:
                                                enemigo_7.atacar(personaje)
                                                print(f"Tu vida es de: {pj.vida} HP")
                                                if personaje.vida <= 0:
                                                    print("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES.")
                                        elif opcion_10 == 2:
                                            pocion_1.usar(personaje)
                                            print(f"Tu vida es de: {personaje.vida} HP")
                                        else:
                                            print("Opción inválida. Selecciona una opción válida (1-2).")
                                elif opcion_9 == 2:
                                    print("Has decidido huir del Gigante.")
                                    print("Te has salvado, pero has perdido la oportunidad de ganar experiencia,tesoros y te regresas a tu vida normal")
                                else:
                                    print("Opción inválida. Selecciona una opción válida (1-2).")
                        else:
                            enemigo_2.atacar(personaje)
                            print(f"Tu vida es de: {pj.vida} HP")
                            if personaje.vida <= 0:
                                print("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES.")
                    elif opcion_5 == 2:
                        pocion_1.usar(personaje)
                        print(f"Tu vida es de: {personaje.vida} HP")
                    else:
                        print("Opción inválida. Selecciona una opción válida (1-2).")
            elif opcion_4 == 2:
                print("Has decidido huir del caballero sin cabeza\n Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.")
            else:
                print("Opción inválida. Selecciona una opción válida (1-2).")
            
historia(pj, e1, e2, e3, e4, e5, e6, e7, e8)
