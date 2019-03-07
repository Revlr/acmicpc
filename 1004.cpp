#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int test_case;
	int i, j;
	int x1, x2, y1, y2, n, cx, cy, r, cnt = 0;

	cin >> test_case;
	for (i = 0; i < test_case; i++) {
		//cout << "test_case" << i << endl;

		cin >> x1 >> y1 >> x2 >> y2; // get start point, end point
		/*cout << "x1 : " << x1 << endl;
		cout << "y1 : " << y1 << endl;
		cout << "x2 : " << x2 << endl;
		cout << "y2 : " << y2 << endl;*/

		cin >> n;	//get number of planet
		for (j = 0; j < n; j++) {
			cin >> cx >> cy >> r;
			if ((sqrt(pow((cx - x1), 2) + pow((cy - y1), 2)) < r) ^ (sqrt(pow(cx - x2, 2) + pow(cy - y2, 2)) < r)) {
				//cout << "across the line!!!" << endl;
				cnt++;
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
	
	return 0;
}
