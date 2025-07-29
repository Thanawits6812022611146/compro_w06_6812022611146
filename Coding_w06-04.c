#include <stdio.h>

int main() {
    float x, total, price = 100.0, quantity = 2, discount = 30.0, rate = 0.05, a = 3.0;
    int score = 100, penalty = 5, mistake = 2;

    // 1. แบบเต็ม: x = x - 4.0;
    x = 10.0;
    x = x - 4.0;
    printf("1. แบบเต็ม: x = x - 4.0 → x = %.2f\n", x);

    //    แบบย่อ: x -= 4.0;
    x = 10.0;
    x -= 4.0;
    printf("   แบบย่อ: x -= 4.0 → x = %.2f\n\n", x);

    // 2. แบบเต็ม: x = 6.5 * x;
    x = 2.0;
    x = 6.5 * x;
    printf("2. แบบเต็ม: x = 6.5 * x → x = %.2f\n", x);

    //    แบบย่อ: x *= 6.5;
    x = 2.0;
    x *= 6.5;
    printf("   แบบย่อ: x *= 6.5 → x = %.2f\n\n", x);

    // 3. ใช้ % ต้องใช้ int เท่านั้น
    int y = 5, z = 2;
    int xi = 20;  // ใช้ xi แทน x (float) เพื่อใช้กับ %
    
    // แบบเต็ม: xi = xi % (y + z * (int)a);
    xi = 20;
    xi = xi % (y + z * (int)a);
    printf("3. แบบเต็ม: xi = xi %% (y + z * a) → xi = %d\n", xi);

    // แบบย่อ: xi %= (y + z * (int)a);
    xi = 20;
    xi %= (y + z * (int)a);
    printf("   แบบย่อ: xi %%= (y + z * a) → xi = %d\n\n", xi);

    // 4. แบบเต็ม: x = x / (2.0 + x);
    x = 4.0;
    x = x / (2.0 + x);
    printf("4. แบบเต็ม: x = x / (2.0 + x) → x = %.4f\n", x);

    //    แบบย่อ: x /= (2.0 + x);
    x = 4.0;
    x /= (2.0 + x);
    printf("   แบบย่อ: x /= (2.0 + x) → x = %.4f\n\n", x);

    // 5. แบบเต็ม: total = total + (price * quantity - discount);
    total = 0;
    total = total + (price * quantity - discount); // 0 + (100 * 2 - 30) = 170
    printf("5. แบบเต็ม: total = total + (price * quantity - discount) → total = %.2f\n", total);

    //    แบบย่อ: total += (price * quantity - discount);
    total = 0;
    total += (price * quantity - discount);
    printf("   แบบย่อ: total += (price * quantity - discount) → total = %.2f\n\n", total);

    // 6. แบบเต็ม: x = x * (1 + rate / 100);
    x = 100.0;
    x = x * (1 + rate / 100);
    printf("6. แบบเต็ม: x = x * (1 + rate / 100) → x = %.2f\n", x);

    //    แบบย่อ: x *= (1 + rate / 100);
    x = 100.0;
    x *= (1 + rate / 100);
    printf("   แบบย่อ: x *= (1 + rate / 100) → x = %.2f\n\n", x);

    // 7. แบบเต็ม: score = score - (penalty * (mistake + 1));
    score = 100;
    score = score - (penalty * (mistake + 1));  // 100 - 5 * (2+1) = 85
    printf("7. แบบเต็ม: score = score - (penalty * (mistake + 1)) → score = %d\n", score);

    //    แบบย่อ: score -= (penalty * (mistake + 1));
    score = 100;
    score -= (penalty * (mistake + 1));
    printf("   แบบย่อ: score -= (penalty * (mistake + 1)) → score = %d\n", score);

    return 0;
}