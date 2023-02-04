const { fileURLToPath } = require("url");

const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter the array elements separated by spaces: ", input => {
    let array = input.split(" ").map(Number);
    console.log(containsDuplicate(array));
    readline.close();
});

//The Set object lets you store unique values of any type. Converting the array to a Set object and then using the Array.from method to convert it back to an array removes all duplicates.

let containsDuplicate = (nums) => {
    let filteredArray = Array.from(new Set(nums));
    console.log(filteredArray);
    console.log(nums);

//the JSON.stringify method is used to convert each array to a string. The strings are then compared using the equality operator (===) to determine if the arrays are equal.
    if (JSON.stringify(nums) != JSON.stringify(filteredArray)) {
        return true;
    }
    else {
        return false;
    }


};