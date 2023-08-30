/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmergeme.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhamdouc <zhamdouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:12:29 by zhamdouc          #+#    #+#             */
/*   Updated: 2023/08/30 17:19:16 by zhamdouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

template <typename Container>
void Pmergeme::insertionSort(Container& arr, int start, int end) {
    for (int i = start; i < end; i++) {
        typename Container::value_type currentValue = arr[i + 1];
        int j = i + 1;
        while (j > start && arr[j - 1] > currentValue) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = currentValue;
    }
}

template <typename Container>
void Pmergeme::merge(Container& arr, int start, int mid, int end) {
    Container leftArr(arr.begin() + start, arr.begin() + mid + 1);
    Container rightArr(arr.begin() + mid + 1, arr.begin() + end + 1);

    unsigned long leftIndex = 0, rightIndex = 0;
    for (int i = start; i <= end; i++) {
        if (rightIndex >= rightArr.size() || (leftIndex < leftArr.size() && leftArr[leftIndex] <= rightArr[rightIndex])) {
            arr[i] = leftArr[leftIndex++];
        } else {
            arr[i] = rightArr[rightIndex++];
        }
    }
}

template <typename Container>

void Pmergeme::sort(Container& arr, int start, int end) {
    if (end - start > THRESHOLD) {
        int mid = (start + end) / 2;
        sort(arr, start, mid);
        sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    } else {
        insertionSort(arr, start, end);
    }
}