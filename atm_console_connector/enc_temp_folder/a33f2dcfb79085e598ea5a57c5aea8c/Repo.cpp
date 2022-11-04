
#include "Repo.h"

Repo::Repo() 
    : con(nullptr) {};

Repo::Repo(sql::Connection*& con) 
    : con(con) {
    
};

Repo::~Repo() {};

Acc& Repo::getAccInfo(int acc_id) {
   /*stmt->execute("call get_acc_info(1)");*/

    Acc acc;

   /* do {
        res.reset(stmt->getResultSet());
        while (res->next()) {
            acc = *(new Acc(0, 0, 0, 0, 0,
                res->getString("acc_num").c_str(),
                res->getDouble("balance"),
                res->getString("open_date").c_str(),
                res->getBoolean("is_blocked"),
                0, 0));
        }
    } while (stmt->getMoreResults());*/
    return acc;
}

void Repo::test(size_t acc_id) {
    std::unique_ptr<sql::PreparedStatement> pstmt(
        this->con->prepareStatement("call get_acc_info(?);"));
    pstmt->setInt(1, acc_id);

    std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

    Acc acc;
    do {
        while (res->next()) {  // extract data from statement
            acc = (* (new Acc(0, 0, 0, 0, 0,
                res->getString("acc_num"),
                res->getDouble("balance"),
                res->getString("open_date"),
                res->getBoolean("is_blocked"),
                0, 0)));
        }
    } while (pstmt->getMoreResults());

  
};

Acc& Repo::getAccBalanceInfo(size_t acc_id) {

  // /*this->pstmt.reset();*/
  ///*  kthis->pstmt = std::make_unique<sql::PreparedStatement>
  //      (this->con->prepareStatement("call get_acc_balance_info(?)"));
  //  this->pstmt->setInt(1, acc_id);*/

  //  this->pstmt.reset();
  //  this->pstmt.reset(this->con->prepareStatement("call get_acc_balance_info(?);"));
  //  this->pstmt->setInt(1, acc_id);

  //  res.reset(this->pstmt->executeQuery());
  //  res->next();

  //  return *(new Acc(0, res->getUInt("dgt_code"), 0, 0, 0,
  //      "", res->getDouble("balance"), "", 0, 0, 0));

    Acc acc;
    return acc;
}


//int acc_id;
//int dgt_code;
//int off_id;
//int clnt_id;
//int acc_type;
//std::string acc_num;
//double balance;
//std::string open_date;
//bool is_blocked;
//double atm_fee;
//double intrest;