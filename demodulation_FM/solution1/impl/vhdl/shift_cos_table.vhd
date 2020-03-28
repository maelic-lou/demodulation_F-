-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity shift_cos_table_rom is 
    generic(
             DWIDTH     : integer := 9; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 65
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of shift_cos_table_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "100000000", 1 to 3=> "011111111", 4 to 5=> "011111110", 6 => "011111101", 
    7 => "011111100", 8 => "011111011", 9 => "011111001", 10 => "011111000", 
    11 => "011110110", 12 => "011110100", 13 => "011110011", 14 => "011110001", 
    15 => "011101110", 16 => "011101100", 17 => "011101010", 18 => "011100111", 
    19 => "011100100", 20 => "011100001", 21 => "011011110", 22 => "011011011", 
    23 => "011011000", 24 => "011010100", 25 => "011010001", 26 => "011001101", 
    27 => "011001001", 28 => "011000101", 29 => "011000001", 30 => "010111101", 
    31 => "010111001", 32 => "010110101", 33 => "010110000", 34 => "010101011", 
    35 => "010100111", 36 => "010100010", 37 => "010011101", 38 => "010011000", 
    39 => "010010011", 40 => "010001110", 41 => "010001000", 42 => "010000011", 
    43 => "001111110", 44 => "001111000", 45 => "001110011", 46 => "001101101", 
    47 => "001100111", 48 => "001100001", 49 => "001011100", 50 => "001010110", 
    51 => "001010000", 52 => "001001010", 53 => "001000100", 54 => "000111110", 
    55 => "000111000", 56 => "000110001", 57 => "000101011", 58 => "000100101", 
    59 => "000011111", 60 => "000011001", 61 => "000010010", 62 => "000001100", 
    63 => "000000110", 64 => "000000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity shift_cos_table is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 65;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of shift_cos_table is
    component shift_cos_table_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    shift_cos_table_rom_U :  component shift_cos_table_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


