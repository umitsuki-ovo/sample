function main(input){
    const a = input.split("\n");  // ["2", "A B"]
    const b = a[1].split(" "); // ["A", "B"]
    
    console.log(a);
    console.log(b);
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));
