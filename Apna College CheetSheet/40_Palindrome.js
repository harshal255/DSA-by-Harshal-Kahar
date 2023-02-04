const readline = require("readline").createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter String : ", String => {
    console.log(isPalindrome(String));
    readline.close();
});



let isPalindrome = (s) => {
    s = s.toLowerCase().replace(/[^a-z0-9]/gi, "");
    const re = s.split("").reverse().join("");
    if (s === re) {
        return true;
    } else {
        return false;
    }
};