/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Subtitle suppression input
                */
                class SubtitleInfoInput : public AbstractModel
                {
                public:
                    SubtitleInfoInput();
                    ~SubtitleInfoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subtitle ID.</p>
                     * @return Id <p>Subtitle ID.</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Subtitle ID.</p>
                     * @param _id <p>Subtitle ID.</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Font type.</p><p>Enumeration value:</p><ul><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li></ul><p>Default value: hei.ttf Heiti</p>
                     * @return FontType <p>Font type.</p><p>Enumeration value:</p><ul><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li></ul><p>Default value: hei.ttf Heiti</p>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置<p>Font type.</p><p>Enumeration value:</p><ul><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li></ul><p>Default value: hei.ttf Heiti</p>
                     * @param _fontType <p>Font type.</p><p>Enumeration value:</p><ul><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li></ul><p>Default value: hei.ttf Heiti</p>
                     * 
                     */
                    void SetFontType(const std::string& _fontType);

                    /**
                     * 判断参数 FontType 是否已赋值
                     * @return FontType 是否已赋值
                     * 
                     */
                    bool FontTypeHasBeenSet() const;

                    /**
                     * 获取<p>Font size. If not specified, the font size in the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height. If left blank and the subtitle file has no settings, the default is 5% of the source video height.</li></ul>
                     * @return FontSize <p>Font size. If not specified, the font size in the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height. If left blank and the subtitle file has no settings, the default is 5% of the source video height.</li></ul>
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置<p>Font size. If not specified, the font size in the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height. If left blank and the subtitle file has no settings, the default is 5% of the source video height.</li></ul>
                     * @param _fontSize <p>Font size. If not specified, the font size in the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height. If left blank and the subtitle file has no settings, the default is 5% of the source video height.</li></ul>
                     * 
                     */
                    void SetFontSize(const std::string& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取<p>Font color, format: 0xRRGGBB.</p><p>Default value: 0xFFFFFF (white).</p>
                     * @return FontColor <p>Font color, format: 0xRRGGBB.</p><p>Default value: 0xFFFFFF (white).</p>
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置<p>Font color, format: 0xRRGGBB.</p><p>Default value: 0xFFFFFF (white).</p>
                     * @param _fontColor <p>Font color, format: 0xRRGGBB.</p><p>Default value: 0xFFFFFF (white).</p>
                     * 
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     * 
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取<p>Text opacity. Value ranges from 0 to 1.</p><ul><li>0: completely transparent;</li><li>1: completely opaque</li></ul><p>Default value: 1</p>
                     * @return FontAlpha <p>Text opacity. Value ranges from 0 to 1.</p><ul><li>0: completely transparent;</li><li>1: completely opaque</li></ul><p>Default value: 1</p>
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置<p>Text opacity. Value ranges from 0 to 1.</p><ul><li>0: completely transparent;</li><li>1: completely opaque</li></ul><p>Default value: 1</p>
                     * @param _fontAlpha <p>Text opacity. Value ranges from 0 to 1.</p><ul><li>0: completely transparent;</li><li>1: completely opaque</li></ul><p>Default value: 1</p>
                     * 
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height. Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @return YPos <p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height. Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置<p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height. Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @param _yPos <p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height. Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle background base plate Y-coordinate position. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled.<br>Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @return BoardY <p>Subtitle background base plate Y-coordinate position. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled.<br>Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    std::string GetBoardY() const;

                    /**
                     * 设置<p>Subtitle background base plate Y-coordinate position. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled.<br>Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * @param _boardY <p>Subtitle background base plate Y-coordinate position. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled.<br>Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     * 
                     */
                    void SetBoardY(const std::string& _boardY);

                    /**
                     * 判断参数 BoardY 是否已赋值
                     * @return BoardY 是否已赋值
                     * 
                     */
                    bool BoardYHasBeenSet() const;

                    /**
                     * 获取<p>Width of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N is in the range of [0,4096].</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</li></ul>
                     * @return BoardWidth <p>Width of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N is in the range of [0,4096].</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</li></ul>
                     * 
                     */
                    std::string GetBoardWidth() const;

                    /**
                     * 设置<p>Width of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N is in the range of [0,4096].</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</li></ul>
                     * @param _boardWidth <p>Width of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N is in the range of [0,4096].</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</li></ul>
                     * 
                     */
                    void SetBoardWidth(const std::string& _boardWidth);

                    /**
                     * 判断参数 BoardWidth 是否已赋值
                     * @return BoardWidth 是否已赋值
                     * 
                     */
                    bool BoardWidthHasBeenSet() const;

                    /**
                     * 获取<p>Height of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N ranges from 0 to 4096.</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default height is 15% of the source video height.</li></ul>
                     * @return BoardHeight <p>Height of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N ranges from 0 to 4096.</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default height is 15% of the source video height.</li></ul>
                     * 
                     */
                    std::string GetBoardHeight() const;

                    /**
                     * 设置<p>Height of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N ranges from 0 to 4096.</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default height is 15% of the source video height.</li></ul>
                     * @param _boardHeight <p>Height of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N ranges from 0 to 4096.</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default height is 15% of the source video height.</li></ul>
                     * 
                     */
                    void SetBoardHeight(const std::string& _boardHeight);

                    /**
                     * 判断参数 BoardHeight 是否已赋值
                     * @return BoardHeight 是否已赋值
                     * 
                     */
                    bool BoardHeightHasBeenSet() const;

                    /**
                     * 获取<p>Base plate color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * @return BoardColor <p>Base plate color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置<p>Base plate color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * @param _boardColor <p>Base plate color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * 
                     */
                    void SetBoardColor(const std::string& _boardColor);

                    /**
                     * 判断参数 BoardColor 是否已赋值
                     * @return BoardColor 是否已赋值
                     * 
                     */
                    bool BoardColorHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle background transparency. Value range: [0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 0.8.</p>
                     * @return BoardAlpha <p>Subtitle background transparency. Value range: [0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 0.8.</p>
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置<p>Subtitle background transparency. Value range: [0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 0.8.</p>
                     * @param _boardAlpha <p>Subtitle background transparency. Value range: [0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 0.8.</p>
                     * 
                     */
                    void SetBoardAlpha(const double& _boardAlpha);

                    /**
                     * 判断参数 BoardAlpha 是否已赋值
                     * @return BoardAlpha 是否已赋值
                     * 
                     */
                    bool BoardAlphaHasBeenSet() const;

                    /**
                     * 获取<p>Alignment mode.</p><p>Enumeration values:</p><ul><li>top: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the line count.</li><li>bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the line count.</li></ul><p>Default value: bottom</p>
                     * @return Alignment <p>Alignment mode.</p><p>Enumeration values:</p><ul><li>top: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the line count.</li><li>bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the line count.</li></ul><p>Default value: bottom</p>
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置<p>Alignment mode.</p><p>Enumeration values:</p><ul><li>top: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the line count.</li><li>bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the line count.</li></ul><p>Default value: bottom</p>
                     * @param _alignment <p>Alignment mode.</p><p>Enumeration values:</p><ul><li>top: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the line count.</li><li>bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the line count.</li></ul><p>Default value: bottom</p>
                     * 
                     */
                    void SetAlignment(const std::string& _alignment);

                    /**
                     * 判断参数 Alignment 是否已赋值
                     * @return Alignment 是否已赋值
                     * 
                     */
                    bool AlignmentHasBeenSet() const;

                    /**
                     * 获取<p>Stroke width. Floating-point number.</p><ul><li>Pixel: Npx, where N is in the range of [0,1000].</li><li>Percentage: N%, where N ranges from 0 to 100.</li></ul><p>By default if left blank, it is 0.3% of the source video height.</p>
                     * @return OutlineWidth <p>Stroke width. Floating-point number.</p><ul><li>Pixel: Npx, where N is in the range of [0,1000].</li><li>Percentage: N%, where N ranges from 0 to 100.</li></ul><p>By default if left blank, it is 0.3% of the source video height.</p>
                     * 
                     */
                    std::string GetOutlineWidth() const;

                    /**
                     * 设置<p>Stroke width. Floating-point number.</p><ul><li>Pixel: Npx, where N is in the range of [0,1000].</li><li>Percentage: N%, where N ranges from 0 to 100.</li></ul><p>By default if left blank, it is 0.3% of the source video height.</p>
                     * @param _outlineWidth <p>Stroke width. Floating-point number.</p><ul><li>Pixel: Npx, where N is in the range of [0,1000].</li><li>Percentage: N%, where N ranges from 0 to 100.</li></ul><p>By default if left blank, it is 0.3% of the source video height.</p>
                     * 
                     */
                    void SetOutlineWidth(const std::string& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取<p>Border color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * @return OutlineColor <p>Border color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置<p>Border color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * @param _outlineColor <p>Border color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     * 
                     */
                    void SetOutlineColor(const std::string& _outlineColor);

                    /**
                     * 判断参数 OutlineColor 是否已赋值
                     * @return OutlineColor 是否已赋值
                     * 
                     */
                    bool OutlineColorHasBeenSet() const;

                    /**
                     * 获取<p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1</p>
                     * @return OutlineAlpha <p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1</p>
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置<p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1</p>
                     * @param _outlineAlpha <p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1</p>
                     * 
                     */
                    void SetOutlineAlpha(const double& _outlineAlpha);

                    /**
                     * 判断参数 OutlineAlpha 是否已赋值
                     * @return OutlineAlpha 是否已赋值
                     * 
                     */
                    bool OutlineAlphaHasBeenSet() const;

                    /**
                     * 获取<p>Shadow width. Floating-point number.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100. No shading by default if left blank.</li></ul>
                     * @return ShadowWidth <p>Shadow width. Floating-point number.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100. No shading by default if left blank.</li></ul>
                     * 
                     */
                    std::string GetShadowWidth() const;

                    /**
                     * 设置<p>Shadow width. Floating-point number.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100. No shading by default if left blank.</li></ul>
                     * @param _shadowWidth <p>Shadow width. Floating-point number.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100. No shading by default if left blank.</li></ul>
                     * 
                     */
                    void SetShadowWidth(const std::string& _shadowWidth);

                    /**
                     * 判断参数 ShadowWidth 是否已赋值
                     * @return ShadowWidth 是否已赋值
                     * 
                     */
                    bool ShadowWidthHasBeenSet() const;

                    /**
                     * 获取<p>Shadow color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black) when shadow has set.</p>
                     * @return ShadowColor <p>Shadow color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black) when shadow has set.</p>
                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置<p>Shadow color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black) when shadow has set.</p>
                     * @param _shadowColor <p>Shadow color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black) when shadow has set.</p>
                     * 
                     */
                    void SetShadowColor(const std::string& _shadowColor);

                    /**
                     * 判断参数 ShadowColor 是否已赋值
                     * @return ShadowColor 是否已赋值
                     * 
                     */
                    bool ShadowColorHasBeenSet() const;

                    /**
                     * 获取<p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1, completely opaque, with shadow configured.</p>
                     * @return ShadowAlpha <p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1, completely opaque, with shadow configured.</p>
                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置<p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1, completely opaque, with shadow configured.</p>
                     * @param _shadowAlpha <p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1, completely opaque, with shadow configured.</p>
                     * 
                     */
                    void SetShadowAlpha(const double& _shadowAlpha);

                    /**
                     * 判断参数 ShadowAlpha 是否已赋值
                     * @return ShadowAlpha 是否已赋值
                     * 
                     */
                    bool ShadowAlphaHasBeenSet() const;

                    /**
                     * 获取<p>Line spacing. Positive integer.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100.</li></ul><p>Default value: 0</p>
                     * @return LineSpacing <p>Line spacing. Positive integer.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100.</li></ul><p>Default value: 0</p>
                     * 
                     */
                    std::string GetLineSpacing() const;

                    /**
                     * 设置<p>Line spacing. Positive integer.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100.</li></ul><p>Default value: 0</p>
                     * @param _lineSpacing <p>Line spacing. Positive integer.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100.</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetLineSpacing(const std::string& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                private:

                    /**
                     * <p>Subtitle ID.</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Font type.</p><p>Enumeration value:</p><ul><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li></ul><p>Default value: hei.ttf Heiti</p>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * <p>Font size. If not specified, the font size in the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height. If left blank and the subtitle file has no settings, the default is 5% of the source video height.</li></ul>
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * <p>Font color, format: 0xRRGGBB.</p><p>Default value: 0xFFFFFF (white).</p>
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * <p>Text opacity. Value ranges from 0 to 1.</p><ul><li>0: completely transparent;</li><li>1: completely opaque</li></ul><p>Default value: 1</p>
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * <p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height. Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * <p>Subtitle background base plate Y-coordinate position. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle background base plate Y-coordinate = 10% * source video height. If not specified, the subtitle background base plate is disabled.<br>Note: The coordinate axis origin is located at the bottom of the central axis of the source video, and the reference point of the subtitle background base plate is at the bottom of its central axis. Refer to the figure below:<img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></li></ul>
                     */
                    std::string m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * <p>Width of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N is in the range of [0,4096].</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default width is 90% of the source video width.</li></ul>
                     */
                    std::string m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * <p>Height of the base plate, a positive integer.</p><ul><li>Pixel: Npx, where N ranges from 0 to 4096.</li><li>Percentage: N%, where N ranges from 0 to 100. If background is enabled and this parameter is not specified, the default height is 15% of the source video height.</li></ul>
                     */
                    std::string m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * <p>Base plate color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * <p>Subtitle background transparency. Value range: [0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 0.8.</p>
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                    /**
                     * <p>Alignment mode.</p><p>Enumeration values:</p><ul><li>top: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the line count.</li><li>bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the line count.</li></ul><p>Default value: bottom</p>
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                    /**
                     * <p>Stroke width. Floating-point number.</p><ul><li>Pixel: Npx, where N is in the range of [0,1000].</li><li>Percentage: N%, where N ranges from 0 to 100.</li></ul><p>By default if left blank, it is 0.3% of the source video height.</p>
                     */
                    std::string m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * <p>Border color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black).</p>
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * <p>Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1</p>
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * <p>Shadow width. Floating-point number.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100. No shading by default if left blank.</li></ul>
                     */
                    std::string m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * <p>Shadow color. Format: 0xRRGGBB.</p><p>Default value: 0x000000 (black) when shadow has set.</p>
                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * <p>Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].</p><ul><li>0: completely transparent;</li><li>1: completely opaque.</li></ul><p>Default value: 1, completely opaque, with shadow configured.</p>
                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                    /**
                     * <p>Line spacing. Positive integer.</p><ul><li>Pixel: Npx, N value ranges from 0 to 1000.</li><li>Percentage: N%, N value ranges from 0 to 100.</li></ul><p>Default value: 0</p>
                     */
                    std::string m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEINFOINPUT_H_
