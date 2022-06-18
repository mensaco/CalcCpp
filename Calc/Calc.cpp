
#include<iostream>
using namespace std;
int main() {

	int x, y;
	string veprimi;

	cout << "=============================================================\n";
	cout << "==                                                         ==\n";
	cout << "==  Ky program merr nje veprim aritmetikor dhe dy numra    ==\n";
	cout << "==  nga bashkesia e numrave natyrore, zbaton veprimin e    ==\n";
	cout << "==  zgjedhur mbi ata dy numra. Perfundimisht, programi     ==\n";
	cout << "==  afishon veprimin e kryer dhe rezultatin e gjetur.      ==\n";
	cout << "==  Rezultati eshte nje numer i plote.						==\n";
	cout << "==                                                         ==\n";
	cout << "==  Lejohen veprimet me operatoret +,-,*,/ dhe bashkimi    ==\n";
	cout << "==  i dy operatoreve, psh +-, +/, etj.                     ==\n";
	cout << "==  Ne rastin e dy operatoreve, i pari vepron mbi dy       ==\n";
	cout << "==  numrat, i dyti mbi rezultatin e veprimit te pare       ==\n";
	cout << "==  dhe numrit te dyte, psh. x+*y = (x+y)*y                ==\n";
	cout << "=============================================================\n";
	cout << "\n";

	


	cout << "Vendosni operatorin(+ - * /): ";
	cin >> veprimi;

	cout << "Vendosni numrin e pare(numer i plote dhe me i madh se 0): ";
	cin >> x;

	cout << "Vendosni numrin e dyte(numrat mund te jene vetem pozitiv): ";
	cin >> y;

	cout << "\n"; // lere nje rresht te thate



	string veprimet = "+ - * / ++ +- +* +/ -+ -- -* -/ *+ *- ** */ /+ /- /* //";
	string::size_type loc = veprimet.find(veprimi, 0);

	
	switch (loc)
	{
	case 0: // +
		cout << x << veprimi << y << "=" << x + y;
		break;

	case 2: // -
		cout << x << veprimi << y << "=" << x - y;
		break;

	case 4: // *
		cout << x << veprimi << y << "=" << x * y;
		break;

	case 6: // /
		cout << x << veprimi << y << "=" << x / y;
		break;

	case 8: // ++
		cout << x << veprimi << y << "=" << x + y + y;
		break;

	case 11: // +-
		cout << x << veprimi << y << "=" << x; // meqe per numrat natyrore vlen (x + y) - y == x;
		break;

	case 14: // +*
		cout << x << veprimi << y << "=" << (x + y) * y;
		break;

	case 17: // +/
		cout << x << veprimi << y << "=" << (x + y) / y;
		break;

	case 20: // -+
		cout << x << veprimi << y << "=" << x; // meqe per numrat natyrore vlen (x - y) + y == x;
		break;

	case 23: // --
		cout << x << veprimi << y << "=" << (x - y) - y;
		break;

	case 26: // -*
		cout << x << veprimi << y << "=" << (x - y) * y;
		break;

	case 29: // -/
		cout << x << veprimi << y << "=" << (x - y) / y;
		break;

	case 32: // *+
		cout << x << veprimi << y << "=" << x * y + y;
		break;

	case 35: // *-
		cout << x << veprimi << y << "=" << (x * y) - y;
		break;

	case 38: // **
		cout << x << veprimi << y << "=" << (x * y) * y;
		break;


	case 41: // */
		cout << x << veprimi << y << "=" << x; // meqe per numrat natyrore vlen (x * y) / y == x;
		break;

	case 44: // /+
		cout << x << veprimi << y << "=" << x / y + y;
		break;

	case 47: // /-
		cout << x << veprimi << y << "=" << (x / y) - y;
		break;


	case 50: // /*
		cout << x << veprimi << y << "=" << (x / y) * y;
		break;

	case 53: // //
		cout << x << veprimi << y << "=" << (x / y) / y;
		break;





	default: cout << "Operatori i perdorur nuk ekziston!";


	}


	cout << "\n"; // lere nje rresht te thate
	cout << "\n"; // lere nje rresht te thate
		

	return 0;
}
