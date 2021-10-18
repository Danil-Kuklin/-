#include <iostream>
#include <list>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <cstdlib>
#include<locale>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int N, M, K, i;
	i = 0;
	cout << "Введите N, M, K: ";
	cin >> N >> M >> K;
	if (K >= N && M > N) { cout << "No"; }
	else {
			int i = (M - N) / (N - K) + 1;
			if ((M - N) % (N - K) != 0) { i += 1; }
		
		cout << i;
	}
	
}

