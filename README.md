# OSSL_teamProject

๐์ทํก๐
===
mini project ์ฃผ์ 
----------------
์จ๋ผ์ธ ์ผํ๋ชฐ ๊ด๋ฆฌ

- ํ์
   - __๊น๋ฏผ์ฑ__
      - ์ญํ  : ํ์คํฐ, ๊ฒ์, ํ์ผ์ ์ฅ, ์๋ฃ์กฐ์ฌ
      - Github ID : alsco1234
  
  - __๋์์__
    * ์ญํ  : ๊นํ ๊ด๋ฆฌ, CRUD์ ํ์ผ์ฝ๊ธฐ ๊ตฌํ, ํด์ง๊ธฐ
    * Github ID : 22000217

----------------
## ์ฌ์ฉํ ์ธ์ด
# C++

## ๊ตฌ์ฑํ ๊ธฐ๋ฅ(ํจ์)
---
# __CRUD__
## Clothes createClothes()
 Create : ์นดํ๊ณ ๋ฆฌ ๋ง๋ ์ ๊ตฌ์กฐ์ฒด ์์ฑ

## void readClothes(Clothes *c)
 Read : ์นดํ๊ณ ๋ฆฌ ๋ง๋ ๊ตฌ์กฐ์ฒด๋ค ์ฝ์ด์ค๊ธฐ

## int updateClothes(Clothes *c) 
 Update : ๋์ ๊ตฌ์กฐ์ฒด ์์ 

## int deleteClothes(Product *p) 
 Delete : ๋์ ๊ตฌ์กฐ์ฒด ์ญ์ 

---
# __DATA FILE__
## void saveData(Product *p, string filename);
 ๋ฐ์ดํฐ ์ ์ฅ

## int loadData(Product *p, string filename); 
 ๋ฐ์ดํฐ ์ฝ์ด์ค๊ธฐ

---
# __๊ฒ์__
## void searchName(Clothes *c, int count, string target)
 ์ด๋ฆ์ผ๋ก ๊ฒ์

## void searchPrice(Clothes *c, int count, int target)
 ๊ฐ๊ฒฉ์ผ๋ก ๊ฒ์

## void searchSize(Clothes *c, int count, string target)
 ์ฌ์ด์ฆ๋ก ๊ฒ์

## void searchNum_stars(Clothes *c, int target)
 ๋ณ ๊ฐ์๋ก ๊ฒ์
