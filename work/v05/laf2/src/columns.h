#ifndef columns_h
#define columns_h

#include "conversion.h"
#include <cstdlib>
#include <Rcpp.h>

class Column {
  public:
    virtual ~Column() {};
    virtual void start_reading() = 0;
    virtual bool parse(char* str, std::size_t len) = 0;
    virtual void finished_reading() = 0;

    virtual SEXP sexp() const { return R_NilValue;}
};

/*
class IntColumn: public Column {
  public:
    IntColumn() {}

    void start_reading() {};

    bool parse(char* str, std::size_t len) {
      bool err;
      sum_ += atoif(str, len, &err);
    };

    void finished_reading() {};

    int sum() const { return sum_;}

  private:
    int sum_;
};

class DoubleColumn: public Column {
  public:
    DoubleColumn() {}

    void start_reading() {};

    bool parse(char* str, std::size_t len) {
      bool err;
      sum_ += f_atod(str, len, &err);
    };

    void finished_reading() {};

    double sum() const { return sum_;}

  private:
    double sum_;
};


class CharacterColumn: public Column {
  public:

    void start_reading() {};

    bool parse(char* str, std::size_t len) {
    };

    void finished_reading() {};

  private:
};

#include <iostream>
#include <iomanip>
class PrintColumn: public Column {
  public:

    void start_reading() {};

    bool parse(char* str, std::size_t len) {
      std::cout << "'" << std::string(str, len) << "'" << std::endl;
    };

    void finished_reading() {};

  private:
};
*/

#endif
