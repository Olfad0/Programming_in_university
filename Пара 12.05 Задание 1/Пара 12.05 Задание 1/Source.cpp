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
	p0 = { 80,'�' };
	p1 = { 54,'�' };
	p2 = { 200,'�'};
	p3 = { 60,'�' };
	p4 = { 72,'�' };
	p5 = { 94,'�' };
	p6 = { 62,'�' };
	p7 = { 45,'�' };
	p8 = { 52,'�' };
	p9 = { 73,'�' };
	
	if (p0.sex == '�') {
		sum += p0.weight;
		i += 1;
	}
	
	if (p1.sex == '�') {
		sum += p1.weight;
		i += 1;
	}
	if (p2.sex == '�') {
		sum += p2.weight;
		i += 1;
	}
	if (p3.sex == '�') {
		sum += p3.weight;
		i += 1;
	}
	if (p4.sex == '�') {
		sum += p4.weight;
		i += 1;
	}
	if (p5.sex == '�') {
		sum += p5.weight;
		i += 1;
	}
	if (p6.sex == '�') {
		sum += p6.weight;
		i += 1;
	}
	if (p7.sex == '�') {
		sum += p7.weight;
		i += 1;
	}
	if (p8.sex == '�') {
		sum += p8.weight;
		i += 1;
	}
	if (p9.sex == '�') {
		sum += p9.weight;
		i += 1;
	}

	sr = sum/i;

	cout << "������� ��� ������: " << sr << endl;
	system("pause");
	return(0);
}