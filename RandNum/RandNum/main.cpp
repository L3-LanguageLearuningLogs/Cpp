#include"Rand.h"

int main()
{
	int max;
	int size;

	std::cout << "乱数の最大値を入力してください。" << std::endl;
	std::cin >> max;

	std::cout << "生成する乱数の個数を入力してください。" << std::endl;
	std::cin >> size;

	Rand rand(size, max);
	rand.toString();
}