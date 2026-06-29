#include <iostream>
#include <cmath>
void calc(double dt, double y)
{
	double A = 1200;
	double q = 500;
	double alpha = 300;
	double t{};
	double k1 = 3 * q / A;
	double k2 = alpha / A;
	double k3 = std::sqrt(1 + y);
	

	for (int i = 0; i < 21; i++)
	{	
		std::cout << "t = " << t << " : " << " y = " << y << '\n';
		
		y = y + k1 * dt * std::sin(t) * std::sin(t) - k2 * dt * std::sqrt(1 + y) * (1 + y);
		t = t + dt;

	}

}

int main()
{
	calc(0.5, 0);
	return 0;
}