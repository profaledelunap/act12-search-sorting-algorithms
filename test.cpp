// =================================================================
//
// File: main.cpp
// Author:
// Date:
//
// =================================================================
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include <fstream>
#include <vector>
#include "catch.h"
#include "bubbleSolution.h"
#include "insertionSolution.h"
#include "selectionSolution.h"
#include "searchSolution.h"
#include "vectorExtrasSolution.h"

using namespace std;

TEST_CASE("Testing ordering algorithms", "[orderingAlgos]")
{
    vector<int> vec, vecBubble;
    int compBubble = 0, compInsert = 0, compSelect = 0;

    read(vec, "output1vec.txt");
    read(vecBubble, "input1vec.txt");
    vector<int> vecInsert(vecBubble);
    vector<int> vecSelect(vecBubble);

    bubbleSort(vecBubble, compBubble);
    insertionSort(vecInsert, compInsert);
    selectionSort(vecSelect, compSelect);

    SECTION("Number of comparisons")
    {
        REQUIRE(compBubble == 73829);
        REQUIRE(compInsert == 384);
        REQUIRE(compSelect == 73920);
    }
    SECTION("Ordered vectors")
    {
        REQUIRE(vec == vecBubble);
        REQUIRE(vec == vecInsert);
        REQUIRE(vec == vecSelect);
    }
}

TEST_CASE("Testing searching algorithms", "[searchAlgos]")
{
    vector<int> vec, values, indices;
    vector<int> compSeqRes, compSearchRes, compRSearchRes;
    int compSeq, compSearch, compRSearch;
    int index1, index2, index3;

    read(values, "input1search.txt");
    read(vec, "output1vec.txt");

    read(indices, "indices1search.txt");

    read(compSeqRes, "outpust1searchSeq.txt");
    read(compSearchRes, "outpust1searchBinary.txt");
    read(compRSearchRes, "outpust1searchBinaryR.txt");

    for (int i = 0; i < values.size(); i++)
    {
        compSeq = 0;
        compSearch = 0;
        compRSearch = 0;
        index1 = sequentialSearch(vec, values[i], compSeq);
        index2 = binarySearch(vec, values[i], compSearch);
        index3 = binaryRSearch(vec, 0, vec.size() - 1, values[i], compRSearch);

        REQUIRE(compSeqRes[i] == compSeq);
        REQUIRE(compSearchRes[i] == compSearch);
        REQUIRE(compRSearchRes[i] == compRSearch);

        REQUIRE(indices[i] == index1);
        REQUIRE(indices[i] == index2);
        REQUIRE(indices[i] == index3);
    }
}
