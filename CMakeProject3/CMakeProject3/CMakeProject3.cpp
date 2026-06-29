#include <iostream>

void calc(double dt, double u)
{

	double g = 9.8;
	double c = 12.5;
	double m = 68.1;
	double t{};
	double k = c / m;

	for (int i = 0; i < 7; i++)
	{
		std::cout << "at t = " << t << " velocity = " << u << " m / s \n";

		u = u + (g - k * u) * (dt);
		
		
		t = t + dt;
	}
}

int main()
{
	calc(2, 0);
	return 0;
}