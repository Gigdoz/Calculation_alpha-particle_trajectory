
#include "Class.h"

using namespace std;

PointArr::PointArr()
{
	this->Size = 1;
	this->Arr.resize(Size);
	this->Arr[0].x = 0.0;
	this->Arr[0].y = 0.0;
}

PointArr::PointArr(const PointArr &other)  // Copy Constructor
{
	Size = other.Size;
	this->Arr = other.Arr;
}

void PointArr::SolutionTreck_File(char *name, const float E, const float L, const float P, const float dt) // Calculation of trajectory points with a given time
{

	float v0 = sqrt(2.0 * E / 5.0), f = 3.555; // Initial speed
	float x0 = -L, y0 = P, y1 = P, x1 = -L + v0 * dt, x, y; // Coordinates of the first and second points
	ofstream fp;
	fp.open(name);
    if(!fp.is_open())
        throw std::invalid_argument("file_no_open!");
	fp << x0 << "  " << y0 << endl;// We write down the initial coordinates of the first point
	fp << x1 << "  " << y1 << endl; // We write down the initial coordinates of the second point
	for (;x1 > -L - 0.1 && y1 < L + 0.1;)
	{
		
		x = 2.0 * x1 - x0  + f * x1 / sqrt(pow((x1 * x1 + y1 * y1), 3))*dt*dt;
		y = 2.0 * y1 - y0 + f * y1 / sqrt(pow((x1 * x1 + y1 * y1), 3))*dt*dt;
		fp << x << "  " << y << endl; // Recording in file the found points
		x0 = x1;
		y0 = y1;
		x1 = x;
		y1 = y;

	}
    fp.close();
}

