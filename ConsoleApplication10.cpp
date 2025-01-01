#include <iostream>
using namespace std;

class product {
	public:

		void recive(int a[], int size) {
			for (int i = 0; i < size; i++) {
				cin >> a[i];
			}
		}

	int minang(int a[], int size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += a[i];
		}
		int z = (sum) / (size);
		return z;
	}

	
	void sort(int a[], int size) {
		int temp;

		for (int i = 0; i < size - 1; i++) {
			for (int k = 0; k < size - 1; k++) {
				if (a[k] > a[k + 1]) {
					temp = a[k];
					a[k] = a[k + 1];
					a[k + 1] = temp;
				}
			}
		}
		for (int j = 0; j < size; j++) {
			cout << a[j] << "  ";
		}
		cout << endl;
	}

	float mianeh(int a[], int size) {
		int z;
		if (size % 2 == 0) {
			z = (size / 2);
			float y = a[z];
			float n = (y + a[z - 1]) / 2;
			return n;
		}
		else {
			z = (size + 1) / 2;
			return z;
		}
	}

	int mod(int a[], int size) {
		int f[10] = { 0 };
		for (int i = 0; i < size; i++) {
			++f[a[i]];
		}
		int max = f[0];
		int index = 0;

		for (int j = 0; j < size; j++) {
			if (max < f[j]) {
				max = f[j];
				index = j;
			}
		}
		return a[f[index]];
	}
};

int main() {
	product pro;

	const int size = 6;
	int a[size];

	pro.recive(a,size);
	pro.minang(a, size);

	pro.sort(a, size);
	cout << "mianeh = " << pro.mianeh(a, size) << endl;

	cout <<"mod = "<< pro.mod(a, size);
}