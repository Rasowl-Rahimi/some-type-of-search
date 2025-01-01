#include <iostream>
using namespace std;

class binery {
public:
	int k = 0;
	void check(int a[],int size) {
		for (int i = 0; i < size; i++) {
			cout << "Enter element " << i + 1 << " / 6 :";
			cin >> a[i];
			k = a[i];
			int l = a[i - 1];
			int j = 1;
			if (l > k) {
				cout << "Your numbers are not sorted !\n";

				break;
			}
			else {
				j++;
			}
		}
	};
	int bsearch(int a[],int n) {
		int low = 0, high = 6;
		
		while (high >= low) {
			int mid = (low + high) / 2;
			if (n == a[mid]) {
				return mid;
			}
			else if ( a[mid]>n) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
	}
};
int main()
{
	const int size = 7;
	int a[size], n;
	
	binery bie;
	bie.check(a,size);

	cout << "which one ?";
	cin >> n;
	cout<<"index of "<<n<<" = "<<bie.bsearch(a,n);
}