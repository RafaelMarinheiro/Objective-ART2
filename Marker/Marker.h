// Marker.h

#pragma once

#include "Geometry.h"

using namespace System;

namespace OART {
	public class Marker
	{
	public:
		Marker();
		Marker(int id, int area, int direction, double cf, double **& tm, OART::Point & position, OART::Line *& edge, OART::Point *& vertex);
		Marker(Marker & m);
		Marker & operator=(Marker & m);
	private:
		int id;
		int area;
		int direction;
		double confidenceValue;
		double ** transformationMatrix;
		OART::Point position;
		OART::Line * edges;
		OART::Point * vertex;
	};
}
