#include <iostream>

double sqrt_a(double a, double eps);

int main()
{
	std::cout<< sqrt_a(5, 0.00001) << std::endl;
	std::cout << sqrt_a(4, 1) << std::endl;

	return 0;
}

double sqrt_a(double a, double eps)
{
	double previous = a;
	double next = 0.5 * (previous + a/previous);
	double temp = 0.0;

	while (true)
	{

		double diff = next - previous;

		if (diff < 0)
		{
			diff = -diff;
		}
	
		if (diff < eps)
		{
			return  0.5 * (next + a / next);
		}

		temp = previous;
		previous = next;
		next = 0.5 * (previous + a / previous);
	}
	
}