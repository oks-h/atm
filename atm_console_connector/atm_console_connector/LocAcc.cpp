#include "LocAcc.h"

LocAcc::LocAcc(void)
	: Acc(), crd_taken(0),
	loc_lim(0), crd_return(0) {};

LocAcc::LocAcc(
	Acc& acc, size_t crd_taken,
	size_t loc_lim, double crd_return)
	: Acc(
		acc.getAccId(), acc.getDgtCode(),
		acc.getOffId(), acc.getClntId(),
		acc.getAccType(), acc.getAccNum(),
		acc.getBalance(), acc.getOpenDate(),
		acc.getIsBlocked(), acc.getAtmFee(),
		acc.getIntrest()), crd_taken(crd_taken),
		loc_lim(loc_lim), crd_return(crd_return) {};

LocAcc::LocAcc(
	int acc_id, int dgt_code,
	int off_id, int clnt_id,
	int acc_type, std::string acc_num,
	int balance, std::string  open_date,
	bool is_blocked, double atm_fee,
	double intrest, size_t crd_taken,
	size_t loc_lim, double crd_return)
	: Acc(
		acc_id, dgt_code, off_id,
		clnt_id, acc_type, acc_num,
		balance, open_date, is_blocked,
		atm_fee, intrest), crd_taken(crd_taken),
		loc_lim(loc_lim), crd_return(crd_return) {};


