use rand::Rng;

fn main() {

    println!("랜덤 10자리 비밀번호 생성기");

    let pwd = generate_random_pwd();

    for ch in pwd {
        print!("{}", ch);
    }

    println!();
}

fn generate_random_pwd() -> [char; 10] {

    let len: usize = 10;
    let mut pwd: [char; 10] = ['_'; 10];

    let mut i: usize = 0;
    while i < len {
        let rand_select = rand::thread_rng().gen_range(1..=4);

        let rand_pwd = if rand_select == 1 {
            rand::thread_rng().gen_range(97..=122) as u8 as char  // 특수문자
        }
        else if rand_select == 2 {
            rand::thread_rng().gen_range(65..=90) as u8 as char  // 대문자
        }
        else if rand_select == 3 {
            rand::thread_rng().gen_range(48..=57) as u8 as char  // 숫자
        }
        else {
            rand::thread_rng().gen_range(33..=47) as u8 as char  // 소문자
        };

        pwd[i] = rand_pwd;
        i += 1;
    }

    pwd
}