#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, x, b, y, t;
	cin >> a >> x
		>> b >> y
		>> t;

	auto op1 = a;
	if (30 < t) {
		op1 += (t - 30) * x * 21;
	}

	auto op2 = b;
	if (45 < t) {
		op2 += (t - 45) * y * 21;
	}

	cout << op1 << ' ' << op2;

	return 0;
}