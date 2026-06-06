#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float totalShopsBill = 0.0;

// Structure to represent a Book
struct Book {
    string title;
    string author;
    float price;  
    string link;  
};

// Function for converting string into numbers
bool isNumber(const string& str);


// Function to print "WELCOME TO MARKET" with Unicode box-drawing characters
void printWelcomeToMarket();

void chooseShop();

float garment();

float bakery();

void bookStore();

// Function to display types of wear
void showTypeOfWear() {
    cout << "\nWhat type of wear are you looking for?" << endl;
    cout << "1. Party Wear" << endl;
    cout << "2. Casual Wear" << endl;
    cout << "3. Sports Wear" << endl<<endl;
    cout << "Choose 0 for returning back from choice of wears. " << endl;
//    int wearChoice;
//    cout << "Enter your choice : ";
//    cin >> wearChoice;
    
}

// Function to display the final summary and farewell message
void displaySummary(double sum) {
	totalShopsBill += sum;
    cout << "\nThank you for visiting our Garment Shop!" << endl;
    cout << "We hope you enjoyed your shopping experience." << endl;
    cout << "Your total amount to be paid: Rs"  << sum << endl;
    cout << "We look forward to your next visit. Goodbye!" << endl<<endl;
}

int main(){
	printWelcomeToMarket();
	
	chooseShop();
	cout<<endl<<endl<<"\nYOUR TOTAL BILL FROM THE MARKET IS "<<totalShopsBill;
	return 0;
}

// Function to print "WELCOME TO MARKET" with Unicode box-drawing characters
void printWelcomeToMarket() {
    // Each letter is represented using block characters and other Unicode symbols
    cout << "¦¦      ¦¦  ¦¦¦¦¦¦¦¦  ¦¦       ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦   ¦¦¦    ¦¦¦  ¦¦¦¦¦¦¦¦     ¦¦¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦  \n";
    cout << "¦¦      ¦¦  ¦¦        ¦¦       ¦¦         ¦¦     ¦¦   ¦¦ ¦¦¦¦ ¦¦  ¦¦               ¦¦     ¦¦     ¦¦        \n";
    cout << "¦¦  ¦¦  ¦¦  ¦¦¦¦¦¦¦   ¦¦       ¦¦         ¦¦     ¦¦   ¦¦  ¦¦  ¦¦  ¦¦¦¦¦¦¦          ¦¦     ¦¦     ¦¦   \n";
    cout << "¦¦ ¦¦¦¦ ¦¦  ¦¦        ¦¦       ¦¦         ¦¦     ¦¦   ¦¦      ¦¦  ¦¦               ¦¦     ¦¦     ¦¦        \n";
    cout << "¦¦¦    ¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦   ¦¦      ¦¦  ¦¦¦¦¦¦¦¦         ¦¦     ¦¦¦¦¦¦¦¦¦  \n";
    cout << "\n";
    cout << "¦¦¦    ¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦\   ¦¦   ¦¦¦  ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦    \n";
    cout << "¦¦ ¦¦¦¦ ¦¦  ¦¦    ¦¦  ¦¦   ¦¦¦  ¦¦ ¦¦     ¦¦           ¦¦          \n";
    cout << "¦¦  ¦¦  ¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦       ¦¦¦¦¦¦¦      ¦¦        \n";
    cout << "¦¦      ¦¦  ¦¦    ¦¦  ¦¦   \¦¦   ¦¦ ¦¦     ¦¦           ¦¦        \n";
    cout << "¦¦      ¦¦  ¦¦    ¦¦  ¦¦    ¦¦\  ¦¦   ¦¦¦  ¦¦¦¦¦¦¦¦     ¦¦      \n";
}

void chooseShop(){
	int chooseShop;
	cout<<"Which type of shopping you want to do?"<<endl;
	do{
		cout<<"1 for Garment shop "<<endl;
		cout<<"2 for Bakery shop "<<endl;
		cout<<"3 for Bookstore shop "<<endl;
		cout<<"0 for Your total bill "<<endl;
		cin>>chooseShop;
		
		if(!(chooseShop >= 0 && chooseShop < 4)){
			do{
				cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
				cin>>chooseShop;
			}while(!(chooseShop >= 0 && chooseShop < 4));
		}
		switch(chooseShop){
		
		case 1:{
			garment();
			break;
		}
			
		case 2:{
			bakery();
			break;	  
		}
		
		case 3:{
			bookStore();
			break;
		}
		
			}
	}while(chooseShop != 0);
}
float garment(){
	int choice;
	int sum = 0;
	
	do{
		cout << "\nWhat type of clothes are you looking for?" << endl;
        cout << "1. Ladies" << endl;
        cout << "2. Gents" << endl;
        cout << "3. Children" << endl;
        cout<<"\nChoose 0 for returning out from Garments. "<<endl;
		cout<<"choice: ";		cin>>choice;
		
		if(!(choice >= 0 && choice < 4)){
			do{
				cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
				cin>>choice;
			}while(!(choice >= 0 && choice < 4));
		}

		
		switch(choice){
			case 1:
			
			       // Ask for type of wear preference
                   showTypeOfWear();
                   
                   int wearChoice;
                   cout << "Enter your choice : ";
                   cin >> wearChoice;
                   
                    if(!(wearChoice >= 0 && wearChoice <= 3)){
						do{
							cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
							cin>>wearChoice;
						}while(!(wearChoice >= 0 && wearChoice <= 3));
					}
                   
                   switch(wearChoice){
                   	case 1:{
					
                   		cout<<"\nYou have chosen our party wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string partywearForWomen[10] = {"Velvet Suits" , "Embroidered Shawl Dresses" , "Anarkali Suits" , "Pishwas", "Kurtas with Heavy Dupatta","Long Coat Dresses", "Kaftan-Style Dresses","Lehenga Choli Sets","Tunics with Palazzo Pants","Jumpsuits with Traditional Embellishments"};
                   		int pricePerSuit[10] = { 12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 , 12000 , 12000};
                   		int partywearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<partywearForWomen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears: "<<endl;
				           cout<<"Choose number party wear for women suit: ";		
						   cin>>partywearChoice;
			               cout<<endl;
			               
							  if(!(partywearChoice >= 0 && partywearChoice <= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>partywearChoice;
								}while(!(partywearChoice >= 0 && partywearChoice <= 10));
							}
		
			               if(partywearChoice > 0 && partywearChoice<= 10){
					           sum += pricePerSuit[partywearChoice-1];
					           cout<<"RS: "<<pricePerSuit[partywearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(partywearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n\n "<<endl;	}
					
			         	}while(partywearChoice != 0); 												  
			           
					    break;}
						   
					 case 2:{
					
                   		cout<<"\nYou have chosen our casual wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string casualwearForWomen[10] = {"Knit Sweaters" , "Woolen Tunics" , "Layered Kurtis" , "Denim Jackets" , "Sweater Dresses" , "Fleece Leggings" , "Maxi Dresses" , "Sweatshirts" , "Puffer Jackets" , "Knit Scarves"};
                   		int pricePerSuit[10] = { 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000  };
                   		int casualwearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<casualwearForWomen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number casual wear for women suit: ";		
						   cin>>casualwearChoice;
			               cout<<endl;
			               
			               if(!(casualwearChoice >= 0 && casualwearChoice <= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>casualwearChoice;
								}while(!(casualwearChoice >= 0 && casualwearChoice <= 10));
							}
			               if(casualwearChoice > 0 && casualwearChoice<= 10){
					           sum += pricePerSuit[casualwearChoice-1];
					           cout<<"RS: "<<pricePerSuit[casualwearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(casualwearChoice != 0){
					            cout<<"\n\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(casualwearChoice != 0); 												 
			            break;}
					
					
						   
					case 3:{
					
                   		cout<<"\nYou have chosen our sports wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string sportswearForWomen[10] = {"Thermal Leggings", "Long-Sleeve Performance Tops", "Fleece Hoodies", "Padded Jackets", "Sweatpants", "Compression Tights", "Winter Running Shoes", "Windbreakers", "Base Layer Shirts", "Cold-Weather Sports Gloves"};
                   		int pricePerSuit[10] = { 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 };
                   		int sportswearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<sportswearForWomen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number sports wear for women suit: ";		
						   cin>>sportswearChoice;
			               cout<<endl;
			               if(!(sportswearChoice >= 0 && sportswearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>sportswearChoice;
								}while(!(sportswearChoice >= 0 && sportswearChoice<= 10));
							}
			               if(sportswearChoice > 0 && sportswearChoice<= 10){
					           sum += pricePerSuit[sportswearChoice-1];
					           cout<<"RS: "<<pricePerSuit[sportswearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(sportswearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(sportswearChoice != 0); 												  // case 1 ends here
			            break;}
					
						}
			case 2:
			
			       // Ask for type of wear preference
                   showTypeOfWear();
                   
//                   int wearChoice;
                   cout << "Enter your choice : ";
                   cin >> wearChoice;
                   
                   switch(wearChoice){          
			        case 1:{
					
                   		cout<<"\nYou have chosen our party wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string partywearForMen[10] = {"Sherwani", "Kurta-Pajama", "Three-Piece Suit", "Blazer with Trousers", "Nehru Jacket", "Pathani Suit", "Embroidered Waistcoat", "Tuxedo", "Dress Shirt with Chinos", "Jacket with Formal Pants"};
                   		int pricePerSuit[10] = { 12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 , 12000 , 12000};
                   		int partywearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<partywearForMen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number party wear for men suit: ";		
						   cin>>partywearChoice;
			               cout<<endl;
			               
			               if(!(partywearChoice >= 0 && partywearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>partywearChoice;
								}while(!(partywearChoice >= 0 && partywearChoice<= 10));
							}
			               
			               if(partywearChoice > 0 && partywearChoice<= 10){
					           sum += pricePerSuit[partywearChoice-1];
					           cout<<"RS: "<<pricePerSuit[partywearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(partywearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(partywearChoice != 0); 												 
			            break;}
						   
					case 2:{
						
                   		cout<<"\nYou have chosen our casual wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string casualwearForMen[10] = {"T-Shirts", "Jeans", "Polo Shirts", "Chinos", "Casual Shirts", "Sweatshirts", "Knitwear", "Linen Pants", "Denim Jackets", "Shorts"};
                   		int pricePerSuit[10] = { 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000  };
                   		int casualwearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<casualwearForMen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number casual wear for men suit: ";		
						   cin>>casualwearChoice;
			               cout<<endl;
			               
			                if(!(casualwearChoice >= 0 && casualwearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>casualwearChoice;
								}while(!(casualwearChoice >= 0 && casualwearChoice<= 10));
							}
			               if(casualwearChoice > 0 && casualwearChoice<= 10){
					           sum += pricePerSuit[casualwearChoice-1];
					           cout<<"RS: "<<pricePerSuit[casualwearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(casualwearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(casualwearChoice != 0); 												  // case 1 ends here
			            break;}
						 
					
						   
					case 3:{
					
                   		cout<<"\nYou have chosen our sports wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string sportswearForMen[10] = {"Thermal Leggings", "Long-Sleeve Compression Tops", "Fleece Hoodies", "Padded Sports Jackets", "Sweatpants", "Winter Running Shoes", "Windbreakers", "Base Layer Shirts", "Track Suits", "Cold-Weather Sports Gloves"};
                   		int pricePerSuit[10] = { 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 };
                   		int sportswearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<sportswearForMen[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number sports wear for men suit: ";		
						   cin>>sportswearChoice;
			               cout<<endl;
			               
			               if(!(sportswearChoice >= 0 && sportswearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>sportswearChoice;
								}while(!(sportswearChoice >= 0 && sportswearChoice<= 10));
							}
			               if(sportswearChoice > 0 && sportswearChoice<= 10){
					           sum += pricePerSuit[sportswearChoice-1];
					           cout<<"RS: "<<pricePerSuit[sportswearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(sportswearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(sportswearChoice != 0); 												  // case 2 ends here
			            break;}
					default:
					    continue;	
						}
						
			case 3:
				
			       // Ask for type of wear preference
                   showTypeOfWear();
                   
//                   int wearChoice;
                   cout << "Enter your choice : ";
                   cin >> wearChoice;
                   
                   switch(wearChoice){			
		           	case 1:{
					
                   		cout<<"\nYou have chosen our party wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string partywearForChildren[10] = {"Embroidered Kurtas", "Velvet Suits", "Sweater Dresses", "Dress Shirts with Trousers", "Puff Sleeve Dresses", "Jackets with Tights", "Sweater Sets", "Three-Piece Suits", "Fleece-Lined Tunics", "Cardigan Dresses"};
                   		int pricePerSuit[10] = { 12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 ,  12000 , 12000 , 12000};
                   		int partywearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<partywearForChildren[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number party wear for children suit: ";		
						   cin>>partywearChoice;
			               cout<<endl;
			               if(!(partywearChoice >= 0 && partywearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>partywearChoice;
								}while(!(partywearChoice >= 0 && partywearChoice<= 10));
							}
			               if(partywearChoice > 0 && partywearChoice<= 10){
					           sum += pricePerSuit[partywearChoice-1];
					           cout<<"RS: "<<pricePerSuit[partywearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl;
				          }
				           else if(partywearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(partywearChoice != 0); 												  // case 1 ends here
			            break;}
						   
					case 2:{
					
                   		cout<<"\nYou have chosen our casual wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string casualwearForChildren[10] = {"Fleece Jackets", "Sweater Sets", "Thermal Tops", "Jeans with Hoodies", "Knitted Cardigans", "Long-Sleeve T-Shirts", "Woolen Leggings", "Casual Dresses", "Puffer Jackets", "Track Suits"};
                   		int pricePerSuit[10] = { 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000 , 5000  };
                   		int casualwearChoice;
                   		do{
                   			int i;
                   		    for( i = 0; i < 10; ++i ){
					           cout<<i+1 <<" for "<<casualwearForChildren[i] <<" Price: " <<pricePerSuit[i]<<endl;
						   }
						   cout<<"\n0 for returning to type of wears. "<<endl;
				           cout<<"Choose number casual wear for Children suit: ";		
						   cin>>casualwearChoice;
			               cout<<endl;
			               
			               if(!(casualwearChoice >= 0 && casualwearChoice<= 10)){
								do{
									cout<<"INVALID CHOICE PLEASE ENTER FROM GIVEN: ";
									cin>>casualwearChoice;
								}while(!(casualwearChoice >= 0 && casualwearChoice<= 10));
							}
			               if(casualwearChoice > 0 && casualwearChoice< 11){
					           sum += pricePerSuit[casualwearChoice-1];
					           cout<<"RS: "<<pricePerSuit[casualwearChoice-1]<<" added to your bill, ";
					           cout<<"Your current bill is: "<<sum<<endl<<endl<<endl<<endl;
				          }
				           else if(casualwearChoice != 0){
					            cout<<"\nINVALID CHOICE, PLEASE ENTER VALID CHOICE:\n "<<endl;	}
					
			         	}while(casualwearChoice != 0); 	
						 											  // case 1 ends here
			            break;	}
						 
					
						   
					case 3:{
					
                   		cout<<"\nYou have chosen our sports wears! " << endl ;
                   		cout<<"Our collection is here: " << endl;
                   		string sportswearForChildren[10] = {"Thermal Leggings", "Fleece Hoodies", "Long-Sleeve T-Shirts", "Track Suits", "Sweatpants", "Winter Running Shoes", "Padded Jackets", "Base Layer Shirts", "Windbreakers", "Beanies"};
                   		int pricePerSuit[10] = { 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 , 6000 };
                   		int sportswearChoice;
                
