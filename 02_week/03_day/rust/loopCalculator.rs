use std::io;

fn main() {

    loop {
        let mut oper = String::new();

        println!("어떤 연산을 하실 건가요(+, -, *, /, %) / 종료를 원하시면 'q' 혹은 'Q' 를 눌러주세요");
        io::stdin()
            .read_line(&mut oper)
            .expect("Failed to read line");
        let oper = oper.trim().chars().next().expect("+, -, *, /, %, q, Q 중 하나를 입력해주세요.");

        if oper == 'q' || oper == 'Q' {
            println!("종료");
            break;
        }

        let mut num1 = String::new();

        println!("숫자를 입력해주세요.");
        io::stdin()
            .read_line(&mut num1)
            .expect("Failed to read line");
        let num1: f64 = num1.trim().parse().expect("숫자를 입력해주세요");

        let mut num2 = String::new();

        println!("숫자를 입력해주세요.");
        io::stdin()
            .read_line(&mut num2)
            .expect("Failed to read line");
        let num2: f64 = num2.trim().parse().expect("숫자를 입력해주세요");

        let result: f64 = if oper == '+' {
            num1 + num2
        }
        else if oper == '-' {
            num1 - num2
        }
        else if oper == '*' {
            num1 * num2
        }
        else if oper == '/' {
            if num2 == 0.0 {
                println!("0으로 나눌 수 없습니다. \n");
                continue;
            }
            num1 / num2
        }
        else if oper == '%' {
            if num2 == 0.0 {
                println!("0으로 나머지 연산을 할 수 없습니다. \n");
                continue;
            }
            num1.rem_euclid(num2)  // f64에서 나머지 연산 안전하게 수행할 수 있게 설계된 메소드
        }
        else {
            println!("+, -, *, /, %, q, Q 중 하나를 입력해주세요. \n");
            continue;
        };

        println!("result = {} \n", result);
    }

}