# ESPAI-Hoja12

Ejercicios capítulo 12

1. Explica qué estamos haciendo en las siguientes sentencias. ¿Son el mismo caso? ¿Cuál sería el
resultado de mostrar y por pantalla?

a. Int x = 5;
Int &y = x

b. Int x = 5;
Int *y = &x;

2. ¿Cuál será la salida del siguiente programa? Explica por qué.

int main() {
int x = 5;
int &y = x;
int &z = y;
x = 7;
cout << x;
cout << y;
cout << z << endl;
y = 8;
cout << x;
cout << y;
cout << z << endl;
z = 9;
cout << x;
cout << y;
cout << z << endl;
return 0;
}

3. Dado el siguiente programa, escoge la opción correcta y explica por qué.

int main() {
int &y = 6;
cout << y;
return 0;
}

a. El programa falla en tiempo de compilación
b. El programa falla en tiempo de ejecución
c. El programa funciona perfectamente

4. Imagina una función que debe devolver más de un valor como repuesta. ¿Cómo podemos
lograr este objetivo, si return solo permite devolver un resultado?

5. Dado el siguiente código:

a. 
void doblar(int numero);
int main() {
int x = 5;
doblar(x);
cout << x;
}
void doblar(int numero)
{
numero = numero * 2;
}

b.
void doblar(int &numero);
int main() {
int x = 5;
doblar(x);
cout << x;
}
void doblar(int &numero)
{
numero = numero * 2;
}

Explica el resultado en cada caso.


6. Práctica final del capítulo
Crea una aplicación para la gestión de entradas de un teatro. El menú será el siguiente:

a.Reservar asiento
b.Actualizar asiento
c.Liberar asiento
d.Ver mapa asientos
e.Estadísticas
Espectador de mayor / menor edad
Entradas vendidas de cada categoría
Ocupación total en la sala
f.Salir

Los asientos tendrán diferentes categorías, siendo A la mejor (primeras 4 filas) B la
intermedia (5 a 25) y C la más sencilla (de 26 a 30). El tamaño del teatro es de 30x30.
Del espectador querremos saber su nombre, apellidos y edad que guardaremos en el
momento de reservar el asiento. Y el mapa de asientos lo representaremos como _ cuando
sea un asiento ocupado, y A, B o C cuando esté libre.
La opción Actualizar Asiento nos permitirá recibir un Espectador y modificar sus datos.
Para poner en práctica lo aprendido en el capítulo utiliza punteros, y variables o funciones
por referencia. Crea también una clase GestorTeatro que se encargará de realizar las
funciones solicitadas en cada caso, de una manera centralizada.
