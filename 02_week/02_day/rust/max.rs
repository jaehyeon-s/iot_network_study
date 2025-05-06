use std::io;

// 최대값 판별기
fn main() {

    let mut max = -999999;
    
    let mut num1 = String::new();

    println!("첫번째 숫자를 입력하세요");
    io::stdin()
        .read_line(&mut num1)
        .expect("Failed to read line");
    let num1: i32 = num1.trim().parse().expect("숫자를 입력해주세요");
    
    let mut num2 = String::new();

    println!("두번째 숫자를 입력하세요");
    io::stdin()
        .read_line(&mut num2)
        .expect("Failed to read line");
    let num2: i32 = num2.trim().parse().expect("숫자를 입력해주세요");

    let mut num3 = String::new();

    println!("세번째 숫자를 입력하세요");
    io::stdin()
        .read_line(&mut num3)
        .expect("Failed to read line");
    let num3: i32 = num3.trim().parse().expect("숫자를 입력해주세요");

    if num1 >= num2 {
        if num1 >= num3 {
            max = num1;
        }
        else {
            max = num3;
        }
    }
    else {
        if num2 >= num3 {
            max = num2;
        }
        else {
            max = num3;
        }
    }

    println!("{num1}, {num2}, {num3} 가장 큰 값은 {max} 입니다.");
}