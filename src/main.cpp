#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ct = int{ 0 };
	for (auto d = 1; d <= n / 2; ++d) {
		if (0 == n % d) {
			auto s = n / d;

			auto a2 = s + d;
			auto b2 = s - d;

			if (0 == a2 % 2 && 0 == b2 % 2 && 0 < b2) {
				++ct;
			}
		}
	}

	cout << ct;

	return 0;
}