#include <iostream>
#include <cmath>
#include "Rational 3-2.h"

rational::rational(int a1, int b1) {
	this->a = a1;
	this->b = b1;
	if (b != 0) {
		if (a > b) {
			std::cout << "Èçíà÷àëüíîå çíà÷åíèå: " << "\n";
			std::cout << a << "/" << b;
			a = a % b;
		}
		if (b % a == 0) {
			std::cout << "Èçíà÷àëüíîå çíà÷åíèå: " << "\n";
			std::cout << a << "/" << b;
			a = a / a; b = b / a;
		}
	}
	
	else {
		std::cout << "Ââåäåíû íåäîïóñòèìûå çíà÷åíèÿ" << "\n";
	}
}

void rational::set(int a1, int b1) {
	a = a1; b = b1;
	if (a == b) {
		std::cout << "Äðîáü ñîêðàùàåòñÿ ê åäèíèöå" << "\n";
	}
	else if (a % b == 0 && a > b) {
		std::cout << "Äðîáü ñîêðàòèëàñü" << "\n";
	}
}

void rational::show() {
	std::cout << "Ïîëó÷åííàÿ äðîáü:" << "\n";
	std::cout << a << "/" << b;
}