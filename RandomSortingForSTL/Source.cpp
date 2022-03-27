#include <string>
#include <vector>
#include <iostream>
#include <random>

auto get_URBG() {
  std::random_device rd;
  // 使用random_device生成seed
  std::mt19937 g(rd());

  return g;
}

int main() { 

	{
		std::vector<int> ivec{ 1, 2, 3, 4, 5 };
		std::shuffle(ivec.begin(), ivec.end(), get_URBG());
		for (auto v : ivec) {
			printf("%d\n", v);
		}
	}
	printf("-----------------------------------------------\n");
	{
		std::vector<std::string> ivec{ "123", "456", "789", "ABC", "EFG"};
		std::shuffle(ivec.begin(), ivec.end(), get_URBG());
		for (auto v : ivec) {
			printf("%s\n", v.c_str());
		}
	}

	return 0; 
}
