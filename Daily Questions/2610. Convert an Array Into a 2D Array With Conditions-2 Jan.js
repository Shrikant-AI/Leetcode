/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function(nums) {
    nums.sort((a, b) => b - a);
    const result = [];

    for (let num of nums) {
        let added = false;
        for (let row of result) {
     
            if (!row.includes(num)) {
                row.push(num);
                added = true;
                break;
            }
         }

    if (added==false) {
      result.push([num]);
    }
  }
 return result;  
};



