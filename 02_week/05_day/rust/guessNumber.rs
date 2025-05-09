use std::io;
use rand::Rng;

fn main() {
    
    'end_game: loop {
        println!("1~10 사이의 숫자를 맞춰보세요 (0 입력시 종료) \n");

        let secret_number = rand::thread_rng().gen_range(1..=10);
        let mut count = 1;
        loop {
            let mut guess = String::new();
            println!("1~10 사이의 숫자를 입력해주세요");

            io::stdin()
                .read_line(&mut guess)
                .expect("Failed to read line");

            // 아직 교재에선 안 배운 내용이지만 잘못된 내용을 입력했을 경우 예외처리
            let guess: i32 = match guess.trim().parse() {
                Ok(num) => num,
                Err(_) => {
                    println!("올바른 숫자를 입력해주세요 \n");
                    continue;
                }
            };

            if guess == 0 {
                println!("게임을 종료합니다 \n");
                break 'end_game;
            }
            else if guess < 1 || guess > 10 {
                println!("1~10 사이의 숫자를 입력해주세요 \n");
                continue;
            }

            if secret_number == guess {
                println!("맞췄습니다 \n");
                println!("시도 횟수: {}", count);

                let mut retry = String::new();
                println!("게임을 계속하시겠습니까? (Y/N) \n");

                io::stdin()
                    .read_line(&mut retry)
                    .expect("Failed to read line");
                let retry = retry.trim().chars().next().unwrap_or('n');

                if retry == 'Y' || retry == 'y' {
                    println!("게임을 다시 시작하겠습니다 \n");
                    break;
                }
                else if retry == 'N' || retry == 'n' {
                    println!("게임을 종료합니다 \n");
                    break 'end_game;
                }
            }
            else {
                println!("틀렸습니다 \n");
                count += 1;
            }
        }
    }

}