#include <iostream>

void calc(double t, double Ti , double Pi , double N) // t is time from zero to t , Ti is ini. temp , N is number of students
{	//Assuming Air isnt occupied by volume of students
	double V_room = 10 * 8 * 3;
	double V_students = 0.075 * N;
	double V_air = V_room - V_students;
	double C = 0.718;
	double mw = 28.97;
	double dt{};
	double m{}; // mass of air
	double R{ 8.314 };
	m = (Pi * V_air * mw) / (R * Ti);
	double Q = (80 * t * N * 60) / 1000;
	double dT = Q / (m * C);

	std::cout << "mass of air = " << m << '\n';
	std::cout << " Hear absorbed by air / radiated by students (J) = " << Q << '\n';
	std::cout << dT << " K is the amount of Temp rise";
}

int main()
{
	calc(15, 293.15, 101.325, 35);
	
}