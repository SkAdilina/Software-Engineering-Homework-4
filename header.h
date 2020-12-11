#include "hw4.cpp"

 
void homework4::create(int i_val1, int i_val2)
{
      val1 = i_val1;
	  val2 = i_val2;
}


double homework4::rectangle_area(double l, double w)
{
	double area = l * w;
	return area;
}


void homework4::addition()
{
	std::cout<<"Addition ---> "<<(val1 + val2)<<'\n';
}

void homework4::addition_complex(int r1, int r2, int img1, int img2)
{
	std::cout<<"Addition of complex numbers ---> "<<(r1 + r2)<<" + "<<(img1 + img2)<<"i\n";
}