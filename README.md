# HardwareModel
Project for fun to model a simple RISC from logic gates

Copyright 2021 Louis Duller

The goal for this project is to model a simple RISC from the ground up using logic gates.

Current design considerations:
- How are single bits represented in the model? One 8 bit word (probable direction) or one 16 bit word for entire bus (current direction; must isolate bit using mask)
- How are concurrent logical steps executed? Sequentially (current, easier to implement) or true concurrent control (more realistic, but possibly slower and harder to use)
- ^ extension: Should model focus on performance or accuracy? Leaning toward performance
- Should library limit simulation extensibility (16/32/64/... bit model upper limit)? No thoughts on this one - orginal intention was to model 32 bit RISC
- Could model form basis for a graphical editor? No formal plans for this
