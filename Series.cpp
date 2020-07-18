//By Sept [Luogu User 224931] 
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;
//rnd() % n + k : [k, n + k)
inline unsigned int rnd(){
	static unsigned int seed = rand();
	seed ^= seed << 17, seed ^= seed >> 5, seed ^= seed << 23;
	return seed;
}
void series(int n,int mod){
	for(int i=0;i<n;i++){
		int tmp = rnd() % mod + 1;
		printf("%d", tmp);
		if(i != n - 1) printf(" ");
	}
	return;
}
int main(){
	srand(time(NULL)); 
	int n, m;
	scanf("%d%d", &n, &m);
	for(int k = 1 ; k <= 20 ; k++){
		char _file[100];
		sprintf(_file, "in_%d.in", k);
		freopen(_file, "w", stdout);
		series(n, m);
	}
	return 0;
}
