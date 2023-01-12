#include <stdio.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <random>

int main() {
    std::cout << "╭━━━┳━━━┳━╮╱╭┳━━━━┳━━━┳━━━┳━━━━┳━━┳━━━╮" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃╭━━┫╭━╮┃┃╰╮┃┃╭╮╭╮┃╭━╮┃╭━╮┃╭╮╭╮┣┫┣┫╭━╮┃" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃╰━━┫┃╱┃┃╭╮╰╯┣╯┃┃╰┫┃╱┃┃╰━━╋╯┃┃╰╯┃┃┃┃╱╰╯" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃╭━━┫╰━╯┃┃╰╮┃┃╱┃┃╱┃╰━╯┣━━╮┃╱┃┃╱╱┃┃┃┃╱╭╮" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃┃╱╱┃╭━╮┃┃╱┃┃┃╱┃┃╱┃╭━╮┃╰━╯┃╱┃┃╱╭┫┣┫╰━╯┃" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "╰╯╱╱╰╯╱╰┻╯╱╰━╯╱╰╯╱╰╯╱╰┻━━━╯╱╰╯╱╰━━┻━━━╯" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "╭━━━┳━━━┳╮╱╱╭┳━━━┳━╮╱╭┳━━━━┳╮╱╭┳━━━┳━━━╮" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃╭━╮┣╮╭╮┃╰╮╭╯┃╭━━┫┃╰╮┃┃╭╮╭╮┃┃╱┃┃╭━╮┃╭━━╯" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃┃╱┃┃┃┃┃┣╮┃┃╭┫╰━━┫╭╮╰╯┣╯┃┃╰┫┃╱┃┃╰━╯┃╰━━╮" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃╰━╯┃┃┃┃┃┃╰╯┃┃╭━━┫┃╰╮┃┃╱┃┃╱┃┃╱┃┃╭╮╭┫╭━━╯" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "┃╭━╮┣╯╰╯┃╰╮╭╯┃╰━━┫┃╱┃┃┃╱┃┃╱┃╰━╯┃┃┃╰┫╰━━╮" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "╰╯╱╰┻━━━╯╱╰╯╱╰━━━┻╯╱╰━╯╱╰╯╱╰━━━┻╯╰━┻━━━╯" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

class Personaje {
public:
    Personaje(std::string nombre, int vida, int fuerza) : nombre(nombre), vida(vida), fuerza(fuerza) {}
    void atacar_1(Personaje & objetivo);
    void atacar_2(Personaje & objetivo);
    void atacar_3(Personaje & objetivo);

private:
    std::string nombre;
    int vida;
    int fuerza;
};

void Personaje::atacar_1{Personaje & objetivo} {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(15, fuerza);
    int daño = dis(gen);
    objetivo.vida -= daño;
    std::cout << "\n" << nombre << " ha atacado al " << objetivo.nombre << ", causando " << daño << " puntos de daño" << std::endl;
}

void Personaje::atacar_2(Personaje & objetivo) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0, 1);
    if (dis(gen) < 0.5) {
        std::uniform_int_distribution<> dis_atk(10, fuerza);
        int daño = 2 * dis_atk(gen);
        objetivo.vida -= daño;
        std::cout << "\n¡Ataque doble de " << nombre << "!" << std::endl;
        std::cout << nombre << " ha atacado al " << objetivo.nombre << ", causando " << daño << " puntos de daño" << std::endl;
        } else {
        std::uniform_int_distribution<> dis_atk(10, fuerza);
        int daño = dis_atk(gen);
        objetivo.vida -= daño;
        std::cout << "\n" << nombre << " ha atacado al " << objetivo.nombre << ", causando " << daño << " puntos de daño" << std::endl;


class Enemigo {
public:
    Enemigo(std::string nombre, int vida, int fuerza) : nombre(nombre), vida(vida), fuerza(fuerza) {}
    void atacar(Enemigo & objetivo);

private:
    std::string nombre;
    int vida;
    int fuerza;
};

void Enemigo::atacar(Enemigo & objetivo) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(10, fuerza);
    int daño = dis(gen);
    objetivo.vida -= daño;
    std::cout << nombre << " ha atacado a " << objetivo.nombre << ", causando " << daño << " puntos de daño" << std::endl;
}

class Pocion {
public:
    Pocion(int vida, int usos) : vida(vida), usos(usos) {}
    void usar(class Personaje & personaje);

private:
    int vida;
    int usos;
};

void Pocion::usar(Personaje & personaje) {
    if (usos > 0) {
        personaje.vida += vida;
        usos -= 1;
        std::cout << personaje.nombre << " ha usado una poción y ha recuperado " << vida << " puntos de vida" << std::end

std::cout << "Ingresa el nombre de tu personaje: ";
std::this_thread::sleep_for(std::chrono::milliseconds(500));
Personaje p1(nombre, 100, 35);
Personaje p2(nombre, 100, 25);
Personaje p3(nombre, 100, 20);
Enemigo e1("Fantasma", 60, 25);
Enemigo e2("Hombre Lobo", 70, 15);
Enemigo e3("Centauro", 50, 30);
Enemigo e4("Guardian del Bosque", 80, 40);
Enemigo e5("Caballero sin cabeza", 70, 25);
Enemigo e6("Frankestein", 80, 20);
Enemigo e7("Gigante", 75, 25);
Enemigo e8("Vampiro", 80, 35);
Pocion pocion_1(30, 2);

std::cout << "¿Qué tipo de personaje quieres crear " << nombre << "?" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "1. Espadachin (Tiene mas daño de ataque)" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "2. Mago (Tiene (50%) de probabilidad de hacer el doble de daño)" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "3. Curandero (Se cura un (40%) del daño de su ataque)" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
int opcion;
std::cout << "Elige una opción (1-3): ";
std::cin >> opcion;
std::this_thread::sleep_for(std::chrono::seconds(1));

int opcion;
std::cout << "Elige una opción (1-3): ";
std::cin >> opcion;
std::this_thread::sleep_for(std::chrono::seconds(1));

if (opcion == 1) {
Personaje pj = p1;

} else if (opcion == 2) {
Personaje pj = p2;

} else if (opcion == 3) {
Personaje pj = p3;

} else {
std::cout << "ingrese una opcion valida (1-3)" << std::endl;
std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

void historia(Personaje personaje, Enemigo enemigo_1, Enemigo enemigo_2, Enemigo enemigo_3, Enemigo enemigo_4, Enemigo enemigo_5, Enemigo enemigo_6, Enemigo enemigo_7, Enemigo enemigo_8){
std::cout << "\nBienvenido al Gremio de aventureros " << personaje.nombre << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "Las misiones disponibles son:" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "1. Explorar el Bosque en busca de pistas de porque la gente desaperece ultimamente" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "2. Explorar el Castillo dado que hay rumores de sobrevivientes que hay un vampiro" << std::endl;
std::cout << "Escoge una de las misiones:\n 1. Explorar el bosque\n 2. Ir al castillo" << std::endl;
int opcion_1;
std::cout << "Elige una opción (1-2): ";
}
std::cin >> opcion_1;
if (opcion_1 == 1) {
std::cout << "\nHas decidido explorar el bosque." << std::endl;
std::cout << "De repente, aparece un Fantasma." << std::endl;
std::cout << "¿Qué quieres hacer?\n 1. Luchar con el Fantasma\n 2. Huir\n Elige una opción (1-2):";
std::cin >> opcion_2;
if (opcion_2 == 1) {
std::cout << "\nHas decidido atacar al Fantasma." << std::endl;
while (personaje.vida > 0 && enemigo_1.vida > 0) {
std::cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida (dos usos)\nElige una opción (1-2):";
std::cin >> opcion_3;
if (opcion_3 == 1) {
if (personaje == p1) {
personaje.atacar_1(enemigo_1);
std::cout << "Vida de " << enemigo_1.nombre << ": " << enemigo_1.vida << " HP" << std::endl;
} else if (personaje == p2) {
personaje.atacar_2(enemigo_1);
std::cout << "Vida de " << enemigo_1.nombre << ": " << enemigo_1.vida << " HP" << std::endl;
} else if (personaje == p3) {
personaje.atacar_3(enemigo_1);
std::cout << "Vida de " << enemigo_1.nombre << ": " << enemigo_1.vida << " HP" << std::endl;
if (enemigo_1.vida <= 0) {
std::cout << "¡Has derrotado al Fantasma!" << std::endl;
int opcion_11;
std::cout << "\nLuego de derrotar al Fantasma te encuentras con senderos\n 1. Sendero Izquierdo\n 2. Sendero Derecho\nElige una opción (1-2):" << std::endl;
std::cin >> opcion_11;
if (opcion_11 == 1) {
std::cout << "\nHaz decidido entrar por el sendero Izquierdo." << std::endl;
int opcion_12;
std::cout << "De repente, aparece el Hombre Lobo. ¿Qué quieres hacer?\n 1. Luchar con el Hombre Lobo\n 2. Huir\nElige una opción (1-2):" << std::endl;
std::cin >> opcion_12;
if (opcion_12 == 1) {
std::cout << "\nHas decidido atacar al Hombre Lobo." << std::endl;
while (personaje.vida > 0 && enemigo_2.vida > 0) {
int opcion_13;
std::cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida\nElige una opción (1-2):" << std::endl;}
}
std::cin >> opcion_13;
if (opcion_13 == 1) {
if (personaje == p1) {
personaje.atacar_1(enemigo_2);
std::cout << "Vida de " << e2.nombre << ": " << e2.vida << " HP" << std::endl;
}
else if (personaje == p2) {
personaje.atacar_2(enemigo_2);
std::cout << "Vida de " << e2.nombre << ": " << e2.vida << " HP" << std::endl;
}
else if (personaje == p3) {
personaje.atacar_3(enemigo_2);
std::cout << "Vida de " << e2.nombre << ": " << e2.vida << " HP" << std::endl;
}
if (enemigo_2.vida <= 0) {
std::cout << "¡Has derrotado al Hombre Lobo!" << std::endl;
}
}
int opcion_16;
std::cout << "Luego de vencer al Hombre Lobo sigues por el sendero y de entre los arboles sale el autodenominado Guardian del Bosque\n¿Que quieres hacer?"
if (opcion_11 == 1) {
    std::cout << "\nHaz decidido entrar por el sendero Izquierdo.";
    std::cout << "De repente, aparece el Hombre Lobo. ¿Qué quieres hacer?\n 1. Luchar con el Hombre Lobo\n 2. Huir\nElige una opción (1-2):";
    }
    int opcion_12;
    std::cin >> opcion_12;
    if (opcion_12 == 1) {
        std::cout << "\nHas decidido atacar al Hombre Lobo.";
        while (personaje->vida > 0 && enemigo_2->vida > 0) {
            std::cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida\nElige una opción (1-2):";
            int opcion_13;
            std::cin >> opcion_13;
                }
            }
            if (opcion_13 == 1) {
                if (personaje == p1) {
                    personaje->atacar_1(enemigo_2);
                    std::cout << "Vida de "<< e2.nombre << ": " << e2.vida << " HP";
                } else if (personaje == p2) {
                    personaje->atacar_2(enemigo_2);
                    std::cout << "Vida de "<< e2.nombre << ": " << e2.vida << " HP";
                } else if (personaje == p3) {
                    personaje->atacar_3(enemigo_2);
                    std::cout << "Vida de "<<
                    }
if (enemigo_2.vida <= 0) {
cout << "¡Has derrotado al Hombre Lobo!" << endl;
int opcion_16;
cout << "Luego de vencer al Hombre Lobo sigues por el sendero y de entre los arboles sale el autodenominado Guardian del Bosque" << endl;
cout << "¿Que quieres hacer?\n 1. Luchar con el Guardian del Bosque\n 2. Huir\nElige una opción (1-2):";
cin >> opcion_16;
if (opcion_16 == 1) {
cout << "\nHas decidido atacar al Guardian del Bosque." << endl;
int opcion_17;
while ((personaje.vida > 0) && (enemigo_4.vida > 0)) {
cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida\nElige una opción (1-2):";
cin >> opcion_17;
}
}
if (opcion_17 == 1) {
    if (personaje == p1) {
        personaje.atacar_1(enemigo_4);
        cout << "Vida de " << e4.nombre << ": " << e4.vida << " HP" << endl;
    } else if (personaje == p2) {
        personaje.atacar_2(enemigo_4);
        cout << "Vida de " << e4.nombre << ": " << e4.vida << " HP" << endl;
    } else if (personaje == p3) {
        personaje.atacar_3(enemigo_4);
        cout << "Vida de " << e4.nombre << ": " << e4.vida << " HP" << endl;
    }
}
}
if (enemigo_4.vida <= 0) {
cout << "¡HAS DERROTADO AL GUARDIAN DEL BOSQUE!" << endl;
cout << "Y VUELVES VICTORIOSO AL GREMIO DE AVENTUREROS" << endl;
}
else {
enemigo_4.atacar(personaje);
cout << "Tu vida es de: " << pj.vida << " HP" << endl;
if (personaje.vida <= 0) {
cout << "El Guardian del Bosque te ha derrotado pero te da dos opciones:" << endl;
cout << " 1. Ser su sirviente y olvidar todo lo que ha pasado en tu vida" << endl;
cout << " 2. Morir con Honor" << endl;
int opcion_18;
cin >> opcion_18;
if (opcion_18 == 1) {
cout << "El Guardian del Bosque te da lo opcion de convertirte en Centauro o Hombre lobo" << endl;
cout << " 1. Centauro" << endl;
cout << " 2. Hombre Lobo" << endl;
int opcion_19;
cin >> opcion_19;
if (opcion_19 == 1) {
cout << "El Guardian del Bosque te convierte en Centauro y pasas el resto de tu vida como su sirviente" << endl;
}
else if (opcion_19 == 2) {
cout << "El Guardian del Bosque te convierte en Hombre Lobo y pasas el resto de tu vida como su sirviente" << endl;
}
}
else if (opcion_18 == 2) {
cout << "Eliges morir con honor y tus hazañas nunca seran olvidadas" << endl;
}
}
if (opcion_17 == 1) {
    if (personaje == p1) {
        personaje.atacar_1(enemigo_4);
        cout << "Vida de " << e4.nombre << ": " << e4.vida << " HP" << endl;
    } else if (personaje == p2) {
        personaje.atacar_2(enemigo_4);
        cout << "Vida de " << e4.nombre << ": " << e4.vida << " HP" << endl;
    } else if (personaje == p3) {
        personaje.atacar_3(enemigo_4);
        cout << "Vida de " << e4.nombre << ": " << e4.vida << " HP" << endl;
    }
} else if (opcion_17 == 2) {
    pocion_1.usar(personaje);
    cout << "Tu vida es de: " << personaje.vida << " HP" << endl;
} else {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
}
if (enemigo_4.vida <= 0) {
    cout << "¡HAS DERROTADO AL GUARDIAN DEL BOSQUE!" << endl;
    cout << "Y VUELVES VICTORIOSO AL GREMIO DE AVENTUREROS" << endl;
} else {
    enemigo_4.atacar(personaje);
    cout << "Tu vida es de: " << personaje.vida << " HP" << endl;
    if (personaje.vida <= 0) {
        cout << "HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES." << endl;
    }
}
if (opcion_12 == 2) {
    cout << "Has decidido huir del caballero sin cabeza." << endl;
    cout << "Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros." << endl;
} else {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
}

if (opcion_11 == 2) {
    cout << "\nHaz decidido entrar por el sendero derecho." << endl;
    cout << "De repente, aparece el Centauro. ¿Qué quieres hacer?" << endl;
    cin >> opcion_14; }

    if (opcion_14 == 1) {
        cout << "Has decidido atacar al Centauro." << endl;
        while (personaje->vida > 0 && enemigo_3->vida > 0) {
            cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida" << endl;
            cin >> opcion_15;

            if (opcion_15 == 1) {
                if (personaje == p1) {
                    personaje->atacar_1(enemigo_3);
                    cout << "Vida de " << e3->nombre << ": " << e3->vida << " HP" << endl;
                } else if (personaje == p2) {
                    personaje->atacar_2(enemigo_3);
                    cout << "Vida de " << e3->nombre << ": " << e3->vida << " HP" << endl;
                } else if (personaje == p3) {
                    personaje->atacar_3(enemigo_3);
                    cout << "Vida de " << e3->nombre << ": " << e3->vida << " HP" << endl;
                } else {
                    cout << "Opción inválida." << endl;
                } 
                if (enemigo_3.vida <= 0) {
    cout << "¡Has derrotado al Centauro!" << endl;
    cout << "Luego de vencer al Hombre Lobo sigues por el sendero" << endl;
    cout << "Y de entre los arboles sale el autodenominado Guardian del Bosque" << endl;
    cin >> opcion_23; } }
    }

    if (opcion_23 == 1) {
        cout << "Has decidido atacar al Guardian del Bosque." << endl;
        while (personaje->vida > 0 && enemigo_4->vida > 0) {
            cout << "\n¿Qué quieres hacer?" << endl;
            cout << "1. Atacar" << endl;
            cout << "2. Usar poción de vida" << endl;
            cin >> opcion_24;

            if (opcion_24 == 1) {
                if (personaje == p1) {
                    personaje->atacar_1(enemigo_4);
                    cout << "Vida de " << e4->nombre << ": " << e4->vida << " HP" << endl;
                } else if (personaje == p2) {
                    personaje->atacar_2(enemigo_4);
                    cout << "Vida de " << e4->nombre << ": " << e4->vida << " HP" << endl;
                } else if (personaje == p3) {
                    personaje->atacar_3(enemigo_4);
                    cout << "Vida de " << e4->nombre << ": " << e4->vida << " HP" << endl;
                } else {
                    cout << "Opción inválida." << endl;
                }

                if (enemigo_4->vida <= 0) {
                    cout << "¡HAS DERROTADO AL GUARDIAN DEL BOSQUE!" << endl;
                    cout << "Y VUELVES VICTORIOSO AL GREMIO DE AVENTUREROS" << endl;
                } else {
                    enemigo_4->atacar(personaje);
                    cout << "Tu vida es de: " << pj->vida << " HP" << endl;
                    if (personaje->vida <= 0) {
                        cout << "El Guardian del Bosque te ha derrotado pero te da dos opciones:" << endl;
                        cout << "1. Ser su sirviente y olvidar todo lo que ha pasado en tu vida" << endl;
                        cout << "2. Morir con Honor" << endl;
                        cin >> opcion_18;
                    }

                }
            }
        }
    }
    if (opcion_18 == 1) {
printf("El Guardian del Bosque te da lo opcion de convertirte en Centauro o Hombre lobo\n");
printf("1. Centauro\n");
printf("2. Hombre Lobo\n");
scanf("%d", &opcion_19);
if (opcion_19 == 1) {
printf("El Guardian del Bosque te convierte en Centauro y pasas el resto de tu vida como su sirviente\n");
} else if (opcion_19 == 2) {
printf("El Guardian del Bosque te convierte en Hombre Lobo y pasas el resto de tu vida como su sirviente\n");
} else if (opcion_18 == 2) {
printf("Eliges morir con honor y tus hazañas nunca seran olvidadas\n");
} else if (opcion_24 == 2) {
pocion_1.usar(personaje);
printf("Tu vida es de: %d HP\n", personaje.vida);
} else {
printf("Opción inválida. Selecciona una opción válida (1-2).\n");
}
else if (opcion_23 == 2) {
printf("Has decidido huir del Guardian del Bosque.\n");
printf("Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros.\n");
} else {
printf("Opción inválida. Selecciona una opción válida (1-2).\n");
}
} else {
enemigo_3.atacar(personaje);
printf("Tu vida es de: %d HP\n", pj.vida);
if (personaje.vida <= 0) {
printf("HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES.\n");
}
if (opcion_18 == 1) {
    std::cout << "El Guardian del Bosque te da lo opcion de convertirte en Centauro o Hombre lobo" << std::endl;
    std::cout << "1. Centauro" << std::endl;
    std::cout << "2. Hombre Lobo" << std::endl;
    int opcion_19;
    std::cin >> opcion_19;

    if (opcion_19 == 1) {
        std::cout << "El Guardian del Bosque te convierte en Centauro y pasas el resto de tu vida como su sirviente" << std::endl;
    } else if (opcion_19 == 2) {
        std::cout << "El Guardian del Bosque te convierte en Hombre Lobo y pasas el resto de tu vida como su sirviente" << std::endl;
    } else if (opcion_18 == 2) {
        std::cout << "Eliges morir con honor y tus hazañas nunca seran olvidadas" << std::endl;
    }
} else if (opcion_24 == 2) {
    pocion_1.usar(personaje);
    std::cout << "Tu vida es de: " << personaje.vida << " HP" << std::endl;
} else {
    std::cout << "Opción inválida. Selecciona una opción válida (1-2)." << std::endl;
}

if (opcion_23 == 2) {
    std::cout << "Has decidido huir del Guardian del Bosque." << std::endl;
    std::cout << "Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros." << std::endl;
} else if (opcion_23 != 1 && opcion_23 != 2) {
    std::cout << "Opción inválida. Selecciona una opción válida (1-2)." << std::endl;
} else {
    enemigo_3}
    if (opcion_1 == 2) {
    cout << "Has decidido ir al castillo." << endl;
    cout << "De repente, aparece un caballero sin cabeza. ¿Qué quieres hacer?" << endl;
    cout << "1. Luchar con el caballero sin cabeza" << endl << "2. Huir" << endl;
    int opcion_4;
    cin >> opcion_4;
    if (opcion_4 == 1) {
        cout << "Has decidido atacar al caballero sin cabeza." << endl;
        while (personaje.vida > 0 && enemigo_5.vida > 0) {
            cout << "¿Qué quieres hacer?" << endl << "1. Atacar" << endl << "2. Usar poción de vida (dos usos)" << endl;
            int opcion_5;
            cin >> opcion_5;
            if (opcion_5 == 1) {
    if (personaje == p1) {
        personaje.atacar_1(enemigo_5);
        std::cout << "Vida de " << e5 << ": " << e5.vida << " HP" << std::endl;
    } else if (personaje == p2) {
        personaje.atacar_2(enemigo_5);
        std::cout << "Vida de " << e5 << ": " << e5.vida << " HP" << std::endl;
    } else if (personaje == p3) {
        personaje.atacar_3(enemigo_5);
        std::cout << "Vida de " << e5 << ": " << e5.vida << " HP" << std::endl;
    } else {
        std::cout << "Opción inválida." << std::endl;
    }
    if (enemigo_5.vida <= 0) {
        std::cout << "¡Has derrotado al caballero sin cabeza!" << std::endl;
        std::cout << "Luego de derrotar al caballero sin cabeza te encuentras con dos puertas" << std::endl;
        std::cout << "1. Puerta 1" << std::endl;
        std::cout << "2. Puerta 2" << std::endl;
        std::cin >> opcion_6;
    }cout << "Elige una opción (1-2): \n";
    cin >> opcion_6;
    if (opcion_6 == 1) {
        cout << "\nHas decidido entrar en la -Puerta 1-." << endl;
        cout << "De repente, aparece Frankestein. ¿Qué quieres hacer?\n 1. Luchar con Frankestein\n 2. Huir" << endl;
        int opcion_7;
        cin >> opcion_7;
        if (opcion_7 == 1) {
            cout << "Has decidido atacar a Frankestein." << endl;
            while (personaje.vida > 0 && enemigo_6.vida > 0) {
                cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida" << endl;
                int opcion_8;
                cin >> opcion_8;
                if (opcion_8 == 1) {
                    if (personaje == p1) {
                        personaje.atacar_1(enemigo_6);
                        cout << "Vida de " << e6.nombre << ": " << e6.vida << " HP" << endl;
                    } else if (personaje == p2) {
                        personaje.atacar_2(enemigo_6);
                        cout << "Vida de " << e6.nombre << ": " << e6.vida << " HP" << endl;
                    } else if (personaje == p3) {
                        personaje.atacar_3(enemigo_6);
                        cout << "Vida de " << e6.nombre << ": " << e6.vida << " HP" << endl;
                    } else {
                        cout << "Opción inválida." << endl;
                    }
                if (enemigo_6.vida <= 0) {
    cout << "¡Has derrotado a Frankestein!" << endl;
    cout << "Luego de vencer a Frankestein sigues explorando el castillo cuando de repente aparece Dracula" << endl;
    cout << "¿Que quieres hacer?\n 1. Luchar con Dracula\n 2. Huir" << endl;
    int opcion_22;
    cin >> opcion_22;
    if (opcion_22 == 1) {
        cout << "\nHas decidido atacar a Dracula." << endl;
        while (personaje.vida > 0 && enemigo_8.vida > 0) {
            cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida" << endl;
            int opcion_23;
            cin >> opcion_23;
            if (opcion_23 == 1) {
                if (personaje == p1) {
                    personaje.atacar_1(enemigo_8);
                    cout << "Vida de " << e8.nombre << ": " << e8.vida << " HP" << endl;
                } else if (personaje == p2) {
                    personaje.atacar_2(enemigo_8);
                    cout << "Vida de " << e8.nombre << ": " << e8.vida << " HP" << endl;
                } else if (personaje == p3) {
                    personaje.atacar_3(enemigo_8);
                    cout << "Vida de " << e8.nombre << ": " << e8.vida << " HP" << endl;
                } else {
                    cout << "Opción inválida." << endl;
                }
                if (enemigo_8.vida <= 0) {
                    cout << "¡Has derrotado a Dracula!" << endl;
                    cout << "HAS VENCIDO A TODOS LOS ENEMIGOS Y REGRESAS VICTORIOSO AL GREMIO DE AVENTUREROS" << endl;
                } else {
                    enemigo_8.atacar(personaje);
                    cout << "Tu vida es de: " << pj.vida << " HP" << endl;
                    if (personaje.vida <= 0) {
                        cout << "HAS MUERTO Y EL VAMPIRO TE TRANSFORMA EN UNO DE SUS LACAYOS" << endl;
                    }
        if (opcion_23 == 2) {
    pocion_1.usar(personaje);
    cout << "Tu vida es de: " << personaje.vida << " HP" << endl;
} else if (opcion_23 == 2) {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
}

else if (opcion_22 == 2) {
    cout << "Has decidido huir de Frankestein." << endl;
    cout << "Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros." << endl;
} else if (opcion_22 == 2) {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
} else {
    enemigo_6.atacar(personaje);
    cout << "Tu vida es de: " << pj.vida << " HP" << endl;
    if (personaje.vida <= 0) {
        cout << "HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES" << endl;
    }
}

if (opcion_8 == 2) {
    pocion_1.usar(personaje);
    cout << "Tu vida es de: " << personaje.vida << " HP" << endl;
} else if (opcion_8 == 2) {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
}

if (opcion_7 == 2) {
    cout << "Has decidido huir de Frankestein." << endl;
    cout << "Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros." << endl;
} else if (opcion_7 == 2) {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
}

if (opcion_6 == 2) {
    cout << "\nHas decidido entrar en la -Puerta 2-." << endl;
    cout << "De repente, aparece un Gigante. ¿Qué quieres hacer?\n 1. Luchar con el Gigante\n 2. Huir" << endl;
    int opcion_9;
    cin >> opcion_9;
    if (opcion_9 == 1) {
        cout << "Has decidido atacar al Gigante." << endl;
        while (personaje.vida > 0 && enemigo_7.vida > 0) {
            cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida"
            cin >> opcion_10;

if (opcion_10 == 1) {
    if (personaje == p1) {
        personaje.atacar_1(enemigo_7);
        cout << "Vida de " << e7.nombre << ": " << e7.vida << " HP" << endl;
    } else if (personaje == p2) {
        personaje.atacar_2(enemigo_7);
        cout << "Vida de " << e7.nombre << ": " << e7.vida << " HP" << endl;
    } else if (personaje == p3) {
        personaje.atacar_3(enemigo_7);
        cout << "Vida de " << e7.nombre << ": " << e7.vida << " HP" << endl;
    } else {
        cout << "Opción inválida." << endl;
    }
    if (enemigo_7.vida <= 0) {
        cout << "¡Has derrotado al Gigante!" << endl;
        cout << "Luego de vencer al Gigante sigues explorando el castillo cuando de repente aparece Dracula" << endl;
        cout << "¿Que quieres hacer?\n 1. Luchar con Dracula\n 2. Huir" << endl;
        int opcion_20;
        cin >> opcion_20;
    }
}if (opcion_20 == 1) {
    cout << "\nHas decidido atacar a Dracula." << endl;
    while (personaje.vida > 0 && enemigo_8.vida > 0) {
        cout << "\n¿Qué quieres hacer?\n 1. Atacar\n 2. Usar poción de vida" << endl;
        int opcion_21;
        cin >> opcion_21;

        if (opcion_21 == 1) {
            if (personaje == p1) {
                personaje.atacar_1(enemigo_8);
                cout << "Vida de " << e8.nombre << ": " << e8.vida << " HP" << endl;
            } else if (personaje == p2) {
                personaje.atacar_2(enemigo_8);
                cout << "Vida de " << e8.nombre << ": " << e8.vida << " HP" << endl;
            } else if (personaje == p3) {
                personaje.atacar_3(enemigo_8);
                cout << "Vida de " << e8.nombre << ": " << e8.vida << " HP" << endl;
            } else {
                cout << "Opción inválida." << endl;
            }
            if (enemigo_8.vida <= 0) {
                cout << "¡Has derrotado a Dracula!\n HAZ VENCIDO A TODOS LOS ENEMIGOS Y REGRESAS VICTORIOSO AL GREMIO DE AVENTUREROS" << endl;
            } else {
    enemigo_8.atacar(personaje);
    cout << "Tu vida es de: " << pj.vida << " HP" << endl;
    if (personaje.vida <= 0) {
        cout << "Has muerto. Fin de la aventura." << endl;
    }
}
if (opcion_21 == 2) {
    pocion_1.usar(personaje);
    cout << "Tu vida es de: " << personaje.vida << " HP" << endl;
} else if(opcion_21 != 1) {
    cout << "Opción inválida. Selecciona una opción válida (1-2)." << endl;
}
} else {
    enemigo_7.atacar(personaje);
    cout << "Tu vida es de: " << pj.vida << " HP" << endl;
    if (personaje.vida <= 0) {
        else {
    enemigo_7.atacar(personaje);
    std::cout << "Tu vida es de: " << pj.vida << " HP" << std::endl;
    if (personaje.vida <= 0) {
        std::cout << "HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES." << std::endl;
    } else if (opcion_10 == 2) {
        pocion_1.usar(personaje);
        std::cout << "Tu vida es de: " << personaje.vida << " HP" << std::endl;
    } else {
        std::cout << "Opción inválida. Selecciona una opción válida (1-2)." << std::endl;
    }
}
if (opcion_9 == 2) {
    std::cout << "Has decidido huir del Gigante." << std::endl;
    std::cout << "Te has salvado, pero has perdido la oportunidad de ganar experiencia,tesoros y te regresas a tu vida normal" << std::endl;
} else if(opcion_9 !=1) {
    std::cout << "Opción inválida. Selecciona una opción válida (1-2)." << std::endl;
}
else {
    enemigo_2.atacar(personaje);
    std::cout << "Tu vida es de: " << pj.vida << " HP" << std::endl;
    if (personaje.vida <= 0) {
        std::cout << "HAS MUERTO. VUELVE A INTENTARLO PERO ESTA VEZ ESCOGIENDO BIEN TUS OPCIONES." << std::endl;
    }
}
if (opcion_5 == 2) {
    pocion_1.usar(personaje);
    std::cout << "Tu vida es de: " << personaje.vida << " HP" << std::endl;
} else if(opcion_5!=1) {
    std::cout << "Opción inválida. Selecciona una opción válida (1-2)." << std::endl;
}
if (opcion_4 == 2) {
    std::cout << "Has decidido huir del caballero sin cabeza\n Te has salvado, pero has perdido la oportunidad de ganar experiencia y tesoros." << std::endl;
} else if(opcion_4!=1) {
    std::cout << "Opción inválida. Selecciona una opción válida (1-2)." << std::endl;
}
void historia(Personaje &pj, Enemigo &e1, Enemigo &e2, Enemigo &e3, Enemigo &e4, Enemigo &e5, Enemigo &e6, Enemigo &e7, Enemigo &e8)
