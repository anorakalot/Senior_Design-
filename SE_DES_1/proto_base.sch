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
<wire x1="-7.62" y1="20.32" x2="-7.62" y2="2.54" width="0.254" layer="94"/>
<pin name="M1_ENABLE" x="-12.7" y="20.32" length="middle"/>
<pin name="M1_FWD_PWN" x="-12.7" y="17.78" length="middle"/>
<pin name="L_M1_1" x="-12.7" y="15.24" length="middle"/>
<pin name="L_GND_1" x="-12.7" y="12.7" length="middle"/>
<pin name="L_GND_2" x="-12.7" y="10.16" length="middle"/>
<pin name="L_M1_2" x="-12.7" y="7.62" length="middle"/>
<pin name="M1_REV_PWN" x="-12.7" y="5.08" length="middle"/>
<pin name="L_5V" x="-12.7" y="2.54" length="middle"/>
<wire x1="-7.62" y1="20.32" x2="35.56" y2="20.32" width="0.254" layer="94"/>
<wire x1="35.56" y1="20.32" x2="35.56" y2="2.54" width="0.254" layer="94"/>
<wire x1="35.56" y1="2.54" x2="-7.62" y2="2.54" width="0.254" layer="94"/>
<pin name="R_5V" x="40.64" y="20.32" length="middle" rot="R180"/>
<pin name="M2_REV_PWM" x="40.64" y="17.78" length="middle" rot="R180"/>
<pin name="R_M2_1" x="40.64" y="15.24" length="middle" rot="R180"/>
<pin name="R_GND_1" x="40.64" y="12.7" length="middle" rot="R180"/>
<pin name="R_GND_2" x="40.64" y="10.16" length="middle" rot="R180"/>
<pin name="R_M2_2" x="40.64" y="7.62" length="middle" rot="R180"/>
<pin name="M2_FWD_PWM" x="40.64" y="5.08" length="middle" rot="R180"/>
<pin name="M2_ENABLE" x="40.64" y="2.54" length="middle" rot="R180"/>
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
<library name="MOTOR_ENCODER">
<packages>
<package name="MOTOR_ENCODER">
<wire x1="0" y1="5.08" x2="0" y2="-10.16" width="0.127" layer="21"/>
<pad name="GND" x="-1.27" y="3.81" drill="0.9652"/>
<pad name="OUTB" x="-1.27" y="1.27" drill="0.9652"/>
<pad name="OUTA" x="-1.27" y="-1.27" drill="0.9652"/>
<pad name="VCC" x="-1.27" y="-3.81" drill="0.9652"/>
<pad name="M2" x="-1.27" y="-6.35" drill="0.9652"/>
<pad name="M1" x="-1.27" y="-8.89" drill="0.9652"/>
<wire x1="0" y1="5.08" x2="-3.81" y2="5.08" width="0.127" layer="21"/>
<wire x1="-3.81" y1="5.08" x2="-3.81" y2="-10.16" width="0.127" layer="21"/>
<wire x1="-3.81" y1="-10.16" x2="0" y2="-10.16" width="0.127" layer="21"/>
</package>
</packages>
<symbols>
<symbol name="MOTOR_ENCODER">
<wire x1="-7.62" y1="12.7" x2="-7.62" y2="0" width="0.254" layer="94"/>
<pin name="GND" x="-2.54" y="12.7" length="middle" rot="R180"/>
<pin name="OUTB" x="-2.54" y="10.16" length="middle" rot="R180"/>
<pin name="OUTA" x="-2.54" y="7.62" length="middle" rot="R180"/>
<pin name="VCC" x="-2.54" y="5.08" length="middle" rot="R180"/>
<pin name="M2" x="-2.54" y="2.54" length="middle" rot="R180"/>
<pin name="M1" x="-2.54" y="0" length="middle" rot="R180"/>
<wire x1="-7.62" y1="0" x2="-17.78" y2="0" width="0.254" layer="94"/>
<wire x1="-17.78" y1="12.7" x2="-20.32" y2="10.16" width="0.254" layer="94" curve="90"/>
<wire x1="-20.32" y1="10.16" x2="-20.32" y2="2.54" width="0.254" layer="94"/>
<wire x1="-17.78" y1="0" x2="-20.32" y2="2.54" width="0.254" layer="94" curve="-90"/>
<wire x1="-17.78" y1="12.7" x2="-7.62" y2="12.7" width="0.254" layer="94"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="MOTOR_ENCODER">
<gates>
<gate name="G$1" symbol="MOTOR_ENCODER" x="-7.62" y="2.54"/>
</gates>
<devices>
<device name="" package="MOTOR_ENCODER">
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
<wire x1="-15.24" y1="10.16" x2="-15.24" y2="-2.54" width="0.254" layer="94"/>
<wire x1="-7.62" y1="-2.54" x2="-7.62" y2="10.16" width="0.254" layer="94"/>
<wire x1="-7.62" y1="10.16" x2="-15.24" y2="10.16" width="0.254" layer="94"/>
<pin name="5V" x="-20.32" y="10.16" length="middle"/>
<pin name="GND" x="-20.32" y="5.08" length="middle"/>
<pin name="SDA" x="-20.32" y="0" length="middle"/>
<wire x1="-15.24" y1="-2.54" x2="-15.24" y2="-5.08" width="0.254" layer="94"/>
<wire x1="-15.24" y1="-5.08" x2="-7.62" y2="-5.08" width="0.254" layer="94"/>
<wire x1="-7.62" y1="-5.08" x2="-7.62" y2="-2.54" width="0.254" layer="94"/>
<pin name="SCL" x="-20.32" y="-5.08" length="middle"/>
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
<pin name="VOUT" x="-17.78" y="12.7" length="middle" rot="R270"/>
<pin name="GND" x="-15.24" y="12.7" length="middle" rot="R270"/>
<pin name="VIN" x="-12.7" y="12.7" length="middle" rot="R270"/>
<wire x1="-20.32" y1="7.62" x2="-10.16" y2="7.62" width="0.254" layer="94"/>
<wire x1="-10.16" y1="7.62" x2="-10.16" y2="2.54" width="0.254" layer="94"/>
<wire x1="-10.16" y1="2.54" x2="-20.32" y2="2.54" width="0.254" layer="94"/>
<wire x1="-20.32" y1="2.54" x2="-20.32" y2="7.62" width="0.254" layer="94"/>
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
<pad name="VCC" x="-1.27" y="1.27" drill="0.9652"/>
<pad name="TRIG" x="-1.27" y="-1.27" drill="0.9652"/>
<pad name="ECHO" x="-1.27" y="-3.81" drill="0.9652"/>
<pad name="GND" x="-1.27" y="-6.35" drill="0.9652"/>
<wire x1="-2.54" y1="2.54" x2="-2.54" y2="-7.62" width="0.127" layer="21"/>
<wire x1="-2.54" y1="-7.62" x2="3.81" y2="-7.62" width="0.127" layer="21"/>
<wire x1="3.81" y1="-7.62" x2="3.81" y2="2.54" width="0.127" layer="21"/>
<wire x1="3.81" y1="2.54" x2="-2.54" y2="2.54" width="0.127" layer="21"/>
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
<library name="TEST_ROW">
<packages>
<package name="TEST_ROW">
<wire x1="-1.27" y1="6.35" x2="-1.27" y2="-19.05" width="0.127" layer="21"/>
<wire x1="-1.27" y1="-19.05" x2="1.27" y2="-19.05" width="0.127" layer="21"/>
<wire x1="1.27" y1="-19.05" x2="1.27" y2="6.35" width="0.127" layer="21"/>
<wire x1="1.27" y1="6.35" x2="-1.27" y2="6.35" width="0.127" layer="21"/>
<pad name="P$1" x="0" y="5.08" drill="0.9652"/>
<pad name="P$2" x="0" y="2.54" drill="0.9652"/>
<pad name="P$3" x="0" y="0" drill="0.9652"/>
<pad name="P$4" x="0" y="-2.54" drill="0.9652"/>
<pad name="P$5" x="0" y="-5.08" drill="0.9652"/>
<pad name="P$6" x="0" y="-7.62" drill="0.9652"/>
<pad name="P$7" x="0" y="-10.16" drill="0.9652"/>
<pad name="P$8" x="0" y="-12.7" drill="0.9652"/>
<pad name="P$9" x="0" y="-15.24" drill="0.9652"/>
<pad name="P$10" x="0" y="-17.78" drill="0.9652"/>
</package>
</packages>
<symbols>
<symbol name="TEST_ROW">
<wire x1="-5.08" y1="12.7" x2="-5.08" y2="-15.24" width="0.254" layer="94"/>
<wire x1="-5.08" y1="-15.24" x2="2.54" y2="-15.24" width="0.254" layer="94"/>
<wire x1="2.54" y1="-15.24" x2="2.54" y2="12.7" width="0.254" layer="94"/>
<wire x1="2.54" y1="12.7" x2="-5.08" y2="12.7" width="0.254" layer="94"/>
<pin name="P$1" x="-10.16" y="10.16" length="middle"/>
<pin name="P$2" x="-10.16" y="7.62" length="middle"/>
<pin name="P$3" x="-10.16" y="5.08" length="middle"/>
<pin name="P$4" x="-10.16" y="2.54" length="middle"/>
<pin name="P$5" x="-10.16" y="0" length="middle"/>
<pin name="P$6" x="-10.16" y="-2.54" length="middle"/>
<pin name="P$7" x="-10.16" y="-5.08" length="middle"/>
<pin name="P$8" x="-10.16" y="-7.62" length="middle"/>
<pin name="P$9" x="-10.16" y="-10.16" length="middle"/>
<pin name="P$10" x="-10.16" y="-12.7" length="middle"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="TEST_ROW">
<gates>
<gate name="G$1" symbol="TEST_ROW" x="2.54" y="0"/>
</gates>
<devices>
<device name="" package="TEST_ROW">
<connects>
<connect gate="G$1" pin="P$1" pad="P$1"/>
<connect gate="G$1" pin="P$10" pad="P$10"/>
<connect gate="G$1" pin="P$2" pad="P$2"/>
<connect gate="G$1" pin="P$3" pad="P$3"/>
<connect gate="G$1" pin="P$4" pad="P$4"/>
<connect gate="G$1" pin="P$5" pad="P$5"/>
<connect gate="G$1" pin="P$6" pad="P$6"/>
<connect gate="G$1" pin="P$7" pad="P$7"/>
<connect gate="G$1" pin="P$8" pad="P$8"/>
<connect gate="G$1" pin="P$9" pad="P$9"/>
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
<part name="MOTOR_DRIVER" library="motor_driver" deviceset="MOTOR_DRIVER" device=""/>
<part name="LEFT_ENCODER" library="MOTOR_ENCODER" deviceset="MOTOR_ENCODER" device=""/>
<part name="RIGHT_ENCODER" library="MOTOR_ENCODER" deviceset="MOTOR_ENCODER" device=""/>
<part name="IMU" library="IMU" deviceset="IMU" device=""/>
<part name="U$2" library="VOLTAGE_REGULATOR" deviceset="VOLTAGE_REGULATOR" device=""/>
<part name="U$3" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$4" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$5" library="SONAR_SENSOR" deviceset="SONAR_SENSOR" device=""/>
<part name="U$6" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$7" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$8" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$9" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$10" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$11" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$12" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$13" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$14" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$15" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$16" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$17" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$18" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$19" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
<part name="U$20" library="TEST_ROW" deviceset="TEST_ROW" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U$1" gate="G$1" x="63.5" y="53.34" smashed="yes">
<attribute name="NAME" x="57.912" y="85.09" size="1.27" layer="95" font="vector" ratio="15"/>
<attribute name="VALUE" x="56.388" y="12.446" size="1.27" layer="96" font="vector" ratio="15"/>
</instance>
<instance part="MOTOR_DRIVER" gate="G$1" x="-53.34" y="33.02" smashed="yes"/>
<instance part="LEFT_ENCODER" gate="G$1" x="-71.12" y="96.52" smashed="yes"/>
<instance part="RIGHT_ENCODER" gate="G$1" x="-20.32" y="109.22" smashed="yes" rot="R180"/>
<instance part="IMU" gate="G$1" x="124.46" y="38.1" smashed="yes"/>
<instance part="U$2" gate="G$1" x="129.54" y="81.28" smashed="yes" rot="R90"/>
<instance part="U$3" gate="G$1" x="124.46" y="109.22" smashed="yes"/>
<instance part="U$4" gate="G$1" x="124.46" y="91.44" smashed="yes"/>
<instance part="U$5" gate="G$1" x="147.32" y="78.74" smashed="yes"/>
<instance part="U$6" gate="G$1" x="144.78" y="48.26" smashed="yes"/>
<instance part="U$7" gate="G$1" x="162.56" y="48.26" smashed="yes"/>
<instance part="U$8" gate="G$1" x="144.78" y="15.24" smashed="yes"/>
<instance part="U$9" gate="G$1" x="162.56" y="15.24" smashed="yes"/>
<instance part="U$10" gate="G$1" x="180.34" y="48.26" smashed="yes"/>
<instance part="U$11" gate="G$1" x="182.88" y="15.24" smashed="yes"/>
<instance part="U$12" gate="G$1" x="167.64" y="83.82" smashed="yes"/>
<instance part="U$13" gate="G$1" x="182.88" y="83.82" smashed="yes"/>
<instance part="U$14" gate="G$1" x="167.64" y="114.3" smashed="yes"/>
<instance part="U$15" gate="G$1" x="182.88" y="114.3" smashed="yes"/>
<instance part="U$16" gate="G$1" x="152.4" y="114.3" smashed="yes"/>
<instance part="U$17" gate="G$1" x="195.58" y="48.26" smashed="yes"/>
<instance part="U$18" gate="G$1" x="198.12" y="15.24" smashed="yes"/>
<instance part="U$19" gate="G$1" x="198.12" y="83.82" smashed="yes"/>
<instance part="U$20" gate="G$1" x="198.12" y="114.3" smashed="yes"/>
</instances>
<busses>
</busses>
<nets>
<net name="GND" class="0">
<segment>
<pinref part="LEFT_ENCODER" gate="G$1" pin="GND"/>
<label x="-66.04" y="109.22" size="1.778" layer="95"/>
<wire x1="-73.66" y1="109.22" x2="-58.42" y2="109.22" width="0.1524" layer="91"/>
<wire x1="-58.42" y1="109.22" x2="-58.42" y2="116.84" width="0.1524" layer="91"/>
<pinref part="RIGHT_ENCODER" gate="G$1" pin="GND"/>
<wire x1="-17.78" y1="96.52" x2="-22.86" y2="96.52" width="0.1524" layer="91"/>
<wire x1="-22.86" y1="96.52" x2="-22.86" y2="93.98" width="0.1524" layer="91"/>
<wire x1="-22.86" y1="93.98" x2="10.16" y2="93.98" width="0.1524" layer="91"/>
<wire x1="10.16" y1="93.98" x2="10.16" y2="111.76" width="0.1524" layer="91"/>
<wire x1="10.16" y1="111.76" x2="10.16" y2="116.84" width="0.1524" layer="91"/>
<wire x1="10.16" y1="116.84" x2="-53.34" y2="116.84" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="GND"/>
<wire x1="-53.34" y1="116.84" x2="-58.42" y2="116.84" width="0.1524" layer="91"/>
<wire x1="86.36" y1="71.12" x2="96.52" y2="71.12" width="0.1524" layer="91"/>
<wire x1="96.52" y1="71.12" x2="96.52" y2="73.66" width="0.1524" layer="91"/>
<wire x1="96.52" y1="73.66" x2="96.52" y2="109.22" width="0.1524" layer="91"/>
<wire x1="96.52" y1="109.22" x2="96.52" y2="111.76" width="0.1524" layer="91"/>
<wire x1="96.52" y1="111.76" x2="88.9" y2="111.76" width="0.1524" layer="91"/>
<junction x="10.16" y="111.76"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="L_GND_1"/>
<wire x1="88.9" y1="111.76" x2="86.36" y2="111.76" width="0.1524" layer="91"/>
<wire x1="86.36" y1="111.76" x2="22.86" y2="111.76" width="0.1524" layer="91"/>
<wire x1="22.86" y1="111.76" x2="20.32" y2="111.76" width="0.1524" layer="91"/>
<wire x1="20.32" y1="111.76" x2="10.16" y2="111.76" width="0.1524" layer="91"/>
<wire x1="-66.04" y1="45.72" x2="-99.06" y2="45.72" width="0.1524" layer="91"/>
<wire x1="-99.06" y1="45.72" x2="-99.06" y2="86.36" width="0.1524" layer="91"/>
<wire x1="-99.06" y1="86.36" x2="-53.34" y2="86.36" width="0.1524" layer="91"/>
<wire x1="-53.34" y1="86.36" x2="-53.34" y2="116.84" width="0.1524" layer="91"/>
<junction x="-53.34" y="116.84"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="L_GND_2"/>
<wire x1="-66.04" y1="43.18" x2="-99.06" y2="43.18" width="0.1524" layer="91"/>
<wire x1="-99.06" y1="43.18" x2="-99.06" y2="45.72" width="0.1524" layer="91"/>
<junction x="-99.06" y="45.72"/>
<label x="25.4" y="111.76" size="1.778" layer="95"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="R_GND_1"/>
<wire x1="-12.7" y1="45.72" x2="20.32" y2="45.72" width="0.1524" layer="91"/>
<wire x1="20.32" y1="45.72" x2="20.32" y2="111.76" width="0.1524" layer="91"/>
<junction x="20.32" y="111.76"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="R_GND_2"/>
<wire x1="-12.7" y1="43.18" x2="22.86" y2="43.18" width="0.1524" layer="91"/>
<wire x1="22.86" y1="43.18" x2="22.86" y2="111.76" width="0.1524" layer="91"/>
<junction x="22.86" y="111.76"/>
<pinref part="IMU" gate="G$1" pin="GND"/>
<wire x1="104.14" y1="43.18" x2="99.06" y2="43.18" width="0.1524" layer="91"/>
<wire x1="99.06" y1="43.18" x2="99.06" y2="109.22" width="0.1524" layer="91"/>
<wire x1="99.06" y1="109.22" x2="96.52" y2="109.22" width="0.1524" layer="91"/>
<junction x="96.52" y="109.22"/>
<pinref part="U$4" gate="G$1" pin="GND"/>
<wire x1="116.84" y1="86.36" x2="86.36" y2="86.36" width="0.1524" layer="91"/>
<wire x1="86.36" y1="86.36" x2="86.36" y2="111.76" width="0.1524" layer="91"/>
<junction x="86.36" y="111.76"/>
<pinref part="U$3" gate="G$1" pin="GND"/>
<wire x1="116.84" y1="104.14" x2="88.9" y2="104.14" width="0.1524" layer="91"/>
<wire x1="88.9" y1="104.14" x2="88.9" y2="111.76" width="0.1524" layer="91"/>
<junction x="88.9" y="111.76"/>
<pinref part="U$5" gate="G$1" pin="GND"/>
<wire x1="139.7" y1="73.66" x2="96.52" y2="73.66" width="0.1524" layer="91"/>
<junction x="96.52" y="73.66"/>
</segment>
</net>
<net name="N$1" class="0">
<segment>
<pinref part="LEFT_ENCODER" gate="G$1" pin="OUTB"/>
<wire x1="-73.66" y1="106.68" x2="-43.18" y2="106.68" width="0.1524" layer="91"/>
<wire x1="-43.18" y1="106.68" x2="-43.18" y2="73.66" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="2"/>
<wire x1="-43.18" y1="73.66" x2="40.64" y2="73.66" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$2" class="0">
<segment>
<pinref part="LEFT_ENCODER" gate="G$1" pin="OUTA"/>
<wire x1="-73.66" y1="104.14" x2="-45.72" y2="104.14" width="0.1524" layer="91"/>
<wire x1="-45.72" y1="104.14" x2="-45.72" y2="71.12" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="3/CAN-TX/PWM"/>
<wire x1="-45.72" y1="71.12" x2="40.64" y2="71.12" width="0.1524" layer="91"/>
</segment>
</net>
<net name="V_OUT" class="0">
<segment>
<pinref part="LEFT_ENCODER" gate="G$1" pin="VCC"/>
<wire x1="-73.66" y1="101.6" x2="-60.96" y2="101.6" width="0.1524" layer="91"/>
<wire x1="-60.96" y1="101.6" x2="-60.96" y2="91.44" width="0.1524" layer="91"/>
<wire x1="-60.96" y1="91.44" x2="-109.22" y2="91.44" width="0.1524" layer="91"/>
<wire x1="-109.22" y1="91.44" x2="-109.22" y2="119.38" width="0.1524" layer="91"/>
<wire x1="-109.22" y1="119.38" x2="-22.86" y2="119.38" width="0.1524" layer="91"/>
<wire x1="-22.86" y1="119.38" x2="27.94" y2="119.38" width="0.1524" layer="91"/>
<wire x1="27.94" y1="119.38" x2="30.48" y2="119.38" width="0.1524" layer="91"/>
<wire x1="30.48" y1="119.38" x2="55.88" y2="119.38" width="0.1524" layer="91"/>
<wire x1="55.88" y1="119.38" x2="55.88" y2="114.3" width="0.1524" layer="91"/>
<wire x1="91.44" y1="78.74" x2="93.98" y2="78.74" width="0.1524" layer="91"/>
<wire x1="93.98" y1="78.74" x2="101.6" y2="78.74" width="0.1524" layer="91"/>
<wire x1="101.6" y1="78.74" x2="101.6" y2="114.3" width="0.1524" layer="91"/>
<wire x1="101.6" y1="114.3" x2="55.88" y2="114.3" width="0.1524" layer="91"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="L_5V"/>
<wire x1="-66.04" y1="35.56" x2="-66.04" y2="10.16" width="0.1524" layer="91"/>
<wire x1="-66.04" y1="10.16" x2="12.7" y2="10.16" width="0.1524" layer="91"/>
<wire x1="12.7" y1="10.16" x2="93.98" y2="10.16" width="0.1524" layer="91"/>
<wire x1="93.98" y1="10.16" x2="93.98" y2="78.74" width="0.1524" layer="91"/>
<junction x="93.98" y="78.74"/>
<pinref part="RIGHT_ENCODER" gate="G$1" pin="VCC"/>
<wire x1="-17.78" y1="104.14" x2="-22.86" y2="104.14" width="0.1524" layer="91"/>
<wire x1="-22.86" y1="104.14" x2="-22.86" y2="119.38" width="0.1524" layer="91"/>
<junction x="-22.86" y="119.38"/>
<label x="-10.16" y="124.46" size="1.778" layer="95"/>
<label x="20.32" y="119.38" size="1.778" layer="95"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="R_5V"/>
<wire x1="-12.7" y1="53.34" x2="12.7" y2="53.34" width="0.1524" layer="91"/>
<wire x1="12.7" y1="53.34" x2="12.7" y2="10.16" width="0.1524" layer="91"/>
<junction x="12.7" y="10.16"/>
<label x="20.32" y="10.16" size="1.778" layer="95"/>
<pinref part="IMU" gate="G$1" pin="5V"/>
<wire x1="104.14" y1="48.26" x2="104.14" y2="81.28" width="0.1524" layer="91"/>
<wire x1="104.14" y1="81.28" x2="104.14" y2="93.98" width="0.1524" layer="91"/>
<wire x1="104.14" y1="93.98" x2="104.14" y2="111.76" width="0.1524" layer="91"/>
<wire x1="104.14" y1="111.76" x2="104.14" y2="119.38" width="0.1524" layer="91"/>
<wire x1="104.14" y1="119.38" x2="55.88" y2="119.38" width="0.1524" layer="91"/>
<junction x="55.88" y="119.38"/>
<pinref part="U$2" gate="G$1" pin="VOUT"/>
<wire x1="116.84" y1="63.5" x2="91.44" y2="63.5" width="0.1524" layer="91"/>
<wire x1="91.44" y1="63.5" x2="91.44" y2="78.74" width="0.1524" layer="91"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="M2_ENABLE"/>
<wire x1="-12.7" y1="35.56" x2="30.48" y2="35.56" width="0.1524" layer="91"/>
<wire x1="30.48" y1="35.56" x2="30.48" y2="119.38" width="0.1524" layer="91"/>
<junction x="30.48" y="119.38"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="M1_ENABLE"/>
<wire x1="-66.04" y1="53.34" x2="-71.12" y2="53.34" width="0.1524" layer="91"/>
<wire x1="-71.12" y1="53.34" x2="-71.12" y2="58.42" width="0.1524" layer="91"/>
<wire x1="-71.12" y1="58.42" x2="27.94" y2="58.42" width="0.1524" layer="91"/>
<wire x1="27.94" y1="58.42" x2="27.94" y2="119.38" width="0.1524" layer="91"/>
<junction x="27.94" y="119.38"/>
<pinref part="U$3" gate="G$1" pin="VCC"/>
<wire x1="116.84" y1="111.76" x2="104.14" y2="111.76" width="0.1524" layer="91"/>
<junction x="104.14" y="111.76"/>
<pinref part="U$4" gate="G$1" pin="VCC"/>
<wire x1="116.84" y1="93.98" x2="104.14" y2="93.98" width="0.1524" layer="91"/>
<junction x="104.14" y="93.98"/>
<pinref part="U$5" gate="G$1" pin="VCC"/>
<wire x1="139.7" y1="81.28" x2="104.14" y2="81.28" width="0.1524" layer="91"/>
<junction x="104.14" y="81.28"/>
<pinref part="U$1" gate="G$1" pin="VIN"/>
<wire x1="91.44" y1="78.74" x2="86.36" y2="78.74" width="0.1524" layer="91"/>
<junction x="91.44" y="78.74"/>
</segment>
</net>
<net name="N$6" class="0">
<segment>
<pinref part="LEFT_ENCODER" gate="G$1" pin="M2"/>
<wire x1="-73.66" y1="99.06" x2="-58.42" y2="99.06" width="0.1524" layer="91"/>
<wire x1="-58.42" y1="99.06" x2="-58.42" y2="55.88" width="0.1524" layer="91"/>
<wire x1="-58.42" y1="55.88" x2="-81.28" y2="55.88" width="0.1524" layer="91"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="L_M1_2"/>
<wire x1="-81.28" y1="55.88" x2="-81.28" y2="40.64" width="0.1524" layer="91"/>
<wire x1="-81.28" y1="40.64" x2="-66.04" y2="40.64" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$7" class="0">
<segment>
<pinref part="LEFT_ENCODER" gate="G$1" pin="M1"/>
<wire x1="-73.66" y1="96.52" x2="-66.04" y2="96.52" width="0.1524" layer="91"/>
<wire x1="-66.04" y1="96.52" x2="-66.04" y2="60.96" width="0.1524" layer="91"/>
<wire x1="-66.04" y1="60.96" x2="-76.2" y2="60.96" width="0.1524" layer="91"/>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="L_M1_1"/>
<wire x1="-76.2" y1="60.96" x2="-76.2" y2="48.26" width="0.1524" layer="91"/>
<wire x1="-76.2" y1="48.26" x2="-66.04" y2="48.26" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$11" class="0">
<segment>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="M1_REV_PWN"/>
<wire x1="-66.04" y1="38.1" x2="-73.66" y2="38.1" width="0.1524" layer="91"/>
<wire x1="-73.66" y1="38.1" x2="-73.66" y2="20.32" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="23/A9/T/PWM"/>
<wire x1="-73.66" y1="20.32" x2="40.64" y2="20.32" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$12" class="0">
<segment>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="M1_FWD_PWN"/>
<wire x1="-66.04" y1="50.8" x2="-83.82" y2="50.8" width="0.1524" layer="91"/>
<wire x1="-83.82" y1="50.8" x2="-83.82" y2="22.86" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="22/A8/T/PWM"/>
<wire x1="-83.82" y1="22.86" x2="40.64" y2="22.86" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$13" class="0">
<segment>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="M2_REV_PWM"/>
<wire x1="-12.7" y1="50.8" x2="27.94" y2="50.8" width="0.1524" layer="91"/>
<wire x1="27.94" y1="50.8" x2="27.94" y2="25.4" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="21/A7/PWM"/>
<wire x1="27.94" y1="25.4" x2="40.64" y2="25.4" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$14" class="0">
<segment>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="M2_FWD_PWM"/>
<wire x1="-12.7" y1="38.1" x2="25.4" y2="38.1" width="0.1524" layer="91"/>
<wire x1="25.4" y1="38.1" x2="25.4" y2="27.94" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="20/A6/PWM"/>
<wire x1="25.4" y1="27.94" x2="40.64" y2="27.94" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$15" class="0">
<segment>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="R_M2_1"/>
<wire x1="-12.7" y1="48.26" x2="2.54" y2="48.26" width="0.1524" layer="91"/>
<wire x1="2.54" y1="48.26" x2="2.54" y2="86.36" width="0.1524" layer="91"/>
<wire x1="2.54" y1="86.36" x2="-27.94" y2="86.36" width="0.1524" layer="91"/>
<pinref part="RIGHT_ENCODER" gate="G$1" pin="M1"/>
<wire x1="-27.94" y1="86.36" x2="-27.94" y2="109.22" width="0.1524" layer="91"/>
<wire x1="-27.94" y1="109.22" x2="-17.78" y2="109.22" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$16" class="0">
<segment>
<pinref part="MOTOR_DRIVER" gate="G$1" pin="R_M2_2"/>
<wire x1="-12.7" y1="40.64" x2="5.08" y2="40.64" width="0.1524" layer="91"/>
<wire x1="5.08" y1="40.64" x2="5.08" y2="88.9" width="0.1524" layer="91"/>
<wire x1="5.08" y1="88.9" x2="-30.48" y2="88.9" width="0.1524" layer="91"/>
<wire x1="-30.48" y1="88.9" x2="-30.48" y2="106.68" width="0.1524" layer="91"/>
<pinref part="RIGHT_ENCODER" gate="G$1" pin="M2"/>
<wire x1="-30.48" y1="106.68" x2="-17.78" y2="106.68" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$3" class="0">
<segment>
<pinref part="RIGHT_ENCODER" gate="G$1" pin="OUTA"/>
<wire x1="-17.78" y1="101.6" x2="-33.02" y2="101.6" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="4/CAN-RX/PWM"/>
<wire x1="-33.02" y1="101.6" x2="-33.02" y2="68.58" width="0.1524" layer="91"/>
<wire x1="-33.02" y1="68.58" x2="40.64" y2="68.58" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$4" class="0">
<segment>
<pinref part="RIGHT_ENCODER" gate="G$1" pin="OUTB"/>
<wire x1="-17.78" y1="99.06" x2="-35.56" y2="99.06" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="5/PWM"/>
<wire x1="-35.56" y1="99.06" x2="-35.56" y2="66.04" width="0.1524" layer="91"/>
<wire x1="-35.56" y1="66.04" x2="40.64" y2="66.04" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$10" class="0">
<segment>
<pinref part="IMU" gate="G$1" pin="SDA"/>
<wire x1="104.14" y1="38.1" x2="96.52" y2="38.1" width="0.1524" layer="91"/>
<wire x1="96.52" y1="38.1" x2="96.52" y2="7.62" width="0.1524" layer="91"/>
<wire x1="96.52" y1="7.62" x2="33.02" y2="7.62" width="0.1524" layer="91"/>
<wire x1="33.02" y1="7.62" x2="33.02" y2="33.02" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="18/A4/T/SDA0"/>
<wire x1="33.02" y1="33.02" x2="40.64" y2="33.02" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$17" class="0">
<segment>
<pinref part="IMU" gate="G$1" pin="SCL"/>
<wire x1="104.14" y1="33.02" x2="101.6" y2="33.02" width="0.1524" layer="91"/>
<wire x1="101.6" y1="33.02" x2="101.6" y2="2.54" width="0.1524" layer="91"/>
<wire x1="101.6" y1="2.54" x2="35.56" y2="2.54" width="0.1524" layer="91"/>
<wire x1="35.56" y1="2.54" x2="35.56" y2="30.48" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="19/A5/T/SCL0"/>
<wire x1="35.56" y1="30.48" x2="40.64" y2="30.48" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$8" class="0">
<segment>
<pinref part="U$3" gate="G$1" pin="TRIG"/>
<wire x1="116.84" y1="109.22" x2="106.68" y2="109.22" width="0.1524" layer="91"/>
<wire x1="106.68" y1="109.22" x2="106.68" y2="101.6" width="0.1524" layer="91"/>
<wire x1="106.68" y1="101.6" x2="35.56" y2="101.6" width="0.1524" layer="91"/>
<wire x1="35.56" y1="101.6" x2="35.56" y2="55.88" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="9/RX2/PWM"/>
<wire x1="35.56" y1="55.88" x2="40.64" y2="55.88" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$9" class="0">
<segment>
<pinref part="U$3" gate="G$1" pin="ECHO"/>
<wire x1="116.84" y1="106.68" x2="109.22" y2="106.68" width="0.1524" layer="91"/>
<wire x1="109.22" y1="106.68" x2="109.22" y2="96.52" width="0.1524" layer="91"/>
<wire x1="109.22" y1="96.52" x2="33.02" y2="96.52" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="14/A0"/>
<wire x1="33.02" y1="96.52" x2="33.02" y2="43.18" width="0.1524" layer="91"/>
<wire x1="33.02" y1="43.18" x2="40.64" y2="43.18" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$18" class="0">
<segment>
<pinref part="U$4" gate="G$1" pin="TRIG"/>
<wire x1="116.84" y1="91.44" x2="25.4" y2="91.44" width="0.1524" layer="91"/>
<wire x1="25.4" y1="91.44" x2="25.4" y2="53.34" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="10/TX2/PWM"/>
<wire x1="25.4" y1="53.34" x2="40.64" y2="53.34" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$19" class="0">
<segment>
<pinref part="U$4" gate="G$1" pin="ECHO"/>
<wire x1="116.84" y1="88.9" x2="38.1" y2="88.9" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="15/A1/T"/>
<wire x1="38.1" y1="88.9" x2="38.1" y2="40.64" width="0.1524" layer="91"/>
<wire x1="38.1" y1="40.64" x2="40.64" y2="40.64" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$20" class="0">
<segment>
<pinref part="U$5" gate="G$1" pin="TRIG"/>
<wire x1="139.7" y1="78.74" x2="106.68" y2="78.74" width="0.1524" layer="91"/>
<wire x1="106.68" y1="78.74" x2="106.68" y2="83.82" width="0.1524" layer="91"/>
<wire x1="106.68" y1="83.82" x2="83.82" y2="83.82" width="0.1524" layer="91"/>
<wire x1="83.82" y1="83.82" x2="83.82" y2="86.36" width="0.1524" layer="91"/>
<wire x1="83.82" y1="86.36" x2="17.78" y2="86.36" width="0.1524" layer="91"/>
<wire x1="17.78" y1="86.36" x2="17.78" y2="63.5" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="6/PWM"/>
<wire x1="17.78" y1="63.5" x2="40.64" y2="63.5" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$21" class="0">
<segment>
<pinref part="U$5" gate="G$1" pin="ECHO"/>
<wire x1="139.7" y1="76.2" x2="134.62" y2="76.2" width="0.1524" layer="91"/>
<wire x1="134.62" y1="76.2" x2="134.62" y2="99.06" width="0.1524" layer="91"/>
<wire x1="134.62" y1="99.06" x2="15.24" y2="99.06" width="0.1524" layer="91"/>
<wire x1="15.24" y1="99.06" x2="15.24" y2="40.64" width="0.1524" layer="91"/>
<wire x1="15.24" y1="40.64" x2="33.02" y2="40.64" width="0.1524" layer="91"/>
<wire x1="33.02" y1="40.64" x2="33.02" y2="38.1" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="16/A2/T"/>
<wire x1="33.02" y1="38.1" x2="40.64" y2="38.1" width="0.1524" layer="91"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
<errors>
<approved hash="204,1,86.36,58.42,U$1,AGND,,,,"/>
<approved hash="204,1,86.36,76.2,U$1,3.3V,,,,"/>
<approved hash="104,1,86.36,78.74,U$1,VIN,V_OUT,,,"/>
</errors>
</schematic>
</drawing>
</eagle>
