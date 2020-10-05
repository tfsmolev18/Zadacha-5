#include <iostream>
using namespace std;
int otsechka(int x1, int x2, int y1, int y2)
{
	int A = sqrt(pow((x1 - x2), 2));
	int B = sqrt(pow((y1 - y2), 2));
	int result = A + B;
	return result;
}
int main()
{
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		arr[i] = otsechka(x1, x2, y1, y2);

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

}

