const { printSearchResult } = require("../Functions");
const list = [23, 53, 12, 23, 18, 9];

let search = 53;

const linearSearch = (search, list) => {
   for (let index = 0; index < list.length; index++) {
      if (list[index] === search) return index;
   }
};

const index = linearSearch(search, list);

printSearchResult(index, search);
