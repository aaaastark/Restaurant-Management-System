#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include "DataFile.h"
#include "DataFile1.h"
#include "DataFile2.h"
#include "DataFile3.h"
#include "DataFile4.h"
using namespace std;
int main(){
	ofstream outfile_format;
    outfile_format.open("bill.txt", ios::out | ios::trunc );
    // First of all data_file.Its contents will be truncated before opening the file.
	
	
//-------------------------------- Business Plan, Concept, Capital, Location, Licenses --------------------------------------//
//------------------------------------------------- DataFile1.h --------------------------------------//

	
	//                           First Way
	Business_Plan c4; 
	Concept c1;
	c1.Name_Rustaurant();
	c4.Business_Plan_print();	
	c1.concept("AAAA STARK");
	
	Capital c2("Punjab",c1); // here call Composition
	c2.concept_print();
	c2.capital_print();

	Licenses c3;
	c3.location_print("Shop No. 4444 AAAA STARK Restaurant Moon Market, Lahore, 54000");
	c3.licenses_print();
	
	
	//----------------------------------- Contects --------------------------------------//
    //---------------------------------- DataFile4.h ----------------------------------//	 
	Contects c;         // Here Data Encapsulation and Abstruction
	c.sets("4444stark@gmil.com","+92 349 0175636");
	c.gets();
	//-------------------------------------------------------------------------------------------//	


/*
	//                           Second Way
    Concept c1;
	Capital c2("Punjab",c1); // here call Composition
	
	Business_Plan c3;
	c3.Name_Rustaurant();
	c3.Business_Plan_print();
	c3.concept("AAAA STARK");
	c3.concepts();
	c2.capital_print();  // print a Capital so, call (c2)
	c3.location_print("Shop No. 4444 AAAA STARK Restaurant Moon Market, Lahore, 54000");
	c3.licenses_print();
	
	//----------------------------------- Contects --------------------------------------//
    //---------------------------------- DataFile4.h ----------------------------------//	 
	Contects c;         // Here Data Encapsulation and Abstruction
	c.sets("4444stark@gmil.com","+92 349 0175636");
	c.gets();
	//-------------------------------------------------------------------------------------------//	
	
	
*/	
	cout<<"\n\n";
	
//-------------------------------- Staff --------------------------------------//
//----------------------------- DataFile2.h ----------------------------------//


	//                           First Way
    Staff_Business s1;
    s1.Detail_Staff();
    s1.Manager();
    s1.Chefs();
    s1.Cooks();
    s1.Dishwashers();
    s1.Serves();
    s1.Hosts();
    s1.Bartenders();
    s1.save_data();
 

/*  
    //                           Second Way   (Classes Pointer use here)
    Staff_Business *s2=new Staff_Business();
    s2->Detail_Staff();
    s2->Manager();
    s2->Chefs();
    s2->Cooks();
    s2->Dishwashers();
    s2->Serves();
    s2->Hosts();
    s2->Bartenders();
    s2->save_data();
*/	
	cout<<"\n\n";


//-------------------------------- Design and Layout --------------------------------------//
//---------------------------------- DataFile3.h ----------------------------------//
	   
	string str1,str2,str3,str4,str5,str6,str7,str8,str9;
	str1="Various group seating.Wait Staff Pckup Area and Kitchen equipment\nas given w/Sushi serving area w/stools.";
	str2="Equipment as given and Extra refrigorators.";
	str3="Combo Freezer / Cooler 6x6 & 6x8";
	str4="Men and Women Washrooms. Dishwah area. Walkway to washrooms";
	str5="Bench seat 4 or 6. 3 Sculpture alcove for decor of room.\nSoun pads on walls for decor and practicality.";
	str6="Layout of Right sides (Group seating and Kitchen equipment and Wait Staff).";
	str7="Layout of Right sides second porsition\n(Refrigorators and Given Equipment and Combo Freezer).";
	str8="Layout of Left sides second porsition\n(Men&Women Washrooms and Dishwash area and Walkway Washrooms).";
	str9="Layout of Left sides (Bench Seat and 3 Sculpture and Sound Pads).";
	
	
/*	
	//                           First Way
	Layout_Design ld(str1,str2,str3,str4,str5,str6,str7,str8,str9);
    //					ld.Layout_Design_print();   // here your chocice.
	Layout_Design ld1(ld);
	ld1.Layout_Design_print();
*/	
    //                           Second Way      (Copy Constructor with Pointer Classes)
	  
    Layout_Design *ld2=new Layout_Design(str1,str2,str3,str4,str5,str6,str7,str8,str9);
    Layout_Design *ld3=new Layout_Design(*ld2);
    ld3->Layout_Design_print();
	
	cout<<"\n\n";
	
	
//----------------------------------- Equipment --------------------------------------//
//---------------------------------- DataFile3.h ----------------------------------//

	
	//                           First Way
	Equipment eq1;
	eq1.Equipments();
	eq1.Print1_5();
	eq1.Print6_8();
	eq1.Print9_14();
	eq1.Print15_19();
	eq1.Print20_24();
	eq1.Print25_29();
	eq1.Print30_33();
	eq1.data_sets_1();


/*
	//                           Second Way (Compositions)
	Equipment eq2;
	Equipment_System eq3(eq2);
	eq3.Equipment_set();
	eq3.Equipment_prints();
*/	

	cout<<"\n\n";
	
	
//----------------------------------- Menu --------------------------------------//
//---------------------------------- DataFile.h ----------------------------------//	
	
	Menue_1 n1;
	cout<<"\n\n\t\t-------- RESTAURANT MANAGEMENT SYSTEM ---------\n\n";
	cout<<"\n\n\t\t--------------- CHOP AND SUEY -----------------\n\n";

	n1.outfile<<"\n\n\t\t-------- RESTAURANT MANAGEMENT SYSTEM ---------\n\n";
	n1.outfile<<"\n\n\t\t--------------- CHOP AND SUEY -----------------\n\n";

	n1.Food_1();
	cout<<"\n\t------------------------ Menue Details ---------------------\n\n";
	n1.outfile<<"\n\t------------------------ Menue Details ---------------------\n\n";

cout<<"1:  ";   n1.menue_1();
cout<<"2:  ";	n1.menue_2();
cout<<"3:  ";	n1.menue_3();
cout<<"4:  ";	n1.menue_4();
cout<<"5:  ";	n1.menue_5();
cout<<"6:  ";	n1.menue_6();
cout<<"7:  ";	n1.menue_7();
cout<<"8:  ";	n1.menue_8();
cout<<"9:  ";	n1.menue_9();
cout<<"10:  ";	n1.menue_10();
cout<<"11:  ";	n1.menue_11();
cout<<"12:  ";	n1.menue_12();
cout<<"13:  ";	n1.menue_13();
	cout<<"\n\n\n\t|||||||||||||||||--- AAAA STARK RESTAURANT---||||||||||||||||\n\n\n";
	n1.outfile<<"\n\n\n\t|||||||||||||||||--- AAAA STARK RESTAURANT---||||||||||||||||\n\n\n";

	cout<<"\n\t------------------- Here you can Menu choice ---------------\n\n";
	n1.outfile<<"\n\t------------------- Here you can Menu choice ---------------\n\n";

	cout<<"\n\t------------------- Choice limited in Menu 4 ---------------\n\n";
	n1.outfile<<"\n\t------------------- Choice limited in Menu 4 ---------------\n\n";

	cout<<"\n\t------------------ Your choice can select any 4 ------------\n\n";
	n1.outfile<<"\n\t------------------ Your choice can select any 4 ------------\n\n";
	
	n1.outfile<<"\n\t----------------------- Welcome Mr. / Ms. ------------------\n\n";
	cout<<"\n\t----------------------- Welcome Mr. / Ms. ------------------\n\n";
	
	
	
//----------------------------------- Name of Customer --------------------------------------//
//---------------------------------- DataFile4.h ----------------------------------//	

	Customer2 cu(); // here call constructor.

	Customer1 *cu1;   // case polymorphism
	Customer2 cu2; // case polymorphism
	cu1=&cu2; // case polymorphism
	cu1->sets_detail(); // case polymorphism
	cu1->gets_detail(); 				// runtime use polymorphism
	
//-------------------------------------------------------------------------------------------//	
	
	cout<<"\n\t------------------ I hope you enjoy these Menu -------------\n\n";
	n1.outfile<<"\n\t------------------ I hope you enjoy these Menu -------------\n\n";
	
	char chr;
	do{
		n1.menu_select_1();
		n1.menu_num1();
		n1.menu_num2();
		n1.menu_num3();
		n1.menu_num4();
		n1.menu_num1_1();
		n1.menu_num2_2();
		n1.menu_num3_3();
		n1.menu_num4_4();
		n1.menu_bill();
		
		cout<<"\nDo you want have continue.[y/n or Y/N] : ";
		n1.outfile<<"\nDo you want have continue.[y/n or Y/N] : ";
		cin>>chr; n1.outfile<<chr;
		if(chr=='n'||chr=='N'){
			exit(0);
		}
		cout<<endl; n1.outfile<<endl;
	}while((chr=='y') || (chr=='Y'));


	cout<<"\n\n";
	return 0;
}

