# computer (name not final)
it's a fantasy computer!

feature set not complete, nor even planned

## the computer's address space
the computer has a 16-bit address space, and it operates on 8-bit bytes  
R = Read, W = Write  
(not finalized, might be subject to change)

- 0000h-0FFFh: First 1000h bytes of PRG. Cannot be changed. (R)
- 1000h-1FFFh: Another 1000h bytes of PRG. The loaded PRG page can be changed. (R)
- 2000h-2FFFh: Page A of (EX)RAM
- 3000h-3FFFh: Page B of (EX)RAM
- 4000h-4FFFh: Page C of (EX)RAM
- 5000h-5FFFh: Page D of (EX)RAM