/*#include<iostream>
using namespace std;
#define M 4 
#define N 5 
void preprocess(int arr[M][N],int aux[M][N]){
	//copy first row
	for (int i=0; i<N; i++) 
      aux[0][i] = arr[0][i]; 
  
   // Do column wise sum 
   for (int i=1; i<M; i++) 
      for (int j=0; j<N; j++) 
         aux[i][j] = arr[i][j] + aux[i-1][j]; 
  
   // Do row wise sum 
   for (int i=0; i<M; i++) 
      for (int j=1; j<N; j++) 
         aux[i][j] += aux[i][j-1]; 
}
int sumquery(int aux[M][N],int tli,int tlj,int bri,int brj){
	int result=aux[bri][brj];
	if(tli>0)
		result-=aux[tli-1][brj];
	if(tlj>0)
		result-=aux[bri][tlj];
	if(tli>0 && tlj>0){
		result+=aux[tli-1][tlj-1];
	}
	return result;
}
int main(){
	/*int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int aux[m][n];
	preprocess(arr,aux);
	int q;
	cin>>q;
	while(q--){
		int tli,tlj,bri,brj;
		cin>>tli>>tlj>>bri>>brj;
		cout<<sumquery(aux,tli,tlj,bri,brj)<<endl;
	}*/
	/*int arr[M][N] = {{1, 2, 3, 4, 6}, 
                    {5, 3, 8, 1, 2}, 
                    {4, 6, 7, 5, 5}, 
                    {2, 4, 8, 9, 4} }; 
   int aux[M][N]; 
  
   preprocess(arr, aux); 
  
   int tli = 2, tlj = 2, rbi = 3, rbj = 4; 
   cout << "\nQuery1: " << sumquery(aux, tli, tlj, rbi, rbj); 
  
   tli = 0, tlj = 0, rbi = 1, rbj = 1; 
   cout << "\nQuery2: " << sumquery(aux, tli, tlj, rbi, rbj); 
  
   tli = 1, tlj = 2, rbi = 3, rbj = 3; 
   cout << "\nQuery3: " << sumquery(aux, tli, tlj, rbi, rbj); 
  
   return 0; 
}*/
/* The output of the following program is ? */  
#include<iostream>
using namespace std;

int main(){
    long signed CodingBlocks = 2017;
    short unsigned BOSS1     = -2018;
    unsigned BOSS2           = -2019;
    int      BOSS3           = -2020;
    long long unsigned BOSS4 = -2021;
    short unsigned Nagarro   = 2018.9;
    long signed HackerBlocks = 'A';
    cout<<CodingBlocks<<endl;
    cout<<BOSS1<<endl<<BOSS2<<endl<<BOSS3<<endl<<BOSS4<<endl;
    cout<<Nagarro<<endl;
    cout<<HackerBlocks<<endl;


    return 0;}