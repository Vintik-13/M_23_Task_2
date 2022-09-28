/*Задание 2. Вывод времени года
Что нужно сделать
Используя макросы вместе с условными директивами прекомпиляции (#if / #endif),
реализуйте простую программу по выводу названия времени года в консоль.
Пользователь программы, который будет иметь дело с вашим кодом, в этом случае
тоже программист. С помощью определения одного из макросов (в самом коде):
SPRING, SUMMER, AUTUMN или WINTER он задаёт сезон, название, которое хочет
увидеть на экране. При компиляции и запуске программы на экране должно появиться
название именно этого сезона и только его.*/

#include <iostream>


#define WINTER "winter"
//#define SPRING "spring"
//#define SUMMER "summer"
//#define AUTUMN "autumn"

int main()
{
#ifdef WINTER
	std::cout << WINTER;
#endif
#if SPRING
	std::cout << SPRING;
#endif
#ifdef SUMMER
	std::cout << SUMMER;
#endif
#ifdef AUTUMN
	std::cout << AUTUMN;
#endif

}

