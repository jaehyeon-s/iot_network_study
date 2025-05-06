use std::io;

// 만 나이로 분류
fn main() {

    let mut age = String::new();

    println!("만 나이를 입력해주세요");
    io::stdin()
        .read_line(&mut age)
        .expect("Failed to read line");
    let age: i32 = age.trim().parse().expect("숫자를 입력해주세요");

    if age >= 0 && age <= 12 {
        println!("어린이");
    }
    else if age >= 13 && age <= 18 {
        println!("청소년");
    }
    else if age >= 19 && age <= 64 {
        println!("성인");
    }
    else if age >= 65 {
        println!("노인");
    }
    else {
        println!("나이에 음수는 입력될 수 없습니다.");
    }
}