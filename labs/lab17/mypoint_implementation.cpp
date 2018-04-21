#include <cmath>
#include "mypoint_h.h"
#include "stdafx.h"

using namespace std;

MyPoint::MyPoint() {
	m_x = 0;
	m_y = 0;
}

MyPoint::MyPoint(double p_x, double p_y) {
	m_x = p_x;
	m_y = p_y;
}

double MyPoint::getX() const 
{
	return m_x;
}

double MyPoint::getY() const 
{
	return m_y;
}

double MyPoint::getDistance(MyPoint point){
	double r = pow(m_x - point.getX(), 2) + pow(m_y - point.getY(), 2);
	return pow(r, 0.5);
}