# fpga_vertex_6_gtx_interface

Serial communication between two Vertex 6 FPGA using vertex 6 GTx IP core. Simulation is done in Xilinx ISE 14.1 simualtor. Check the pdf file, FPGA_GTX_MANUAL in this repository for additional guideline realted to this specific repository. Output waveforms are in the steps folder.

The design uses Block RAM based frame generators which provide incremental test data (HEX format) to the GTXs for transmission. You can modify the data transmitted by changing the INIT values of the frame generator in vertex6_gtx_tx_component_top.v & vertex6_gtx_rx_component_top.v files. 

### Running the code

Test bench for this design is in simualtion folder with name top_test_bench.v 

First change the directory to 
```
/vertex6_gtx_tx_component/simulation/functional/
```

Then in Xilinx ISE Cmd type

```
./simulate_isim.sh
```

### Reference and Additional Material

Please check the following resource for better understanding of this repository.

For Vertex-6 FPGA GTx Transcieiver, check the following guide

https://www.xilinx.com/support/documentation/user_guides/ug366.pdf

For using the IP core for Vertex-6 GTx, check LogiCORE™ IP Virtex®-6 FPGA GTX Transceiver Wizard.

https://www.xilinx.com/support/documentation/ip_documentation/ug516_v6_gtxwizard.pdf

For using Block RAM of Vertex-6, check the following guide

https://www.xilinx.com/support/documentation/user_guides/ug363.pdf


If you face any difficulty open an issue on this repositroy or drop an email at arslanali800@hotmail.com.
