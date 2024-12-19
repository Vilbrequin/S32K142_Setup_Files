# S32K142_Setup_Files

### 1. Compile the mimimalist main.c file

`arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -g -c main.c -o main.o`


### 2. Compile the startup code startup_S32K142.c file

`arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -g -c startup_S32K142.c -o startup_S32K142.c`

### 3. Link

`arm-none-eabi-gcc -nostartfiles -T S32K142.ld startup_S32K142.o main.o -o out.elf`

### 4. Run GDB Server

pegdbserver_console : `pegdbserver_console -device=NXP_S32K1xx_S32K142F256M15 -startserver -singlesession -serverport=7224 -gdbmiport=6224 -interface=OPENSDA -speed=Œ`


### 5. Run GDB Clinet

- `arm-none-eabi-gdb C:\NXP\out.elf`
- `target remote localhost:7224`
- `monitor reset`
- `load`
- `monitor reset halt`
- `continue`