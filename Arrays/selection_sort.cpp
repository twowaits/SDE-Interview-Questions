#include<iostream>
using namespace std;


// Selection Sort
void selection_sort(int a[], int n) {

	for (int i = 0; i < n - 1; i++) {
		//find out the smallest element idx in the unsorted part
		int min_index = i;
		for (int j = i; j <= n - 1; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		//After this loop we can do swap finally
		swap(a[i], a[min_index]);
	}
}

int main() {


	int n, key;
	cin >> n;

	int a[1000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	selection_sort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ",";
	}


	return 0;

}
/*void selection_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_index=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[mid_index])
			{
				min_index=j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
}*/