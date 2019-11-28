###############################################################################
##
## (c) Copyright 2009-2011 Xilinx, Inc. All rights reserved.
##
## This file contains confidential and proprietary information
## of Xilinx, Inc. and is protected under U.S. and
## international copyright and other intellectual property
## laws.
##
## DISCLAIMER
## This disclaimer is not a license and does not grant any
## rights to the materials distributed herewith. Except as
## otherwise provided in a valid license issued to you by
## Xilinx, and to the maximum extent permitted by applicable
## law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
## WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
## AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
## BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
## INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
## (2) Xilinx shall not be liable (whether in contract or tort,
## including negligence, or under any other theory of
## liability) for any loss or damage of any kind or nature
## related to, arising under or in connection with these
## materials, including for any direct, or any indirect,
## special, incidental, or consequential loss or damage
## (including loss of data, profits, goodwill, or any type of
## loss or damage suffered as a result of any action brought
## by a third party) even if such damage or loss was
## reasonably foreseeable or Xilinx had been advised of the
## possibility of the same.
##
## CRITICAL APPLICATIONS
## Xilinx products are not designed or intended to be fail-
## safe, or for use in any application requiring fail-safe
## performance, such as life-support or safety devices or
## systems, Class III medical devices, nuclear facilities,
## applications related to the deployment of airbags, or any
## other applications that could lead to death, personal
## injury, or severe property or environmental damage
## (individually and collectively, "Critical
## Applications"). Customer assumes the sole risk and
## liability of any use of Xilinx products in Critical
## Applications, subject only to applicable laws and
## regulations governing limitations on product liability.
## 
## THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
## PART OF THIS FILE AT ALL TIMES.



wcfg new
divider add "FPGA 1 (Vertex 6) "
divider add "Frame Generator Module Data"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_gen/TX_DATA
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_gen/tx_data_bram_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_gen/tx_charisk_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_gen/read_counter_i
divider add "Frame Checker Module Data"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/RX_DATA
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/bram_data_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/read_counter_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/begin_r
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/track_data_r
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/data_error_detected_r
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/start_of_packet_detected_r
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_frame_check/ERROR_COUNT
divider add "Reference Clocks From External"
wave add /TOP_TEST_BENCH/tx_refclk_p_r
wave add /TOP_TEST_BENCH/tx_refclk_n_r
wave add /TOP_TEST_BENCH/rx_refclk_p_r
wave add /TOP_TEST_BENCH/rx_refclk_n_r

#divider add "MGT (GTX Wrapper) Instance in TOP Module"
#wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_txdata_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_txcharisk_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_rxdata_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_rxcharisk_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_rxcommadet_i

divider add "MGT (GTX Wrapper) clocks"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_txoutclk_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/gtx0_txusrclk2_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/q0_clk0_refclk_i
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/q0_clk0_refclk_i_bufg
divider add "Transmit Ports - TX Data Path interface"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/TXDATA_IN
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/TXOUTCLK_OUT
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/TXUSRCLK2_IN
divider add "Transmit Ports - 8b10b Encoder Control Ports"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/TXCHARISK_IN
divider add "Transmit Ports - TX Driver and OOB signaling"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/TXP_OUT
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/TXN_OUT
divider add "Receive Ports - RX Data Path interface"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/RXDATA_OUT
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/RXUSRCLK2_IN
divider add "Receive Ports - 8b10b Decoder"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/RXCHARISK_OUT
divider add "Receive Ports - RX Driver and OOB signalling"
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/RXP_IN
wave add /TOP_TEST_BENCH/vertex6_gtx_tx_component_top_i/vertex6_gtx_tx_component_i/gtx0_vertex6_gtx_tx_component_i/RXN_IN




divider add "FPGA 2"

divider add "Frame Generator Module Data"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_gen/TX_DATA
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_gen/tx_data_bram_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_gen/tx_charisk_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_gen/read_counter_i
divider add "Frame Checker Module Data"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/RX_DATA
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/bram_data_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/read_counter_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/begin_r
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/track_data_r
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/data_error_detected_r
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/start_of_packet_detected_r
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_frame_check/ERROR_COUNT
divider add "Reference Clocks from external"
wave add /TOP_TEST_BENCH/tx_refclk_p_r
wave add /TOP_TEST_BENCH/tx_refclk_n_r
wave add /TOP_TEST_BENCH/rx_refclk_p_r
wave add /TOP_TEST_BENCH/rx_refclk_n_r
#divider add "MGT (GTX Wrapper) Instance in TOP Module"
#wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_txdata_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_txcharisk_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_rxdata_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_rxcharisk_i
#wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_rxcommadet_i
divider add "MGT (GTX Wrapper) clocks"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_txoutclk_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/gtx0_txusrclk2_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/q0_clk0_refclk_i
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/q0_clk0_refclk_i_bufg
divider add "Transmit Ports - TX Data Path interface"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/TXDATA_IN
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/TXOUTCLK_OUT
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/TXUSRCLK2_IN
divider add "Transmit Ports - 8b10b Encoder Control Ports"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/TXCHARISK_IN
divider add "Transmit Ports - TX Driver and OOB signaling"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/TXP_OUT
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/TXN_OUT
divider add "Receive Ports - RX Data Path interface"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/RXDATA_OUT
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/RXUSRCLK2_IN
divider add "Receive Ports - 8b10b Decoder"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/RXCHARISK_OUT
divider add "Receive Ports - RX Driver and OOB signalling"
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/RXP_IN
wave add /TOP_TEST_BENCH/vertex6_gtx_rx_component_top_i/vertex6_gtx_rx_component_i/gtx0_vertex6_gtx_rx_component_i/RXN_IN


run 53 us
quit



