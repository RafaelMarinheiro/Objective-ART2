// Marker.h

#pragma once

using namespace System;

namespace OART {
	public class Marker
	{
	private:
		int id;
		int area;
		int direction;
		double confidenceValue;
		double transformationMatrix[3][4];
		Point position;
		Line edges[4];
		Point vertex[4];
	};
}
