#include <iostream>
#include <fstream>
using namespace std;

fstream plik;
int main() {
	
	plik.open("wsp.txt",ios::in);
	
	
		plik.open("wynik.txt",ios::out);
			int x,y;
	    
	    	for(int i=x,y;i>=3;i++){
			
	    	if(x<0&&y<0){
	    		plik<<x<<" "<<y<<" "<<"Jest w 1 �wiartce"<<endl;
			}
		        else if(x<0&&y>0){
	    		plik<<x<<" "<<y<<" "<<"Jest w 2 �wiartce"<<endl;
			}
				else if(x>0&&y>0){
	    		plik<<x<<" "<<y<<" "<<"Jest w 3 �wiartce"<<endl;
			}
				else {
	    		plik<<x<<" "<<y<<" "<<"Jest w 4 �wiartce"<<endl;
			}
		}
		plik<<x<<" "<<y<<endl;
		plik.close();
	return 0;
}
