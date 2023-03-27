#include <iostream>
#include <string>

class counter
{
public:
	std::string in;
	double increment();
	double decrement();
	void check();
	counter()
	{
		value = 1;
	}
	counter(double value_)
	{
		value = value_;
	}
private:
	double value;
};
double counter::increment()
{
	return value++;
}
double counter::decrement()
{
	return value--;
}
void counter::check()
{
	std::cout << value << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int start_value;
	std::string input;
	std::cout << "’отите задать начальное значение счетчика? ¬ведите 0, если нет, начальное значение, если да\n";
	std::cin >> start_value;
	if (start_value != 0)
	{
		counter user_value_counter(start_value);
		std::cout << "¬ведите команду '+', '-', '=', или 'x'\n";
		std::cin >> input;
		while (input != "x")
		{
			if (input == "+")
				user_value_counter.increment();
			else if (input == "-")
				user_value_counter.decrement();
			else if (input == "=")
				user_value_counter.check();
			std::cout << "¬ведите команду '+', '-', '=', или 'x'\n";
			std::cin >> input;
		}
	}
	else
	{
		counter standart_counter;
		std::cout << "¬ведите команду '+', '-', '=', или 'x'\n";
		std::cin >> input;
		while (input != "x")
		{
			if (input == "+")
				standart_counter.increment();
			else if (input == "-")
				standart_counter.decrement();
			else if (input == "=")
				standart_counter.check();
			std::cout << "¬ведите команду '+', '-', '=', или 'x'\n";
			std::cin >> input;
		}
	}
}