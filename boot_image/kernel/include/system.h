#ifndef __SYSTEM_H__
#define __SYSTEM_H__

#include <stdint.h>
#include <stddef.h>

void map_PIC(uint8_t PIC0Offset, uint8_t PIC1Offset);
void set_PIC0_mask(uint8_t mask);
void set_PIC1_mask(uint8_t mask);
uint8_t get_PIC0_mask(void);
uint8_t get_PIC1_mask(void);
void set_PIC_mask(uint16_t mask);
uint16_t get_PIC_mask(void);
void pic_enable_irq(int irq);

void set_pit_freq(uint32_t frequency);
void sleep(uint64_t time);

void load_IDT(void);

extern volatile uint64_t uptime_raw;
extern volatile uint64_t uptime_sec;

void idt_register_handler(int vector, int type, int ist, void *handler);

#endif
