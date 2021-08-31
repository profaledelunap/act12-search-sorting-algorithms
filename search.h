// =================================================================
//
// File: search.h
// Author: Pedro Perez
// Description: This file contains the implementations of the
//				sequential and binary search algorithms.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef SEARCH_H
#define SEARCH_H

#include "header.h"
#include <vector>

// =================================================================
// Realiza la búsqueda secuencial de un elemento dentro un vector.
//
// @param v, un vector de elementos tipo T.
// @param key, el elemento a buscar.
// @return el índice del elemento siendo buscado, -1 en caso de que
//		   no se encuentre el elemento.
// =================================================================
template <class T>
int sequentialSearch(const std::vector<T> &v, T key, int &comp)
{
	return 0;
}

// =================================================================
// Realiza la búsqueda binari de un elemento dentro un vector.
//
// @param v, un vector de elementos tipo T.
// @param key, el elemento a buscar.
// @return el índice del elemento siendo buscado, -1 en caso de que
//		   no se encuentre el elemento.
// =================================================================
template <class T>
int binarySearch(const std::vector<T> &v, T key, int &comp)
{
	return 0;
}

// =================================================================
// Realiza la búsqueda binaria recursiva de un elemento dentro un
// vector.
//
// @param v, un vector de elementos tipo T.
// @param low, limite inferior de la búsqueda.
// @param high, limite superior de la búsqueda.
// @param key, el elemento a buscar.
// @return el índice del elemento siendo buscado, -1 en caso de que
//		   no se encuentre el elemento.
// =================================================================
template <class T>
int binaryRSearch(const std::vector<T> &v, int low, int high, T key, int &comp)
{
	return 0;
}

#endif /* SEARCH_H */
