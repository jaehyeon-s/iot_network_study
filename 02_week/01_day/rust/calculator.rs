use std::io;

fn main() {

    let mut result = 0.0;
    let mut oper  = String::new();

    println!("어떤 연산을 하실 건가요(+, -, *, /, %)");
    io::stdin()
        .read_line(&mut oper)
        .expect("없는 연산입니다.");

    let oper = oper.trim().chars().next().unwrap().expect("연산자를 입력해주세요");

    let mut num1 = String::new();
    let mut num2 = String::new();

    println!("첫번째 숫자를 입력해주세요");
    io::stdin()
        .read_line(&mut num1)
        .expect("Failed to read line");

    let num1: f64 = num1.trim().parse().expect("숫자를 입력해주세요");

    println!("두번째 숫자를 입력해주세요");
    io::stdin()
        .read_line(&mut num2)
        .expect("Failed to read line");

    let num2: f64 = num2.trim().parse().expect("숫자를 입력해주세요");

    if oper == '+' {
        result = num1 + num2;
    }
    else if oper == '-' {
        result = num1 - num2;
    }
    else if oper == '*' {
        result = num1 * num2;
    }
    else if oper == '/' {
        if num2 == 0.0 {
            println!("0으로 나눌 수 없습니다.");
            return;
        }
        result = num1 / num2;
    }
    else if oper == '%' {
        if num2 == 0.0 {
            println!("0으로 나머지 연산을 할 수 없습니다.");
            return;
        }
        result = num1 % num2;
    }
    else {
        println!("계산기에 없는 연산입니다.");
        return;
    }

    println!("계산 결과: {num1}, {num2}, {result}");
}
