# New Year and Hurry #
Limak va a participar en un concurso en el último día de 2016. El concurso comenzará a las 20:00 y durará cuatro horas, exactamente hasta la medianoche. Habrá n problemas, ordenados por dificultad, es decir, el problema 1 es el más fácil y el problema n es el más difícil. Limak sabe que le llevará 5·i minutos resolver el problema i-ésimo.

Los amigos de Limak organizan una fiesta de Nochevieja y Limak quiere estar allí a medianoche o antes. Necesita k minutos para llegar desde su casa, donde participará primero en el concurso.

¿Cuántos problemas puede resolver Limak si quiere llegar a la fiesta?

Input
La única línea de entrada contiene dos enteros n y k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240) — el número de problemas en el concurso y el número de minutos que Limak necesita para llegar a la fiesta desde su casa.

Output
Imprime un entero, que representa el número máximo posible de problemas que Limak puede resolver para poder llegar a la fiesta a medianoche o antes.

<img width="786" alt="image" src="https://github.com/user-attachments/assets/c1597754-0b8c-415e-9172-3dc55dc21f59">

Note
En el primer ejemplo, hay 3 problemas y Limak necesita 222 minutos para llegar a la fiesta. Los tres problemas requieren 5, 10 y 15 minutos respectivamente. Limak puede gastar 5 + 10 = 15 minutos para resolver los dos primeros problemas. Luego, a las 20:15 puede salir de su casa para llegar a la fiesta a las 23:57 (después de 222 minutos). En este escenario, Limak resolvería 2 problemas. No tiene suficiente tiempo para resolver 3 problemas, por lo que la respuesta es 2.

En el segundo ejemplo, Limak puede resolver los 4 problemas en 5 + 10 + 15 + 20 = 50 minutos. A las 20:50 dejará la casa e irá a la fiesta. Llegará exactamente a medianoche.

En el tercer ejemplo, Limak solo necesita 1 minuto para llegar a la fiesta. Tiene suficiente tiempo para resolver los 7 problemas.
