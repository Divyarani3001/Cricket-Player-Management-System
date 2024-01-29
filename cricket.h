typedef struct cricket
{
	int jersyno;
	char players_name[20];
	int age;
	char team[20];
	int runs;
	int wickets;
	int matches;
	char role[20];
	
}cricket;
void storecricket(cricket *arr,int a);
void displaycricket(cricket *arr,int b);
void searchcricket(cricket *arr,int c);
void updatecricket(cricket *arr,int d);
void deletecricket(cricket *arr,int *e);    

 
