#include <iostream>

void calc(double c, double k,double dt) // c is initial conc. in func call
{
	double t{};
	for (int i = 0; i < 11;i++)
	{	
		std::cout << "at t= " << t << " c = " << c << '\n';
		c = c * (1 - k * dt);
		t = t + dt;


	}

}

int main()
{
	calc(10, 0.2, 0.1);
	return 0;
}