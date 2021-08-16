#include <fstream>
#include <iomanip>

#include "hw_bit1adder.h"
#include "hw_types.h"

int main()
{
	std::ofstream output_file{ "test.txt" };
	output_file << std::hex << std::showbase;
	output_file << "A\tB\tC-in\tS\t\tP\tG\tC-out\tMask\n";

	bit16_matrix4 input{ 0x0, 0x0, 0x0, 0x0 };
	bit16_matrix4 signal{ 0x0, 0x0, 0x0, 0x1 };
	for (int a = 0; a < 0x10; ++a) {
		input[0] = a;
		for (int b = 0; b < 0x10; ++b) {
			input[1] = b;
			for (int carryin = 0; carryin < 0x10; ++carryin) {
				input[2] = carryin;
				bit16 output = bit1_adder(input, signal);
				output_file << input[0] << "\t" << input[1] << "\t"
					<< input[2] << "\t" << output << "\t\t"
					<< signal[0] << "\t" << signal[1] << "\t"
					<< signal[2] << "\t" << signal[3] << "\n";
			}
		}
	}

	output_file.close();
	std::exit(0);
}