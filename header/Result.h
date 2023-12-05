#pragma once
#include <iostream>
#include <cstdlib>
#include "Search.h"
#include "Quiz.h"
#include "Random.h"

using namespace std;

class Result : public Search, public Quiz, public Random {
 public:

    Result();
    ~Result();
    void quizResult();
    void similarResult(vector <Movie> movie);
    void filterResult();
    void randomResult(Movie movie);
  
 private:

    Result operator=(const Output&) = delete;

};