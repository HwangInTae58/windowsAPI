#pragma once
struct fPoint
{
	//�����͸� float���·� �ٲ����ϴ� ����ü
	float x;
	float y;
	fPoint()
	{
		x = 0;
		y = 0;
	}
	fPoint(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};