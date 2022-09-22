#include<iostream>
#include<sstream>

using namespace std;
class date{
	private:
		int day;
		int month;
		int years;
	public:
	date(string fecha);
	void fechaValidacion();
	void aniobisiesto();
	
};
date::date(string fecha){
	
			stringstream input_stringstream(fecha);
			string day,month,years;
			
			getline (input_stringstream, day, '/');
			getline (input_stringstream, month,'/');
			getline (input_stringstream, years,'/');
			
			cout<<"day:"<<day<<endl;
			cout<<"month:"<<month<<endl;
			cout<<"years:"<<years<<endl;
			
			this-> day= stoi(day);
			this-> month=stoi(month);
			this-> years= stoi(years);
		
}
void date::fechaValidacion(){
	if ( month >= 1 && month <= 12 )
    {
        switch ( month )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( day >= 1 && day <= 31 )
                          printf( "\n   La fecha que introdujo es correcta" );
                      else
                          printf( "\n  La fecha que introdujo es incorrecta" );
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( day >= 1 && day <= 30 )
                          printf( "\n  La fecha que introdujo es correcta" );
                      else
                          printf( "\n  La fecha que introdujo es incorrecta" );
                      break;

            case  2 : if( years % 4 == 0 && years % 100 != 0 || years % 400 == 0 )
                          if ( day >= 1 && day <= 29 )
                              printf( "\n  La fecha que introdujo es correcta" );
                          else
                              printf( "\n  La fecha que introdujo es incorrecta" );
                      else
                          if ( day >= 1 && day <= 28 )
                              printf( "\n  La fecha que introdujo es correcta" );
                          else
                              printf( "\n  La fecha que introdujo es correcta" );
        }
    }
    else
        printf( "\n La fecha que introdujo es incorrecta" );
}
void date::aniobisiesto(){

   if(this->years%4 == 0 and this->years%100 != 0 or this->years%400 == 0)                                             
      cout << "\nBisiesto" << endl;
   else
      cout << "\nNo es bisiesto" << endl;
      
      
}
int main()
{
    string fecha;
     cout<<"Ingrese una fecha con formato yyyy/mm/dd:";
   cin>>fecha;
 
    date d = date(fecha);
    
    d.fechaValidacion();
    d.aniobisiesto();
    system("pause");

         return 0;
}