#include<iostream>
#include<string>
using namespace std;
	
	class Income ;
	class HouseHoldBill ;
	class Livingcost ;
	class familyandfriends ;
	class travelAndLeisure;
	
	class Income{
		
		private : 
		
		int amount;
		int num;
		int time;
		int total;
		string name;
		
		public : 
		
		Income() : total(0) {}

		void displaytime(){
			
		cout<<"Enter the time period first to set budget manager : "<<endl;
		cout<<" 1) Week "<<endl;
		cout<<" 2) Month "<<endl;
		cout<<" 3) Year "<<endl<<endl;
		cin>>time;
		
		if(time==1){
			cout<<"One Week Is The Time For Budget Management"<<endl<<endl<<endl;
		}
		if(time==2){
			cout<<"One Month Is The Time For Budget Management "<<endl<<endl<<endl;
				}
		if(time==3){
			cout<<"One Year Is The Time For Budget Management"<<endl<<endl<<endl;
		}
		
		}
		
		
		void pay(){
			
		cout<<"\t\t\t\t\tENTER THE INCOME SOURCES FIRST "<<endl<<endl<<endl;
		cout<<"\t\t\t\t\tPay After tax : "<<endl;
		cout<<"\t\t\t\t\tIncome From Self-Imployement "<<endl;
		cout<<"\t\t\t\t\tStatutory Sick Pay"<<endl;
		cout<<"\t\t\t\t\tStatutory Maternity Pay"<<endl<<endl;
			
		
		cout<<"Enter the Pay after tax : ";
		cin>>amount;
		total+=amount;	
		cout<<"Enter the income from self imployment : ";
		cin>>amount;
		total+=amount;
		cout<<"Enter the statutory sick pay : ";
		cin>>amount;
		total+=amount;
		cout<<"Enter the statutory maternity pay : ";
		cin>>amount;
		total+=amount;	
		cout<<endl<<endl;
		
	}
	
	    void BenefitAndTax(){
		
	    	
	    cout<<"\t\t\t\t\t Job Seekers Allowance "<<endl;
	    cout<<"\t\t\t\t\t Working Tax Credit "<<endl;
		cout<<"\t\t\t\t\t Income Support "<<endl;
		cout<<"\t\t\t\t\t Child Benefit "<<endl;
		cout<<"\t\t\t\t\t Disability Living allowance "<<endl;
		cout<<"\t\t\t\t\t Attandence Allowance "<<endl;
		cout<<"\t\t\t\t\t Carers Allowance"<<endl;
		cout<<"\t\t\t\t\t Housing Benefit"<<endl;
		cout<<"\t\t\t\t\t Maternity Allowance"<<endl<<endl;
		
		cout<<" Enter Job Seekers Allowance : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Working Tax Credit : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Income Support : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Child Benefit : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Disability Living allowance : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Attandence Allowance : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Carers Allowance : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Housing Benefit : ";
		cin>>amount;
		total+=amount;
		cout<<" Maternity Allowance : ";
		cin>>amount;
		total+=amount;
		cout<<endl<<endl;
	}
		
	void pension(){
		
		cout<<"\t\t\t\t\t State pension "<<endl;
		cout<<"\t\t\t\t\t Workplace Tension "<<endl;
		cout<<"\t\t\t\t\t Private Pension or annuity "<<endl;
		cout<<"\t\t\t\t\t Pension Credit "<<endl<<endl;
		
		cout<<" Enter State pension : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Workplace Tension : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Private Pension or annuity : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Pension Credit : ";
		cin>>amount;
		total+=amount;
		cout<<endl<<endl;
		
	}
	
	void OtherIncome(){
		
		cout<<"\t\t\t\t\t Income From Savings "<<endl;
		cout<<"\t\t\t\t\t Board Or Rent "<<endl;
		cout<<"\t\t\t\t\t Child Maintance "<<endl;
		cout<<"\t\t\t\t\t Student Loans "<<endl;
		cout<<"\t\t\t\t\t Other Financial Support "<<endl;
		cout<<"\t\t\t\t\t Gift From Family And Friends "<<endl<<endl;
		
		cout<<" Enter Income From Savings : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Board Or Rent : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Child Maintance : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Student Loans : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Other Financial Support : ";
		cin>>amount;
		total+=amount;
		cout<<" Enter Gift From Family And Friends : ";
		cin>>amount;
		total+=amount;
		cout<<endl<<endl;
	}
	void additionalItem(){
		int a;
		cout<<"Enter The Addiional Item  "<<endl;
		cout<<"Enter How Many Additional Source You Want To added : ";
		cin>>a;
		for(int i=0;i<a;i++){
			
		cout<<"Enter The Name Of The Additional Source Of The Income : ";
		cin>>name;
		cout<<"Enter The Price Of Additional Source : ";
		cin>>amount;
		total+=amount;
	}
	cout<<endl<<endl;
	}
	 void totalIncome() {
        string period;
        if (time == 1) {
        	
            period = "Week";
            
        } else if (time == 2) {
        	
            period = "Month";
            
        } else if (time == 3) {
        	
            period = "Year";
            
        } else {
            period = "Unknown period";
        }

        cout << "THE TOTAL AMOUNT OF INCOME IS : " << total << " IN A TIME PERIOD OF :  " << period << endl<<endl;
       
    }
    
    
    friend void summary( Income&,  HouseHoldBill&,  Livingcost&,  familyandfriends&,  travelAndLeisure&);
    
};
	
		class HouseHoldBill{
		
		private : 
		int money;
		string name1;
		int addx;
		
		public : 
		
		HouseHoldBill() : addx(0) {}
		
		void Mortage(){
			
			cout<<"\t\t\t\t\tMortage Payment"<<endl;
			cout<<"\t\t\t\t\tRent"<<endl;
			cout<<"\t\t\t\t\tMortage Endowment"<<endl;
			cout<<"\t\t\t\t\tMortage Life Insurance"<<endl;
			cout<<"\t\t\t\t\tPayment Protection "<<endl<<endl;
			
			cout<<"Enter the mortage payment : ";
			cin>>money;
			addx+=money;
			cout<<"Enter the rent : ";
			cin>>money;
			addx+=money;
			cout<<"Enter the mortage endowment : ";
			cin>>money;
			addx+=money;
			cout<<"Enter the mortage life insurance : ";
			cin>>money;
			addx+=money;
			cout<<"Enter payment protection insurance : ";
			cin>>money;
			addx+=money;
			cout<<endl<<endl;
		}	
		void property(){
			
			cout<<"\t\t\t\t\tGround Rent"<<endl;
			cout<<"\t\t\t\t\tServices Charges"<<endl<<endl;
			
			cout<<"Enter the ground rent : ";
			cin>>money;
			addx+=money;
			cout<<"Enter the services charges : ";
			cin>>money;
			addx+=money;
			cout<<endl<<endl;
			
					}
					
		void Insurance(){
			
			cout<<"\t\t\t\t\tBuilding Insurance "<<endl<<endl;
			
			cout<<"Enter the building insurance : ";
			cin>>money;
			addx+=money;
			cout<<endl<<endl;
			
		}
		
		void Utilities(){
			
			cout<<"\t\t\t\t\tCouncil Tax or Rates"<<endl;
			cout<<"\t\t\t\t\tGas"<<endl;
			cout<<"\t\t\t\t\tElectricity"<<endl;
			cout<<"\t\t\t\t\tOther household fuel"<<endl;
			cout<<"\t\t\t\t\tWater"<<endl;
			cout<<"\t\t\t\t\tHome phone"<<endl;
			cout<<"\t\t\t\t\tMobile phones"<<endl;
			cout<<"\t\t\t\t\tInternet/broadband"<<endl;
			cout<<"\t\t\t\t\tCleaner, window cleaner, etc"<<endl;
			cout<<"\t\t\t\t\tHome maintenance"<<endl;
			cout<<"\t\t\t\t\tGarden maintenance"<<endl;
			cout<<"\t\t\t\t\tAppliance rental"<<endl<<endl;
			
			cout<<"Enter Council Tax or Rates : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Gas : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Electricity : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Other household fuel : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Water : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Home phone : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Mobile phones : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Internet/broadband : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Cleaner, window cleaner, etc : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Home maintenance : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Garden maintenance : ";
			cin>>money;
			addx+=money;
			cout<<"Enter Appliance rental : ";
			cin>>money;
			addx+=money;
			cout<<endl<<endl;
			
		}
		void Additional(){
			
		int a;
		cout<<"Enter The Addiional Item  "<<endl;
		cout<<"Enter How Many Additional Source You Want To added : ";
		cin>>a;
		for(int i=0;i<a;i++){
			
		cout<<"Enter The Name Of The Additional Source Of The Income : ";
		cin>>name1;
		cout<<"Enter The Price Of Additional Source : ";
		cin>>money;
		addx+=money;
	}
	cout<<endl<<endl;
			
		}
		
		void Result(){
			
			cout << "THE TOTAL AMOUNT OF HOUSE HOLD EXPENSE IS :  " << addx<<endl<<endl;
		
		}
		
	
    
			friend void summary( Income&,  HouseHoldBill&,  Livingcost&,  familyandfriends&,  travelAndLeisure&);
		};
		
		class Livingcost{
			
			private : 
			
			int money2;
			string name2;
			int addx1;
			
			public : 
			
			Livingcost() : addx1(0) {}
			void FoodDrinks(){
				
				cout<<"\t\t\t\t\tGrocery Shoping "<<endl;
				cout<<"\t\t\t\t\tTake Aways "<<endl;
				cout<<"\t\t\t\t\tCiggrate and Tobbaco "<<endl<<endl;
				
				cout<<"Enter Grocery Shoping : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Take Aways : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Ciggrate and Tobbaco : ";
				cin>>money2;
				addx1+=money2;
				
			}
			
			void Work(){
				
				cout<<"\t\t\t\t\tLunch Snacks "<<endl;
				cout<<"\t\t\t\t\tTake Away Coffees Or Tea "<<endl;
				cout<<"\t\t\t\t\tProfessional Fees"<<endl<<endl;
				
				cout<<"Enter Lunch Snacks : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Take Away Coffees Or Tea : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Professional Fees : ";
				cin>>money2;
				addx1+=money2;
				
			}
			
			void Clothes(){
				
				cout<<"\t\t\t\t\tChildrens Clothes "<<endl;
				cout<<"\t\t\t\t\tSchool Uniform "<<endl;
				cout<<"\t\t\t\t\tYour New Clothes "<<endl;
				cout<<"\t\t\t\t\tShoes "<<endl;
				cout<<"\t\t\t\t\tWashing Clothes "<<endl;
				
				cout<<"Enter Childrens Clothes expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter School Uniform expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Your New Clothes expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Shoes expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter washing Clothes expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<endl<<endl;
			}
			
			void HealthandBeauty(){
				
				cout<<"\t\t\t\t\tBeauty Treatment"<<endl;
				cout<<"\t\t\t\t\tToliteries "<<endl;
				cout<<"\t\t\t\t\tPrescription Medicine "<<endl;
				
				cout<<"Enter Beauty Treatment expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Toliteries expense : ";
				cin>>money2;
				addx1+=money2;
				cout<<"Enter Prescription Medicine expense : ";
				cin>>money2;
				addx1+=money2;
				
			}
			
			void Additional1(){
			
		int a;
		cout<<"Enter The Addiional Item  "<<endl<<endl;
		
		cout<<"Enter How Many Additional Source You Want To added : ";
		
		cin>>a;
		for(int i=0;i<a;i++){
			
		cout<<"Enter The Name Of The Additional Source Of The Income : ";
		cin>>name2;
		cout<<"Enter The Price Of Additional Source : ";
		cin>>money2;
		addx1+=money2;
	}
	cout<<endl<<endl;
			
		}
		
		void Display2(){
			
			cout<<"THE TOTAL AMOUNT OF LIVING COST IS  : "<<addx1<<endl<<endl;
		
		}
		
			friend void summary( Income&,  HouseHoldBill&,  Livingcost&,  familyandfriends&,  travelAndLeisure&);
		};
		
		class familyandfriends{
			
			private : 
			
			int money3;
			string name3;
			int addx2=0;
			
			public : 
					
			void Children(){
				
				cout << "\t\t\t\t\t Nappies and Baby Items" << endl;
    			cout << "\t\t\t\t\t Activities & Clubs" << endl;
    			cout << "\t\t\t\t\t Toys & Treats" << endl;
   			    cout << "\t\t\t\t\t Pocket Money" << endl;
    			cout << "\t\t\t\t\t Maintenance or Child Support" << endl;
    			
    			cout << "Enter Nappies and Baby Items Expense : " ;
    			cin>>money3;
    			addx2+=money3;
    			cout << "Enter Activities & Clubs Expense : " ;
    			cin>>money3;
    			addx2+=money3;
    			cout << "Enter Toys & Treats Expense : " ;
				cin>>money3;
				addx2+=money3;
   			    cout << "Enter Pocket Money Expense : " ;
   			    cin>>money3;
   			    addx2+=money3;
    			cout << "Enter Maintenance or Child Support Expense : " ;
    			cin>>money3;
    			addx2+=money3;
    			
			}
			
			void other (){
				
				cout<<"\t\t\t\t\tSchool Fees "<<endl;
				cout<<"\t\t\t\t\tAfter School Clubs "<<endl;
				cout<<"\t\t\t\t\tRelatives Support "<<endl;
				cout<<"\t\t\t\t\tDonations "<<endl<<endl;
				
				cout<<"Enter School Fees expense : ";
				cin>>money3;
				addx2+=money3;
				cout<<"Enter After School Clubs expense : ";
				cin>>money3;
				addx2+=money3;
				cout<<"Enter Relatives Support expense : ";
				cin>>money3;
				addx2+=money3;
				cout<<"Enter the Donations expense : ";
				cin>>money3;
				addx2+=money3;
				cout<<endl<<endl;
			}
			
			void Additional1(){
			
		int a;
		cout<<"Enter The Addiional Item  "<<endl;
		
		cout<<"Enter How Many Additional Source You Want To added : ";
		
		cin>>a;
		for(int i=0;i<a;i++){
			
		cout<<"Enter The Name Of The Additional Source Of The Income : ";
		cin>>name3;
		cout<<"Enter The Price Of Additional Source : ";
		cin>>money3;
		addx2+=money3;
	}
	cout<<endl<<endl;
			
		}
		
		void Display2(){
			
			cout<<"THE TOTAL EXPENSE OF FAMILY AND FRIEND IS : "<<addx2<<endl<<endl;
		
		}
		 
		friend void summary(Income&,  HouseHoldBill&,  Livingcost&,  familyandfriends&,  travelAndLeisure&);
		};
		
		
		class travelAndLeisure {
   private:
    int money4;
    string name4;
    int addx3;

   public:
    travelAndLeisure() : addx3(0) {}

    void carcost() {
        cout << "\t\t\t\t\tPetrol/ Diesel" << endl;
        cout << "\t\t\t\t\tBreak Down Cover" << endl;
        cout << "\t\t\t\t\tCar Insurance" << endl;
        cout << "\t\t\t\t\tCar Loan" << endl;
        cout << "\t\t\t\t\tMaintenance And Repair" << endl;

        cout << "Enter Petrol/ Diesel Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Break Down Cover Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Car Insurance Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Car Loan Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Maintenance And Repair Expense: ";
        cin >> money4;
        addx3 += money4;
    }

    void Publictransport() {
        cout << "\t\t\t\t\tBus Travel" << endl;
        cout << "\t\t\t\t\tTrain Travel" << endl;
        cout << "\t\t\t\t\tTaxis Travel" << endl;
        cout << "\t\t\t\t\tAir Travel" << endl << endl;

        cout << "Enter Bus Travel Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Train Travel Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Taxis Travel Expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Air Travel Expense: ";
        cin >> money4;
        addx3 += money4;
    }

    void Entertainment() {
        cout << "\t\t\t\t\tCinema Trips" << endl;
        cout << "\t\t\t\t\tNight Outs" << endl;
        cout << "\t\t\t\t\tHobbies" << endl;
        cout << "\t\t\t\t\tEating Out" << endl;
        cout << "\t\t\t\t\tSport And Gym" << endl;

        cout << "Enter Cinema Trips expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Night Outs expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Hobbies expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Eating Out expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Sport And Gym expense: ";
        cin >> money4;
        addx3 += money4;
    }

    void OnnOff() {
        cout << "\t\t\t\t\tBirthdays" << endl;
        cout << "\t\t\t\t\tChristmas" << endl;
        cout << "\t\t\t\t\tWeddings" << endl;
        cout << "\t\t\t\t\tHolidays" << endl;
        cout << "\t\t\t\t\tTrips" << endl;
        cout << "\t\t\t\t\tAdditional money" << endl;

        cout << "Enter Birthdays expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Christmas expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Weddings expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Holidays expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Trips expense: ";
        cin >> money4;
        addx3 += money4;
        cout << "Enter Additional money expense: ";
        cin >> money4;
        addx3 += money4;
    }

    void Additional1() {
        int a;
        cout << "Enter The Additional Item" << endl ;
        cout << "Enter How Many Additional Sources You Want To Add: ";
        cin >> a;
        for (int i = 0; i < a; i++) {
            cout << "Enter The Name Of The Additional Source Of The Income: ";
            cin >> name4;
            cout << "Enter The Price Of Additional Source: ";
            cin >> money4;
            addx3 += money4;
        }
        cout << endl << endl;
    }

    void Display2() {
        cout << "THE TOTAL EXPENSE OF TRAVEL AND LEISURE IS : " << addx3 << endl << endl;
       
    }
    
    
    friend void summary( Income&,  HouseHoldBill&,  Livingcost&,  familyandfriends&,  travelAndLeisure&);
    		
	
};

void summary(Income& k, HouseHoldBill& a, Livingcost& i, familyandfriends& w, travelAndLeisure& n) {
		
		system("cls");
	
    cout << "\t\t\t\t\t\t  SUMMARY " << endl << endl;
    cout << "\t\t\t\t\tTHE TOTAL INCOME IS : " << k.total << endl << endl;
    cout << "\t\t\t\t\tTHE HOUSEHOLD EXPENSE IS : " << a.addx << endl << endl;
    cout << "\t\t\t\t\tTHE LIVING COST EXPENSE IS : " << i.addx1 << endl << endl;
    cout << "\t\t\t\t\tTHE FAMILY AND FRIENDS EXPENSE IS : " << w.addx2 << endl << endl;
    cout << "\t\t\t\t\tTHE TRAVEL AND LEISURE EXPENSE IS : " << n.addx3 << endl << endl;

    float totalExpenses = a.addx + i.addx1 + w.addx2 + n.addx3;
    cout << " THE TOTAL EXPENSE IS : " << totalExpenses << endl << endl;

    float savings = k.total - totalExpenses;
    cout << "THE SAVING AMOUNT IS : " << savings << endl << endl;

    
    cout << "\t\t\t\t\t\tEXPENSE BREAKDOWN:" << endl<<endl;
    if (k.total > 0) {
        cout << " Household: " << ((float)a.addx / k.total * 100) << "% of total income" << endl<<endl;
        cout << " Living Cost: " << ((float)i.addx1 / k.total * 100) << "% of total income" << endl<<endl;
        cout << " Family and Friends: " << ((float)w.addx2 / k.total * 100) << "% of total income" << endl<<endl;
        cout << " Travel and Leisure: " << ((float)n.addx3 / k.total * 100) << "% of total income" << endl<<endl;
    }

    
    if (k.total > 0) {
        float savingsRatio = (savings / k.total) * 100;
        cout << "SAVINGS RATIO: " << savingsRatio << "%" << endl<<endl;
    }

    
    if (savings > 0) {
        cout << "You have saved a good amount. Consider investing or saving more!" << endl<<endl;
    } else {
        cout << "Your expenses exceed your income. Consider reducing expenses." << endl<<endl;
    }

    if(k.time==2){
        cout << "MONTHLY/ANNUAL PROJECTIONS:" << endl<<endl;
        float monthlyProjection = totalExpenses * 12; 
        cout<< "Yearly Projection Based on Monthly Spending: " << monthlyProjection << endl<<endl;
}
}

int main() {
    cout << "   -------------------------------  WELCOME TO THE PERSONAL BUDGET TRACKER  -------------------------------" << endl << endl;
    cout << "1) Income\t\t\t2) House hold bills\t\t\t3) Living Cost" << endl << endl;
    cout << "4) Family And Friend\t\t5) Travel and leisure" << endl << endl << endl;

    cout << "\t\t\t\t\t First Enter The Income Sources To Manage It " << endl << endl;

    Income k;
    k.displaytime();
    k.pay();
    k.BenefitAndTax();
    k.pension();
    k.OtherIncome();
    k.additionalItem();
    k.totalIncome();

    cout << "\t\t\t\t\tNOW ENTER THE DETAILS ABOUT EXPENSES " << endl << endl << endl;

    
    HouseHoldBill a;
    Livingcost i;
    familyandfriends w;
    travelAndLeisure n;

    bool continueExpense = true;

    while (continueExpense) {
        int choice;

        cout << "\t\t\t2) House hold bills\t\t3) Living Cost" << endl;
        cout << "\t\t\t4) Family And Friend\t\t5) Travel and leisure" << endl << endl << endl;

        cout << "Choose a category to enter expenses: ";
        cin >> choice;

        switch (choice) {
            case 2:
                a.Mortage();
                a.property();
                a.Insurance();
                a.Utilities();
                a.Additional();
                a.Result();
                break;
            case 3:
                i.FoodDrinks();
                i.Work();
                i.Clothes();
                i.HealthandBeauty();
                i.Additional1();
                i.Display2();
                break;
            case 4:
                w.Children();
                w.other();
                w.Additional1();
                w.Display2();
                break;
            case 5:
                n.carcost();
                n.Publictransport();
                n.Entertainment();
                n.OnnOff();
                n.Additional1();
                n.Display2();
                break;
            default:
                cout << "Invalid choice, please choose a valid category." << endl;
                break;
        }

        char continueChoice;
        cout << "Do you want to enter another expense category? (y/n): ";
        cin >> continueChoice;
        cout<<endl<<endl;
        if (continueChoice == 'n' || continueChoice == 'N') {
            continueExpense = false;
        }
    }

    summary(k, a, i, w, n);

    return 0;
}
