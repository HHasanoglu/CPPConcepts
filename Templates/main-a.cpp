#include<iostream>
using namespace std;

class Mark
{
	int money{};
public:
	Mark(int money) {
		this->money = money;
	};

	Mark operator+(const Mark a) {
		return Mark(money + a.money);
	}

	ostream& Display(ostream& coutref) {

		return coutref << money;
	}
};
ostream& operator<<(ostream& coutref, Mark& C) {
	return C.Display(coutref);
}


class Container {
	int m_capacity{ 250 };
	int m_data{};
public:
	Container(int data = 0) :m_data{ data } {
	};

	Container Add(Container A) {
		Container ret(m_data + A.m_data);
		ret.m_capacity += A.m_capacity;

		return ret;
	}
	ostream& Display(ostream& coutref=std::cout) {

		return coutref << m_data<<'/'<<m_capacity;
	}
};


//int Sum(int x, int y) {
//
//	return x + y;
//}
//
//double Sum(double x, double y) {
//
//	return x + y;
//}
//
//Mark Sum(Mark x, Mark y) {
//
//	return x+y;
//}

template<typename T>
T Sum(T x, T y) {

	return x + y;
}
template<>
Container Sum<Container>(Container x, Container y) {

	return x.Add(y);
}
int main() {

	int a, b, c;
	a = 2;
	b = 3;
	c = Sum(a, b);
	cout << c << endl;


	double d, e, f;
	d = 2.5;
	e = 3.23;
	f = Sum(d, e);
	cout << f << endl;


	Mark i = 50;
	Mark j = 25;
	Mark k = Sum(i, j);
	cout << k << endl;

	Container m = 23, p = 32, l;
	l = Sum(m, p);
	l.Display();




	return 0;
}