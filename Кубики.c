#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void bros(int kubik);
int res();

void main(){
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	char brosok;
	do{		
		cout << "Ïîáåæäàåò òîò, ó êîãî ñóììà ïî èòîãàì ÷åòûð¸õ áðîñêîâ áîëüøå!"<<endl;		
		int total_chel = 0;
		int total_komp = 0;
		do{
			cout << "Äëÿ òîãî ÷òîáû óçíàòü êòî õîäèò ïåðâûì, íàæìè 0 äëÿ áðîñêà"<<endl;
			cin >> brosok;
		}
		while (brosok != '0');

		int res_chel, res_komp;
		do{
			res_chel = res();
			cout << "Âàø ðåçóëüòàò: " << res_chel << endl;
			res_komp = res();
			cout << "\nÐåçóëüòàò êîìïüþòåðà: " << res_komp << endl;
		}
		while (res_chel == res_komp);

		if (res_chel>res_komp){
			cout << "\nÂû íà÷èíàåòå ïåðâûì :("<<endl;
			for (int i = 1; i <= 4; i++){
				do{
					cout << "Íàæìè 0 äëÿ áðîñêà"<<endl;
					cin >> brosok;
				} 
				while (brosok != '0');
				cout << "Âû:"<<endl;
				total_chel += res();
				cout << "Êîìïüþòåð:" << endl;
				total_komp += res();
				cout << "Ñëåäóþùèé õîä:" << endl;
			}
			cout << "Âàø ðåçóëüòàò (ñóììà çà 4 áðîñêîâ): " << total_chel << endl;
			cout << "\nÐåçóëüòàò êîìïüþòåðà (ñóììà çà 4 áðîñêîâ): " << total_komp << endl;
		}
		else{
			cout << "\nÊîìïüþòåð íà÷èíàåò ïåðâûì :)"<<endl;
			for (int i = 1; i <= 4; i++){
				cout << "Êîìïüþòåð:" << endl;
				total_komp += res();
				do{
					cout << "Íàæìè 0 äëÿ áðîñêà" << endl;
					cin >> brosok;
				}
				while (brosok != '0');
				cout << "Âû:" << endl;
				total_chel += res();
				cout << "Ñëåäóþùèé õîä:" << endl;
			}
			cout << "Âàø îáùèé ðåçóëüòàò (ñóììà çà 4 áðîñêîâ): " << total_chel << endl;
			cout << "\nÐåçóëüòàò êîìïüþòåðà(ñóììà 4 áðîñêîâ): " << total_komp << endl;
		}
		if (total_chel == total_komp){
			cout << "\n\nÍÈ×Üß!\n\n";
		}
		else{
			if (total_chel>total_komp){
				cout << "\n\nÂû âûèãðàëè!\n\n";
			}
			if (total_chel<total_komp){
				cout << "\n\nÊîìïüþòåð âûèãðàë!\n\n";
			}
		}
		cout << "\nÅñëè õîòèòå ïðîäîëæèòü, íàæìèòå 0: " << endl;
		cin >> brosok;
	}
	while (brosok == '0');
}

void bros(int kubik){
	switch (kubik){
	case 1:
		cout << "***********\n";
		cout << "*         *\n";
		cout << "*         *\n";
		cout << "*    *    *\n";
		cout << "*         *\n";
		cout << "*         *\n";
		cout << "***********\n";
		break;
	case 2:
		cout << "***********\n";
		cout << "*         *\n";
		cout << "*    *    *\n";
		cout << "*         *\n";
		cout << "*    *    *\n";
		cout << "*         *\n";
		cout << "***********\n";
		break;
	case 3:
		cout << "***********\n";
		cout << "*         *\n";
		cout << "*  *      *\n";
		cout << "*    *    *\n";
		cout << "*      *  *\n";
		cout << "*         *\n";
		cout << "***********\n";
		break;
	case 4:
		cout << "***********\n";
		cout << "*         *\n";
		cout << "*  *   *  *\n";
		cout << "*         *\n";
		cout << "*  *   *  *\n";
		cout << "*         *\n";
		cout << "***********\n";
		break;
	case 5:
		cout << "***********\n";
		cout << "*         *\n";
		cout << "*  *   *  *\n";
		cout << "*    *    *\n";
		cout << "*  *   *  *\n";
		cout << "*         *\n";
		cout << "***********\n";
		break;
	case 6:
		cout << "***********\n";
		cout << "*         *\n";
		cout << "*  *   *  *\n";
		cout << "*  *   *  *\n";
		cout << "*  *   *  *\n";
		cout << "*         *\n";
		cout << "***********\n";
		break;
	}
}
int res(){
	int kubik_1 = rand() % 6 + 1;
	bros(kubik_1);
	int kubik_2 = rand() % 6 + 1;
	bros(kubik_2);
	int rezult;
	rezult = kubik_1 + kubik_2;
	cout << "Ðåçóëüòàò: " << rezult << endl << endl;
	return rezult;
}
