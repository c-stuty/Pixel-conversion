#include <stdio.h>
#include <stdlib.h>

#define uint8_t unsigned char
#define uint16_t unsigned short

uint8_t code[12][256] =
{
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0xF8,0xFF,0xFF,0x7F,0x00,0x00,
     0x00,0x00,0xFE,0xFF,0xFF,0xFF,0x01,0x00,0x00,0x00,0xFF,0x03,0x00,0xFF,0x03,0x00,0x00,0x80,0x1F,0x00,0x00,0xE0,0x07,0x00,
     0x00,0xC0,0x07,0x00,0x00,0x80,0x0F,0x00,0x00,0xE0,0x01,0x00,0x00,0x00,0x1E,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x38,0x00,
     0x00,0x30,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x60,0x00,
     0x00,0x18,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x60,0x00,
     0x00,0x18,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x38,0x00,
     0x00,0xE0,0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0xE0,0x03,0x00,0x00,0x00,0x1F,0x00,0x00,0xC0,0x0F,0x00,0x00,0xE0,0x0F,0x00,
     0x00,0x00,0xFF,0x01,0x00,0xFE,0x03,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0x01,0x00,0x00,0x00,0xF8,0xFF,0xFF,0x7F,0x00,0x00,
     0x00,0x00,0xC0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"0",0*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x60,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x60,0x00,
     0x00,0x80,0x01,0x00,0x00,0x00,0x60,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x60,0x00,0x00,0x80,0x01,0x00,0x00,0x00,0x60,0x00,
     0x00,0x80,0x01,0x00,0x00,0x00,0x70,0x00,0x00,0xC0,0x03,0x00,0x00,0x00,0x78,0x00,0x00,0xC0,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,
     0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"1",1*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0xF8,0x01,0x00,0x00,0x7E,0x00,0x00,0x00,0xFF,0x03,0x00,0x80,0x7F,0x00,
     0x00,0x80,0xFF,0x03,0x00,0xC0,0x7B,0x00,0x00,0xC0,0xFF,0x03,0x00,0xE0,0x79,0x00,0x00,0xE0,0xF1,0x03,0x00,0xF0,0x78,0x00,
     0x00,0xE0,0xC0,0x01,0x00,0x38,0x78,0x00,0x00,0x70,0x00,0x00,0x00,0x1C,0x78,0x00,0x00,0x30,0x00,0x00,0x00,0x0E,0x78,0x00,
     0x00,0x38,0x00,0x00,0x00,0x07,0x78,0x00,0x00,0x18,0x00,0x00,0x80,0x03,0x78,0x00,0x00,0x18,0x00,0x00,0xC0,0x01,0x78,0x00,
     0x00,0x18,0x00,0x00,0xE0,0x00,0x78,0x00,0x00,0x18,0x00,0x00,0x70,0x00,0x78,0x00,0x00,0x18,0x00,0x00,0x38,0x00,0x78,0x00,
     0x00,0x18,0x00,0x00,0x1C,0x00,0x78,0x00,0x00,0x38,0x00,0x00,0x0E,0x00,0x78,0x00,0x00,0x30,0x00,0x80,0x07,0x00,0x78,0x00,
     0x00,0x70,0x00,0xC0,0x03,0x00,0x78,0x00,0x00,0xF0,0x00,0xF0,0x01,0x00,0x78,0x00,0x00,0xE0,0x03,0xFE,0x00,0x00,0x7C,0x00,
     0x00,0xC0,0xFF,0x7F,0x00,0x00,0x7E,0x00,0x00,0x80,0xFF,0x3F,0x00,0x00,0x7F,0x00,0x00,0x00,0xFF,0x0F,0x00,0xF0,0x7F,0x00,
     0x00,0x00,0xFC,0x01,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"2",2*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x01,0x00,0x00,0x00,0x3E,0x00,0x00,0xF0,0x07,0x00,
     0x00,0x80,0x7F,0x00,0x00,0xF8,0x0F,0x00,0x00,0xC0,0x7F,0x00,0x00,0xF8,0x1F,0x00,0x00,0x60,0x38,0x00,0x00,0xF8,0x1F,0x00,
     0x00,0x30,0x00,0x00,0x00,0xF0,0x38,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x70,0x00,
     0x00,0x18,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0x18,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0x18,0x00,0x80,0x01,0x00,0x60,0x00,
     0x00,0x18,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0x18,0x00,0xC0,0x01,0x00,0x60,0x00,0x00,0x38,0x00,0xC0,0x03,0x00,0x60,0x00,
     0x00,0x38,0x00,0xE0,0x03,0x00,0x60,0x00,0x00,0x70,0x00,0x60,0x03,0x00,0x30,0x00,0x00,0xF0,0x00,0x78,0x07,0x00,0x30,0x00,
     0x00,0xE0,0x07,0x3E,0x0E,0x00,0x38,0x00,0x00,0xC0,0xFF,0x1F,0x1C,0x00,0x1E,0x00,0x00,0x80,0xFF,0x0F,0x7C,0x80,0x0F,0x00,
     0x00,0x00,0xFF,0x07,0xF8,0xFF,0x07,0x00,0x00,0x00,0xFC,0x01,0xF0,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0x01,0x00,
     0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"3",3*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x03,0x00,0x00,
     0x00,0x00,0x00,0x00,0xC0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x03,0x00,0x00,
     0x00,0x00,0x00,0x00,0x1E,0x03,0x00,0x00,0x00,0x00,0x00,0x80,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0xC0,0x01,0x03,0x00,0x00,
     0x00,0x00,0x00,0xF0,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x03,0x00,0x00,
     0x00,0x00,0x00,0x07,0x00,0x03,0x60,0x00,0x00,0x00,0xC0,0x03,0x00,0x03,0x60,0x00,0x00,0x00,0xF0,0x00,0x00,0x03,0x60,0x00,
     0x00,0x00,0x78,0x00,0x00,0x03,0x60,0x00,0x00,0x00,0x1E,0x00,0x00,0x03,0x60,0x00,0x00,0x00,0x07,0x00,0x00,0x03,0x60,0x00,
     0x00,0xC0,0x03,0x00,0x00,0x03,0x70,0x00,0x00,0xE0,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,
     0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x70,0x00,
     0x00,0x00,0x00,0x00,0x00,0x03,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x60,0x00,
     0x00,0x00,0x00,0x00,0x00,0x03,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"4",4*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x03,0x00,
     0x00,0x00,0x00,0xFE,0x03,0xFC,0x07,0x00,0x00,0xF8,0xFF,0xFF,0x03,0xFC,0x0F,0x00,0x00,0xF8,0x7F,0x80,0x03,0xFC,0x1F,0x00,
     0x00,0x78,0x00,0xE0,0x00,0x78,0x38,0x00,0x00,0x78,0x00,0x70,0x00,0x00,0x30,0x00,0x00,0x78,0x00,0x38,0x00,0x00,0x30,0x00,
     0x00,0x78,0x00,0x38,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x18,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x1C,0x00,0x00,0x60,0x00,
     0x00,0x78,0x00,0x1C,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x1C,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x1C,0x00,0x00,0x60,0x00,
     0x00,0x78,0x00,0x1C,0x00,0x00,0x60,0x00,0x00,0x78,0x00,0x3C,0x00,0x00,0x30,0x00,0x00,0x78,0x00,0x3C,0x00,0x00,0x38,0x00,
     0x00,0x78,0x00,0x78,0x00,0x00,0x3C,0x00,0x00,0x78,0x00,0xF8,0x01,0x00,0x1E,0x00,0x00,0x78,0x00,0xF0,0x0F,0xC0,0x0F,0x00,
     0x00,0x78,0x00,0xE0,0xFF,0xFF,0x07,0x00,0x00,0x78,0x00,0xC0,0xFF,0xFF,0x03,0x00,0x00,0x38,0x00,0x00,0xFF,0xFF,0x00,0x00,
     0x00,0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"5",5*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0xF0,0xFF,0x03,0x00,0x00,0x00,0x00,0x80,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0xFF,0x00,0x00,
     0x00,0x00,0xFC,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0xFE,0x01,0x1E,0xF8,0x07,0x00,0x00,0x00,0x0F,0x80,0x07,0x80,0x0F,0x00,
     0x00,0x80,0x03,0xC0,0x03,0x00,0x1F,0x00,0x00,0xC0,0x01,0xE0,0x01,0x00,0x3C,0x00,0x00,0xE0,0x00,0xE0,0x00,0x00,0x38,0x00,
     0x00,0x60,0x00,0x70,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x30,0x00,0x38,0x00,0x00,0x60,0x00,
     0x00,0x18,0x00,0x38,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x38,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x38,0x00,0x00,0x60,0x00,
     0x00,0x18,0x00,0x38,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x38,0x00,0x00,0x60,0x00,0x00,0x18,0x00,0x78,0x00,0x00,0x30,0x00,
     0x00,0x38,0x00,0x70,0x00,0x00,0x30,0x00,0x00,0xF0,0x07,0xF0,0x00,0x00,0x38,0x00,0x00,0xF0,0x0F,0xF0,0x03,0x00,0x1E,0x00,
     0x00,0xE0,0x0F,0xE0,0x0F,0xC0,0x0F,0x00,0x00,0xC0,0x0F,0xC0,0xFF,0xFF,0x07,0x00,0x00,0x80,0x07,0x80,0xFF,0xFF,0x03,0x00,
     0x00,0x00,0x00,0x00,0xFE,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"6",6*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,0x00,0x00,0x00,0x00,
     0x00,0xF8,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0xC0,0x3F,0x00,
     0x00,0x78,0x00,0x00,0x00,0xFE,0x7F,0x00,0x00,0x78,0x00,0x00,0xC0,0xFF,0x7F,0x00,0x00,0x78,0x00,0x00,0xF8,0xFF,0x7F,0x00,
     0x00,0x78,0x00,0x00,0xFE,0xFF,0x7F,0x00,0x00,0x78,0x00,0x80,0xFF,0xFF,0x3F,0x00,0x00,0x78,0x00,0xE0,0x1F,0x00,0x00,0x00,
     0x00,0x78,0x00,0xFC,0x03,0x00,0x00,0x00,0x00,0x78,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x78,0x80,0x0F,0x00,0x00,0x00,0x00,
     0x00,0x78,0xE0,0x01,0x00,0x00,0x00,0x00,0x00,0x78,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x1E,0x00,0x00,0x00,0x00,0x00,
     0x00,0xF8,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"7",7*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0xFC,0x01,0xC0,0xFF,0x01,0x00,0x00,0x00,0xFF,0x07,0xF0,0xFF,0x07,0x00,
     0x00,0x80,0xFF,0x0F,0xF8,0xFF,0x0F,0x00,0x00,0xC0,0xFF,0x1F,0xFC,0x80,0x0F,0x00,0x00,0xE0,0x83,0x3F,0x3E,0x00,0x1E,0x00,
     0x00,0xF0,0x00,0x7E,0x0E,0x00,0x38,0x00,0x00,0x70,0x00,0x7C,0x07,0x00,0x38,0x00,0x00,0x30,0x00,0xF8,0x03,0x00,0x30,0x00,
     0x00,0x38,0x00,0xF0,0x01,0x00,0x70,0x00,0x00,0x18,0x00,0xF0,0x01,0x00,0x60,0x00,0x00,0x18,0x00,0xE0,0x01,0x00,0x60,0x00,
     0x00,0x18,0x00,0xE0,0x03,0x00,0x60,0x00,0x00,0x18,0x00,0xC0,0x03,0x00,0x60,0x00,0x00,0x18,0x00,0xC0,0x07,0x00,0x60,0x00,
     0x00,0x18,0x00,0x80,0x0F,0x00,0x60,0x00,0x00,0x38,0x00,0xC0,0x1F,0x00,0x70,0x00,0x00,0x30,0x00,0x60,0x1F,0x00,0x30,0x00,
     0x00,0x70,0x00,0x70,0x3E,0x00,0x38,0x00,0x00,0xF0,0x00,0x38,0xFE,0x00,0x1C,0x00,0x00,0xE0,0x03,0x1E,0xFC,0x03,0x1F,0x00,
     0x00,0xC0,0xFF,0x1F,0xF8,0xFF,0x0F,0x00,0x00,0x80,0xFF,0x0F,0xF0,0xFF,0x07,0x00,0x00,0x00,0xFF,0x03,0xC0,0xFF,0x01,0x00,
     0x00,0x00,0xFC,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"8",8*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0xE0,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x07,0x80,0x07,0x00,
     0x00,0x80,0xFF,0xFF,0x0F,0xC0,0x1F,0x00,0x00,0xC0,0x0F,0xC0,0x1F,0xC0,0x3F,0x00,0x00,0xE0,0x01,0x00,0x3F,0xC0,0x3F,0x00,
     0x00,0xF0,0x00,0x00,0x3C,0x80,0x3F,0x00,0x00,0x70,0x00,0x00,0x78,0x00,0x70,0x00,0x00,0x38,0x00,0x00,0x78,0x00,0x60,0x00,
     0x00,0x18,0x00,0x00,0x70,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x70,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x70,0x00,0x60,0x00,
     0x00,0x18,0x00,0x00,0x70,0x00,0x60,0x00,0x00,0x18,0x00,0x00,0x70,0x00,0x30,0x00,0x00,0x18,0x00,0x00,0x38,0x00,0x30,0x00,
     0x00,0x38,0x00,0x00,0x38,0x00,0x38,0x00,0x00,0x30,0x00,0x00,0x1C,0x00,0x1C,0x00,0x00,0x70,0x00,0x00,0x1E,0x00,0x0F,0x00,
     0x00,0xE0,0x00,0x00,0x0F,0xC0,0x07,0x00,0x00,0xC0,0x03,0x80,0x03,0xF8,0x03,0x00,0x00,0x80,0x1F,0xE0,0xC0,0xFF,0x01,0x00,
     0x00,0x00,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x03,0x00,0x00,
     0x00,0x00,0x00,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"9",9*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0x00,0x00,0x00,0x00,0x00,
     0x00,0xF8,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x7F,0x00,0x00,0x00,0x00,
     0x00,0x18,0xFC,0xFF,0x0F,0x00,0x00,0x00,0x00,0x18,0xC0,0xFF,0xFF,0x00,0x00,0x00,0x00,0x18,0x00,0xF8,0xFF,0x0F,0x00,0x00,
     0x00,0x00,0x00,0x80,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,
     0x00,0x00,0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,
     0x00,0x00,0x00,0x00,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x1F,0x00,0x00,0x00,
     0x00,0x18,0x00,0xFE,0x01,0x00,0x00,0x00,0x00,0x18,0xC0,0x1F,0x00,0x00,0x00,0x00,0x00,0x18,0xFC,0x01,0x00,0x00,0x00,0x00,
     0x00,0xF8,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"V",10*/
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,
     0x00,0x00,0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x7F,0x00,
     0x00,0x00,0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*".",11*/
};

uint16_t number[12][2048] = {0};

void init_number(void);
void print_number(void);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	init_number();
	print_number();
	return 0;
}

void init_number(void)
{
    int i;      // 每一个字符
    int j;      // 字符的每一个  byte
    int k;      // byte 的每一个 bit
    
	for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 256; j++)
        {
            for(k = 0; k < 8; k++)
            {
                if(code[i][j] & (0x1 << k))
                {
                	// 8*k+j/2+(j%2)*64
                    number[i][((j%8)*8+k)*32+j/8] = 'X';
                }
                else
                {
                    number[i][((j%8)*8+k)*32+j/8] = ' ';
                }
            }
        }
    }

}

void print_number(void)
{
	int i;
	int j;
	
	for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 2048; j++)
        {
            //printf("0x%04x ", number[i][j]);
            printf("%c", number[i][j]);
            if(j % 32 == 31)
            {
            	printf("\n");
			}
        }
    }
	
}
