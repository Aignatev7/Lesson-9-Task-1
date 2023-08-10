#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(Fraction other) { return numerator_ == denominator_; }
	bool operator!=(Fraction other) { return !(numerator_ == denominator_); }
	bool operator<(Fraction other) { return numerator_ < denominator_; }
	bool operator>(Fraction other) { return numerator_ > denominator_; }
	bool operator<=(Fraction other) { return !(numerator_ > denominator_); }
	bool operator>=(Fraction other) { return !(numerator_ < denominator_); }
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}


/*
Ваша задача — дописать класс Fraction так, чтобы программа компилировалась и работала корректно.

Пример работы программы
Консоль
f1 not == f2
f1 != f2
f1 not < f2
f1 > f2
f1 not <= f2
f1 >= f2
Подсказки
Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

Что использовать для решения.
Чтобы код компилировался, вам нужно перегрузить операторы сравнения.

Не забудьте, что уникальный код можно написать всего для двух операторов сравнения, остальные можно определить через них
*/