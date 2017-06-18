#include"Poo.h"
#include"Graphics.h"

Poo::Poo()
{
}

Poo::Poo(int x, int y, int vx, int vy)
{
	this->x = x;
	this->y = y;
	this->vx = vx;
	this->vy = vy;
}

bool Poo::IsPooEaten() const
{
	return isPooEaten;
}

void Poo::UpdateX()
{
	if (x < 0)
	{
		vx = 1;
		x = 0;
	}
	else if (x + Poo::pooWidth >= Graphics::ScreenWidth)
	{
		vx = -1;
		x = (Graphics::ScreenWidth - 1) - Poo::pooWidth;
	}
}

void Poo::UpdateY()
{
	if (y < 0)
	{
		vy = 1;
		y = 0;
	}
	else if (y + Poo::pooHeight >= Graphics::ScreenHeight)
	{
		vy = -1;
		y =  (Graphics::ScreenHeight - 1) - Poo::pooHeight;
	}
}

void Poo::ChangePosition()
{
	x = x + vx;
	y = y + vy;
}

void Poo::ProcessConsumption(const Dude& dude)
{
	const int right0 = dude.get_x() + Dude::dudeWidth;
	const int right1 = x + pooWidth;
	const int bottom0 = dude.get_y() + Dude::dudeHeight;
	const int bottom1 = y + pooHeight;
	
	if (
		right0 >= x &&
		dude.get_x() <= right1 &&
		dude.get_y() <= bottom1 &&
		bottom0 >= y
		)
		isPooEaten = true;

}

void Poo::Draw(Graphics& gfx)const
{
		gfx.PutPixel(14 + x, 0 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 1 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 1 + y, 138, 77, 0);
		gfx.PutPixel(20 + x, 1 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 2 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 2 + y, 138, 77, 0);
		gfx.PutPixel(20 + x, 2 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 3 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 4 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 4 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 4 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 5 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 5 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 5 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 6 + y, 138, 77, 0);
		gfx.PutPixel(20 + x, 6 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 7 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 7 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 7 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 7 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 8 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 8 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 8 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 9 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 9 + y, 102, 57, 0);
		gfx.PutPixel(13 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 9 + y, 51, 28, 0);
		gfx.PutPixel(21 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 10 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 10 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 10 + y, 102, 57, 0);
		gfx.PutPixel(13 + x, 10 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 10 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 10 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 10 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 11 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 11 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(16 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 12 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 12 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 12 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 12 + y, 111, 62, 0);
		gfx.PutPixel(13 + x, 12 + y, 102, 57, 0);
		gfx.PutPixel(14 + x, 12 + y, 102, 57, 0);
		gfx.PutPixel(15 + x, 12 + y, 102, 57, 0);
		gfx.PutPixel(16 + x, 12 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 13 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 13 + y, 109, 61, 0);
		gfx.PutPixel(11 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 13 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(8 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 15 + y, 116, 65, 0);
		gfx.PutPixel(8 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(16 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(17 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(18 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(2 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(3 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 16 + y, 116, 65, 0);
		gfx.PutPixel(8 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 16 + y, 109, 61, 0);
		gfx.PutPixel(14 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 16 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(2 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(3 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(4 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(5 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 17 + y, 43, 24, 0);
		gfx.PutPixel(8 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 17 + y, 40, 22, 0);
		gfx.PutPixel(14 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 17 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 17 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 17 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 17 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(2 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(3 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(4 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(5 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(8 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 18 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(21 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(22 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(2 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(3 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(4 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(5 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(8 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 19 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(22 + x, 19 + y, 65, 36, 0);
		gfx.PutPixel(23 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(2 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(3 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(8 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 20 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(22 + x, 20 + y, 65, 36, 0);
		gfx.PutPixel(23 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(2 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(3 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(4 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(5 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(8 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(16 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(17 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(18 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(21 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(22 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 22 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(2 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(3 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(4 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(5 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(6 + x, 22 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(2 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(3 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 23 + y, 51, 28, 0);
}