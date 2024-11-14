cmake_minimum_required(VERSION 3.29)
project(Cpp_Template_Programs_And_Structures LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(Cpp_Template_Programs_And_Structures main.cpp
        Utilities/menus.cpp
        Utilities/input_validation.h
        Utilities/colors.hpp
        Utilities/time_manipulation_functions.hpp
        Algorithms/Sorting/Array_Implementation/bubble_sort.hpp
        Algorithms/Sorting/Array_Implementation/bucket_sort.hpp
        Algorithms/Sorting/Array_Implementation/count_sort.hpp
        Algorithms/Sorting/Array_Implementation/insertion_sort.hpp
        Algorithms/Sorting/Array_Implementation/merge_sort.hpp
        Algorithms/Sorting/Array_Implementation/quick_sort.hpp
        Algorithms/Sorting/Array_Implementation/radix_sort.hpp
        Algorithms/Sorting/Array_Implementation/selection_sort.hpp
        Algorithms/Sorting/Lists_Implementation/SinglyLinkedList/selection_sort.hpp
        Algorithms/Sorting/Lists_Implementation/SinglyLinkedList/bubble_sort.hpp
        Algorithms/Sorting/Lists_Implementation/SinglyLinkedList/insertion_sort.hpp
        Algorithms/Sorting/Lists_Implementation/SinglyLinkedList/merge_sort.hpp
        Algorithms/Sorting/Lists_Implementation/SinglyLinkedList/quick_sort.hpp)