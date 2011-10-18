#pragma once

namespace OART{
	public class Pattern
	{
	public:
		Pattern();
		Pattern(Pattern & p);
		Pattern & operator=(const Pattern & p);

		~Pattern();

		const Marker & marker() const;
		Marker & rmarker();

		const bool isVisible() const;
		bool & rvisible();

		const bool isColliding() const;
		bool & rcollide();

		const double & width() const;

		const Point & center() const;

	private:
		int id;
		char * name;
		bool visible;
		bool collide;
		double width;
		Point center;
		Marker * marker;
	};
}