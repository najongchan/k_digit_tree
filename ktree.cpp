#include <cstdio>
#include <algorithm>

using namespace std;
long long n, x, y;
int k, q;

int main() {

	scanf("%d%d%d", &n, &k, &q);

	while (q>0) {
		q--;
		scanf("%lld%lld", &x, &y);
		if (k < 2) {
			printf("%lld\n", abs(x - y));
			continue;
		}
		int d = 0;
		while (x != y) {
			if (x < y) {
				swap(x, y);
			}
			x = (x - 2) / k + 1;
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}