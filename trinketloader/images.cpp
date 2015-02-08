#include "optiLoader.h"

image_t PROGMEM image_328 = {
    {"blankfull.hex"},
    {"attiny85"},
    0x930B,				/* Signature bytes for attimny85 */
    {0, 0xF1, 0xD5, 0x06},            // pre program fuses (prot/lock, low, high, ext)
    {0, 0, 0, 0},            // post program fuses
    {0x3F, 0xFF, 0xFF, 0x07},           // fuse mask
    8192,     // size of chip flash in bytes
    64,   // size in bytes of flash page
    {
":100000007FCA7FCA7FCA7FCA7FCA7FCA7FCA7FCAA8\n"
":100010007FCAF89400C0000000000000000000004B\n"
":1000200000000000000000000000000000000000D0\n"
":1000300000000000000000000000000000000000C0\n"
":1015000033C05FC08BC05DC05CC05BC05AC059C0F7\n"
":1015100058C057C056C055C054C053C052C009022D\n"
":1015200012000101008032090400000000000000E8\n"
":1015300012011001FF00000881179F0C0501010234\n"
":10154000000110035400720069006E006B0065001A\n"
":1015500074001203410064006100660072007500AF\n"
":10156000690074000403090411241FBECFE5D2E012\n"
":10157000DEBFCDBF84B7877F84BF88E10FB6F89404\n"
":1015800081BD11BC0FBE91E080E80FB6F89486BD16\n"
":1015900096BD0FBE0AEA0F9310E0A0E6B0E0E4EDBE\n"
":1015A000FFE102C005900D92A236B107D9F721E004\n"
":1015B000A2E6B0E001C01D92A732B207E1F7E7D37F\n"
":1015C00007C59ECFA82FB92F80E090E041E050EAF8\n"
":1015D000609530E009C02D9182279795879510F08E\n"
":1015E00084279527305EC8F36F5FA8F30895EADF7C\n"
":1015F0008D939D930895A6E088279927AA9569F071\n"
":101600000197E1F3B399FCCFB39BFECF81E099271B\n"
":10161000A6B3019611F0A871D9F70895CF93CFB76B\n"
":10162000CF93C0915F02CA3A21F0CF91CFBFCF9143\n"
":1016300065CFCC27C395B39BE9F7B39B0BC0B39B96\n"
":1016400009C0B39B07C0B39B05C0B39B03C0B39B4A\n"
":1016500001C0D3C00F92DF93C0910A01DD27CF5E96\n"
":10166000DE4F012EB39B03C0DF910F90E6CF2F9387\n"
":101670000F931F934F932FEF4F6F06B303FB20F988\n"
":101680005F933F9350E03BE065C016B301265029BD\n"
":1016900053FDC89556B3012703FB25F92F7306B3F5\n"
":1016A000B1F05027102713FB26F906B22230F0F0D4\n"
":1016B00000C016B3012703FB27F90126502906B203\n"
":1016C0002430E8F54F77206816B30000F6CF502796\n"
":1016D0004F7D206206B2102F000000C006B3002626\n"
":1016E0005029102713FB26F906B2E2CF4F7B06B331\n"
":1016F000206400C0DACF01265029187106B269F1C2\n"
":101700004E7F2160012F16B328C0002650294D7F3F\n"
":1017100006B22260102F29C0012650294B7F06B245\n"
":101720002460012F2DC016B301265029477F286061\n"
":10173000000006B22EC04F7E06B3206130C04227A3\n"
":1017400006B3499300265029102706B24FEF13FB2A\n"
":1017500020F9297F16B379F2187159F10126502921\n"
":1017600006B2012703FB21F9237F06B371F200269D\n"
":1017700050293150D0F006B2102713FB22F9277EF2\n"
":1017800016B351F201265029012703FB06B223F9B3\n"
":101790002F7C49F2000006B3102713FB24F9002622\n"
":1017A000502906B22F7939F270CF10E21ABF002704\n"
":1017B00017C03B503195C31BD04010E21ABF0881BF\n"
":1017C000033CF9F00B34E9F0209108011981110F65\n"
":1017D0001213EDCF093651F10D3211F0013E39F7F8\n"
":1017E00000930F013F915F914F911F910F912F91A6\n"
":1017F000DF910F90CAB7C5FD1DCFCF91CFBFCF915D\n"
":10180000189520910F01222369F310910D011123E6\n"
":1018100021F5343022F130930D012093090110910C\n"
":101820000A013BE0311B30930A0119C000910D0100\n"
":1018300001309CF40AE53091610034FD11C0009341\n"
":101840006100CDEFD0E010C0052710E000C021C03E\n"
":10185000052710E0C89508BB14C03AE501C032ED79\n"
":10186000032EC0E0D0E032E017B31861C39A08B38A\n"
":1018700017BB58E120E84FEF20FF052708BB27954D\n"
":1018800017951C3F28F700004552B0F720FF0527A9\n"
":10189000279508BB17951C3FB8F629913A9561F733\n"
":1018A000077E10910E01110F08BBC250D04011F0FD\n"
":1018B0001093080110E21ABF086017B3177E402F7B\n"
":1018C000477E54E05A95F1F708BB17BB48BB8ACF57\n"
":1018D0002091F8003091F9002D3F3441B8F421E017\n"
":1018E0002093F500F894E091F800F091F9000C01D4\n"
":1018F00020935700E895112478948091F8009091F6\n"
":10190000F90002969093F9008093F8000895809171\n"
":10191000F500882309F43DC08091F8009091F9000A\n"
":101920008130954108F035C0F8948091F80090918D\n"
":10193000F900823C944118F1809166009091670013\n"
":101940008F579A409F70906CEEEFF4E121E00C010C\n"
":1019500020935700E895112480916E0090916F00BC\n"
":101960008C579A409F70906CECEFF4E10C0120933F\n"
":101970005700E8951124789481E080936400E09109\n"
":10198000F800F091F900329785E080935700E895D0\n"
":1019900078941092F5000895FF920F931F93CF93C0\n"
":1019A000DF9380910D01835087FD47C190910A011B\n"
":1019B000ACE0B0E0A91BB109AF5EBE4F41E040937F\n"
":1019C0006200909109019D3209F0F7C0883009F05A\n"
":1019D00032C183EC8093FD008AE580936100109210\n"
":1019E000FC005C91852F807609F477C01092F2009C\n"
":1019F0001092F4001092F30011963C91119731303F\n"
":101A000009F4CDC0363021F481E08093FB00B7C1EA\n"
":101A1000373009F042C04093FB0088EE90E090938D\n"
":101A20000C0180930B0113969C9113979093EA00FD\n"
":101A30001092EB0012968C911297803379F49111E9\n"
":101A40009CC11496EC911497F0E0EE0FFF1F81E219\n"
":101A500080935700E491E093EB008FC18C3A89F4B6\n"
":101A6000903809F08AC114968C911497811185C120\n"
":101A700015968C911597811180C181E08093E700C4\n"
":101A80007CC18C3409F079C115968C911597811120\n"
":101A900074C181E08093E60070C1383009F4B4CF9E\n"
":101AA00014968D919C9115979093F9008093F8006E\n"
":101AB00016962C9116972093F00087EF830F8430B1\n"
":101AC00008F05DC14093FA003093F1003A3009F418\n"
":101AD0004CC181E08093FB0048C112969C91129703\n"
":101AE0001092060111968C911197811106C01092E7\n"
":101AF000070186E091E022E04DC0853019F4909313\n"
":101B00000E013AC0863091F513968C91139781306F\n"
":101B100019F480E395E104C0823041F48EE195E14F\n"
":101B200090930C0180930B0122E11CC08330C9F417\n"
":101B3000911108C084E695E190930C0180930B010C\n"
":101B400024E010C0913019F482E595E1E9CF92309C\n"
":101B500041F482E495E190930C0180930B0120E124\n"
":101B600001C020E080E48093FC001AC0883079F046\n"
":101B7000893031F49093100186E091E020E00AC0B2\n"
":101B800021E08A3009F020E086E091E003C080E1A6\n"
":101B900091E021E090930C0180930B0101C021E0C2\n"
":101BA00017968C911797811105C016968C91821704\n"
":101BB00008F4282F209360003EC09091FC0097FF0E\n"
":101BC0003AC09091F000182F981708F4192F092F98\n"
":101BD000011B0093F0001092FB008091F1008A300D\n"
":101BE00029F0011128C01092600025C0FA2ECA2FDA\n"
":101BF000DB2F8C2F8F198117A0F78091F80090911F\n"
":101C0000F9008034910590F421E020936500FC01F7\n"
":101C1000EE0FFF1FEA59FF4F28813981318320835E\n"
":101C200002969093F9008093F80003C0888199810F\n"
":101C30004FDE2296DECF10920D018091610084FF6D\n"
":101C40007BC0809160008F3F09F476C0182F8930E7\n"
":101C500008F018E0811B809360008091FD0098E8F7\n"
":101C600089278093FD00112309F45AC08091FC005C\n"
":101C700087FF38C08091F000811708F4182F811B6E\n"
":101C80008093F0003091F100E091F800F091F900BC\n"
":101C900020E0AEEFB0E0211700F53B3009F4FFCFB4\n"
":101CA0003930D9F7E034F10560F4EF01CC0FDD1FD6\n"
":101CB000CA59DF4F888199818D939D932E5F32960B\n"
":101CC000EACFEC3F84E1F80710F08FEF01C0849178\n"
":101CD0008C9311962F5F3196DECFF093F900E0934D\n"
":101CE000F8001EC0E0910B01F0910C0186FF0BC0C3\n"
":101CF0008EEF90E0DC0124912D933196212F280F57\n"
":101D00002A13F9CF09C08EEF90E0DC0121912D93C9\n"
":101D1000212F280F2A13FACFF0930C01E0930B0127\n"
":101D2000612F8EEF90E063DC1C5F1C3019F08FEFA9\n"
":101D3000809360001093610084E196B3987131F450\n"
":101D40008150D9F710920E0110920801C1E0811163\n"
":101D5000C0E0809163008C17A1F0C11103C0F8941A\n"
":101D6000F1D07894C09363000CC057FF04C080E8A2\n"
":101D70008093FC001FCF2FEFFACF24E011CF20E09B\n"
":101D80000FCFDF91CF911F910F91FF900895C1B7B1\n"
":101D9000AC9A8BB780628BBFBB9A2FE132E18AE0AD\n"
":101DA000215030408040E1F700C00000BB9878949B\n"
":101DB000F3DD8091E700882321F182E090E09093A9\n"
":101DC000F7008093F60013C0CF018F739927892BFA\n"
":101DD00021F483E080935700E895DEDD8091F600E2\n"
":101DE0009091F70002969093F7008093F600E091AF\n"
":101DF000F600F091F700E11595E1F90728F310924C\n"
":101E0000E7008091E600882329F0C6DD80DD10928E\n"
":101E1000E600C2DD80916200882341F08091FB00E2\n"
":101E2000811104C08091FA008111C2CF8EEC90E044\n"
":101E30000197F1F78091F3009091F400019690934F\n"
":101E4000F4008093F3002091F200009711F42F5FCB\n"
":101E500000C02093F20030916200311105C0813240\n"
":101E60003EE4930708F059C03091FB00332321F082\n"
":101E70008131974208F051C080916200882309F4B3\n"
":101E800097CF8091FA00811193CF233008F490CF3F\n"
":101E900044C080916400811148C08CEF94E190931C\n"
":101EA000F9008093F80081E08093F50030DD3DC0BB\n"
":101EB000DF01AA0FBB1FAA59BF4F8D919C919F01B3\n"
":101EC0002B7F232B29F4FB5E859194918058954FAD\n"
":101ED000FFDCE091F800F091F900E034F10540F307\n"
":101EE00016DD10925F0217BA13BE1ABC03C081B789\n"
":101EF0008F5F81BF81B78C17D0F303C081B781504A\n"
":101F000081BF81B7C817D0F391E080E80FB6F8948D\n"
":101F100086BD96BD0FBEF3CA13C015BA1BBEF8949A\n"
":101F2000809165008111B5CFDCCFE0E0F0E083E087\n"
":101F300080935700E8951092F9001092F800C9CFED\n"
":101F400080E090E0DF92EF92FF920F931F93CF9388\n"
":101F5000DF9390E080E80FB6F89486BD96BD0FBE83\n"
":101F600008E010E0F12C80E8E82EDF2CDE0CD1BE7A\n"
":101F700042DBEC01C43389E0D8070CF4FD2CE69475\n"
":101F80000150110991F71F2D8FEF8F0D81BF21B7E0\n"
":101F900030E0812F90E001968217930784F02BDBCD\n"
":101FA0008453994097FF03C09195819591098C17AF\n"
":101FB0009D0714F4F1B6EC0181B78F5FE7CFF1BE56\n"
":101FC000DF91CF911F910F91FF90EF90DF900895D7\n"
":041FD000F894FFCFB3\n"
":021FD400FF5AB2\n"
//":0400000300001500E4\n"
":00000001FF\n"
}
};


/*
 * Table of defined images
 */
image_t *images[] = {
  &image_328,
};

uint8_t NUMIMAGES = sizeof(images)/sizeof(images[0]);
