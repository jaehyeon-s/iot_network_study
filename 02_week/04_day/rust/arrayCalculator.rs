use std::io;

fn main() {
    let mut arr = [0.0; 5];
    let mut sum = 0.0;

    let mut max = -99999999.0;
    let mut min = 99999999.0;

    for i in 0..5 {
        let mut num = String::new();

        println!("숫자를 입력해주세요");
        io::stdin()
            .read_line(&mut num)
            .expect("Failed to read line");
        let num: f64 = num.trim().parse().expect("숫자를 입력해주세요");

        arr[i] = num;
        sum += arr[i];

        if max <= arr[i] {
            max = arr[i];
        }

        if min >= arr[i] {
            min = arr[i];
        }
    }

    let avg = sum / arr.len() as f64;

    println!("sum: {}, avg: {}, max: {}, min: {}", sum, avg, max, min);
}