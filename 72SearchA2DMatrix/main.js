/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */

function searchColumn(matrix, target) {
  let a = 0;
  let b = matrix.length - 1;

  if (matrix.length === 0) {
    return [];
  }

  while (a <= b) {
    let mid = Math.trunc((a + b) / 2);
    let row = matrix[mid];

    if (target >= row[0] && target <= row[row.length - 1]) {
      return row;
    } else if (target < row[0]) {
      b = mid - 1;
    } else {
      a = mid + 1;
    }
  }

  return [];
}

function searchRow(arr, target) {
  if (arr.length === 0) {
    return false;
  }

  let a = 0;
  let b = arr.length - 1;

  while (a <= b) {
    let mid = Math.trunc((a + b) / 2);

    if (arr[mid] === target) {
      return true;
    } else if (target < arr[mid]) {
      b = mid - 1;
    } else {
      a = mid + 1;
    }
  }

  return false;
}

var searchMatrix = function (matrix, target) {
  if (matrix.length === 0) {
    return false;
  }

  return searchRow(searchColumn(matrix, target), target);
};