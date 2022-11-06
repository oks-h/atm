#pragma once

#include "Account.h"

namespace mdls {
	class LOC : public Account {
	public:
		
		// constructor that's getting info from db
		LOC(std::string num);

		LOC(const LOC&) = default;
		LOC& operator=(const LOC&) = default;

		LOC& operator=(LOC&&) noexcept = default;
		LOC(LOC&&) noexcept = default;

		~LOC() = default;

		inline size_t get_credit_taken() const { return crd_taken; };
		inline size_t get_loc_limit() const { return loc_lim; };
		inline double get_credit_returned() const { return crd_return; };

	private:
		LOC(void) = default;

		LOC(
			std::string num, size_t dgt_code,
			double balance, std::string open_date,
			bool blocked, double atm_fee,
			double intrest, size_t crd_taken,
			size_t loc_lim, double crd_return,
			size_t id = 0, size_t off_id = 0,
			size_t clnt_id = 0, size_t acc_type = 0);

		std::ostream& print(std::ostream& os) const override;

		size_t crd_taken;
		size_t loc_lim;
		double crd_return;
	};
}