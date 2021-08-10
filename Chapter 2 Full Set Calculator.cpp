#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include <cstdlib>
#include<math.h>

using namespace std;

void fermi(){
    double f, e, ef;
    double kt = 0.0259;
    double tkt = 0.0777;

    cout<<"Please insert Ec or Ev value: "<<endl;
    cin>>e;
    cout<<"Please insert Ef value: "<<endl;
    cin>>ef;
    cout<<"f(E) = 1/(1+e^(E-Ef)/kT)"<<endl;

    f = 1/(1+exp(e-ef/kt));
    cout<<"\n";
    cout<<"f(E) = "<<f<<endl;


}

void intrinsic(){
    double Nc, Nv, Nd, Na, eg, no, po;
    double kt = 0.0259;

    cout<<"Please insert Nc value: "<<endl;
    cin>>Nc;
    cout<<"Please insert Nv value: "<<endl;
    cin>>Nv;
    cout<<"Please insert Nd value: "<<endl;
    cin>>Nd;
    cout<<"Please insert Na value: "<<endl;
    cin>>Na;
    cout<<"Please insert Eg value: "<<endl;
    cin>>eg;

    if(Na == 0 && Nd == 0){
    no = sqrt(Nc*Nv*exp(-eg/kt));
    po = sqrt(Nc*Nv*exp(-eg/kt));
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else{
    cout<<"Value is invalid, it is not pure Intrinsic"<<endl;
    }
}

void Uncomp(){
    double Nc, Nv, Nd, Na, eg, no, po, ni, ni2;
    double kt = 0.0259;

    cout<<"Please insert Nc value(if it is not given, set to zero): "<<endl;
    cin>>Nc;
    cout<<"Please insert Nv value(if it is not given, set to zero): "<<endl;
    cin>>Nv;
    cout<<"Please insert Nd value(if it's not given in question , set to zero): "<<endl;
    cin>>Nd;
    cout<<"Please insert Na value(if it's not given in question , set to zero): "<<endl;
    cin>>Na;
    cout<<"Please insert Eg value(if it is not given, set to zero): "<<endl;
    cin>>eg;
    cout<<"Please insert ni value: "<<endl;
    cin>>ni;
    ni2 = Nc*Nv*exp(-eg/kt);

    if(Na == 0){
    no = Nd;
    po = pow(ni,2)/Nd;
    cout<<" it is n-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else if(Nd == 0){
    po = Na;
    no = pow(ni,2)/Na;
    cout<<" it is p-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else{
    cout<<"Error!";
    }
}

void comp(){
    double Nc, Nv, Nd, Na, eg, no, po, ni, ni2;
    double kt = 0.0259;

    cout<<"Please insert Nc value(if it is not given, set to zero): "<<endl;
    cin>>Nc;
    cout<<"Please insert Nv value(if it is not given, set to zero): "<<endl;
    cin>>Nv;
    cout<<"Please insert Nd value: "<<endl;
    cin>>Nd;
    cout<<"Please insert Na value: "<<endl;
    cin>>Na;
    cout<<"Please insert Eg value(if it is not given, set to zero): "<<endl;
    cin>>eg;
    cout<<"Please insert ni value(if it is not given, set to zero): "<<endl;
    cin>>ni;
    ni2 = Nc*Nv*exp(-eg/kt);

    if(Nd > Na){
    no = Nd - Na;
    po = pow(ni,2)/no;
    cout<<" it is n-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else if(Nd < Na){
    po = Na - Nd;
    no = pow(ni,2)/po;
    cout<<" it is p-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else{
    cout<<"Error!";
    }
}

void UncompEx(){
    double Nc, Nv, Nd, Na, eg, no, po, ni, ni2, e, ef;
    double kt = 0.0259;

    cout<<"Please insert Nc value(if it is not given, set to zero): "<<endl;
    cin>>Nc;
    cout<<"Please insert Nv value(if it is not given, set to zero): "<<endl;
    cin>>Nv;
    cout<<"Please insert Nd value(if it's not given in question , set to zero): "<<endl;
    cin>>Nd;
    cout<<"Please insert Na value(if it's not given in question , set to zero): "<<endl;
    cin>>Na;
    cout<<"Please insert Ef value(if it is not given, set to zero): "<<endl;
    cin>>ef;
    cout<<"Please insert Ei value(if it is not given, set to zero): "<<endl;
    cin>>e;
    cout<<"Please insert ni value: "<<endl;
    cin>>ni;
    ni2 = Nc*Nv*exp(-eg/kt);

    if(Na == 0){
    no = ni*exp(ef-e);
    po = 0;
    cout<<" it is n-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else if(Nd == 0){
    po = ni*exp(ef-e);
    no = 0;
    cout<<" it is p-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else{
    cout<<"Error!";
    }

}

void compEx(){
    double Nc, Nv, Nd, Na, eg, no, po, ni, ni2, e, ef, ec, ev;
    double kt = 0.0259;

    cout<<"Please insert Nc value(if it is not given, set to zero): "<<endl;
    cin>>Nc;
    cout<<"Please insert Nv value(if it is not given, set to zero): "<<endl;
    cin>>Nv;
    cout<<"Please insert Nd value: "<<endl;
    cin>>Nd;
    cout<<"Please insert Na value: "<<endl;
    cin>>Na;
    cout<<"Please insert Ef value(if it is not given, set to zero): "<<endl;
    cin>>ef;
    cout<<"Please insert Ec value(if it is not given, set to zero): "<<endl;
    cin>>ec;
    cout<<"Please insert Ev value(if it is not given, set to zero): "<<endl;
    cin>>ev;
    cout<<"Please insert ni value(if it is not given, set to zero): "<<endl;
    cin>>ni;
    ni2 = Nc*Nv*exp(-eg/kt);

    if(Nd > Na){
    no = Nc*exp(-ec+ef/kt);
    po = 0;
    cout<<" it is n-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else if(Nd < Na){
    po = Nc*exp(-ef+ev/kt);
    no = 0;
    cout<<" it is p-type "<<endl;
    cout<<" no = "<<no<<endl;
    cout<<" po = "<<po<<endl;
    }
    else{
    cout<<"Error!";
    }

}

void EHDist_menu(){
	system("cls");
	int option;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\tWelcome to Electrons and Holes Distribution with Energy Calculation";
	cout<<"\n\tPress 1 for Intrinsic semiconductor cases";
	cout<<"\n\tPress 2 for Uncompensated semiconductor: non-degenerate, total ionization case";
	cout<<"\n\tPress 3 for Compensated semiconductor cases";
	cout<<"\n\tPress 4 for Extrinsic Semiconductor UnCompensated cases";
	cout<<"\n\tPress 5 for Extrinsic Semiconductor Compensated cases";
	cout<<"\n\tPress 6 to GO BACK TO MAIN MENU";
	cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

	cout<<"\n\n\tOption: ";
	cin>>option;
	switch(option)
	{
		case 1: system("cls");
                intrinsic();
                break;

        case 2: Uncomp();
                break;

        case 3: comp();
                break;

        case 4: UncompEx();
                break;

        case 5: compEx();
                break;

        case 6: system("cls");
				break;

        default: EHDist_menu();

}
}


int main(int argc, char *argv[])
{
	system("cls");
  	cout<<"\t\t\t\t*\t*";
  	cout<<"\t\t\t\t**\t**";
   	cout<<"\t\t\t\t***\t***";
   	cout<<"\t\t\t\t****\t****";
   	cout<<"\t\t\t\t*****\t*****";
    cout<<"\t\t\t\t******\t******";
   	cout<<"\t\t\t\t*******\t*******";
   	cout<<"\t\t\t\t*******\t*******";
   	cout<<"\t\t\t\t******\t******";
   	cout<<"\t\t\t\t*****\t*****";
   	cout<<"\t\t\t\t****\t****";
   	cout<<"\t\t\t\t***\t***";
   	cout<<"\t\t\t\t**\t**";
   	cout<<"\t\t\t\t*\t*";
	int option;

	for(;;)
	{

		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
		cout<<"\n\t1. Fermi-Dirac Calculator";
		cout<<"\n\t2. Electrons and Holes Distribution with Energy Calculation";
		cout<<"\n\t3. EXIT";
		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout<<"\n\tOption: ";
		cin>>option;

		switch(option)
		{
			case 1: system("cls");
					fermi();
					break;

			case 2: EHDist_menu();
					break;

			case 3:
					cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
					cout<<"\n\tGood Bye!";
					cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
					exit(0);

			default :cout<<"Invalid Input...\n";
		}

	}
}
