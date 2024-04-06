#include <iostream>
using namespace std;

int main (){
	int water = 500;
	int mail = 2500;
	int candy = 100;
	int drink = 2000;
	int cafe = 3000;
	
	
	cout << " \n 2 cafe " <<(cafe *=2);
	cout << " \n 6 water " << (water *=6); 
	cout << " \n 10 candy " << (candy *=10) ;
	cout << " \n 2 drink " << (drink*=2) ;
	cout << " \n 3 mail " << (mail*=3);
    
   	int cafe2 = 6000;
	int water6= 3000;
	int candy10= 1000;
	int drink2= 4000;
	int mail3= 7500;
	cout << " \n total "<<cafe2 + water6 + candy10 + drink2 + mail3;
	
	int total = 21500;
	cout << " \n discoun 50% " << (total /=2);
	
	int heart =1;
	
	cout << " \n my heart free " << heart ;
	
	return 0;
}