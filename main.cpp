#include <iostream>
#include <conio.h>
using namespace std;


	int quant;
	int days;
	int rEturn_room;
	int changeP;
	string changeF;
	string currency = "pound";		
	//QUANTITY
	int Qroom = 0, Qfood1 = 0, Qfood2 = 0, Qfood3 = 0, Qfood4 = 0, Qfood5 = 0;
	//SOLD & RENT ITEMS
	int Rroom = 0, Sfood1 = 0, Sfood2 = 0, Sfood3 = 0, Sfood4 = 0, Sfood5 = 0;
	//TOTAL PRICE
	int total_room = 0, total_food1 = 0, total_food2 = 0, total_food3 = 0,total_food4 = 0, total_food5 = 0;
	//ITEM PRICE
	int Proom = 600, Pfood1 = 30, Pfood2 = 40, Pfood3 = 20, Pfood4 = 25, Pfood5 = 50; 
	//FOOD NAME
	string food1 = "pasta", food2 = "burger", food3 = "noodles", food4 = "cola", food5 = "chicken-roll"; 
	
//FUNCTION	
void EnterQ();
void main_menu();
void PriceOFitems();
void items_menu();
void information_menu();
int changePrice();
void foodMenu();
string changefood();


int main() 
{	

	EnterQ();
	
	m :
	system ("cls");
	
	main_menu();
	
	switch(getch())
	{
			//ROOM
			//RENT
		case '1':
			cout << "\n\n 1) Rent.\n 2) Return room.\n 3) Return.";
			c:
			switch(getch()){
				case '1':
					cout << "\n\nEnter the number of rooms : ";
					cin >> quant;
					
					if(Qroom-Rroom >= quant){
						Rroom+=quant;
						cout << "Enter the number of days : ";
						cin >> days;
						total_room = total_room + (quant*days*Proom);
						cout << "\ndone!\nthe price is " << (quant*days*Proom) << " " << currency << ".";
						cout << "\npress (0) to return!";
						b :
						switch(getch()){
						    case '0':
						     	goto m;
						    default :
								 goto b;
						}
						}else{
							cout << "\nonly " << Qroom-Rroom << " rooms are available";
							cout << "\npress (0) to return!";
						    switch(getch()){
						    case '0':
						     	goto m;
						    default :
								 goto b;
						}
						}
					break;
					//RETURN ROOM
			    case '2':
				    cout << "\n\nEnter the number of rooms : "; 
				    cin >> rEturn_room;
				    if(rEturn_room>Rroom || rEturn_room<0){
				    	cout << "error, we had " << Rroom << " in rent!";
				    	cout << "\npress (0) to return!";
						    switch(getch()){
						    	case '0':
						     		goto m;
						    	default :
									 goto b;
				 			}
						 }else{
						Rroom-=rEturn_room;
						cout << "done!, we had " << Qroom-Rroom << " rooms available for rent.";
						cout << "\npress (0) to return!";
						switch(getch()){
						    case '0':
						     	goto m;
						    default :
								 goto b;
					}			    									
			}
				case '3':
					goto m;
				default :
					goto c;			
	}
			break;
	
			//food1
			//ORDER
		case '2':
			cout << "\n\n 1) Order\n 2) Refill.\n 3) Return.";
			d:
			switch(getch()){
				case '1':
					cout << "\n\nEnter " <<food1<< " quantity : ";
					cin >> quant;
					
					if(Qfood1 >=quant){
						Sfood1+=quant;
						Qfood1-=quant;
						total_food1 = total_food1 + (quant*Pfood1);
						cout << "\ndone!\nthe price is " << quant*Pfood1 << " " << currency << ".";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}else{
						cout << "\nOnly " << Qfood1 << food1 <<" remaining in hotel !";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}
					//REFILL
				case '2':
					cout <<"\n\nEnter " << food1 << " quantaity : ";
					cin >> quant;
					Qfood1+=quant;
					cout << "\ndone!,we had " << Qfood1 << " pieces of " << food1 << ".";
					cout << "\npress (0) to return!";
					switch(getch()){
					    case '0':
					     	goto m;
					    default :
							goto b;
							}
				case '3':
					goto m;
				default :
					goto d;	
			}
			break;
			
			//food2
			//ORDER
		case '3':
			cout << "\n\n 1) Order\n 2) Refill.\n 3) Return.";
			e:
			switch(getch()){
				case '1':
					cout << "\n\nEnter " << food2 << " quantity : ";
					cin >> quant;
					
					if(Qfood2 >=quant){
						Sfood2+=quant;
						Qfood2-=quant;
						total_food2 = total_food2 + (quant*Pfood2);
						cout << "\ndone!\nthe price is " << quant*Pfood2 << " " << currency << ".";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
	
									 goto b;
							}
					}else{
						cout << "\nOnly " << Qfood2 << food2 << " remaining in hotel !";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}
					//REFILL
				case '2':
					cout <<"\n\nEnter " << food2 << " quantaity : ";
					cin >> quant;
					Qfood2+=quant;
					cout << "\ndone!,we had " << Qfood2 << " pieces of " << food2 << ".";
					cout << "\npress (0) to return!";
					switch(getch()){
					    case '0':
					     	goto m;
					    default :
							 goto b;
							}
				case '3':
					goto m;
				default :
					goto e;	
			}
			break;
			
			//food3
			//ORDER
		case '4':
			cout << "\n\n 1) Order\n 2) Refill.\n 3) Return.";
			f:
			switch(getch()){
				case '1':
					cout << "\n\nEnter " << food3 << " quantity : ";
					cin >> quant;
					
					if(Qfood3 >=quant){
						Sfood3+=quant;
						Qfood3-=quant;
						total_food3 = total_food3 + (quant*Pfood3);
						cout << "\ndone!\nthe price is " << quant*Pfood3 << " " << currency << ".";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}else{
						cout << "\nOnly " << Qfood3 << food3 << " remaining in hotel !";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}
					//REFILL
				case '2':
					cout <<"\n\nEnter " << food3 << " quantaity : ";
					cin >> quant;
					Qfood3+=quant;
					cout << "\ndone!,we had " << Qfood3 << " pieces of " << food3 << ".";
					cout << "\npress (0) to return!";
					switch(getch()){
					    case '0':
					     	goto m;
					    default :
							 goto b;
							}
				case '3':
					goto m;
				default :
					goto f;
			}
			break;
			
			//food4
			//ORDER
		case '5':
			cout << "\n\n 1) Order\n 2) Refill.\n 3) Return.";
			g:
			switch(getch()){
				case '1':
					cout << "\n\nEnter " << food4 << " quantity : ";
					cin >> quant;
					
					if(Qfood4 >=quant){
						Sfood4+=quant;
						Qfood4-=quant;
						total_food4 = total_food4 + (quant*Pfood4);
						cout << "\ndone!\nthe price is " << quant*Pfood4 << " " << currency << ".";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}else{
						cout << "\nOnly " << Qfood4 << food4 << " remaining in hotel !";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :;
									 goto b;
							}
					}
					//REFILL
				case '2':
					cout <<"\n\nEnter " << food4 << " quantaity : ";
					cin >> quant;
					Qfood4+=quant;
					cout << "\ndone!,we had " << Qfood4 << " pieces of " << food4 << ".";
					cout << "\npress (0) to return!";
					switch(getch()){
					    case '0':
					     	goto m;
					    default :
							 goto b;
							}
				case '3':
					goto m;
				default :
					goto g;
			}
			break;
			
			//food5
			//ORDER
		case '6':
			cout << "\n\n 1) Order\n 2) Refill.\n 3) Return.";
			h:
			switch(getch()){
				case '1':
					cout << "\n\nEnter " << food5 << " quantity : ";
					cin >> quant;
					
					if(Qfood5 >=quant){
						Sfood5+=quant;
						Qfood5-=quant;
						total_food5 = total_food5 + (quant*Pfood5);
						cout << "\ndone!\nthe price is " << quant*Pfood5 << " " << currency << ".";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}else{
						cout << "\nOnly " << Qfood5 << food5 << " remaining in hotel !";
						cout << "\npress (0) to return!";
							switch(getch()){
							    case '0':
							     	goto m;
							    default :
									 goto b;
							}
					}
					//REFILL
				case '2':
					cout <<"\n\nEnter " << food5 << " quantaity : ";
					cin >> quant;
					Qfood5+=quant;
					cout << "\ndone!,we had " << Qfood5 << " pieces of " << food5 << ".";
					cout << "\npress (0) to return!";
					switch(getch()){
					    case '0':
					     	goto m;
					    default :
							 goto b;
							}
				case '3':
					goto m;
				default :
					goto h;
			}
			break;
			
			//PICE OF ITEMS
		case '7':
			PriceOFitems();
			switch(getch()){
				case '0':
				goto m;
				default :
				goto b;
			}
			//SETTING
		case '8':
			cout << "\n\n 1) Change items price & currency\n 2) Change food name.\n 3) Return";
			q:
			switch(getch()){
				//CHANGE ITEMS PRICE
				case '1':
					a :
					items_menu();
					switch(getch()){
						case '1':
							Proom = changePrice();
							switch(getch()){
								case '0':
									goto m;
								case '1':
									goto a;
								default :
									goto b;
							}
						case '2':
							Pfood1 = changePrice();
							switch(getch()){
								case '0':
									goto m;
								case '1':
									goto a;
								default :
									goto b;
							}
						case '3':
							Pfood2 = changePrice();
							switch(getch()){
								case '0':
									goto m;
								case '1':
									goto a;
								default :
									goto b;
							}
						case '4':
							Pfood3 = changePrice();
							switch(getch()){
								case '0':
									goto m;
								case '1':
									goto a;
								default :
									goto b;
							}
						case '5':
							Pfood4 = changePrice();
							switch(getch()){
								case '0':
									goto m;
								case '1':
									goto a;
								default :
									goto b;
							}
							case '6':
								Pfood5 = changePrice();
								switch(getch()){
									case '0':
										goto m;
									case '1':
										goto a;
									default :
										goto b;
							}
							case '7':
								cout << "\n\n\t\t\tEnter new currency : ";
								cin >> currency;
								cout << "\n\n\t\t\t\t\t\tPress (0) to return.";
								cout << "\n\t\t\t\t\t\tPress (1) to change another item price.";
								switch(getch()){
									case '0':
										goto m;
									case '1':
										goto a;
									default :
										goto b;
							}
							case '8':
								goto m;
					}
				//CHANGE FOOD NAME
				case '2':
					o:
					foodMenu();
					switch(getch()){
						case '1':
							food1 = changefood();
							Qfood1 = 0;
							Sfood1 = 0;
							goto o;
						case '2':
							food2 = changefood();
							Qfood2 = 0;
							Sfood2 = 0;
							goto o;
						case '3':
							food3 = changefood();
							Qfood3 = 0;
							Sfood3 = 0;
							goto o;
						case '4':
							food4 = changefood();
							Qfood4 = 0;
							Sfood4 = 0;
							goto o;
						case '5':
							food5 = changefood();
							Qfood5 = 0;
							Sfood5 = 0;
							goto o;
						case '6':
							goto m;
						default:
							goto q;
						}
				case '3':
					goto m;
				default:
					goto q;
						break;
					}
				
			//QUANTITY & SALES INFORMATION
		case '9':
			information_menu();
			cout << "\n\n\t\t\t\t\t\t\t Press (0) to retuen.";
			switch(getch()){
				case '0':
				goto m;
				default :
				goto b;
			}
			//EXIT
		case '0':
			exit(0);
		default:
			goto m;
	}
}

void EnterQ(){
	cout << "\n\t\t *Enter quantity of items we have...";
	cout << "\n Rooms avaliable : ";
	cin >> Qroom;
	cout << " Quantity of " << food1 << " : ";
	cin >> Qfood1;
	cout << " Quantity of " << food2 << " : ";
	cin >> Qfood2;
	cout << " Quantity of " << food3 << " : ";
	cin >> Qfood3;
	cout << " Quantity of " << food4 << " : ";
	cin >> Qfood4;
	cout << " Quantity of " << food5 << " : ";
	cin >> Qfood5;
}

void main_menu(){
	cout << "\n\t\t\t please select from the menu options ";
	cout << "\n\n 1) Rooms.";
	cout << "\n 2) " << food1 << ".";	
	cout << "\n 3) " << food2 << ".";
	cout << "\n 4) " << food3 << ".";
	cout << "\n 5) " << food4 << ".";
	cout << "\n 6) " << food5 << ".";
	cout << "\n 7) Price of items.";
	cout << "\n 8) Setting.";
	cout << "\n 9) Quantity & sales information.";
	cout << "\n 0) Exit.";
	cout << "\n_______________________________________________________________________________________________________________________";
	cout << "\n please enter your choice!";
}

void PriceOFitems(){
	system("cls");
	cout << "\t\t\t\tPRICE OF ITEMS & ROOMS.";
	cout << "\n\n The price of one room for one day : " << Proom;
	cout << "\n " << food1 << " price : " << Pfood1;
	cout << "\n " << food2 << " price : " << Pfood2;
	cout << "\n " << food3 << " price : " << Pfood3;
	cout << "\n " << food4 << " price : " << Pfood4;
	cout << "\n " << food5 << " price : " << Pfood5;
	cout << "\n *The currency is " << currency;
	cout << "\n\n\n\n\t\t\t\t\t\t Press (0) to retuen.";
}

void items_menu(){
	system ("cls");
	cout << "\n\t\t\t\tChoose item number that you want to change his price";
	cout << "\n\n 1) Room.";
	cout << "\n 2) " << food1 << ".";
	cout << "\n 3) " << food2 << ".";
	cout << "\n 4) " << food3 << ".";
	cout << "\n 5) " << food4 << ".";
	cout << "\n 6) " << food5 << ".";
	cout << "\n 7) CURRENCY.";
	cout << "\n 8) Return.";
	cout << "\n_______________________________________________________________________________________________________________________";
	cout << "\n Enter your choice!";
}

void information_menu(){
	system ("cls");		
	cout << "\t\t\t\tDetials of sales and collection ";
	cout << "\n\n Number of rooms we had : " << Qroom;
	cout << "\n Number of rooms we gave for rent : "<<Rroom;
	cout << "\n Number of rooms available : " << Qroom-Rroom; 
	cout << "\n Total rooms collection : " << total_room;
			
	cout << "\n\n Number of " << food1 << " we had : " << Qfood1;
	cout << "\n Number of " << food1 << " we sold : "<<Sfood1;
	cout << "\n Total " << food1 << " collection for the day : " << total_food1;
			
	cout << "\n\n Number of " << food2 << " we had : " << Qfood2;
	cout << "\n Number of " << food2 << " we sold : "<<Sfood2;
	cout << "\n Total " << food2 << " collection for the day : " << total_food2;
			
	cout << "\n\n Number of " << food3 << " we had : " << Qfood3;
	cout << "\n Number of " << food3 << " we sold : "<<Sfood3;
	cout << "\n Total " << food3 << " collection for the day : " << total_food3;
	
	cout << "\n\n Number of " << food4 << " we had : " << Qfood4;
	cout << "\n Number of " << food4 << " we sold : "<<Sfood4;
	cout << "\n Total " << food4 << " collection for the day : " << total_food4;
			
	cout << "\n\n Number of " << food5 << " we had : " << Qfood5;
	cout << "\n Number of " << food5 << " we sold : "<<Sfood5;
	cout << "\n Total " << food5 << " collection for the day : " << total_food5;
	cout << "\n\n Overall gain : " << (total_room+total_food1+total_food2+total_food3+total_food4+total_food5) << " " << currency << ".";
}

int changePrice(){
	cout << "\n\n\t\tEnter new price : ";
	cin >> changeP;
	cout << "\n\n\t\t\t\t\t\tPress (0) to return.";
	cout << "\n\t\t\t\t\t\tPress (1) to change another item price.";
	return changeP;
}

void foodMenu(){
	system ("cls");
	cout << "\n\t\t\t\tChoose food that you want to change his name.";
	cout << "\n\n\n 1) " << food1 << ".";
	cout << "\n 2) " << food2 << ".";
	cout << "\n 3) " << food3 << ".";
	cout << "\n 4) " << food4 << ".";
	cout << "\n 5) " << food5 << ".";
	cout << "\n 6) " << "Return.";
	cout << "\n\n(If you change any food name his information will be deleted & you should enter new food quantity). ";
	cout << "\n_______________________________________________________________________________________________________________________";
	cout << "\n Enter your choice!";
}

string changefood(){
	cout << "\n\n\t\tEnter food name : ";
	cin >> changeF;
	return changeF;
}
