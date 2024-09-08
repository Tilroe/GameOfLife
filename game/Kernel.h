#pragma once
class Kernel
{
public:
	Kernel(const int width = 256, const int height = 256);
	virtual void update() = 0;
	virtual void draw() const = 0;

protected:
	const int width, height;

private:
	virtual void swap() = 0;
};

