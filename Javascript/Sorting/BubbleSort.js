const unsortedList = [2, 4, -1, 3, 6, 0];

// Sort in accending order
const bubbleSort = (array) => {
   for (let i = 0; i < array.length; i++) {
      for (let j = i + 1; j < array.length; j++) {
         if (array[j] < array[i]) {
            let temp = array[i];
            array[i] = array[j];
            array[j] = temp;
         }
      }
   }
   return array;
};

console.log("Unsorted Array : ", unsortedList);

console.log("Sorted Array : ", bubbleSort(unsortedList));
