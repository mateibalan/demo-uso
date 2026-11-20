#include <stdio.h>

void srting(int n, int *v)
{
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(v[i] > v[j]){
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}
int main(void)
{
	return 0;
}
