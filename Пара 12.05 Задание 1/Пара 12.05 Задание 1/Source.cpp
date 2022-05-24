#include <iostream>
#include <cstdlib>

using namespace std;
struct Person{
	int weight;
	char sex;
};
int main() {
	setlocale(0, "");
	float sr = 0;
	int sum = 0;
	int i = 0;
	Person p0, p1, p2, p3, p4, p5, p6, p7, p8, p9;
	p0 = { 80,'М' };
	p1 = { 54,'Ж' };
	p2 = { 200,'М'};
	p3 = { 60,'Ж' };
	p4 = { 72,'Ж' };
	p5 = { 94,'М' };
	p6 = { 62,'М' };
	p7 = { 45,'Ж' };
	p8 = { 52,'Ж' };
	p9 = { 73,'М' };
	
	if (p0.sex == 'М') {
		sum += p0.weight;
		i += 1;
	}
	
	if (p1.sex == 'М') {
		sum += p1.weight;
		i += 1;
	}
	if (p2.sex == 'М') {
		sum += p2.weight;
		i += 1;
	}
	if (p3.sex == 'М') {
		sum += p3.weight;
		i += 1;
	}
	if (p4.sex == 'М') {
		sum += p4.weight;
		i += 1;
	}
	if (p5.sex == 'М') {
		sum += p5.weight;
		i += 1;
	}
	if (p6.sex == 'М') {
		sum += p6.weight;
		i += 1;
	}
	if (p7.sex == 'М') {
		sum += p7.weight;
		i += 1;
	}
	if (p8.sex == 'М') {
		sum += p8.weight;
		i += 1;
	}
	if (p9.sex == 'М') {
		sum += p9.weight;
		i += 1;
	}

	sr = sum/i;

	cout << "Средний вес мужчин: " << sr << endl;
	system("pause");
	return(0);
}