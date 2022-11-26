#include "Bank.h"

#include "Savings.h"

mdls::Savings::Savings(
	const std::string& num, size_t dgt_code,
	double balance, const std::string& open_date,
	bool blocked, double atm_fee,
	double intrest, size_t trans_lim,
	size_t id, size_t off_id,
	size_t clnt_id, size_t acc_type)
	: Account(
		num, dgt_code, balance,
		open_date, blocked,
		atm_fee, intrest ,
		id, off_id, clnt_id,
		acc_type),trans_lim(trans_lim) {};

//mdls::Savings::Savings(std::string num)
//	: Savings(Bank::get_savings(num)) {};

std::ostream& mdls::Savings::print(std::ostream& os) const {
	return Account::print(os) << "Transaction limit is: " << trans_lim << "\n";
}


