const { printSearchResult } = require("../Functions");
const list = [2, 3, 4, 5, 6, 7, 8];

const search = 1;

const binarySearch = (search, list) => {
   let low = 0;
   let high = list.length - 1;
   let mid = (low + high) / 2;

   while (high >= low) {
      if (list[mid] === search) return mid;

      if (list[mid] < search) low = mid + 1;
      else high = mid - 1;

      mid = (low + high) / 2;
   }

   return -1;
};

const index = binarySearch(search, list);

printSearchResult(index, search);
