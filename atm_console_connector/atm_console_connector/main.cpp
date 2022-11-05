
#include "Database.h"
#include "Account.h"
#include "Checking.h"
#include "Repo.h"
#include "Savings.h"
#include "LOC.h"
#include "ATM.h"
#include "Card.h"
#include "Client.h"
#include "Transaction.h"

#include "ATM_sbs.h"

#include <QtCore/QCoreApplication>

int main(int argc, char* argv[]) {
	QCoreApplication a(argc, argv);

	sbs::ATM atm;

	system("pause");
	return a.exec();
}
