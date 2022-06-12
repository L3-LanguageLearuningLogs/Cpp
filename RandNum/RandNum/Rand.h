#pragma once
#include<vector>
#include<iostream>

using namespace std;

class Rand {
private:
	int Maxnum; //生成する乱数の最大
	int Sizenum;//生成する乱数の数
	vector<int> vec;

public:
	Rand(int sizenum, int maxnum);
	~Rand() {};
	void RandMax(); //乱数作成
	void setMax(int maxnum);
	int getMax() { return Maxnum; };
	void toString();
};