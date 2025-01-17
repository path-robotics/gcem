/*################################################################################
  ##
  ##   Copyright (C) 2016-2023 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#define TEST_PRINT_PRECISION_1 6
#define TEST_PRINT_PRECISION_2 18

#include "gcem_tests.hpp"

int main()
{
    print_begin("atan");

    //

    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,0.0L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,0.001L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,0.49L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,-0.5L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,-1.5L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,0.7568025L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,0.99L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,1.49L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,1.99L);

    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,2.49L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,2.51L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,3.99L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,7.0L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,11.0L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,25.0L);

    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,101.0L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,900.0L);
    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,1001.0L);

    GCEM_TEST_COMPARE_VALS(gcem::atan,std::atan,TEST_NAN);

    //

    print_final("atan");

    return 0;
}
