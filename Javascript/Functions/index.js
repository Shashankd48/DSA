exports.printSearchResult = (index, search) => {
   if (index === undefined || index === -1)
      console.log(`Item ${search} Not found!`);
   else console.log(`Item ${search} found at index ${index}`);
};
