#include "ReportModule.h"

void ReportModule::UserInteraction()
{
	int choice;
	do{
		cout << "Serendipity Booksellers Reports" << endl
			 << "1. Inventory Listing" << endl
			 << "2. Inventory Wholesale Value" << endl
			 << "3. Inventory Retail Value" << endl
			 << "4. Listing by Quantity" << endl
			 << "5. Listing by Cost" << endl
			 << "6. Listing by Age" << endl
			 << "7. Return to Main Menu" << endl;
		cin >> choice;
	} while (choice != 7);
}