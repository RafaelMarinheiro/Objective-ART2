#pragma once

#include "Point.h"

namespace OART{
	public class Line
	{
	public:
		//Represents a line in form ax + by + c = 0
		double a;
		double b;
		double c;

		Line();
		Line(double a, double b, double c);
		Line(const Line & l);
		Line & operator=(const Line & v);

		~Line();

		bool isIn(Point & p, double eps = 0.0001);
	};
}