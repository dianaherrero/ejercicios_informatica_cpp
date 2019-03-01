#include <iostream>

int** allocate_matrix(int N, int M) {
	int**m = new int*[N];
	for (int i = 0; i < N; i++) {
		m[i] = new int[M];
	}

	//inicializacion de la matriz
	for (int i = 0; i < N; i++) {
		for (int j=0; j<M; j++)
		m[i][j] = 0;
	}
	return m;
}

void free_matrix(int**m, int N) {
	for (int i = 0; i < N; i++) {
		delete[] m[i];
	}

	delete[] m;
	m = NULL;
}