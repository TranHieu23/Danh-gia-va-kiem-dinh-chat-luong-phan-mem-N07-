import { test, expect } from '@playwright/test';

test('test', async ({ page }) => {
  await page.goto('https://vuabanlo.vn/');
  await page.getByRole('navigation').getByRole('link', { name: 'COMBO KHUYẾN MÃI' }).click();
  await page.getByText('Combo PIN DỰ PHÒNG VELASBOOST DYNAMIC 1 (10K MAH) + CÁP SẠC NHANH C-L').click();
  await page.getByRole('link', { name: 'A & Thêm giỏ hàng' }).click();
  await page.getByRole('link', { name: 'A P' }).click();
  await page.locator('#cartformpage i').nth(1).click();
  await page.locator('#cartformpage i').nth(1).click();
  await page.getByRole('link', { name: 'Thanh toán', exact: true }).click();
  await page.getByPlaceholder('Họ và tên').click();
  await page.getByPlaceholder('Mã giảm giá').click();
  await page.getByPlaceholder('Họ và tên').click();
  await page.getByPlaceholder('Họ và tên').click();
  await page.getByPlaceholder('Họ và tên').fill('tran ba hieu');
  await page.getByPlaceholder('Email', { exact: true }).click();
  await page.getByPlaceholder('Số điện thoại').click();
  await page.getByPlaceholder('Số điện thoại').fill('0123456789');
  await page.getByPlaceholder('Email', { exact: true }).click();
  await page.getByPlaceholder('Email', { exact: true }).click();
  await page.getByPlaceholder('Email', { exact: true }).fill('hieu@gmail.com');
  await page.getByPlaceholder('Địa chỉ', { exact: true }).click();
  await page.getByPlaceholder('Địa chỉ', { exact: true }).fill('phenikaa, ha dong');
  await page.locator('div').filter({ hasText: 'Thông tin đơn hàng Hình ảnh M' }).first().click();
});