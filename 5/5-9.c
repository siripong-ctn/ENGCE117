#include <stdio.h>

struct Product
{
    int item_id ,stock_quantity;
    float cost_price, sell_price;
};
// ประกาศโครงสร้างข้อมูล Product
// มีสมาชิก item_id, stock_quantity, cost_price, sell_price

float calculate_total_profit(float cost, float sell, int qty);
float calculate_profit_percentage(float cost, float sell);
//ประกาศฟังก์ชัน calculate_total_profit คำนวณกำไรสุทธิต่อรายการ
//ประกาศฟังก์ชัน calculate_profit_percentage คำนวณเปอร์เซ็นต์กำไร

int main() {
    struct Product item; // สร้างตัวแปร item เป็นโครงสร้างของ Product
    float total_profit, profit_percent; // กำไรสุทธิ และเปอร์เซ็นต์กำไร

    printf("Enter ID: ");
    scanf("%d", &item.item_id);
    printf("Enter Cost Price: ");
    scanf("%f", &item.cost_price);
    printf("Enter Sell Price: ");
    scanf("%f", &item.sell_price);
    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock_quantity);
    // รับค่าข้อมูลใส่ในตัวแปร item.Product

    total_profit = calculate_total_profit(item.cost_price, item.sell_price, item.stock_quantity);
    // ส่งข้อมูล item.cost_price, item.sell_price, item.stock_quantity ไปยังฟังก์ชัน calculate_total_profit
    profit_percent = calculate_profit_percentage(item.cost_price, item.sell_price);
    // ส่งข้อมูล item.cost_price, item.sell_price ไปยังฟังก์ชัน calculate_profit_percentage

    printf("INVENTORY PROFIT REPORT\n");
    printf("ID: %d\n", item.item_id);
    printf("Cost: %.2f\n", item.cost_price);
    printf("Sell: %.2f\n", item.sell_price);
    printf("Quantity: %d\n", item.stock_quantity);
    printf("Total Profit: %.2f\n", total_profit);
    printf("Profit Percentage: %.2f%%\n", profit_percent);
    // ประกาศข้อมูลตามรายการ item หลังจากคำนวณฟังก์ชันแล้ว

    printf("Status: ");
    if (profit_percent > 0) {
        printf("Profit");
    } else if (profit_percent < 0) {
        printf("Loss");
    } else {
        printf("Break Even");
    }
    // แสดงสถานะกำไร ,ขาดทุน, เท่าทุน
    // ตรวจสอบเปอร์เซ็นตร์ หลังจากคำนวณฟังก์ชันแล้ว

    return 0;
    // จบโปรแกรม
}

float calculate_total_profit(float cost, float sell, int qty) {
    return (sell - cost) * qty;
    // กำไรสุทธิ = (ราคาขาย - ราคาต้นทุน) * จำนวน
}

float calculate_profit_percentage(float cost, float sell) {
    return ((sell - cost) / cost) * 100;
    // เปอร์เซ็นต์กำไร = ((ราคาขาย - ราคาต้นทุน) / ราคาต้นทุน) * 100
}