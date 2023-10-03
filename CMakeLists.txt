cmake_minimum_required(VERSION 3.26)
project(C_projects C)

set(CMAKE_C_STANDARD 11)

add_executable(C_projects
        "Leetcode/1 Two_sum/two_sum.c"
        School-21/C3_SimpleBashUtils-5-master/src/cat/main.c
        "Leetcode/1108 Defanging an IP Address/1108 Defanging an IP Address.c"
        "Leetcode/1689 Partitioning into minimum number of deci binary numbers/1689 Partitioning into minimum number of deci binary numbers.c"
        Draft/Draft.c
        School-21/C3_SimpleBashUtils-5-master/src/CatFunction.c)
