#include<iostream>
#include<math.h>
using namespace std;

int main(void){
	int n, num;

	cin >> n;
	for(int i=0; i<n; i++){
		float result, aver = 0;
		float count = 0;
		cin >> num;
		int a[num];
		for(int j=0;j<num;j++){

			cin >> a[j];
			aver = aver+ a[j];
		}
		aver = aver / num;

		for(int w=0; w<num; w++){
			if(a[w]>aver){
				count = count + 1;
			}
		}
		result = count / num;
		result = result*100;

		cout.precision(3);
		cout << fixed << result <<"%" << endl;
	}

	return 0;
}
/*
 5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

 */

