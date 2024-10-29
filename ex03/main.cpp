#include <iostream>
#include "Point.hpp"

int	main() {
	Point a(2.02f, 0.83f);
	Point b(2.66f, 1.68f);
	Point c(1.24f, 1.91f);

	// テストケース1：点が三角形の内部にある場合
	Point p1(2.02f, 1.0f);
	std::cout << "Test Case 1: ";
	if (bsp(a, b, c, p1))
		std::cout << "inside the triangle" << std::endl;
	else
		std::cout << "outside the triangle" << std::endl;

	// テストケース2：点が三角形の外部にある場合
	Point p2(3.0f, 1.5f);
	std::cout << "Test Case 2: ";
	if (bsp(a, b, c, p2))
		std::cout << "inside the triangle" << std::endl;
	else
		std::cout << "outside the triangle" << std::endl;

	// テストケース3：点が三角形の辺上にある場合
	Point p3(2.34f, 1.25f); // 辺AB上の点
	std::cout << "Test Case 3: ";
	if (bsp(a, b, c, p3))
		std::cout << "inside the triangle" << std::endl;
	else
		std::cout << "outside the triangle" << std::endl;

	// テストケース4：点が三角形の頂点と一致する場合
	Point p4(2.02f, 0.83f); // 頂点Aと一致
	std::cout << "Test Case 4: ";
	if (bsp(a, b, c, p4))
		std::cout << "inside the triangle" << std::endl;
	else
		std::cout << "outside the triangle" << std::endl;

	// テストケース5：点が三角形の外部に大きく離れた位置にある場合
	Point p5(5.0f, 5.0f);
	std::cout << "Test Case 5: ";
	if (bsp(a, b, c, p5))
		std::cout << "inside the triangle" << std::endl;
	else
		std::cout << "outside the triangle" << std::endl;

	return 0;
}
