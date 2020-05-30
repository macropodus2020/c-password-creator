#include <iostream>
#include <fstream>
#include <time.h> 
#include <stdlib.h>
using namespace std;
ifstream f("data.in");
int i,j;
char M[1000][1000];
void meniu()
{cout <<"______________"<<endl;
cout <<"1.create"<<endl;
cout <<"2.afisare"<<endl;
}
int main()
{int n,m; f>>n>>m;
for (i=1;i<=n;i++)
    for (j=1;j<=m;j++) f>>M[i][j]; i = 0; j = 0;
meniu();int C;
cin >> C;
if (C==1) { 
int k; cin >>k; int m2=1;
ofstream g("password.in");
	srand((int)time(0));
	int i = 1; g <<k<<endl;
	while(i++ <= k) {
		int r = (rand() % n) + 1;
        int r2 = (rand() % m) + 1;
		cout <<M[r][r2];
        g <<M[r][r2];
    }
g<<endl;cout<<endl;
g.close();
} else if (C == 2) { 
ifstream g("password.in");
int k3; g>>k3;
char M2[100];
for (i=1;i<=k3;i++) g>>M2[i];
for (i=1;i<=k3;i++) cout<<M2[i];
g.close();
cout <<endl;
}
}