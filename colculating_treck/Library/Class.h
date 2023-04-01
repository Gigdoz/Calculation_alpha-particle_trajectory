#pragma once

#include <iostream>
#include <math.h>
#include <fstream>
#include <vector>

typedef unsigned int UINT;
class Point;
class PointArr;

class Point
{
public:
	float x, y;
};

class PointArr : Point
{
private:
	std::vector<Point> Arr;
	UINT Size;
public:
	PointArr(); 
	PointArr(const PointArr &other); // Copy Constructor
	// To write coordinates to the desired point
	void SetPointX(const double x, const UINT i) { this->Arr[i].x = x; }
	void SetPointY(const double y, const UINT i) { this->Arr[i].y = y; }
	void SetPointXY(const double x, const double y, const UINT i) { SetPointX(x, i); SetPointY(y, i); } 
	// To output a separate coordinate of the desired point
	float GetPointArrX(const UINT i) { return this->Arr[i].x; }
	float GetPointArrY(const UINT i) { return this->Arr[i].y; }
	void SolutionTreck_File(char *name, const float E, const float L, const float P, const float dt);// Calculation of trajectory points with a given time
};
