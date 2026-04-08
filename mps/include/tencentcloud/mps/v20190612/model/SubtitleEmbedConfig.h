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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CosInputInfo.h>
#include <tencentcloud/mps/v20190612/model/SubtitleBoardConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleLayoutConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleOutlineConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleShadowConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Subtitle suppression module settings
                */
                class SubtitleEmbedConfig : public AbstractModel
                {
                public:
                    SubtitleEmbedConfig();
                    ~SubtitleEmbedConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Font type, supports:</p><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li>Default: hei.ttf Heiti.<br>Note:<li>KaiTi is recommended for use with kai.ttf</li><li>FontPath takes precedence when filled</li>
                     * @return FontType <p>Font type, supports:</p><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li>Default: hei.ttf Heiti.<br>Note:<li>KaiTi is recommended for use with kai.ttf</li><li>FontPath takes precedence when filled</li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置<p>Font type, supports:</p><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li>Default: hei.ttf Heiti.<br>Note:<li>KaiTi is recommended for use with kai.ttf</li><li>FontPath takes precedence when filled</li>
                     * @param _fontType <p>Font type, supports:</p><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li>Default: hei.ttf Heiti.<br>Note:<li>KaiTi is recommended for use with kai.ttf</li><li>FontPath takes precedence when filled</li>
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
                     * 获取<p>Custom font file url address, either this or CosInputInfo</p>
                     * @return FontPath <p>Custom font file url address, either this or CosInputInfo</p>
                     * 
                     */
                    std::string GetFontPath() const;

                    /**
                     * 设置<p>Custom font file url address, either this or CosInputInfo</p>
                     * @param _fontPath <p>Custom font file url address, either this or CosInputInfo</p>
                     * 
                     */
                    void SetFontPath(const std::string& _fontPath);

                    /**
                     * 判断参数 FontPath 是否已赋值
                     * @return FontPath 是否已赋值
                     * 
                     */
                    bool FontPathHasBeenSet() const;

                    /**
                     * 获取<p>Custom font file cos bucket address</p>
                     * @return CosInputInfo <p>Custom font file cos bucket address</p>
                     * 
                     */
                    CosInputInfo GetCosInputInfo() const;

                    /**
                     * 设置<p>Custom font file cos bucket address</p>
                     * @param _cosInputInfo <p>Custom font file cos bucket address</p>
                     * 
                     */
                    void SetCosInputInfo(const CosInputInfo& _cosInputInfo);

                    /**
                     * 判断参数 CosInputInfo 是否已赋值
                     * @return CosInputInfo 是否已赋值
                     * 
                     */
                    bool CosInputInfoHasBeenSet() const;

                    /**
                     * 获取<p>Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height.</li></ul><p>If left blank and the subtitle file has no settings, the default is 5% of the source video height.</p>
                     * @return FontSize <p>Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height.</li></ul><p>If left blank and the subtitle file has no settings, the default is 5% of the source video height.</p>
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置<p>Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height.</li></ul><p>If left blank and the subtitle file has no settings, the default is 5% of the source video height.</p>
                     * @param _fontSize <p>Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height.</li></ul><p>If left blank and the subtitle file has no settings, the default is 5% of the source video height.</p>
                     * 
                     */
                    void SetFontSize(const int64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取<p>FontSize unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return FontSizeUnit <p>FontSize unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetFontSizeUnit() const;

                    /**
                     * 设置<p>FontSize unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _fontSizeUnit <p>FontSize unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    void SetFontSizeUnit(const int64_t& _fontSizeUnit);

                    /**
                     * 判断参数 FontSizeUnit 是否已赋值
                     * @return FontSizeUnit 是否已赋值
                     * 
                     */
                    bool FontSizeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).</p>
                     * @return FontColor <p>Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).</p>
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置<p>Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).</p>
                     * @param _fontColor <p>Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).</p>
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
                     * 获取<p>Text opacity, value ranges from 0 to 1.</p><li>0: completely transparent</li><li>1: completely opaque</li>Default value: 1.
                     * @return FontAlpha <p>Text opacity, value ranges from 0 to 1.</p><li>0: completely transparent</li><li>1: completely opaque</li>Default value: 1.
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置<p>Text opacity, value ranges from 0 to 1.</p><li>0: completely transparent</li><li>1: completely opaque</li>Default value: 1.
                     * @param _fontAlpha <p>Text opacity, value ranges from 0 to 1.</p><li>0: completely transparent</li><li>1: completely opaque</li>Default value: 1.
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
                     * 获取<p>The X-coordinate position of subtitles. Specifying this parameter will ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [-4096, 4096].</li><li>Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle equals 10% of the source video width.</li></ul><p>Default value: 0px.<br>Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @return PosX <p>The X-coordinate position of subtitles. Specifying this parameter will ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [-4096, 4096].</li><li>Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle equals 10% of the source video width.</li></ul><p>Default value: 0px.<br>Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    int64_t GetPosX() const;

                    /**
                     * 设置<p>The X-coordinate position of subtitles. Specifying this parameter will ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [-4096, 4096].</li><li>Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle equals 10% of the source video width.</li></ul><p>Default value: 0px.<br>Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @param _posX <p>The X-coordinate position of subtitles. Specifying this parameter will ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [-4096, 4096].</li><li>Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle equals 10% of the source video width.</li></ul><p>Default value: 0px.<br>Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    void SetPosX(const int64_t& _posX);

                    /**
                     * 判断参数 PosX 是否已赋值
                     * @return PosX 是否已赋值
                     * 
                     */
                    bool PosXHasBeenSet() const;

                    /**
                     * 获取<p>PosX unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return PosXUnit <p>PosX unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetPosXUnit() const;

                    /**
                     * 设置<p>PosX unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _posXUnit <p>PosX unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    void SetPosXUnit(const int64_t& _posXUnit);

                    /**
                     * 判断参数 PosXUnit 是否已赋值
                     * @return PosXUnit 是否已赋值
                     * 
                     */
                    bool PosXUnitHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height.</li></ul><p>Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @return PosY <p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height.</li></ul><p>Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    int64_t GetPosY() const;

                    /**
                     * 设置<p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height.</li></ul><p>Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * @param _posY <p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height.</li></ul><p>Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     * 
                     */
                    void SetPosY(const int64_t& _posY);

                    /**
                     * 判断参数 PosY 是否已赋值
                     * @return PosY 是否已赋值
                     * 
                     */
                    bool PosYHasBeenSet() const;

                    /**
                     * 获取<p>PosY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @return PosYUnit <p>PosY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    int64_t GetPosYUnit() const;

                    /**
                     * 设置<p>PosY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * @param _posYUnit <p>PosY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     * 
                     */
                    void SetPosYUnit(const int64_t& _posYUnit);

                    /**
                     * 判断参数 PosYUnit 是否已赋值
                     * @return PosYUnit 是否已赋值
                     * 
                     */
                    bool PosYUnitHasBeenSet() const;

                    /**
                     * 获取<p>Background configuration</p>
                     * @return SubtitleBoardConfig <p>Background configuration</p>
                     * 
                     */
                    SubtitleBoardConfig GetSubtitleBoardConfig() const;

                    /**
                     * 设置<p>Background configuration</p>
                     * @param _subtitleBoardConfig <p>Background configuration</p>
                     * 
                     */
                    void SetSubtitleBoardConfig(const SubtitleBoardConfig& _subtitleBoardConfig);

                    /**
                     * 判断参数 SubtitleBoardConfig 是否已赋值
                     * @return SubtitleBoardConfig 是否已赋值
                     * 
                     */
                    bool SubtitleBoardConfigHasBeenSet() const;

                    /**
                     * 获取<p>Column configuration</p>
                     * @return SubtitleLayoutConfig <p>Column configuration</p>
                     * 
                     */
                    SubtitleLayoutConfig GetSubtitleLayoutConfig() const;

                    /**
                     * 设置<p>Column configuration</p>
                     * @param _subtitleLayoutConfig <p>Column configuration</p>
                     * 
                     */
                    void SetSubtitleLayoutConfig(const SubtitleLayoutConfig& _subtitleLayoutConfig);

                    /**
                     * 判断参数 SubtitleLayoutConfig 是否已赋值
                     * @return SubtitleLayoutConfig 是否已赋值
                     * 
                     */
                    bool SubtitleLayoutConfigHasBeenSet() const;

                    /**
                     * 获取<p>Text stroke configuration</p>
                     * @return SubtitleOutlineConfig <p>Text stroke configuration</p>
                     * 
                     */
                    SubtitleOutlineConfig GetSubtitleOutlineConfig() const;

                    /**
                     * 设置<p>Text stroke configuration</p>
                     * @param _subtitleOutlineConfig <p>Text stroke configuration</p>
                     * 
                     */
                    void SetSubtitleOutlineConfig(const SubtitleOutlineConfig& _subtitleOutlineConfig);

                    /**
                     * 判断参数 SubtitleOutlineConfig 是否已赋值
                     * @return SubtitleOutlineConfig 是否已赋值
                     * 
                     */
                    bool SubtitleOutlineConfigHasBeenSet() const;

                    /**
                     * 获取<p>Text shadow configuration</p>
                     * @return SubtitleShadowConfig <p>Text shadow configuration</p>
                     * 
                     */
                    SubtitleShadowConfig GetSubtitleShadowConfig() const;

                    /**
                     * 设置<p>Text shadow configuration</p>
                     * @param _subtitleShadowConfig <p>Text shadow configuration</p>
                     * 
                     */
                    void SetSubtitleShadowConfig(const SubtitleShadowConfig& _subtitleShadowConfig);

                    /**
                     * 判断参数 SubtitleShadowConfig 是否已赋值
                     * @return SubtitleShadowConfig 是否已赋值
                     * 
                     */
                    bool SubtitleShadowConfigHasBeenSet() const;

                    /**
                     * 获取<p>Width of the source video dimensions, in pixels</p>
                     * @return SampleWidth <p>Width of the source video dimensions, in pixels</p>
                     * 
                     */
                    int64_t GetSampleWidth() const;

                    /**
                     * 设置<p>Width of the source video dimensions, in pixels</p>
                     * @param _sampleWidth <p>Width of the source video dimensions, in pixels</p>
                     * 
                     */
                    void SetSampleWidth(const int64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取<p>Height of the source video dimensions, in unit pixel</p>
                     * @return SampleHeight <p>Height of the source video dimensions, in unit pixel</p>
                     * 
                     */
                    int64_t GetSampleHeight() const;

                    /**
                     * 设置<p>Height of the source video dimensions, in unit pixel</p>
                     * @param _sampleHeight <p>Height of the source video dimensions, in unit pixel</p>
                     * 
                     */
                    void SetSampleHeight(const int64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * <p>Font type, supports:</p><li>hei.ttf: Heiti</li><li>song.ttf: Song Typeface</li><li>kai.ttf (recommended) or simkai.ttf: KaiTi</li><li>msyh.ttf: Microsoft YaHei</li><li>msyhbd.ttf: Microsoft YaHei in bold</li><li>hkjgt.ttf: Hwakangangtai</li><li>dhttx.ttf: Dianheiti Ultra Light</li><li>xqgdzt.ttf: Xique Ancient Dictionary</li><li>qpcyt.ttf: Smart Splice Super Round Body</li><li>arial.ttf: only supports English</li><li>dinalternate.ttf: DIN Alternate Bold</li><li>helveticalt.ttf: Helvetica</li><li>helveticains.ttf: Helvetica Inserat</li><li>trajanpro.ttf: TrajanPro-Bold</li><li>korean.ttf: Korean</li><li>japanese.ttf: Japanese</li><li>thai.ttf: Thai</li><li>roboto.ttf: Roboto</li><li>notosans.ttf: NotoSans</li><li>notosansthai.ttf: Thai NotoSansThai</li><li>sarabun.ttf: Thai Sarabun</li><li>kanit.ttf: Thai Kanit</li><li>charmonman.ttf: Thai Charmonman</li><li>notonaskharabic.ttf: Arabic NotoNaskhArabic</li><li>notosansdevanagari.ttf: India NotoSansDevanagari</li><li>notosanstc.ttf: Cantonese NotoSansTC</li><li>notosanskr.ttf: Korean NotoSansKR</li><li>gothica1.ttf: Korean GothicA1</li><li>nanummyeongjo.ttf: Korean NanumMyeongjo</li><li>notosansjp.ttf: Japanese NotoSansJP</li><li>notoserifjp.ttf: Japanese NotoSerifJP</li><li>shipporimincho.ttf: Japanese ShipporiMincho</li>Default: hei.ttf Heiti.<br>Note:<li>KaiTi is recommended for use with kai.ttf</li><li>FontPath takes precedence when filled</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * <p>Custom font file url address, either this or CosInputInfo</p>
                     */
                    std::string m_fontPath;
                    bool m_fontPathHasBeenSet;

                    /**
                     * <p>Custom font file cos bucket address</p>
                     */
                    CosInputInfo m_cosInputInfo;
                    bool m_cosInputInfoHasBeenSet;

                    /**
                     * <p>Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:</p><ul><li>Pixel: Npx, where N ranges from (0,4096].</li><li>Percentage: N%, where N ranges from (0,100]. For example, 10% means the subtitle font size equals 10% of the source video height.</li></ul><p>If left blank and the subtitle file has no settings, the default is 5% of the source video height.</p>
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * <p>FontSize unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_fontSizeUnit;
                    bool m_fontSizeUnitHasBeenSet;

                    /**
                     * <p>Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).</p>
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * <p>Text opacity, value ranges from 0 to 1.</p><li>0: completely transparent</li><li>1: completely opaque</li>Default value: 1.
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * <p>The X-coordinate position of subtitles. Specifying this parameter will ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [-4096, 4096].</li><li>Percentage: N%, where N ranges from [-100, 100]; for example, 10% means the X-coordinate of the subtitle equals 10% of the source video width.</li></ul><p>Default value: 0px.<br>Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     */
                    int64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * <p>PosX unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_posXUnit;
                    bool m_posXUnitHasBeenSet;

                    /**
                     * <p>Subtitle Y-coordinate position. Specify this parameter to ignore the built-in coordinates in the subtitle file. Supports pixel and percentage formats:</p><ul><li>Pixel: Npx, where N ranges from [0,4096].</li><li>Percentage: N%, where N ranges from [0,100]. For example, 10% means the subtitle Y-coordinate = 10% * source video height.</li></ul><p>Default value: source video height * 4%.<br>Note: The coordinate axis origin is at the bottom of the central axis of the source video, and the subtitle reference point is at the bottom of the central axis of the subtitle. Refer to the figure below:<br><img src="https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png" alt="image"></p>
                     */
                    int64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * <p>PosY measurement unit, 0 pixel, 1 percentage, defaults to 0, pixel</p>
                     */
                    int64_t m_posYUnit;
                    bool m_posYUnitHasBeenSet;

                    /**
                     * <p>Background configuration</p>
                     */
                    SubtitleBoardConfig m_subtitleBoardConfig;
                    bool m_subtitleBoardConfigHasBeenSet;

                    /**
                     * <p>Column configuration</p>
                     */
                    SubtitleLayoutConfig m_subtitleLayoutConfig;
                    bool m_subtitleLayoutConfigHasBeenSet;

                    /**
                     * <p>Text stroke configuration</p>
                     */
                    SubtitleOutlineConfig m_subtitleOutlineConfig;
                    bool m_subtitleOutlineConfigHasBeenSet;

                    /**
                     * <p>Text shadow configuration</p>
                     */
                    SubtitleShadowConfig m_subtitleShadowConfig;
                    bool m_subtitleShadowConfigHasBeenSet;

                    /**
                     * <p>Width of the source video dimensions, in pixels</p>
                     */
                    int64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * <p>Height of the source video dimensions, in unit pixel</p>
                     */
                    int64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDCONFIG_H_
