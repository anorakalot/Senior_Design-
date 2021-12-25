<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="9.6.2">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="2" name="Route2" color="16" fill="1" visible="no" active="no"/>
<layer number="3" name="Route3" color="17" fill="1" visible="no" active="no"/>
<layer number="4" name="Route4" color="18" fill="1" visible="no" active="no"/>
<layer number="5" name="Route5" color="19" fill="1" visible="no" active="no"/>
<layer number="6" name="Route6" color="25" fill="1" visible="no" active="no"/>
<layer number="7" name="Route7" color="26" fill="1" visible="no" active="no"/>
<layer number="8" name="Route8" color="27" fill="1" visible="no" active="no"/>
<layer number="9" name="Route9" color="28" fill="1" visible="no" active="no"/>
<layer number="10" name="Route10" color="29" fill="1" visible="no" active="no"/>
<layer number="11" name="Route11" color="30" fill="1" visible="no" active="no"/>
<layer number="12" name="Route12" color="20" fill="1" visible="no" active="no"/>
<layer number="13" name="Route13" color="21" fill="1" visible="no" active="no"/>
<layer number="14" name="Route14" color="22" fill="1" visible="no" active="no"/>
<layer number="15" name="Route15" color="23" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="14" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="Teensy_3_and_LC_Series_Boards_v1.4">
<packages>
<package name="TEENSY_3.0-3.2&amp;LC_DIL">
<pad name="GND" x="-7.62" y="16.51" drill="0.9652"/>
<pad name="0" x="-7.62" y="13.97" drill="0.9652"/>
<pad name="1" x="-7.62" y="11.43" drill="0.9652"/>
<pad name="2" x="-7.62" y="8.89" drill="0.9652"/>
<pad name="3" x="-7.62" y="6.35" drill="0.9652"/>
<pad name="4" x="-7.62" y="3.81" drill="0.9652"/>
<pad name="5" x="-7.62" y="1.27" drill="0.9652"/>
<pad name="6" x="-7.62" y="-1.27" drill="0.9652"/>
<pad name="7" x="-7.62" y="-3.81" drill="0.9652"/>
<pad name="8" x="-7.62" y="-6.35" drill="0.9652"/>
<pad name="9" x="-7.62" y="-8.89" drill="0.9652"/>
<pad name="10" x="-7.62" y="-11.43" drill="0.9652"/>
<pad name="11" x="-7.62" y="-13.97" drill="0.9652"/>
<pad name="12" x="-7.62" y="-16.51" drill="0.9652"/>
<pad name="13" x="7.62" y="-16.51" drill="0.9652"/>
<pad name="14/A0" x="7.62" y="-13.97" drill="0.9652"/>
<pad name="15/A1" x="7.62" y="-11.43" drill="0.9652"/>
<pad name="16/A2" x="7.62" y="-8.89" drill="0.9652"/>
<pad name="17/A3" x="7.62" y="-6.35" drill="0.9652"/>
<pad name="18/A4" x="7.62" y="-3.81" drill="0.9652"/>
<pad name="19/A5" x="7.62" y="-1.27" drill="0.9652"/>
<pad name="20/A6" x="7.62" y="1.27" drill="0.9652"/>
<pad name="21/A7" x="7.62" y="3.81" drill="0.9652"/>
<pad name="22/A8" x="7.62" y="6.35" drill="0.9652"/>
<pad name="23/A9" x="7.62" y="8.89" drill="0.9652"/>
<pad name="3.3V" x="7.62" y="11.43" drill="0.9652"/>
<pad name="AGND" x="7.62" y="13.97" drill="0.9652"/>
<pad name="VIN" x="7.62" y="16.51" drill="0.9652"/>
<wire x1="-8.89" y1="17.78" x2="8.89" y2="17.78" width="0.127" layer="51"/>
<wire x1="8.89" y1="17.78" x2="8.89" y2="-17.78" width="0.127" layer="51"/>
<wire x1="8.89" y1="-17.78" x2="-8.89" y2="-17.78" width="0.127" layer="51"/>
<wire x1="-8.89" y1="-17.78" x2="-8.89" y2="17.78" width="0.127" layer="51"/>
<wire x1="-1.27" y1="16.51" x2="1.27" y2="16.51" width="0.2032" layer="21"/>
<wire x1="1.27" y1="16.51" x2="1.27" y2="17.78" width="0.2032" layer="21"/>
<wire x1="1.27" y1="17.78" x2="8.89" y2="17.78" width="0.2032" layer="21"/>
<wire x1="8.89" y1="17.78" x2="8.89" y2="-17.78" width="0.2032" layer="21"/>
<wire x1="8.89" y1="-17.78" x2="-8.89" y2="-17.78" width="0.2032" layer="21"/>
<wire x1="-8.89" y1="-17.78" x2="-8.89" y2="17.78" width="0.2032" layer="21"/>
<wire x1="-8.89" y1="17.78" x2="-1.27" y2="17.78" width="0.2032" layer="21"/>
<wire x1="-1.27" y1="17.78" x2="-1.27" y2="16.51" width="0.2032" layer="21"/>
<text x="-3.81" y="13.97" size="1.27" layer="25" font="vector">&gt;NAME</text>
<text x="-3.81" y="-13.97" size="1.27" layer="27" font="vector">&gt;VALUE</text>
</package>
</packages>
<symbols>
<symbol name="TEENSY_3.1-3.2_DIL">
<wire x1="-17.78" y1="-38.1" x2="17.78" y2="-38.1" width="0.254" layer="94"/>
<wire x1="17.78" y1="-38.1" x2="17.78" y2="30.48" width="0.254" layer="94"/>
<wire x1="17.78" y1="30.48" x2="-17.78" y2="30.48" width="0.254" layer="94"/>
<wire x1="-17.78" y1="30.48" x2="-17.78" y2="-38.1" width="0.254" layer="94"/>
<pin name="12/MISO" x="-22.86" y="-5.08" visible="pin" length="middle"/>
<pin name="11/MOSI" x="-22.86" y="-2.54" visible="pin" length="middle"/>
<pin name="10/TX2/PWM" x="-22.86" y="0" visible="pin" length="middle"/>
<pin name="9/RX2/PWM" x="-22.86" y="2.54" visible="pin" length="middle"/>
<pin name="8/TX3" x="-22.86" y="5.08" visible="pin" length="middle"/>
<pin name="7/RX3" x="-22.86" y="7.62" visible="pin" length="middle"/>
<pin name="6/PWM" x="-22.86" y="10.16" visible="pin" length="middle"/>
<pin name="5/PWM" x="-22.86" y="12.7" visible="pin" length="middle"/>
<pin name="4/CAN-RX/PWM" x="-22.86" y="15.24" visible="pin" length="middle"/>
<pin name="3/CAN-TX/PWM" x="-22.86" y="17.78" visible="pin" length="middle"/>
<pin name="2" x="-22.86" y="20.32" visible="pin" length="middle"/>
<pin name="1/TX1/T" x="-22.86" y="22.86" visible="pin" length="middle"/>
<pin name="0/RX1/T" x="-22.86" y="25.4" visible="pin" length="middle"/>
<pin name="GND" x="22.86" y="17.78" visible="pin" length="middle" direction="pwr" rot="R180"/>
<pin name="AGND" x="22.86" y="5.08" visible="pin" length="middle" direction="pwr" rot="R180"/>
<pin name="3.3V" x="22.86" y="22.86" visible="pin" length="middle" direction="pwr" rot="R180"/>
<pin name="23/A9/T/PWM" x="-22.86" y="-33.02" visible="pin" length="middle"/>
<pin name="22/A8/T/PWM" x="-22.86" y="-30.48" visible="pin" length="middle"/>
<pin name="21/A7/PWM" x="-22.86" y="-27.94" visible="pin" length="middle"/>
<pin name="20/A6/PWM" x="-22.86" y="-25.4" visible="pin" length="middle"/>
<pin name="19/A5/T/SCL0" x="-22.86" y="-22.86" visible="pin" length="middle"/>
<pin name="18/A4/T/SDA0" x="-22.86" y="-20.32" visible="pin" length="middle"/>
<pin name="17/A3/T" x="-22.86" y="-17.78" visible="pin" length="middle"/>
<pin name="16/A2/T" x="-22.86" y="-15.24" visible="pin" length="middle"/>
<pin name="15/A1/T" x="-22.86" y="-12.7" visible="pin" length="middle"/>
<pin name="14/A0" x="-22.86" y="-10.16" visible="pin" length="middle"/>
<pin name="13/SCK/LED" x="-22.86" y="-7.62" visible="pin" length="middle"/>
<text x="-5.588" y="31.75" size="1.27" layer="95" font="vector" ratio="15">&gt;NAME</text>
<pin name="VIN" x="22.86" y="25.4" visible="pin" length="middle" direction="pwr" rot="R180"/>
<text x="-7.112" y="-40.894" size="1.27" layer="96" font="vector" ratio="15">&gt;VALUE</text>
</symbol>
</symbols>
<devicesets>
<deviceset name="TEENSY_3.1-3.2_DIL">
<description>Teensy 3.1 or 3.2 in a DIL Layout.</description>
<gates>
<gate name="G$1" symbol="TEENSY_3.1-3.2_DIL" x="0" y="2.54"/>
</gates>
<devices>
<device name="" package="TEENSY_3.0-3.2&amp;LC_DIL">
<connects>
<connect gate="G$1" pin="0/RX1/T" pad="0"/>
<connect gate="G$1" pin="1/TX1/T" pad="1"/>
<connect gate="G$1" pin="10/TX2/PWM" pad="10"/>
<connect gate="G$1" pin="11/MOSI" pad="11"/>
<connect gate="G$1" pin="12/MISO" pad="12"/>
<connect gate="G$1" pin="13/SCK/LED" pad="13"/>
<connect gate="G$1" pin="14/A0" pad="14/A0"/>
<connect gate="G$1" pin="15/A1/T" pad="15/A1"/>
<connect gate="G$1" pin="16/A2/T" pad="16/A2"/>
<connect gate="G$1" pin="17/A3/T" pad="17/A3"/>
<connect gate="G$1" pin="18/A4/T/SDA0" pad="18/A4"/>
<connect gate="G$1" pin="19/A5/T/SCL0" pad="19/A5"/>
<connect gate="G$1" pin="2" pad="2"/>
<connect gate="G$1" pin="20/A6/PWM" pad="20/A6"/>
<connect gate="G$1" pin="21/A7/PWM" pad="21/A7"/>
<connect gate="G$1" pin="22/A8/T/PWM" pad="22/A8"/>
<connect gate="G$1" pin="23/A9/T/PWM" pad="23/A9"/>
<connect gate="G$1" pin="3.3V" pad="3.3V"/>
<connect gate="G$1" pin="3/CAN-TX/PWM" pad="3"/>
<connect gate="G$1" pin="4/CAN-RX/PWM" pad="4"/>
<connect gate="G$1" pin="5/PWM" pad="5"/>
<connect gate="G$1" pin="6/PWM" pad="6"/>
<connect gate="G$1" pin="7/RX3" pad="7"/>
<connect gate="G$1" pin="8/TX3" pad="8"/>
<connect gate="G$1" pin="9/RX2/PWM" pad="9"/>
<connect gate="G$1" pin="AGND" pad="AGND"/>
<connect gate="G$1" pin="GND" pad="GND"/>
<connect gate="G$1" pin="VIN" pad="VIN"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="motor_driver">
<packages>
<package name="MOTOR_DRIVER">
<wire x1="-5.08" y1="7.62" x2="-5.08" y2="-12.7" width="0.127" layer="21"/>
<wire x1="-5.08" y1="-12.7" x2="5.08" y2="-12.7" width="0.127" layer="21"/>
<wire x1="5.08" y1="-12.7" x2="5.08" y2="7.62" width="0.127" layer="21"/>
<pad name="M1_ENABLE" x="-3.81" y="6.35" drill="0.9652"/>
<pad name="M1_FWD_PWN" x="-3.81" y="3.81" drill="0.9652"/>
<pad name="L_M1_1" x="-3.81" y="1.27" drill="0.9652"/>
<pad name="L_GND_1" x="-3.81" y="-1.27" drill="0.9652"/>
<pad name="L_GND_2" x="-3.81" y="-3.81" drill="0.9652"/>
<pad name="L_M1_2" x="-3.81" y="-6.35" drill="0.9652"/>
<pad name="M1_REV_PWN" x="-3.81" y="-8.89" drill="0.9652"/>
<pad name="L_5V" x="-3.81" y="-11.43" drill="0.9652"/>
<pad name="R_5V" x="3.81" y="6.35" drill="0.9652"/>
<pad name="M2_REV_PWM" x="3.81" y="3.81" drill="0.9652"/>
<pad name="R_M2_1" x="3.81" y="1.27" drill="0.9652"/>
<pad name="R_GND_1" x="3.81" y="-1.27" drill="0.9652"/>
<pad name="R_GND_2" x="3.81" y="-3.81" drill="0.9652"/>
<pad name="R_M2_2" x="3.81" y="-6.35" drill="0.9652"/>
<pad name="M2_FWD_PWN" x="3.81" y="-8.89" drill="0.9652"/>
<pad name="M2_ENABLE" x="3.81" y="-11.43" drill="0.9652"/>
<wire x1="-5.08" y1="7.62" x2="-1.27" y2="7.62" width="0.127" layer="21"/>
<wire x1="-1.27" y1="7.62" x2="-1.27" y2="6.35" width="0.127" layer="21"/>
<wire x1="-1.27" y1="6.35" x2="1.27" y2="6.35" width="0.127" layer="21"/>
<wire x1="1.27" y1="6.35" x2="1.27" y2="7.62" width="0.127" layer="21"/>
<wire x1="1.27" y1="7.62" x2="5.08" y2="7.62" width="0.127" layer="21"/>
</package>
</packages>
<symbols>
<symbol name="MOTOR_DRIVER">
<wire x1="-20.32" y1="15.24" x2="-20.32" y2="-25.4" width="0.254" layer="94"/>
<pin name="M1_ENABLE" x="-25.4" y="12.7" length="middle"/>
<pin name="M1_FWD_PWN" x="-25.4" y="7.62" length="middle"/>
<pin name="L_M1_1" x="-25.4" y="2.54" length="middle"/>
<pin name="L_GND_1" x="-25.4" y="-2.54" length="middle"/>
<pin name="L_GND_2" x="-25.4" y="-7.62" length="middle"/>
<pin name="L_M1_2" x="-25.4" y="-12.7" length="middle"/>
<pin name="M1_REV_PWN" x="-25.4" y="-17.78" length="middle"/>
<pin name="L_5V" x="-25.4" y="-22.86" length="middle"/>
<wire x1="-20.32" y1="15.24" x2="22.86" y2="15.24" width="0.254" layer="94"/>
<wire x1="22.86" y1="15.24" x2="22.86" y2="-25.4" width="0.254" layer="94"/>
<wire x1="22.86" y1="-25.4" x2="-20.32" y2="-25.4" width="0.254" layer="94"/>
<pin name="R_5V" x="27.94" y="12.7" length="middle" rot="R180"/>
<pin name="M2_REV_PWM" x="27.94" y="7.62" length="middle" rot="R180"/>
<pin name="R_M2_1" x="27.94" y="2.54" length="middle" rot="R180"/>
<pin name="R_GND_1" x="27.94" y="-2.54" length="middle" rot="R180"/>
<pin name="R_GND_2" x="27.94" y="-7.62" length="middle" rot="R180"/>
<pin name="R_M2_2" x="27.94" y="-12.7" length="middle" rot="R180"/>
<pin name="M2_FWD_PWM" x="27.94" y="-17.78" length="middle" rot="R180"/>
<pin name="M2_ENABLE" x="27.94" y="-22.86" length="middle" rot="R180"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="MOTOR_DRIVER">
<gates>
<gate name="G$1" symbol="MOTOR_DRIVER" x="-22.86" y="-5.08"/>
</gates>
<devices>
<device name="" package="MOTOR_DRIVER">
<connects>
<connect gate="G$1" pin="L_5V" pad="L_5V"/>
<connect gate="G$1" pin="L_GND_1" pad="L_GND_1"/>
<connect gate="G$1" pin="L_GND_2" pad="L_GND_2"/>
<connect gate="G$1" pin="L_M1_1" pad="L_M1_1"/>
<connect gate="G$1" pin="L_M1_2" pad="L_M1_2"/>
<connect gate="G$1" pin="M1_ENABLE" pad="M1_ENABLE"/>
<connect gate="G$1" pin="M1_FWD_PWN" pad="M1_FWD_PWN"/>
<connect gate="G$1" pin="M1_REV_PWN" pad="M1_REV_PWN"/>
<connect gate="G$1" pin="M2_ENABLE" pad="M2_ENABLE"/>
<connect gate="G$1" pin="M2_FWD_PWM" pad="M2_FWD_PWN"/>
<connect gate="G$1" pin="M2_REV_PWM" pad="M2_REV_PWM"/>
<connect gate="G$1" pin="R_5V" pad="R_5V"/>
<connect gate="G$1" pin="R_GND_1" pad="R_GND_1"/>
<connect gate="G$1" pin="R_GND_2" pad="R_GND_2"/>
<connect gate="G$1" pin="R_M2_1" pad="R_M2_1"/>
<connect gate="G$1" pin="R_M2_2" pad="R_M2_2"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="VOLTAGE_REGULATOR">
<packages>
<package name="VOLTAGE_REGULATOR">
<pad name="P$1" x="-2.54" y="0" drill="0.9652"/>
<pad name="P$2" x="0" y="0" drill="0.9652"/>
<pad name="P$3" x="2.54" y="0" drill="0.9652"/>
<wire x1="-3.81" y1="1.27" x2="-3.81" y2="-1.27" width="0.127" layer="21"/>
<wire x1="-3.81" y1="-1.27" x2="3.81" y2="-1.27" width="0.127" layer="21"/>
<wire x1="3.81" y1="-1.27" x2="3.81" y2="1.27" width="0.127" layer="21"/>
<wire x1="3.81" y1="1.27" x2="-3.81" y2="1.27" width="0.127" layer="21"/>
</package>
</packages>
<symbols>
<symbol name="VOLTAGE_REGULATOR">
<pin name="VOUT" x="-2.54" y="7.62" length="middle" rot="R270"/>
<pin name="GND" x="0" y="7.62" length="middle" rot="R270"/>
<pin name="VIN" x="2.54" y="7.62" length="middle" rot="R270"/>
<wire x1="-5.08" y1="2.54" x2="5.08" y2="2.54" width="0.254" layer="94"/>
<wire x1="5.08" y1="2.54" x2="5.08" y2="-2.54" width="0.254" layer="94"/>
<wire x1="5.08" y1="-2.54" x2="-5.08" y2="-2.54" width="0.254" layer="94"/>
<wire x1="-5.08" y1="-2.54" x2="-5.08" y2="2.54" width="0.254" layer="94"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="VOLTAGE_REGULATOR">
<gates>
<gate name="G$1" symbol="VOLTAGE_REGULATOR" x="15.24" y="-5.08"/>
</gates>
<devices>
<device name="" package="VOLTAGE_REGULATOR">
<connects>
<connect gate="G$1" pin="GND" pad="P$2"/>
<connect gate="G$1" pin="VIN" pad="P$3"/>
<connect gate="G$1" pin="VOUT" pad="P$1"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="SONAR_SENSOR">
<packages>
<package name="SONAR_SENSOR">
<pad name="VCC" x="-1.27" y="3.81" drill="0.9652"/>
<pad name="TRIG" x="-1.27" y="1.27" drill="0.9652"/>
<pad name="ECHO" x="-1.27" y="-1.27" drill="0.9652"/>
<pad name="GND" x="-1.27" y="-3.81" drill="0.9652"/>
<wire x1="-2.54" y1="5.08" x2="-2.54" y2="-5.08" width="0.127" layer="21"/>
<wire x1="-2.54" y1="-5.08" x2="3.81" y2="-5.08" width="0.127" layer="21"/>
<wire x1="3.81" y1="-5.08" x2="3.81" y2="5.08" width="0.127" layer="21"/>
<wire x1="3.81" y1="5.08" x2="-2.54" y2="5.08" width="0.127" layer="21"/>
</package>
</packages>
<symbols>
<symbol name="SONAR_SENSOR">
<wire x1="-2.54" y1="5.08" x2="-2.54" y2="-7.62" width="0.254" layer="94"/>
<wire x1="-2.54" y1="-7.62" x2="7.62" y2="-7.62" width="0.254" layer="94"/>
<wire x1="7.62" y1="-7.62" x2="7.62" y2="5.08" width="0.254" layer="94"/>
<wire x1="7.62" y1="5.08" x2="-2.54" y2="5.08" width="0.254" layer="94"/>
<pin name="GND" x="-7.62" y="-5.08" length="middle"/>
<pin name="ECHO" x="-7.62" y="-2.54" length="middle"/>
<pin name="TRIG" x="-7.62" y="0" length="middle"/>
<pin name="VCC" x="-7.62" y="2.54" length="middle"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="SONAR_SENSOR">
<gates>
<gate name="G$1" symbol="SONAR_SENSOR" x="-2.54" y="0"/>
</gates>
<devices>
<device name="" package="SONAR_SENSOR">
<connects>
<connect gate="G$1" pin="ECHO" pad="ECHO"/>
<connect gate="G$1" pin="GND" pad="GND"/>
<connect gate="G$1" pin="TRIG" pad="TRIG"/>
<connect gate="G$1" pin="VCC" pad="VCC"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="Battery_input">
<packages>
<package name="BATTERY_INPUT">
<pad name="BAT_7.4V" x="-1.27" y="0" drill="0.9652"/>
<pad name="BAT_GND" x="1.27" y="0" drill="0.9652"/>
</package>
</packages>
<symbols>
<symbol name="BATTERY_INPUT">
<pin name="BAT_7.4V" x="-2.54" y="-7.62" length="middle" rot="R90"/>
<pin name="BAT_GND" x="2.54" y="-7.62" length="middle" rot="R90"/>
<wire x1="-5.08" y1="2.54" x2="5.08" y2="2.54" width="0.254" layer="94"/>
<wire x1="5.08" y1="2.54" x2="5.08" y2="-2.54" width="0.254" layer="94"/>
<wire x1="5.08" y1="-2.54" x2="-5.08" y2="-2.54" width="0.254" layer="94"/>
<wire x1="-5.08" y1="-2.54" x2="-5.08" y2="2.54" width="0.254" layer="94"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="BATTERY_INPUT">
<gates>
<gate name="G$1" symbol="BATTERY_INPUT" x="-15.24" y="10.16"/>
</gates>
<devices>
<device name="" package="BATTERY_INPUT">
<connects>
<connect gate="G$1" pin="BAT_7.4V" pad="BAT_7.4V"/>
<connect gate="G$1" pin="BAT_GND" pad="BAT_GND"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="MOTOR_ENCODER_25D">
<packages>
<package name="MOTOR_ENCODER_25D">
<wire x1="-1.27" y1="7.62" x2="-1.27" y2="-7.62" width="0.127" layer="21"/>
<wire x1="-1.27" y1="-7.62" x2="1.27" y2="-7.62" width="0.127" layer="21"/>
<wire x1="1.27" y1="-7.62" x2="1.27" y2="7.62" width="0.127" layer="21"/>
<wire x1="1.27" y1="7.62" x2="-1.27" y2="7.62" width="0.127" layer="21"/>
<pad name="OUTB" x="0" y="6.35" drill="0.9652"/>
<pad name="OUTA" x="0" y="3.81" drill="0.9652"/>
<pad name="VCC" x="0" y="1.27" drill="0.9652"/>
<pad name="GND" x="0" y="-1.27" drill="0.9652"/>
<pad name="M2" x="0" y="-3.81" drill="0.9652"/>
<pad name="M1" x="0" y="-6.35" drill="0.9652"/>
</package>
</packages>
<symbols>
<symbol name="MOTOR_ENCODER_25D">
<wire x1="7.62" y1="7.62" x2="7.62" y2="-10.16" width="0.254" layer="94"/>
<wire x1="7.62" y1="7.62" x2="-2.54" y2="7.62" width="0.254" layer="94"/>
<wire x1="-2.54" y1="7.62" x2="-2.54" y2="-10.16" width="0.254" layer="94"/>
<wire x1="-2.54" y1="-10.16" x2="7.62" y2="-10.16" width="0.254" layer="94"/>
<pin name="M1" x="-7.62" y="-7.62" length="middle"/>
<pin name="M2" x="-7.62" y="-5.08" length="middle"/>
<pin name="GND" x="-7.62" y="-2.54" length="middle"/>
<pin name="VCC" x="-7.62" y="0" length="middle"/>
<pin name="OUTA" x="-7.62" y="2.54" length="middle"/>
<pin name="OUTB" x="-7.62" y="5.08" length="middle"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="MOTOR_ENCODER_25D">
<gates>
<gate name="G$1" symbol="MOTOR_ENCODER_25D" x="-2.54" y="2.54"/>
</gates>
<devices>
<device name="" package="MOTOR_ENCODER_25D">
<connects>
<connect gate="G$1" pin="GND" pad="GND"/>
<connect gate="G$1" pin="M1" pad="M1"/>
<connect gate="G$1" pin="M2" pad="M2"/>
<connect gate="G$1" pin="OUTA" pad="OUTA"/>
<connect gate="G$1" pin="OUTB" pad="OUTB"/>
<connect gate="G$1" pin="VCC" pad="VCC"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="IMU">
<packages>
<package name="IMU">
<pad name="NO_USE_1" x="-1.27" y="5.08" drill="0.9652"/>
<pad name="VIN" x="-1.27" y="2.54" drill="0.9652"/>
<pad name="GND" x="-1.27" y="0" drill="0.9652"/>
<pad name="SDA" x="-1.27" y="-2.54" drill="0.9652"/>
<pad name="SCL" x="-1.27" y="-5.08" drill="0.9652"/>
<pad name="NO_USE_2" x="-1.27" y="-7.62" drill="0.9652"/>
<pad name="NO_USE_3" x="-1.27" y="-10.16" drill="0.9652"/>
<pad name="NO_USE_4" x="-1.27" y="-12.7" drill="0.9652"/>
<pad name="NO_USE_5" x="-1.27" y="-15.24" drill="0.9652"/>
<wire x1="-2.54" y1="6.35" x2="-2.54" y2="-16.51" width="0.127" layer="21"/>
<wire x1="-2.54" y1="-16.51" x2="5.08" y2="-16.51" width="0.127" layer="21"/>
<wire x1="5.08" y1="-16.51" x2="5.08" y2="6.35" width="0.127" layer="21"/>
<wire x1="5.08" y1="6.35" x2="-2.54" y2="6.35" width="0.127" layer="21"/>
</package>
</packages>
<symbols>
<symbol name="IMU">
<wire x1="-2.54" y1="7.62" x2="-2.54" y2="-7.62" width="0.254" layer="94"/>
<wire x1="5.08" y1="-7.62" x2="5.08" y2="7.62" width="0.254" layer="94"/>
<wire x1="5.08" y1="7.62" x2="-2.54" y2="7.62" width="0.254" layer="94"/>
<pin name="5V" x="-7.62" y="7.62" length="middle"/>
<pin name="GND" x="-7.62" y="2.54" length="middle"/>
<pin name="SDA" x="-7.62" y="-2.54" length="middle"/>
<wire x1="-2.54" y1="-7.62" x2="5.08" y2="-7.62" width="0.254" layer="94"/>
<pin name="SCL" x="-7.62" y="-7.62" length="middle"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="IMU">
<gates>
<gate name="G$1" symbol="IMU" x="-2.54" y="0"/>
</gates>
<devices>
<device name="" package="IMU">
<connects>
<connect gate="G$1" pin="5V" pad="VIN"/>
<connect gate="G$1" pin="GND" pad="GND"/>
<connect gate="G$1" pin="SCL" pad="SCL"/>
<connect gate="G$1" pin="SDA" pad="SDA"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="HC05_BLUETOOTH">
<packages>
<package name="HC05_BLUETOOTH">
<wire x1="-2.54" y1="5.08" x2="-2.54" y2="-5.08" width="0.127" layer="21"/>
<wire x1="-2.54" y1="-5.08" x2="2.54" y2="-5.08" width="0.127" layer="21"/>
<wire x1="2.54" y1="-5.08" x2="2.54" y2="5.08" width="0.127" layer="21"/>
<wire x1="2.54" y1="5.08" x2="-2.54" y2="5.08" width="0.127" layer="21"/>
<pad name="RX" x="-1.27" y="3.81" drill="0.9652"/>
<pad name="TX" x="-1.27" y="1.27" drill="0.9652"/>
<pad name="GND" x="-1.27" y="-1.27" drill="0.9652"/>
<pad name="VCC" x="-1.27" y="-3.81" drill="0.9652"/>
</package>
</packages>
<symbols>
<symbol name="HC05_BLUETOOTH">
<wire x1="-5.08" y1="7.62" x2="-5.08" y2="-12.7" width="0.254" layer="94"/>
<wire x1="-5.08" y1="-12.7" x2="5.08" y2="-12.7" width="0.254" layer="94"/>
<wire x1="5.08" y1="-12.7" x2="5.08" y2="7.62" width="0.254" layer="94"/>
<wire x1="5.08" y1="7.62" x2="-5.08" y2="7.62" width="0.254" layer="94"/>
<pin name="RX" x="-10.16" y="5.08" length="middle"/>
<pin name="TX" x="-10.16" y="0" length="middle"/>
<pin name="GND" x="-10.16" y="-5.08" length="middle"/>
<pin name="VCC" x="-10.16" y="-10.16" length="middle"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="HC05_BLUETOOTH">
<gates>
<gate name="G$1" symbol="HC05_BLUETOOTH" x="0" y="2.54"/>
</gates>
<devices>
<device name="" package="HC05_BLUETOOTH">
<connects>
<connect gate="G$1" pin="GND" pad="GND"/>
<connect gate="G$1" pin="RX" pad="RX"/>
<connect gate="G$1" pin="TX" pad="TX"/>
<connect gate="G$1" pin="VCC" pad="VCC"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="U$1" library="Teensy_3_and_LC_Series_Boards_v1.4" deviceset="TEENSY_3.1-3.2_DIL" device=""/>
<part name="U$2" library="motor_driver" deviceset="MOTOR_DRIVER" device=""/>
<part name="U$3" library="VOLTAGE_REGULATOR" deviceset="VOLTAGE_REGULATOR" device=""/>
<part name="U$4" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$5" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$6" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$7" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$8" library="Battery_input" deviceset="BATTERY_INPUT" device=""/>
<part name="U$9" library="MOTOR_ENCODER_25D" deviceset="MOTOR_ENCODER_25D" device=""/>
<part name="U$10" library="MOTOR_ENCODER_25D" deviceset="MOTOR_ENCODER_25D" device=""/>
<part name="U$11" library="IMU" deviceset="IMU" device=""/>
<part name="U$12" library="HC05_BLUETOOTH" deviceset="HC05_BLUETOOTH" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U$1" gate="G$1" x="63.5" y="43.18" smashed="yes">
<attribute name="NAME" x="57.912" y="74.93" size="1.27" layer="95" font="vector" ratio="15"/>
<attribute name="VALUE" x="56.388" y="2.286" size="1.27" layer="96" font="vector" ratio="15"/>
</instance>
<instance part="U$2" gate="G$1" x="167.64" y="45.72" smashed="yes"/>
<instance part="U$3" gate="G$1" x="2.54" y="68.58" smashed="yes" rot="R90"/>
<instance part="U$4" gate="G$1" x="-15.24" y="45.72" smashed="yes"/>
<instance part="U$5" gate="G$1" x="-15.24" y="27.94" smashed="yes"/>
<instance part="U$6" gate="G$1" x="-15.24" y="12.7" smashed="yes"/>
<instance part="U$7" gate="G$1" x="-15.24" y="-5.08" smashed="yes"/>
<instance part="U$8" gate="G$1" x="-22.86" y="93.98" smashed="yes"/>
<instance part="U$9" gate="G$1" x="116.84" y="10.16" smashed="yes"/>
<instance part="U$10" gate="G$1" x="195.58" y="7.62" smashed="yes"/>
<instance part="U$11" gate="G$1" x="144.78" y="81.28" smashed="yes"/>
<instance part="U$12" gate="G$1" x="93.98" y="96.52" smashed="yes"/>
</instances>
<busses>
</busses>
<nets>
<net name="CMN_5V" class="0">
<segment>
<pinref part="U$3" gate="G$1" pin="VOUT"/>
<wire x1="-5.08" y1="66.04" x2="-10.16" y2="66.04" width="0.1524" layer="91"/>
<label x="-20.32" y="66.04" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$4" gate="G$1" pin="VCC"/>
<wire x1="-22.86" y1="48.26" x2="-27.94" y2="48.26" width="0.1524" layer="91"/>
<label x="-35.56" y="48.26" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$5" gate="G$1" pin="VCC"/>
<wire x1="-22.86" y1="30.48" x2="-27.94" y2="30.48" width="0.1524" layer="91"/>
<label x="-35.56" y="30.48" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$6" gate="G$1" pin="VCC"/>
<wire x1="-22.86" y1="15.24" x2="-27.94" y2="15.24" width="0.1524" layer="91"/>
<label x="-35.56" y="15.24" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$7" gate="G$1" pin="VCC"/>
<wire x1="-22.86" y1="-2.54" x2="-27.94" y2="-2.54" width="0.1524" layer="91"/>
<label x="-35.56" y="-2.54" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$2" gate="G$1" pin="L_5V"/>
<wire x1="142.24" y1="22.86" x2="134.62" y2="22.86" width="0.1524" layer="91"/>
<label x="129.54" y="22.86" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$2" gate="G$1" pin="R_5V"/>
<wire x1="195.58" y1="58.42" x2="200.66" y2="58.42" width="0.1524" layer="91"/>
<label x="200.66" y="58.42" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="VIN"/>
<wire x1="86.36" y1="68.58" x2="91.44" y2="68.58" width="0.1524" layer="91"/>
<label x="91.44" y="68.58" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$9" gate="G$1" pin="VCC"/>
<wire x1="109.22" y1="10.16" x2="104.14" y2="10.16" width="0.1524" layer="91"/>
<label x="96.52" y="10.16" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$10" gate="G$1" pin="VCC"/>
<wire x1="187.96" y1="7.62" x2="182.88" y2="7.62" width="0.1524" layer="91"/>
<label x="175.26" y="7.62" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$11" gate="G$1" pin="5V"/>
<wire x1="137.16" y1="88.9" x2="132.08" y2="88.9" width="0.1524" layer="91"/>
<label x="124.46" y="88.9" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$12" gate="G$1" pin="VCC"/>
<wire x1="83.82" y1="86.36" x2="78.74" y2="86.36" width="0.1524" layer="91"/>
<label x="71.12" y="86.36" size="1.778" layer="95"/>
</segment>
</net>
<net name="N$3" class="0">
<segment>
<pinref part="U$3" gate="G$1" pin="VIN"/>
<label x="-12.7" y="71.12" size="1.778" layer="95"/>
<pinref part="U$8" gate="G$1" pin="BAT_7.4V"/>
<wire x1="-25.4" y1="86.36" x2="-25.4" y2="71.12" width="0.1524" layer="91"/>
<wire x1="-25.4" y1="71.12" x2="-5.08" y2="71.12" width="0.1524" layer="91"/>
</segment>
</net>
<net name="TRIG_1_CONN" class="0">
<segment>
<pinref part="U$4" gate="G$1" pin="TRIG"/>
<wire x1="-22.86" y1="45.72" x2="-30.48" y2="45.72" width="0.1524" layer="91"/>
<label x="-45.72" y="45.72" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="7/RX3"/>
<wire x1="40.64" y1="50.8" x2="35.56" y2="50.8" width="0.1524" layer="91"/>
<label x="22.86" y="50.8" size="1.778" layer="95"/>
</segment>
</net>
<net name="ECHO_1_CONN" class="0">
<segment>
<pinref part="U$4" gate="G$1" pin="ECHO"/>
<wire x1="-22.86" y1="43.18" x2="-30.48" y2="43.18" width="0.1524" layer="91"/>
<label x="-45.72" y="43.18" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="8/TX3"/>
<wire x1="40.64" y1="48.26" x2="35.56" y2="48.26" width="0.1524" layer="91"/>
<label x="20.32" y="48.26" size="1.778" layer="95"/>
</segment>
</net>
<net name="TRIG_2_CONN" class="0">
<segment>
<pinref part="U$5" gate="G$1" pin="TRIG"/>
<wire x1="-22.86" y1="27.94" x2="-27.94" y2="27.94" width="0.1524" layer="91"/>
<label x="-43.18" y="27.94" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="9/RX2/PWM"/>
<wire x1="40.64" y1="45.72" x2="35.56" y2="45.72" width="0.1524" layer="91"/>
<label x="22.86" y="45.72" size="1.778" layer="95"/>
</segment>
</net>
<net name="ECHO_2_CONN" class="0">
<segment>
<pinref part="U$5" gate="G$1" pin="ECHO"/>
<wire x1="-22.86" y1="25.4" x2="-27.94" y2="25.4" width="0.1524" layer="91"/>
<label x="-45.72" y="25.4" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="10/TX2/PWM"/>
<wire x1="40.64" y1="43.18" x2="35.56" y2="43.18" width="0.1524" layer="91"/>
<label x="20.32" y="43.18" size="1.778" layer="95"/>
</segment>
</net>
<net name="CMN_GND" class="0">
<segment>
<pinref part="U$8" gate="G$1" pin="BAT_GND"/>
<wire x1="-20.32" y1="86.36" x2="-20.32" y2="81.28" width="0.1524" layer="91"/>
<wire x1="-20.32" y1="81.28" x2="-15.24" y2="81.28" width="0.1524" layer="91"/>
<label x="-15.24" y="81.28" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$3" gate="G$1" pin="GND"/>
<wire x1="-5.08" y1="68.58" x2="-10.16" y2="68.58" width="0.1524" layer="91"/>
<label x="-20.32" y="68.58" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$4" gate="G$1" pin="GND"/>
<wire x1="-22.86" y1="40.64" x2="-27.94" y2="40.64" width="0.1524" layer="91"/>
<label x="-38.1" y="40.64" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$5" gate="G$1" pin="GND"/>
<wire x1="-22.86" y1="22.86" x2="-27.94" y2="22.86" width="0.1524" layer="91"/>
<label x="-38.1" y="22.86" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$6" gate="G$1" pin="GND"/>
<wire x1="-22.86" y1="7.62" x2="-27.94" y2="7.62" width="0.1524" layer="91"/>
<label x="-38.1" y="7.62" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$7" gate="G$1" pin="GND"/>
<wire x1="-22.86" y1="-10.16" x2="-27.94" y2="-10.16" width="0.1524" layer="91"/>
<label x="-38.1" y="-10.16" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="GND"/>
<wire x1="86.36" y1="60.96" x2="91.44" y2="60.96" width="0.1524" layer="91"/>
<label x="91.44" y="60.96" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$2" gate="G$1" pin="L_GND_1"/>
<wire x1="142.24" y1="43.18" x2="132.08" y2="43.18" width="0.1524" layer="91"/>
<label x="121.92" y="43.18" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$2" gate="G$1" pin="L_GND_2"/>
<wire x1="142.24" y1="38.1" x2="132.08" y2="38.1" width="0.1524" layer="91"/>
<label x="121.92" y="38.1" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$2" gate="G$1" pin="R_GND_1"/>
<wire x1="195.58" y1="43.18" x2="205.74" y2="43.18" width="0.1524" layer="91"/>
<label x="205.74" y="43.18" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$2" gate="G$1" pin="R_GND_2"/>
<wire x1="195.58" y1="38.1" x2="208.28" y2="38.1" width="0.1524" layer="91"/>
<label x="205.74" y="38.1" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$9" gate="G$1" pin="GND"/>
<wire x1="109.22" y1="7.62" x2="104.14" y2="7.62" width="0.1524" layer="91"/>
<label x="93.98" y="7.62" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$10" gate="G$1" pin="GND"/>
<wire x1="187.96" y1="5.08" x2="182.88" y2="5.08" width="0.1524" layer="91"/>
<label x="172.72" y="5.08" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$12" gate="G$1" pin="GND"/>
<wire x1="83.82" y1="91.44" x2="78.74" y2="91.44" width="0.1524" layer="91"/>
<label x="68.58" y="91.44" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$11" gate="G$1" pin="GND"/>
<wire x1="137.16" y1="83.82" x2="129.54" y2="83.82" width="0.1524" layer="91"/>
<label x="121.92" y="83.82" size="1.778" layer="95"/>
</segment>
</net>
<net name="TRIG_3_CONN" class="0">
<segment>
<pinref part="U$6" gate="G$1" pin="TRIG"/>
<wire x1="-22.86" y1="12.7" x2="-30.48" y2="12.7" width="0.1524" layer="91"/>
<label x="-48.26" y="12.7" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="11/MOSI"/>
<wire x1="40.64" y1="40.64" x2="35.56" y2="40.64" width="0.1524" layer="91"/>
<label x="22.86" y="40.64" size="1.778" layer="95"/>
</segment>
</net>
<net name="ECHO_3_CONN" class="0">
<segment>
<pinref part="U$6" gate="G$1" pin="ECHO"/>
<wire x1="-22.86" y1="10.16" x2="-30.48" y2="10.16" width="0.1524" layer="91"/>
<label x="-48.26" y="10.16" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="12/MISO"/>
<wire x1="40.64" y1="38.1" x2="35.56" y2="38.1" width="0.1524" layer="91"/>
<label x="20.32" y="38.1" size="1.778" layer="95"/>
</segment>
</net>
<net name="TRIG_4_CONN" class="0">
<segment>
<pinref part="U$7" gate="G$1" pin="TRIG"/>
<wire x1="-22.86" y1="-5.08" x2="-27.94" y2="-5.08" width="0.1524" layer="91"/>
<label x="-45.72" y="-5.08" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="13/SCK/LED"/>
<wire x1="40.64" y1="35.56" x2="35.56" y2="35.56" width="0.1524" layer="91"/>
<label x="22.86" y="35.56" size="1.778" layer="95"/>
</segment>
</net>
<net name="ECHO_4_CONN" class="0">
<segment>
<pinref part="U$7" gate="G$1" pin="ECHO"/>
<wire x1="-22.86" y1="-7.62" x2="-27.94" y2="-7.62" width="0.1524" layer="91"/>
<label x="-45.72" y="-7.62" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="14/A0"/>
<wire x1="40.64" y1="33.02" x2="35.56" y2="33.02" width="0.1524" layer="91"/>
<label x="20.32" y="33.02" size="1.778" layer="95"/>
</segment>
</net>
<net name="M2_EN_CONN" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="M2_ENABLE"/>
<wire x1="195.58" y1="22.86" x2="210.82" y2="22.86" width="0.1524" layer="91"/>
<label x="208.28" y="22.86" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="21/A7/PWM"/>
<wire x1="40.64" y1="15.24" x2="33.02" y2="15.24" width="0.1524" layer="91"/>
<label x="20.32" y="15.24" size="1.778" layer="95"/>
</segment>
</net>
<net name="M1_EN_CONN" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="M1_ENABLE"/>
<wire x1="142.24" y1="58.42" x2="129.54" y2="58.42" width="0.1524" layer="91"/>
<label x="114.3" y="58.42" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="20/A6/PWM"/>
<wire x1="40.64" y1="17.78" x2="33.02" y2="17.78" width="0.1524" layer="91"/>
<label x="20.32" y="17.78" size="1.778" layer="95"/>
</segment>
</net>
<net name="L_M1_1" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="L_M1_1"/>
<wire x1="142.24" y1="48.26" x2="132.08" y2="48.26" width="0.1524" layer="91"/>
<label x="124.46" y="48.26" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$9" gate="G$1" pin="M1"/>
<wire x1="109.22" y1="2.54" x2="104.14" y2="2.54" width="0.1524" layer="91"/>
<label x="99.06" y="2.54" size="1.778" layer="95"/>
</segment>
</net>
<net name="L_M1_2" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="L_M1_2"/>
<wire x1="142.24" y1="33.02" x2="132.08" y2="33.02" width="0.1524" layer="91"/>
<label x="124.46" y="33.02" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$9" gate="G$1" pin="M2"/>
<wire x1="109.22" y1="5.08" x2="104.14" y2="5.08" width="0.1524" layer="91"/>
<label x="96.52" y="5.08" size="1.778" layer="95"/>
</segment>
</net>
<net name="R_M2_2" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="R_M2_2"/>
<wire x1="195.58" y1="33.02" x2="205.74" y2="33.02" width="0.1524" layer="91"/>
<label x="205.74" y="33.02" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$10" gate="G$1" pin="M2"/>
<wire x1="187.96" y1="2.54" x2="182.88" y2="2.54" width="0.1524" layer="91"/>
<label x="175.26" y="2.54" size="1.778" layer="95"/>
</segment>
</net>
<net name="R_M2_1" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="R_M2_1"/>
<wire x1="195.58" y1="48.26" x2="203.2" y2="48.26" width="0.1524" layer="91"/>
<label x="203.2" y="48.26" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$10" gate="G$1" pin="M1"/>
<wire x1="187.96" y1="0" x2="182.88" y2="0" width="0.1524" layer="91"/>
<label x="175.26" y="0" size="1.778" layer="95"/>
</segment>
</net>
<net name="SDA_CONN" class="0">
<segment>
<pinref part="U$1" gate="G$1" pin="18/A4/T/SDA0"/>
<wire x1="40.64" y1="22.86" x2="35.56" y2="22.86" width="0.1524" layer="91"/>
<label x="25.4" y="22.86" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$11" gate="G$1" pin="SDA"/>
<wire x1="137.16" y1="78.74" x2="132.08" y2="78.74" width="0.1524" layer="91"/>
<label x="121.92" y="78.74" size="1.778" layer="95"/>
</segment>
</net>
<net name="SCL_CONN" class="0">
<segment>
<pinref part="U$1" gate="G$1" pin="19/A5/T/SCL0"/>
<wire x1="40.64" y1="20.32" x2="35.56" y2="20.32" width="0.1524" layer="91"/>
<label x="25.4" y="20.32" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$11" gate="G$1" pin="SCL"/>
<wire x1="137.16" y1="73.66" x2="132.08" y2="73.66" width="0.1524" layer="91"/>
<label x="121.92" y="73.66" size="1.778" layer="95"/>
</segment>
</net>
<net name="TX_TO_RX" class="0">
<segment>
<pinref part="U$12" gate="G$1" pin="RX"/>
<wire x1="83.82" y1="101.6" x2="78.74" y2="101.6" width="0.1524" layer="91"/>
<label x="68.58" y="101.6" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="1/TX1/T"/>
<wire x1="40.64" y1="66.04" x2="35.56" y2="66.04" width="0.1524" layer="91"/>
<label x="25.4" y="66.04" size="1.778" layer="95"/>
</segment>
</net>
<net name="RX_TO_TX" class="0">
<segment>
<pinref part="U$12" gate="G$1" pin="TX"/>
<wire x1="83.82" y1="96.52" x2="78.74" y2="96.52" width="0.1524" layer="91"/>
<label x="68.58" y="96.52" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="0/RX1/T"/>
<wire x1="40.64" y1="68.58" x2="35.56" y2="68.58" width="0.1524" layer="91"/>
<label x="25.4" y="68.58" size="1.778" layer="95"/>
</segment>
</net>
<net name="M1_FWD_PWM_CONN" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="M1_FWD_PWN"/>
<wire x1="142.24" y1="53.34" x2="124.46" y2="53.34" width="0.1524" layer="91"/>
<label x="101.6" y="53.34" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="3/CAN-TX/PWM"/>
<wire x1="40.64" y1="60.96" x2="35.56" y2="60.96" width="0.1524" layer="91"/>
<label x="15.24" y="60.96" size="1.778" layer="95"/>
</segment>
</net>
<net name="M1_REV_PWM_CONN" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="M1_REV_PWN"/>
<wire x1="142.24" y1="27.94" x2="124.46" y2="27.94" width="0.1524" layer="91"/>
<label x="101.6" y="27.94" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="4/CAN-RX/PWM"/>
<wire x1="40.64" y1="58.42" x2="35.56" y2="58.42" width="0.1524" layer="91"/>
<label x="15.24" y="58.42" size="1.778" layer="95"/>
</segment>
</net>
<net name="M2_FWD_PWM_CONN" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="M2_FWD_PWM"/>
<wire x1="195.58" y1="27.94" x2="213.36" y2="27.94" width="0.1524" layer="91"/>
<label x="210.82" y="27.94" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="5/PWM"/>
<wire x1="40.64" y1="55.88" x2="35.56" y2="55.88" width="0.1524" layer="91"/>
<label x="15.24" y="55.88" size="1.778" layer="95"/>
</segment>
</net>
<net name="M2_REV_PWM_CONN" class="0">
<segment>
<pinref part="U$2" gate="G$1" pin="M2_REV_PWM"/>
<wire x1="195.58" y1="53.34" x2="210.82" y2="53.34" width="0.1524" layer="91"/>
<label x="210.82" y="53.34" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="6/PWM"/>
<wire x1="40.64" y1="53.34" x2="35.56" y2="53.34" width="0.1524" layer="91"/>
<label x="15.24" y="53.34" size="1.778" layer="95"/>
</segment>
</net>
<net name="OUTA_L_CONN" class="0">
<segment>
<pinref part="U$9" gate="G$1" pin="OUTA"/>
<wire x1="109.22" y1="12.7" x2="104.14" y2="12.7" width="0.1524" layer="91"/>
<label x="86.36" y="12.7" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="15/A1/T"/>
<label x="15.24" y="30.48" size="1.778" layer="95"/>
<wire x1="40.64" y1="30.48" x2="33.02" y2="30.48" width="0.1524" layer="91"/>
</segment>
</net>
<net name="OUTB_L_CONN" class="0">
<segment>
<pinref part="U$9" gate="G$1" pin="OUTB"/>
<wire x1="109.22" y1="15.24" x2="104.14" y2="15.24" width="0.1524" layer="91"/>
<label x="86.36" y="15.24" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="2"/>
<label x="17.78" y="63.5" size="1.778" layer="95"/>
<wire x1="40.64" y1="63.5" x2="35.56" y2="63.5" width="0.1524" layer="91"/>
</segment>
</net>
<net name="OUTA_R_CONN" class="0">
<segment>
<pinref part="U$10" gate="G$1" pin="OUTA"/>
<wire x1="187.96" y1="10.16" x2="182.88" y2="10.16" width="0.1524" layer="91"/>
<label x="165.1" y="10.16" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="17/A3/T"/>
<label x="15.24" y="25.4" size="1.778" layer="95"/>
<wire x1="40.64" y1="25.4" x2="33.02" y2="25.4" width="0.1524" layer="91"/>
</segment>
</net>
<net name="OUTB_R_CONN" class="0">
<segment>
<pinref part="U$10" gate="G$1" pin="OUTB"/>
<wire x1="187.96" y1="12.7" x2="182.88" y2="12.7" width="0.1524" layer="91"/>
<label x="165.1" y="12.7" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U$1" gate="G$1" pin="16/A2/T"/>
<label x="15.24" y="27.94" size="1.778" layer="95"/>
<wire x1="40.64" y1="27.94" x2="33.02" y2="27.94" width="0.1524" layer="91"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
