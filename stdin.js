function main(input){
    const a = input.split("\n");  // ["2", "A B", "C D"]
    console.log(a);

    let b = []
    for (i = 1; i < a.length; i++){
        b.push(a[i].split(" "));
    }
    console.log(b); // [["A", "B"], ["C", "D"]]
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));
