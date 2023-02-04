const { log } = require("console");

const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter String : ", String => {
    console.log(reverseWord(String));
    readline.close();
});

let reverseWord = (Str) => {

    let reverseString = Str.split("").reverse().join("");
    return reverseString;


}
