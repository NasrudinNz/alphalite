object FormImgListEditor: TFormImgListEditor
  Left = 289
  Top = 196
  AutoScroll = False
  ClientHeight = 143
  ClientWidth = 600
  Color = clBtnFace
  Constraints.MinHeight = 130
  Constraints.MinWidth = 612
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  ParentFont = False
  OldCreateOrder = True
  Position = poScreenCenter
  Scaled = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object SpeedButton1: TsSpeedButton
    Left = 9
    Top = 5
    Width = 74
    Height = 36
    Caption = 'Add'
    Flat = True
    OnClick = SpeedButton1Click
    Images = sAlphaImageList1
    ImageIndex = 0
  end
  object SpeedButton2: TsSpeedButton
    Left = 86
    Top = 5
    Width = 74
    Height = 36
    Caption = 'Delete'
    Enabled = False
    Flat = True
    OnClick = SpeedButton2Click
    Images = sAlphaImageList1
    ImageIndex = 3
  end
  object SpeedButton3: TsSpeedButton
    Left = 240
    Top = 5
    Width = 74
    Height = 36
    Caption = 'Clear'
    Flat = True
    OnClick = SpeedButton3Click
    Images = sAlphaImageList1
    ImageIndex = 4
  end
  object SpeedButton4: TsSpeedButton
    Left = 424
    Top = 5
    Width = 74
    Height = 36
    Caption = 'Extract all'
    Enabled = False
    Flat = True
    OnClick = SpeedButton4Click
    Images = sAlphaImageList1
  end
  object SpeedButton5: TsSpeedButton
    Left = 163
    Top = 5
    Width = 74
    Height = 36
    Caption = 'Replace'
    Enabled = False
    Flat = True
    OnClick = SpeedButton5Click
    Images = sAlphaImageList1
    ImageIndex = 6
  end
  object SpeedButton6: TsSpeedButton
    Left = 317
    Top = 5
    Width = 104
    Height = 36
    Caption = 'Extract as...'
    Enabled = False
    Flat = True
    OnClick = SpeedButton6Click
    Images = sAlphaImageList1
    ImageIndex = 7
  end
  object sBitBtn6: TsBitBtn
    Left = 506
    Top = 76
    Width = 86
    Height = 29
    Cancel = True
    Caption = 'Cancel'
    TabOrder = 2
    OnClick = sBitBtn6Click
    ImageIndex = 2
    Images = sAlphaImageList1
  end
  object sBitBtn7: TsBitBtn
    Left = 506
    Top = 107
    Width = 86
    Height = 29
    Caption = 'Apply'
    TabOrder = 3
    OnClick = sBitBtn7Click
    ImageIndex = 5
    Images = sAlphaImageList1
  end
  object sBitBtn5: TsBitBtn
    Left = 506
    Top = 45
    Width = 86
    Height = 29
    Caption = 'Ok'
    Default = True
    TabOrder = 1
    OnClick = sBitBtn5Click
    ImageIndex = 1
    Images = sAlphaImageList1
  end
  object ListView1: TsListView
    Left = 8
    Top = 45
    Width = 490
    Height = 63
    SkinData.SkinSection = 'EDIT'
    Color = clWhite
    Columns = <>
    DragMode = dmAutomatic
    IconOptions.Arrangement = iaLeft
    IconOptions.AutoArrange = True
    LargeImages = ImageList1
    TabOrder = 0
    OnClick = ListView1Click
    OnDragDrop = ListView1DragDrop
    OnDragOver = ListView1DragOver
    OnKeyDown = ListView1KeyDown
  end
  object sEdit1: TsEdit
    Left = 78
    Top = 114
    Width = 307
    Height = 21
    Anchors = [akLeft, akTop, akRight]
    Color = clWhite
    TabOrder = 4
    OnChange = sEdit1Change
    SkinData.SkinSection = 'EDIT'
    BoundLabel.Active = True
    BoundLabel.Caption = 'Item text:'
  end
  object ImageList1: TsAlphaImageList
    DrawingStyle = dsTransparent
    Height = 32
    Width = 32
    Items = <>
    Left = 276
    Top = 56
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Filter = 
      'All (*.png, *.ico)|*.png;*.ico|Icons (*.ico)|*.ico|Png (*.png)|*' +
      '.png'
    Options = [ofHideReadOnly, ofAllowMultiSelect, ofEnableSizing]
    Title = 'Add image'
    Left = 308
    Top = 56
  end
  object sSkinProvider1: TsSkinProvider
    SkinData.SkinSection = 'FORM'
    GripMode = gmRightBottom
    TitleButtons = <>
    Left = 212
    Top = 56
  end
  object sAlphaImageList1: TsAlphaImageList
    DrawingStyle = dsTransparent
    Items = <
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F80000002B744558744372656174696F6E2054696D6500446F203231204E6F76
          20323030322031313A34353A3435202B30313030B2AB05980000000774494D45
          07D3080E0B241E8F63CBF7000000097048597300000AF000000AF00142AC3498
          0000000467414D410000B18F0BFC61050000040C4944415478DAD555696C5455
          143EF7BD99378F4EC719CB6219144190C6841089605D023F4453494D50128221
          248628FDEB1F5C51C20F12145213356A20EA0FA5C60412E34A286942C0180AC4
          204B28A52C528AA1D3D2A1B3BDE52E9EBB4C1FA5AD89A97FBC99337779F79CEF
          BBDF39F73D80FF7B239371BED6FED4B24B17FB0E39C9ACC51905C10038B12028
          DF84D0AFBCFEECA69E9D936277F233E7FDD2509718AFED7B8BFC26F7C4267216
          2796BCD47BE1CC439CFB491A0A5700A491E49490819B706B332177DD81A1606E
          4DA60177E7D0B8F432DEF590C92E7A14E08F8901AE5DEE7A35BBBA7B31E714EC
          782D58762DAE4EB963970C7A032D3063302065D9DBFF7802AFE281EDDC0736F4
          E2CC37C64DDAC80880106560610962CE549C87668F879D061C174088BE69BF7E
          302B311F99F8C52E0CE081A065A001321308443CB0B80784846059423D77EF59
          0971B70EBD9922C38988004EEC9ADD1614727352D366666D3733F3F76F9E4F78
          4842B01E0C7C05620917AC5A0235561CB9E3C905BA710763211847D64CC0AD9B
          C7209D6D3227AD00E1B701FC797560F6EA6DA527000A38BB851687A35F2C0162
          27C1CDDCAD75659E9640050DB48950F724002B1C00CA7210B35D2511372A5AEA
          CF72DB2E756EC1511FDA55B4EB40E51124186A0CBCA013C74B38AF2886CAE433
          39E715A8493228F51F3739F04198132880A5CF6DDA7BA5734FA01F96953141F4
          98940D4845CF45498F79D918CE59196C8B022F9EC63D4543E0B624DFDBF8F660
          FB567210C56AD665C6F05FF6435881C3B844B5D64A9A3092C8791C2952505718
          B7A7A6C620C0C33A292C8A3BABE8AE1973BEED3EFC75F382E56B7515A8521C44
          D9878DD66114BCAABD8D95F4654B9593225DDAF01D0248823C9248B6C696CFBF
          BFDCD9E1E95A2EA8CA008A373494A7C05C84551B8E7A5651415B37AE831D1BD7
          2A9098BC0358DAE69E450024B6A2402AC503DCEF56D250869EFE8009988F001C
          2CB6C432B4E51A008332C68052940A7F8E1D03CA1742FDFC15632F5ABA6EEEBE
          0B87F6AF6A687A06654580B01FD9E7750E942CD827B0C6BF7A6344126932B804
          9163F2E11ABDCE602C40E39AED3FB4EF59EF37342D4D08214F90D3AC1500D500
          86F5CE961755508EC994BDB42DAF342B30693B76778C9648C954BF6A9815ED23
          50BAAE0A03C25C240F93C9C6B1A575AF06AD069440D57155AE71DF45C954DD8F
          FD274F3D4D6C8CC207D52D051B778701F49E2F8298EE28E7373FDD3B22D33B2F
          AF5441DFDB7D50AFB1092492EDE1275FE8E839F309C46DACA2FC0D3877AA087F
          F5821FD0E98753E9FB7F5AF480FB336C868BFAA5285AC8BB64D7086B5980ADA3
          BF926300D28FB59E3DF2D18263F97C6E565B5BFC40AAEEC15F16366D6B9FF748
          73417F58368F766010C9C2C6BE9927F54D56ED3573A7AAB27CFC1FC4FC37ED6F
          DCAD5DEE73369BCA0000000049454E44AE426082}
      end
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F8000003AA49444154785EED967D4C5B6514C6CFBD524A81E26DA5A5B4030A58
          0371600204C4485118A595647E0D9665B205E7FC4E20C6B9641B0871336E0C26
          CAA863C3254A35B8E91C53AA58F65149A8B0C896294BA0B71FD84A53192A58DD
          84EE31D1A490B8666E737F98F84BCEFBDF799E9C9393735E0600DD4C58BAC9FC
          6F1022D6C8E42535C84F25BD2655FDEB06D10798DCF4E98CAF0ED71CD5A6B29A
          3ED1338C72D1E0C6C5F3D27D9AE1B655EDECE1E11EDA6CD89ACD04D8CF85957F
          9944D00D10D3C9E4A4FAD26D6D551D6CEFB92374CE7F863A46F6D2F6753B9637
          B637998506A6F8BA0D623A985CF585B4E137D718D9DEF31FD23781B334343744
          97954466D73112B3DC2DBFCEFB88008442FEBE901337093A6526610E000A1722
          23E566BCA20E5A9C9FA1766023561CB91BE2FD04E97B1148698D87AA32D19E58
          295501A0C5A47D2496360B4F8EF86CC8EC507BA20FD25D5712E7DEA5BCCC9DA9
          418BC78C3ADB53307CA185E20311D47D1CD2DAE4882C6327A20CA404402183F8
          9648B17A6782E5C4643F861C5678E73C48DC237173DD4CD65271C521514E56AB
          2678DCD78F4DA3CFE3D1C17268CC72645B9391F95612043A9617EA69D9D21C56
          D4C0C46916B27A9B1F6C2D4590C8F5BB8BBE9C3A41C31BCF24C7CD4AFB541FC5
          2E2722521F93E424F85246DAAB8DECC08C99BEC777E4C004C91432A2F148B2F7
          7A1D6CEC65ED45333CB414E14B9456B6EBBEE9B59687D130BA09879C2674D98D
          E8E28D70079C50BE2AF1DED39F5D5AF176D9C2A9190B1AED9BB1E17C158A46B3
          A19B28407ECF9D10AC62F998174875A596FEF914ECCA2AAFD8ADFB21FF930CD4
          7C5D89FDCE7674BADE8071720F9C011EBA7D25B0CD0D62FBE4163CEBAC867EBC
          108F784B50D4978BA8EA08FBAD7B1955B88108ADEB9417E586A8C8E86E4E1725
          5D264FA202F1BD248E88A320BB40857145649935931F3E7205798A1689C8CFFF
          44435DA71D9C5E503CF9D0ACE7AABBC8BDDB6FF606DD6BDDC7A72E04E6036423
          2BB9590705238364BD34403F0B67C82F9C22D96DF1F4E374804EF79C75681E53
          6A43E261F85B49B12D549EF032375D657F00EB7E5989BAB9C7B1EDB75A3C7971
          35EA508395FC0AC8B64A78DD587E98B68469D152E4EF44E90493E26EFD132532
          4E21268048C270F4AD6B9C060F0EF3C5CFE5169BE49F7AE91F10D6F9F68FE5FA
          E466C5F496993A1CC0EB78DABD1E7734A5F3F5F3B5A139BFDE0A42E40F66E867
          47164CF797164B4F1EB53A9AEAB769AB68BD97AE81AB1EFDF2B1C28A3193BB7E
          C38E35AB1BA9C54DD7C87FFF57F107D053633346FE8A2D0000000049454E44AE
          426082}
      end
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F8000000097048597300000B1300000B1301009A9C180000000467414D410000
          B18E7CFB5193000000206348524D00007A25000080830000F9FF000080E90000
          75300000EA6000003A980000176F925FC5460000079F4944415478DA62FC1F61
          C18015FCFDCB0BC4460C5C5C010CDC3C5E0C2CAC8A0CE2928C60B997CFFE33FC
          F9739FE1EB976D0CDFBF6F646066BAF0E73FE3873F7FFE32FCF9FB1FA8ED1FDC
          18800062C46AC1CF9F9E0CBC7CF90CEADAEE0C6A1A0C0C0ACA0C0C8242404BFF
          403008BC7FCBC0F0F83E03C3ED5B0CFF6FDD38F8F7D3A7CE3F4C2CDBD12D0008
          20540BFEFF6700BAAC934155A390C1C19595415185818109E8E8AF5F1818BE7D
          6560F8FD1B24CFC0F0EF1F449C8D0D4803B53D7FC6F0E7F8D1DF7F6EDEEAFFCB
          C454FE1768090C0004100B8ACBFFFF9FCE606E93C1E0E1CBC0C0CE01341468F0
          D7AF201F010DFF0534FC37C411FFA12EFCFC17E24A2E4E06161777D6FF5C3C65
          7F2E5CE0030A65C28C040820969FBFFE3030323232B1FEFFD7C1686E9DC1E01D
          00B28981E10330083E7F66F8FDE933C3AB7397FE7CB879E7CBF7D76FBE00D532
          708B0AF108AA290908A9C833B0F2723230BC7DC7C0F8E523039BB410C39F4FF2
          19BFAEDFF9FCEBCFFF8AFFFFFFFF030820880F7EFE70FDA7A993C5ECEE0371DD
          C78F0C0C5F3E019DC6C8F0F9C14386CBD3E7FF6061652D64E160DBFEEFEF7FE6
          4F771E28BF3C7ADA954F5E3A50C6484D4794EB0703C38F6FA084C1C0C9CACEF0
          8B8F2BEBFF9BCFFB1899187700041073A5B2281F030FCF1C66FF602526115106
          864F40C33F7D825804D4C0212AC8C02DC0C7F6E9EE83FF2CCC4C2BD8D859DF31
          B3B03C626265D9FFE7EBD72D1FEF3C1266FAF74F9F57801D1C378CBF7F3030FD
          FFCBF6EDCB1FE93FBFFFAF050820A6BFBFFF1832A86A5A322B2831307CFF8A62
          38C3DFDF0C8C405ACAC99A41D9DF3590859565133313032F17071B032B2B3303
          2333F3636636B694978F3E2E7CFFEC23248E7EFD666063FA058CFF7F0E7FFEFE
          33020820A6BF1C1C014CAAEA90540174FD1F60F07CB87E13186EFF201814B9DF
          BF3348D99A31C8BBDB39030D5C070C5A3E6E4E5606217E2E062666A6DFCCCC8C
          756F5F7CBBF6E7EB0FB005208B3858FE32FE67F8170810404CFF38B8BD589494
          2049F1E70F867717AFFEB9D433FDCB8B83C7C071004EF7BF80A9E8CB17060913
          5D06392D6917A081EB80A1210492E6E162656061617AF4EBE7BF75DF3EFDFACF
          F00BE8A09FBF1938197F0103E2AF17400031FD656452641216045AF0196CC1E7
          7BF7BFB0B2B3E63DDEBA67DDABFD47809E0006D5CFEF903CF0F41E83A8C07F06
          19793E67A0A12B81A94480959585811D88D9589977FEFCCBF909EC63A025CCFF
          7E01B5FE55040820266671712670E681A6F5DFEF3F7C05A6964D8C0CFF139EEF
          3BB2E7CDD153C038015A028C3C86670FC0EA8484591824C5595D989998D7002D
          E165035A008C937BFFFE337D66F8C704B60064161BC32F2680006202676B9001
          A008020A32034D66616666676261FECCF8FF7FD0ABE367F6BE3B778581E1CD53
          6030BD87F8E4C72F06015E060631C1FFCEC094B50E981C79813EFAC9F4EF3F23
          C31F601EFA0D71EC5F60D90410404CDF1E3DF907CE58E014F08B814390979795
          9949891D984A1818812EFAFF3FE4EDD92B7B3E9CBD080E42B005A060005AC2C7
          06F40DC72F172626C6058CCC8C7EEC8C4CDC0CBFFE41221A68D6A71F0CFF0002
          88E9CFCF9FF7FEBE7E0DF5C54F063E29313E26C67FEEEC6CCCA0700565C30F8C
          FFFE857F78F97DEFA7F77F20AE83060108F3307E661060FA1CC4CCCC3C89FDE7
          3F1E86EF1F80E60083FAE75F865F7FFEDD070820A6371FBF1DFA720D982C3939
          C01AB8C50419B944848318FF33CAF170B331F0F170822C79C7C8C414F4F91BD3
          9EAF5F19E141007629D0475CBFDF31087D7BC1C3F6F9030BC3CFAFE002F1FD0F
          6686EFBF18B6010410D3FDDFFF377C3C7FF93F030B333883B1B0B13008ABCB6B
          01BDDD040C2356902FB8B9D81880FC4FC0222BE8EB5FCEBDDFFFB04392EE2FA8
          25C064C9FA13581E313E848404A8CAF8C1FAFFC75F86F50001C4C4F7F7CFC137
          67AF1CF872F52A5031302F3CB9CBC0FBFF238390104B3CD08239C0789365015A
          CEC7CBC1C0068C78666616BFEF4C02EB7F320163F9FB378845A0F803E57C5049
          0BF4E0879F2C0CCFBEB21CF8FFF7DF398000622EE4E7F8FDFDEB8F973F5EBF0E
          1451156363BC004C969FDE327030025DC5F84FFFFF7F26D7FFCC2CC0AA8CF10F
          30C5FC616664646504E50E460E1716613E36A60F6F10C53D480268C7F9B79C5F
          3FFE62CE6762F87F0D208080199A9181859D75D7EB9B4FA6DD16E22F55D7D165
          60387B1AEC1ACE7FDF19D8FF7FD6F9F39B4DE70F237BEE7F41912F8CDC5C0CCC
          BCDC3CCC22FC1C4CFF80A9EACD33489DC10429E52FBE616378FE95711A3BCBBF
          5D201B010288718F9C30A21AFEF76FBA8C8946869A2C30FBDFB80CF4FE1F88B7
          C15525A8F00326410E6062E00106CF8777C008FE0329AF802EFF03A42EBE6263
          B8FB896506302FC12B1C8000628E03165830002CEBB7BE7DF092EBC32F66332E
          3E2E66CE5F9F2029E6CF5F681843D338B05C0247262324CCDF7C656238FD82F5
          F7FD4FCCBD40C30B981819E1660204104A9509126762662C7F76E5C18137BC5C
          F9129C4CEE12CCFF19C438FE82AB5F86FF88B00625A0E740839F7E616278F285
          69E7F7DF8C13395819B633A2B51F00028805A345018A133696ED3FBF7C3F72F7
          E37FA3874CAC01ECCCCC5E408D8ABCACC0A211C878FF9DF1FF9FFFFFEFFFF8CD
          B8EDE75FC60DCCCC0CE75899FE7FC6D6FA01083000E70B48E11134C84D000000
          0049454E44AE426082}
      end
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F8000001A84944415478DAED533B4B034110FE36C146044B9BC4D23F602FD858
          F88AA8D1CADE46B4B3F1175968E34FD0427C342212152C8428212FD018BDDBDD
          71F6662F77060541520877B0CCCDCECCF7CD6B1506FCA98C2023F80704343543
          288E01C6FE2207EAB3D1573F9BBACFE5806A8D09CAEB84DD0DA05E639F5CE26F
          7DB00DD99F83C9C89DF69248A4B502F8E1241FB2C29B677970C604F325C2D612
          50B91256974914ECFC030177203D4087A7B9624766135267775D30FCAF39A93C
          635D3C4305738B34B4BD0CDC5EF3659E03940074DF804E472A0B99A8D5E260B6
          35EB0C00210D8DC8B892D057671055F27ED786EACC2ED0F04E99096E805A9501
          F9341A4CD015E7D0F5C948E6DAB72602D23E19360431B02321A98EF5D60313B4
          4B2B34BA3A091CED731FB5F42F022101D694B4C37C036C3C70EC175A4FC0337E
          7A817A2C14A9B0390D9C9ECB0C825086ABE3B2C903C743F6FA4FC0B1CEEA7DF3
          15AA323242137B6BC0F1891B7DD2CFC00F32068E006C021C7A709D6A8BF68BE0
          74AD71D9D55087BC48E3BC9EC6AD616AB3D31B6EFB646CA7DEBDF2BAF287A2D7
          D38E2C837EC9194146F0E7EF13846C39E7AE6B4BB30000000049454E44AE4260
          82}
      end
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F80000049149444154789CBD955B6C14551880BF99EDF4B2B474A6D07669CBF6
          96D085A2AD08B58D1096448D9197B2858ABC149FF449F11D137DF38128919088
          D1B4BCA88DBA29CA83486A568D411042DBA490A6B729BD00ED76674ABBBBDDDD
          D9393ED035CBD2F592A8E7E964CEF9BFEF3FFFCCFC07FEEFE197E426BF241B7E
          49EEFA8771C57E49BEE997E4EEF4E772261C08783A3BD57C97ABE7EF4AFC92DC
          24298A5EDDD2D25C5C5A7A3C53F248E6FAB163C2EEFF4184FBFBC5E51D8DE2AF
          247E496EBA5058644C9C3C29ECAFFD22F6C69BA25FD5444A22A767BEEBB9E754
          F74B0721BC8213687EF71D144D3BBDB6BE1E7CBFA26981D60FDE576B763D0D73
          B3281E0FAAAB1CA039BD448186FA7AD57DE000C462A0EB888505365756D272F6
          ACAA685A2053E297E42E4555032DA74EA9A5E52ED0276125CCDCF41DE6E6174C
          C09B2E3831393F4F44D830330D21030C03313B4799DB4DCB990F5392EA14DCB9
          756BCFBE4F3FA1B4AC14A6A7417610B4930C7FF99599300CAF4FD84B000E805E
          C4E0E178429F1D1C6ADFD8DCC486DC3C88460101B118855555489A961FBC7ACD
          DB69DB9E228FE7BDBD67CE50680B989E814898E06A949BDD3D66787CDCEB13F6
          60EAA48ED4A41731D8115DD5EF0D0F7BD5A79AF337389D609A90B0E0C1034A1A
          77229568AEA465B53EF3F6499C4B26CCCE4234C2728EC26FE73E263231F1A24F
          D857D34B29ADF755289A16D8F3FA6B6A99AAC242109C4EC8CB83AA2AD85804E3
          13B0B4040822AACA958FCEB13C3A7ADC27ECF399BCC7042989A42881ED475F56
          B7D5D5C1CC2CE4E6424E0EC832C4E3909343648B8B2BDDDD2C8F8EAD0BCF2A58
          9354CBB9B97D9E8E8EE66D35D5307CEB211C4051B07636F2CB679F638C8C9CF6
          09FBAD6C9C9C6C0B00763C4E2C18245951018601D25A3E0E07B66992535CFC67
          E10FB766C9BE4952945F1B3A7C35F575F524AF5F276959D8B68D6DDB242D0B61
          2E51B27B378B0B0BAD870C53EF450CAEC77A4C90AAFF939D9D6A796E1E89A121
          EC781C5B08A41D3BA0B616CB30B096969042214AF7ED23140CB667936436BB2E
          45D3024F1C7B45DD2804D1810112D12809CB42783CE8CBCBDCBC7183D8CE46AC
          8202E28681181AA2F1E041F2CACA7AFC92BC3FEB09FC92DC9557A2F5341C6ACF
          2F082E12BF750B5B088410383C1EEE09C1585FDFC08AAE7F110A065B373FBB17
          110C92088590565751F7EC21A4EBED475663DFF522EE3F22F04B72975258D8B3
          FDF011E4A9296263630821B085C0515949A4BC9CD18B17CD6438ECF509BBF790
          61EA6668B15D6B6B438AC789DDB983C3B2505B5BF3CDA9A9A3E99254894E174A
          12ACAC20575460491209CB42DAE222EA7673DBEF4FF59729009FB0CFAF8C4F1C
          BFFDFD6556ABDDE07211D1751CF3F7A97EE179555294805F928BD3055E6379D9
          9CB97489981122BFB515D9ED265E53CB485F5F0AFEC80BF409FB7C6472D23BD2
          77C14CD4D5225554109D99A5502BA168D3261508FC21580BF62E9AA679F7A79F
          898542C80DDBD0FBFB4918C6894C789AE4C7846178C7BEF9D6B4EA6A29686BC3
          B8768D4830083000197F72EAE229723AD548D222198B676D0199718E0D1B0285
          9AA686EFDEC54A267B7CC27E35EBE67FF3D2FFCFC7EF6D813A8ED941334D0000
          000049454E44AE426082}
      end
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F8000002B649444154789CB5954D48545118869FB93ACD586A69BF0BABC17E34
          299C28CA1C73B0241745190C15492AB68C6288288AF66E5C6454B308DD8889EE
          5A142DB2A8955288880BDD1668053928E20FF7FCB4B8779C3BCE8CCE081D38DC
          EF9C7BCFFB9EEF7DCFF92EFCE7E6720E2E750C699DE562DF0E6FE38B56FFDB8C
          165CEC18D2D9B48B1D43FA46644C3747BEB7A5C3343221D680D6A03448054258
          314075E5611684D1958E242D81D65617D206B581850261CF176D71E3F178089E
          AC6041185D2D29487253814B055A81765924520276ACA535EF02DA823E5E7F1E
          616ED1A4D09BCBDF05D10574AF49A03598CAD22506263520E384B1F9E3FB8B79
          D55A8C060A3D70E5D970D2669308A4B6A470EE58BA1209F5AA5829F0A6D42285
          074A81B265920A24965CB179A52C834D0D93BF27AC0DA9B8E9EB1248DB401133
          D6193B7A7838C0E34F3799FC3581B025CD3803A16076719EBB032D982A914C03
          0F466AA9BF7094A6DB2778F8BE0921B3C9C006BFDE13C47F55D2F6AE1AB0080C
          03C2DF029C0E1C607E6989EEE723DCAFE94428CB8BCC32D03038F101804D7939
          D45D2EA5B1FF08EE1C68FD5249997F0FD33351FA22E384039D5496D46066EB41
          43458886D25BBC898CF3676E96AA061F77C64E517A6C3753D128837D3FB977C6
          0297B674E908920E57CC83E6AA30BB0A4AE8E96FA7B4DE835168303D1365EAAB
          E2E9B95E7CDBCB573C11F629CB88403ACC3C5F1E4228E8FBD88EDB3F8F399ACF
          93BA5EF61695AFE8AEED639ACE83E40C1C0B34505716422A18186DE751B09712
          2738F17A95B14452C1B2C0BAB9F64DAD3D18E2ECA19055464C47F9B0EB955CC3
          E4B41940FAD2B0BA7C48B2914881296D029D288533568E58EA2C32305CE075C7
          015788523C718C5DAED5482908B66D76B3331F8AF36C60E74B4D52B971CA62A4
          F97525101478737E5C7B39BC2FF5A7EBB7AD79B9CB1B5DBBE1F60F1B54DFACB9
          0DCE7C0000000049454E44AE426082}
      end
      item
        ImageFormat = ifPNG
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F80000002B744558744372656174696F6E2054696D6500446F203134204E6F76
          20323030322032333A33313A3434202B3031303084501C480000000774494D45
          07D3080B0E27245357735F000000097048597300000AF000000AF00142AC3498
          0000000467414D410000B18F0BFC61050000049B4944415478DAB5557B4C5B75
          14FE2EB7B7F441A1B016C6B30C865460192C63754B14338DFCB1481633951875
          468D8F1863746E99C6A8FC61E6F01563A68966EE0F35D1B00497A891396461EA
          02D3E060CCB18C39288596B6B4B4D0F6BE3D2D148176065D3CCDED4DCFFD9DF3
          9D73BEEF9E02FFB331299EFDD89DAB377CA22A98097A23239070092A5D2C5D5A
          8CE008FC3706F0223A8F1D7C76774C11C0B17AF803F370FB8218F778E174BBD5
          81D1CBFD22A3B4E230AEAD05804DF1344318181EBDBBA9C6C1214341B6311B15
          45A568B4D7A2B9D1C1EC746C2DE9FCB617F8155D6B01C848F1BC86CEF159FFB6
          270FBD1D7007661207444986204988CA1262BC188F0A2F0FB902E4A79D465A80
          3751021147F6ECDA915BB82E0F922A1305327D24EA57C1A4DF174FE55C1EE2D3
          E3852E1D2E9ED6A2E59F01DA51AF9735FDFB1F6A6EBAB5FE66F0620CB22A4156
          44880A4F77014E8F1B44F6F8F2B05BA238C864E0B72087AF7B32F1467A807654
          1A54EEE4E32D8D850C2721140D51F51258E2212A470948002FC7A88369201363
          AB2BD545F0BC9E4594D7E1A5335A3CB712E05E229BC7978FDEB1C32ACB32A242
          14BC3A877931844FBB4E294FBDFABE73CCE583140708FA14EA606235C06D8057
          27A33BCF0066568B43DD3AD8E27E4DE2692D5AEFDC54BF358608324419995A0E
          975C1338FEE3D0792AE16918A11D1CFDF3F48672133C1162BE0D73E908D530B8
          C651C91623F4CE109E21D781E488F6D69695D258C2092D0C5E75E3F899A16398
          8183547516069CED1AFCC9D573EE023CFE40DFF524C96A506CE0009396A6A821
          C1273BC8326BB7F024414151690461745F18EDC02B788C1EA989C83608A17704
          C7D11F4E3960C5C974C92F67C11AD0A1390EC0D36FE2A3640940A3E10C117E9E
          4855F0F31FCE300A692CC9E449DB07974AC989819DBA7CF499A6E1493EA2834C
          AF011F569B614C8E8406115B223924CC8FF3943CCA0B08C8B1EFB037FDBE099B
          D1A16BC83911CC65FA7A168BA3E4DABEF5385A67C19E5C1DFD20AF96F683AC60
          60A9039279972BE8ADE6498AA4A7715CC774669D83DB5603991BB35585271BA7
          B450E82DFEA8AED4D0606465AA4048404ECFD3378BCFFE96A9111F0C4E8DF31A
          968D036C48975CAD404EC46A35A3A000FA4D55B43EF0057B53C92F952D5B1A8C
          360B60A0F28DB4BE28E3E41CFA9B03E8581CD5A27D8E03C519D9878324A5F93C
          B11CF791869603D85117D9BE79C8D0549FE85F8D44C130143E4B8AF57A81F81B
          1E98C5F070D86B8A61BBCD8BD1956FF283687729A17729268B52BF95D2028332
          4D4911603601392630963C920A556D32D2AACB876CCAC6C8C89CBB3886BB92C9
          57022C80EC9BD38BF713FFB7D3045F5F0551C6565601D959090098E89E654C00
          84AEB870F5FB8BBD16416DCCF5E2F7E541A9DBF4619A5D0055C4C5C72BFC0A6C
          6C0501E4972D546D34242E311082E79BF37E8384272CAED415920A10B7364AF7
          0026579DCC86898E576C078AAB1648254D7045566C7CF99E757281F1DC6C1976
          A54E768DA6D66023F2323BF85AFB66B5BC82C9282A8626279370499EB49E30ED
          C1C47B5D5F95BAD1FA9F009601AD0F44501D1361A73F39BBA8819DB59AEC922C
          9A395FEC11DB144EFCDB9C37647F0130F8CFD5D7669C550000000049454E44AE
          426082}
      end
      item
        ImageFormat = ifPNG
        ImageName = 'save_as'
        ImgData = {
          89504E470D0A1A0A0000000D4948445200000018000000180806000000E0773D
          F80000002B744558744372656174696F6E2054696D6500536F203137204E6F76
          20323030322031393A31373A3436202B3031303041C0B5F10000000774494D45
          07D3080C11002C0DE495FC000000097048597300000AF000000AF00142AC3498
          0000000467414D410000B18F0BFC6105000003364944415478DACD544D6B1449
          187EEAA32733E317E6C3A811C5CB1EBC26BA7B8910048F22F80BBC2478F007EC
          75FFC07A1084202AE265EF22E6E431446622BB2BAB880A89828A1A93EC98CC74
          7755F9BC3533190C991807040BAABBE8EE7A9F8FF7A9067EF050F13A559D8052
          D7B0864395CB1EB6B40B415E86009707E43E439AE6709943EAEAC8B9CEBD07EA
          CB3877FB00E03FBF41965EC2BDF30F3603D816CC4DF3E4F131B7B486A181091C
          3DFE4B7C9CE739714110872CCF906739D22C836771EF1C5EBDF80F478656D197
          247B5F3C496F70CBF1AD019C3F64B9D1151238A14EE6729B9D9D85B5B6235735
          050F0F0FA35028709BC2FAF23B94FA7783C887B7B2A8B95B73B3E5C52904320B
          04505A637C7C3CBE16C68D46232A4AD3344E5923E4281F3E81E2BE3EA0524577
          00D235890068DA41AF0584737E7E7E434104A502B90F0E0E429340F0541A9A84
          28671B00592486A62B642C1CD9B1D8C8C848B3100B888ABC052ECFA2B3115443
          ABD03545114005454BB84C802CCBA205B2A556AB6D7C28206D200190E93DC148
          4440B605085A1468182E84A514712DC66DB66D803648EC0D13A18C8A735B00A1
          ABAD41E235946333EB35F8E0313CB06FA378EE5AC004CDD23A324F1B79260CC3
          A18CD90140625122933F6756C8BECAA3C186929858200AE51B71C2B753C70789
          29A06074F3B476E9432BA68169D1D1CB99E72636582923D5A37CA34D8CB1A834
          2CA839E56E180CC986B2AA89DA15C08B4536FE388CA442B39141FC27002B28D5
          3C788151A473509C89DD4DD28EEF122A334D89DD634A36C282C5F973C099232B
          B87AF934963E2EC524ADD6FE279845B15444B958265003D7E75660FBF66068B0
          1F9F4D1917067E35BF5FEC1653A28B02F1DC78B1C6E0E1D34FF8EBD6157C6B7C
          E82CCDE4E4E45732A6A7A755CB220F5334B15921D8981897A7F115377D1364AB
          C1E21D05A1D158AA97D4C172D132DB0A8DAC813AA3D81E535353181D1D45B55A
          45A552F92EA056EBFBCE2E2EACBD5D5FCF618B09157814CBA58D8FA4682FC53B
          00774EFD8B602716FE7E3DF7ECFEE3C5857F5EBEDFAF57D39EBCD9343A3FFBBB
          679FF2FA9B2C1F3D024EDEFB039B9BD6CBD03BF9686C6C2CF640EEBD2BD866F4
          E2FD8E01DA71FB69C71777FD8F37371C96C80000000049454E44AE426082}
      end>
    Left = 428
    Top = 56
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Icons|*.ico|Portable Network Graphics|*.png'
    Title = 'Save glyph as ...'
    Left = 340
    Top = 56
  end
end