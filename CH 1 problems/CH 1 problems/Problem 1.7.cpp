#include <iostream>
#include <cmath>

void calc(double dt , double y , double q) // y is ini. depth , q is flow rate
{
	double A = 1200;
	double t{};
	double k = (q * dt) / A;


	for (int i = 0; i < 21; i++)
	{
		std::cout << "at t= " << t << " y = " << y << '\n';
		y = y + k * (3 * std::sin(t) * std::sin(t) - 1);
		t = t + dt;
	}

}

int main()
{
	calc(0.5, 0, 500);
	return 0;
}