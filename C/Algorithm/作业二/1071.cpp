#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double Distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
	double x1, y1, r1, x2, y2, r2, dis;
	double d, nx, ny, t;
	scanf("%lf%lf%lf", &x1, &y1, &r1);
	scanf("%lf%lf%lf", &x2, &y2, &r2);
	scanf("%lf", &dis);
	r1 += r2;
	d = Distance(x1, y1, x2, y2);
	if (d >= r1)
	{
		printf("Yes\n");
		return 0;
	}
	if (d != 0)
	{
		t = r1 / d;
		nx = (x2 - x1) * t + x1;
		ny = (y2 - y1) * t + y1;
	}
	else
	{
		nx = x1 + r1;
		ny = y1;
	}
	if (nx >= 0 && nx <= 1000 && ny >= 0 && ny <= 1000)
	{
		if (Distance(nx, ny, x2, y2) <= dis)
		{
			printf("Yes\n");
			return 0;
		}
	}
	else
	{
		if (r1 * r1 - (0 - x1) * (0 - x1) >= 0)
		{
			nx = 0;
			ny = sqrt(r1 * r1 - (0 - x1) * (0 - x1)) + y1;
			if (ny >= 0 && ny <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
			ny = -sqrt(r1 * r1 - (0 - x1) * (0 - x1)) + y1;
			if (ny >= 0 && ny <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
		}
		if (r1 * r1 - (1000 - x1) * (1000 - x1) >= 0)
		{
			nx = 1000;
			ny = sqrt(r1 * r1 - (1000 - x1) * (1000 - x1)) + y1;
			if (ny >= 0 && ny <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
			ny = -sqrt(r1 * r1 - (1000 - x1) * (1000 - x1)) + y1;
			if (ny >= 0 && ny <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
		}
		if (r1 * r1 - (0 - y1) * (0 - y1) >= 0)
		{
			ny = 0;
			nx = sqrt(r1 * r1 - (0 - y1) * (0 - y1)) + x1;
			if (nx >= 0 && nx <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
			nx = -sqrt(r1 * r1 - (0 - y1) * (0 - y1)) + x1;
			if (nx >= 0 && nx <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
		}
		if (r1 * r1 - (1000 - y1) * (1000 - y1) >= 0)
		{
			ny = 1000;
			nx = sqrt(r1 * r1 - (1000 - y1) * (1000 - y1)) + x1;
			if (nx >= 0 && nx <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
			nx = -sqrt(r1 * r1 - (1000 - y1) * (1000 - y1)) + x1;
			if (nx >= 0 && nx <= 1000)
				if (Distance(nx, ny, x2, y2) <= dis)
				{
					printf("Yes\n");
					return 0;
				}
		}
	}
	printf("No\n");
	return 0;
}
