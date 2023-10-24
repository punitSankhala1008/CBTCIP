#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <math.h>

using namespace std;

class Calculator{
public:
    float fnum,snum,ans;

    void get(){


        cout<<" ___________________________________"<<endl;
        cout<<"|        Enter First Number         |"<<endl;
        cout<<"|___________________________________|"<<endl;
        cout<<"->"; cin>>fnum;
        cout<<endl;
        cout<<" ___________________________________"<<endl;
        cout<<"|        Enter Second Number        |"<<endl;
        cout<<"|___________________________________|"<<endl;
        cout<<"->"; cin>>snum;
        
        cout<<"-------------------------------------------------------------------------------------------------"<<endl;
    }
    void get1(){
        cout<<" ___________________________________"<<endl;
        cout<<"|            Enter Number           |"<<endl;
        cout<<"|___________________________________|"<<endl;
        cout<<"->"; cin>>fnum;
    }

        int operations(){
            system("cls");

            int opr;
            cout<<" ______________________________________"<<endl;
            cout<<"|Choose Operations.....................|"<<endl;
            cout<<"|______________________________________|"<<endl;
            cout<<"|_1_|_2_|_3_|_4_|_5_|_6_|_7_|_8_|_9_10_|"<<endl;
            cout<<"|______________________________________|"<<endl;
            cout<<"|____________1.Addition________________|"<<endl;
            cout<<"|____________2.Subtraction_____________|"<<endl;
            cout<<"|____________3.Multiplication__________|"<<endl;
            cout<<"|____________4.Division________________|"<<endl;
            cout<<"|____________5.Trignometry_____________|"<<endl;
            cout<<"|____________6.Logarithm_______________|"<<endl;
            cout<<"|____________7.Currency_Converter______|"<<endl;
            cout<<"|____________8.Convert Temperature_____|"<<endl;
            cout<<"|____________9.GST_____________________|"<<endl<<endl<<endl;
            cout<<"-> Enter Your Choice : ";
            cin>>opr;
            
            return opr;

        }

};
class Calculations:public Calculator{

    int trig , choose;

public:
    
    void do_opr(int opr)
    {
        switch(opr){
                case 1: 
                    Addition();
                    break;
                case 2:
                    Subtraction();
                    break;
                case 3:
                    Multiplication();
                    break;
                case 4:
                    Division();
                    break;
                case 5:
                    Trignometry();
                    break;
                case 6:
                    Logarithm();
                    break;
                case 7:
                    CurrencyConverter();
                    break;
                case 8:
                    ConvertTemperature();
                    break;
                case 9:
                    GST();
                    break;
                default:
                    cout<<" _____________________________________________________________"<<endl;
                    cout<<"|_______!!Enter The Suitable Operation From Above |^|!!_______|"<<endl;
                    cout<<"|_____________________________________________________________|"<<endl;  
            }
    }
    void Addition()
    {
        get();
        cout<<endl;
        cout<<" -> Addition : "<<fnum+snum <<" "<<endl;
        cout<<endl;

    }
    void Subtraction()
    {
        get();
        cout<<endl;
        cout<<" -> Subtraction : "<<fnum-snum<<endl;
        cout<<endl;
    }
    void Multiplication()
    {
        get();
        cout<<endl;
        cout<<" -> Multiplication : "<<fnum*snum<<endl;
        cout<<endl;


    }
    void Division(){
        get();        
        cout<<endl;
        cout<<" -> Division : "<<fnum/snum<<endl;
        cout<<endl;

    }
    void Trignometry(){
    	system("cls");
        cout<<"\nEnter What Trignometric Function You Want to Find :- "<<endl;
        cout<< "_______________________"<<endl;
        cout<<"|Choose Operations......|"<<endl;
        cout<<"|_______________________|"<<endl;
        cout<<"|_1_|_2_|_3_|_4_|_5_|_6_|"<<endl;
        cout<<"|_______________________|"<<endl;
        cout<<"|_________1.sin_________|"<<endl;
        cout<<"|_________2.cos_________|"<<endl;
        cout<<"|_________3.tan_________|"<<endl;
        cout<<"|_________4.cosec_______|"<<endl;
        cout<<"|_________5.sec_________|"<<endl;
        cout<<"|_________6.cot_________|"<<endl;
        cout<<"|_______________________|"<<endl<<endl;
        
        cout<<"Enter Your Choice -> ";
        cin>>trig;
        switch(trig){
            case 1: 
            	double degree,rad;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	cout<<"-> Sin ";   
            	cin>>degree;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	rad=degree;
            	degree= degree * M_PI / 180.0;
                cout<<endl;
                cout<<" -> sin "<<rad<<" : "<<sin(degree)<<endl;
                cout<<endl;
                break;
            case 2:
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	cout<<"-> Cos ";   
            	cin>>degree;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	rad=degree;
            	degree = degree * (M_PI / 180.0);
                cout<<endl;
                cout<<" -> cos "<<rad<<" : "<<cos(degree)<<endl;
                cout<<endl;
                break;
            case 3:
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	cout<<"-> Tan ";   
            	cin>>degree;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	rad=degree;
            	degree= degree * M_PI / 180.0;
                cout<<endl;
                cout<<" ->tan "<<rad<<" : "<<tan(degree)<<endl;
                cout<<endl;
                break;
            case 4:
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	cout<<"-> Cosec ";   
            	cin>>degree;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	rad=degree;
            	degree= degree * M_PI / 180.0;
                cout<<endl;
                cout<<" -> cosec "<<rad<<" : "<<1/sin(degree)<<endl;
                cout<<endl;
                break;
            case 5:
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	cout<<"-> Sec ";   
            	cin>>degree;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	rad=degree;
            	degree= degree * M_PI / 180.0;
                cout<<endl;
                cout<<" -> sec "<<rad<<" : "<<1/cos(degree)<<endl;
                cout<<endl;

                break;
            case 6:
            	
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	cout<<"-> Cot ";   
            	cin>>degree;
            	cout<<"~~~~~~~~~~~~~"<<endl;
            	rad=degree;
            	degree= degree * M_PI / 180.0;
                cout<<endl;
                cout<<" -> cot "<<rad<<" : "<<1/tan(degree)<<endl;
                cout<<endl;
                break;
        }
    }
    void Logarithm(){
        get1();
        cout<<endl;
        cout<<" ->log "<<fnum<<" : "<<log10(fnum)<<endl;
        cout<<endl;

    }
    void CurrencyConverter(){

        cout<<" _______________________"<<endl;
        cout<<"| 1 -> Rupees to Dollar |"<<endl;
        cout<<"| 2 -> Dollar to Rupees |"<<endl;
        cout<<"|_______________________|"<<endl<<endl;
        cin>>choose;
        if(choose==1){
            int Rupees;
            cout<<" _____________________________"<<endl;
            cout<<"|Enter amount in Rupees  :-   |"<<endl;
            cout<<"|_____________________________|"<<endl<<endl;
            cout<<"->"; cin>>Rupees;
            cout<<endl;
            cout<<" ___________________________"<<endl;
            cout<<"|In US Dollar -> $"<<(float)Rupees*0.012<<endl;
            cout<<"|___________________________"<<endl<<endl<<endl;


        }
        if(choose==2){
            int USD;
            cout<<" _____________________________"<<endl;
            cout<<"|Enter amount in Dollar  :-   |"<<endl;
            cout<<"|_____________________________|"<<endl;
            cin>>USD;
            cout<<" __________________________________________________"<<endl;
            cout<<"|In Rupees -> Rs."<< USD*83.12<<endl;
            cout<<"|__________________________________________________"<<endl<<endl<<endl;
        }
    }
    void ConvertTemperature(){
        
        cout<<" ____________________________"<<endl;
        cout<<"| 1 -> Celcius to Fehrenhiet |"<<endl;
        cout<<"| 2 -> Fehrenhiet to Celcius |"<<endl;
        cout<<"|____________________________|"<<endl<<endl;
        cin>>choose;
        get1();
        if(choose==1){
            cout<<"______________________"<<endl;
            cout<<" -> C to F : "<<endl;
			cout<<" -> "<<fnum<<" -> "<<(fnum * (9.0/5.0)) + 32<<endl;
            cout<<"______________________"<<endl<<endl<<endl;
        }
        if(choose==2){
            cout<<"______________________"<<endl;
            cout<<" -> F to C :- "<<endl;
			cout<<" -> "<<fnum<<" -> "<<(fnum - 32) * 5.0/9.0<<endl;
            cout<<"______________________"<<endl<<endl<<endl;   
        }
    }
    void GST(){
        float price;
        float cost;
        cout<<" _________________________________________________________________"<<endl;
        cout<<"|-> Enter the cost after the application of GST on the Product :- |"<<endl;
        cout<<"|_________________________________________________________________|"<<endl<<endl;
        cout<<" -> ";
        cin>>price;
        cout<<" _____________________________________________________________"<<endl;
        cout<<"|-> Enter the original cost Of the Product :-                 |"<<endl;
        cout<<"|_____________________________________________________________|"<<endl<<endl;
		cout<<" -> ";
        cin>>cost;
        cout<<endl<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Orginal -> "<<cost; 
        cout<<"   | After GST -> "<<price<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        
		cout<<"_________________________"<<endl;
        
		cout<<"-> GST Applied : "<<setprecision(2)<<(((price - cost) * 100) / cost)<<'%'<<endl;
        
        cout<<"_________________________"<<endl<<endl;
    }
};

int main() {
    cout<<"      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"     {               DIGITAL CALCULATER             }"<<endl;
    cout<<"      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl<<endl;
    Calculations c1;
    while(true){ 
        int i;
        
		cout<<"********************************************************"<<endl;
        cout<<" ______________________"<<endl;
        cout<<"|1     -> To Use Calci |"<<endl;
        cout<<"|0     -> To Exit      |"<<endl;
        cout<<"|______________________|"<<endl<<endl;
        cout<<"********************************************************"<<endl<<endl;
        cout<<"Enter Your Choice --> ";
        cin>>i;
        if(!i){
        	system("cls");
        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        	cout<<"   THANKING...YOU......"<<endl;
        	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			break;	
		}
        
        int opr = c1.operations();
        c1.do_opr(opr);
    }
    return 0;
}

