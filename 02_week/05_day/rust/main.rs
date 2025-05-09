use rand::Rng;

fn main() {
    println!("Guess the number!");

        let secret_number = rand::thread_rng().gen_range(1..=9);  // 1~10까지의 수
        println!("The secret number is: {}", secret_number);
}