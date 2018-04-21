#ifndef MYPOINT_H
#define MYPOINT_H

class MyPoint
{
	public:
		MyPoint();
		MyPoint(double, double);
		double getX() const;
		double getY() const;
		double getDistance(MyPoint);
		
	private: 
		double m_x;
		double m_y;
};

#endif
