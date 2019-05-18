/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
  var mass = [];
  for (var i = 1; i <= n; i++) {
    if((i % 15) === 0)
        mass.push("FizzBuzz");
    else if((i % 3) === 0)
        mass.push("Fizz");
    else if((i % 5) === 0)
        mass.push("Buzz");
    else 
      mass.push(String(i));
  }
  return mass;
};
