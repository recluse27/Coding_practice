/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    var sChars = s.split('').sort();
    var tChars = t.split('').sort();
    var i;
    for(i = 0; i < sChars.length; i++) {
        if(tChars[i] !== sChars[i]) {
            return tChars[i];
        }
    }
    return tChars[i];
};
