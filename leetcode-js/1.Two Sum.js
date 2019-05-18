/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
**/ 
var twoSum = function(nums, target) {
    var mean = 0;
    var res = [];
    for (var i = 0; i < nums.length; i++){
        mean = target - nums[i];
        for (var j = 0; j < nums.length; j++){
            if(nums[j]===mean && i!=j){
                res = [i, j];
                return res;
            }
        }
    }
    for (var k = 0; k < nums.length; k++){
        mean = target - nums[k];
        for (var l = 0; l < nums.length; l++){
            if(nums[l]===mean){
                res = [k, l];
                return res;
            }
        }
    }
    return res;
};
