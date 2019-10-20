#ifndef CONVERT_H
#define CONVERT_H

#define PI  3.1415926535

#include <iostream>


namespace Convert {

	static float RadiusToDegree(float Rad)
	{
		return (Rad * 180) / float(PI);
	}

	static float DegreeToRadius(float Deg)
	{
		return (Deg * float(PI)) / 180;
	}

};

#endif // !CONVERT_H


