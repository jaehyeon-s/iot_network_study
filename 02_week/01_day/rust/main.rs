use std::io;

fn main() {

    let mut oper  = String::new();

    println!("어떤 연산을 하실 건가요(+, -, *, /, %)");
    io::stdin()  // 여러 줄로 정리
        .read_line(&mut oper)
        .expect("Failed to read line.");

    let oper = oper.trim().chars().next().unwrap();  // 문자열을 첫번째 문자로 변경

    let mut num1 = String::new();

    println!("숫자를 입력해주세요");
    io::stdin().read_line(&mut num1).expect("Failed to read line.");  // 한줄도 가능
    let num1: i32 = num1.trim().parse().expect("숫자를 입력해주세요.");  // 정수 입력 받기

    if num1 > 100 {
        println!("{oper}");
    }
    else {
        println!("{num1}");
    }
}