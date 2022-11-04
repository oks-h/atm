#pragma once

#include "Acc.h"

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>

class SvAcc : public Acc {
public:
	SvAcc(void);

	SvAcc(Acc&, size_t trans_lim);

	SvAcc(size_t acc_id, size_t dgt_code,
		size_t off_id, size_t clnt_id,
		size_t acc_type, std::string acc_num,
		double balance, std::string  open_date,
		bool is_blocked, double atm_fee,
		double intrest, size_t trans_lim);

	~SvAcc() = default;

	inline size_t getTransLim() const { return trans_lim; };


private:
	size_t trans_lim;
};