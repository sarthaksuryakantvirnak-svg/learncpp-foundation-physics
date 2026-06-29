#include <iostream>
// problem 1.5
void calc(double dt) // u is our initial velocity input during func call
{
	double m = 80;
	double c1 = 10;
	double c2 = 50;
	double u = -20;
	double g = 9.81;
	double t{};
	double k1 = c1 / m;
	double k2 = c2 / m;


	for (int i = 0;i < 11 ;i++)
	{
		std::cout << "t = " << t << " v = " << u << '\n';
		u = u + (g - k1 * u ) * dt;
		t = t + dt;

	}

	for (int i = 0; i < 11; i++)
	{
		std::cout << "t = " << t << " v = " << u << '\n';
		u = u + (g - k2 * u ) * dt;
		t = t + dt;

	}
}

int main()
{
	calc(1);
	return 0;
}