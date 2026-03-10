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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The subtitle settings.
                */
                class SubtitleTemplate : public AbstractModel
                {
                public:
                    SubtitleTemplate();
                    ~SubtitleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL of the subtitles to add to the video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path The URL of the subtitles to add to the video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置The URL of the subtitles to add to the video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path The URL of the subtitles to add to the video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Specifies the subtitle track for embedding subtitles into the video. the Streamindex parameter takes value starting from 0, where 0 indicates usage of the first subtitle track in the source video. if Path is specified, use Path preferentially. either Path or Streamindex should be specified.

-Note: StreamIndex must match the subtitle track index in the source file. for example, if the subtitle track in the source file is stream#0:3, StreamIndex should be 3. otherwise, task processing failed.


Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StreamIndex Specifies the subtitle track for embedding subtitles into the video. the Streamindex parameter takes value starting from 0, where 0 indicates usage of the first subtitle track in the source video. if Path is specified, use Path preferentially. either Path or Streamindex should be specified.

-Note: StreamIndex must match the subtitle track index in the source file. for example, if the subtitle track in the source file is stream#0:3, StreamIndex should be 3. otherwise, task processing failed.


Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetStreamIndex() const;

                    /**
                     * 设置Specifies the subtitle track for embedding subtitles into the video. the Streamindex parameter takes value starting from 0, where 0 indicates usage of the first subtitle track in the source video. if Path is specified, use Path preferentially. either Path or Streamindex should be specified.

-Note: StreamIndex must match the subtitle track index in the source file. for example, if the subtitle track in the source file is stream#0:3, StreamIndex should be 3. otherwise, task processing failed.


Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _streamIndex Specifies the subtitle track for embedding subtitles into the video. the Streamindex parameter takes value starting from 0, where 0 indicates usage of the first subtitle track in the source video. if Path is specified, use Path preferentially. either Path or Streamindex should be specified.

-Note: StreamIndex must match the subtitle track index in the source file. for example, if the subtitle track in the source file is stream#0:3, StreamIndex should be 3. otherwise, task processing failed.


Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStreamIndex(const int64_t& _streamIndex);

                    /**
                     * 判断参数 StreamIndex 是否已赋值
                     * @return StreamIndex 是否已赋值
                     * 
                     */
                    bool StreamIndexHasBeenSet() const;

                    /**
                     * 获取Input information on the subtitle file to be embedded into the video. Currently, only subtitle files stored in COS are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleFileInput Input information on the subtitle file to be embedded into the video. Currently, only subtitle files stored in COS are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaInputInfo GetSubtitleFileInput() const;

                    /**
                     * 设置Input information on the subtitle file to be embedded into the video. Currently, only subtitle files stored in COS are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleFileInput Input information on the subtitle file to be embedded into the video. Currently, only subtitle files stored in COS are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubtitleFileInput(const MediaInputInfo& _subtitleFileInput);

                    /**
                     * 判断参数 SubtitleFileInput 是否已赋值
                     * @return SubtitleFileInput 是否已赋值
                     * 
                     */
                    bool SubtitleFileInputHasBeenSet() const;

                    /**
                     * 获取Input information of the font file of the burned-in subtitle. URL and COS are supported. If both are specified, the URL information is used. If FontFileInput is specified, FontFileInput takes precedence over FontType.

                     * @return FontFileInput Input information of the font file of the burned-in subtitle. URL and COS are supported. If both are specified, the URL information is used. If FontFileInput is specified, FontFileInput takes precedence over FontType.

                     * 
                     */
                    MediaInputInfo GetFontFileInput() const;

                    /**
                     * 设置Input information of the font file of the burned-in subtitle. URL and COS are supported. If both are specified, the URL information is used. If FontFileInput is specified, FontFileInput takes precedence over FontType.

                     * @param _fontFileInput Input information of the font file of the burned-in subtitle. URL and COS are supported. If both are specified, the URL information is used. If FontFileInput is specified, FontFileInput takes precedence over FontType.

                     * 
                     */
                    void SetFontFileInput(const MediaInputInfo& _fontFileInput);

                    /**
                     * 判断参数 FontFileInput 是否已赋值
                     * @return FontFileInput 是否已赋值
                     * 
                     */
                    bool FontFileInputHasBeenSet() const;

                    /**
                     * 获取Font type. Valid values:
<li>hei.ttf: SimHei.</li>
<li>song.ttf: SimSun.</li>
<li>kai.ttf (recommend) or simkai.ttf: SimKai.</li>
<li>msyh.ttf: Microsoft YaHei.</li>
<li>msyhbd.ttf: Microsoft YaHei Bold.</li>
<li>hkjgt.ttf: DynaFont King Gothic.</li>
<li>dhttx.ttf: DianHei Extra Light.</li>
<li>xqgdzt.ttf: XiQue GuZiDian.</li>
<li>qpcyt.ttf: QiaoPin ChaoYuan.</li>
<li>arial.ttf: English only.</li>
<li>dinalternate.ttf: DIN Alternate Bold.</li>
<li>helveticalt.ttf: Helvetica.</li>
<li>helveticains.ttf: Helvetica Inserat.</li>
<li>trajanpro.ttf: TrajanPro-Bold.</li>
<li>korean.ttf: Korean.</li>
<li>japanese.ttf: Japanese.</li>
<li>thai.ttf: Thai.</li>
Default value: hei.ttf.
<br>Note:
<li>kai.ttf is recommended for SimKai.</li>
<li>FontFileInput takes precedence when specified.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FontType Font type. Valid values:
<li>hei.ttf: SimHei.</li>
<li>song.ttf: SimSun.</li>
<li>kai.ttf (recommend) or simkai.ttf: SimKai.</li>
<li>msyh.ttf: Microsoft YaHei.</li>
<li>msyhbd.ttf: Microsoft YaHei Bold.</li>
<li>hkjgt.ttf: DynaFont King Gothic.</li>
<li>dhttx.ttf: DianHei Extra Light.</li>
<li>xqgdzt.ttf: XiQue GuZiDian.</li>
<li>qpcyt.ttf: QiaoPin ChaoYuan.</li>
<li>arial.ttf: English only.</li>
<li>dinalternate.ttf: DIN Alternate Bold.</li>
<li>helveticalt.ttf: Helvetica.</li>
<li>helveticains.ttf: Helvetica Inserat.</li>
<li>trajanpro.ttf: TrajanPro-Bold.</li>
<li>korean.ttf: Korean.</li>
<li>japanese.ttf: Japanese.</li>
<li>thai.ttf: Thai.</li>
Default value: hei.ttf.
<br>Note:
<li>kai.ttf is recommended for SimKai.</li>
<li>FontFileInput takes precedence when specified.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置Font type. Valid values:
<li>hei.ttf: SimHei.</li>
<li>song.ttf: SimSun.</li>
<li>kai.ttf (recommend) or simkai.ttf: SimKai.</li>
<li>msyh.ttf: Microsoft YaHei.</li>
<li>msyhbd.ttf: Microsoft YaHei Bold.</li>
<li>hkjgt.ttf: DynaFont King Gothic.</li>
<li>dhttx.ttf: DianHei Extra Light.</li>
<li>xqgdzt.ttf: XiQue GuZiDian.</li>
<li>qpcyt.ttf: QiaoPin ChaoYuan.</li>
<li>arial.ttf: English only.</li>
<li>dinalternate.ttf: DIN Alternate Bold.</li>
<li>helveticalt.ttf: Helvetica.</li>
<li>helveticains.ttf: Helvetica Inserat.</li>
<li>trajanpro.ttf: TrajanPro-Bold.</li>
<li>korean.ttf: Korean.</li>
<li>japanese.ttf: Japanese.</li>
<li>thai.ttf: Thai.</li>
Default value: hei.ttf.
<br>Note:
<li>kai.ttf is recommended for SimKai.</li>
<li>FontFileInput takes precedence when specified.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fontType Font type. Valid values:
<li>hei.ttf: SimHei.</li>
<li>song.ttf: SimSun.</li>
<li>kai.ttf (recommend) or simkai.ttf: SimKai.</li>
<li>msyh.ttf: Microsoft YaHei.</li>
<li>msyhbd.ttf: Microsoft YaHei Bold.</li>
<li>hkjgt.ttf: DynaFont King Gothic.</li>
<li>dhttx.ttf: DianHei Extra Light.</li>
<li>xqgdzt.ttf: XiQue GuZiDian.</li>
<li>qpcyt.ttf: QiaoPin ChaoYuan.</li>
<li>arial.ttf: English only.</li>
<li>dinalternate.ttf: DIN Alternate Bold.</li>
<li>helveticalt.ttf: Helvetica.</li>
<li>helveticains.ttf: Helvetica Inserat.</li>
<li>trajanpro.ttf: TrajanPro-Bold.</li>
<li>korean.ttf: Korean.</li>
<li>japanese.ttf: Japanese.</li>
<li>thai.ttf: Thai.</li>
Default value: hei.ttf.
<br>Note:
<li>kai.ttf is recommended for SimKai.</li>
<li>FontFileInput takes precedence when specified.</li>

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:

- Pixel: Npx. Value range of N: (0,4096].
- Percentage: N%. Value range of N: (0,100]. For example, 10% means the subtitle font size is 10% of the source video height.

The default size is 5% of the source video height if this parameter is not specified or the font size is not configured in the subtitle file.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FontSize Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:

- Pixel: Npx. Value range of N: (0,4096].
- Percentage: N%. Value range of N: (0,100]. For example, 10% means the subtitle font size is 10% of the source video height.

The default size is 5% of the source video height if this parameter is not specified or the font size is not configured in the subtitle file.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:

- Pixel: Npx. Value range of N: (0,4096].
- Percentage: N%. Value range of N: (0,100]. For example, 10% means the subtitle font size is 10% of the source video height.

The default size is 5% of the source video height if this parameter is not specified or the font size is not configured in the subtitle file.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fontSize Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:

- Pixel: Npx. Value range of N: (0,4096].
- Percentage: N%. Value range of N: (0,100]. For example, 10% means the subtitle font size is 10% of the source video height.

The default size is 5% of the source video height if this parameter is not specified or the font size is not configured in the subtitle file.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FontColor Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fontColor Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: Fully opaque.</li>
Default value: 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FontAlpha The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: Fully opaque.</li>
Default value: 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: Fully opaque.</li>
Default value: 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fontAlpha The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: Fully opaque.</li>
Default value: 1.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subtitle position on the Y-axis. If this parameter is specified, the built-in coordinates in the subtitle file will be ignored. The pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle position on the Y-axis is 10% of the video height.

By default, the position is 4% of the source video height.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return YPos Subtitle position on the Y-axis. If this parameter is specified, the built-in coordinates in the subtitle file will be ignored. The pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle position on the Y-axis is 10% of the video height.

By default, the position is 4% of the source video height.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置Subtitle position on the Y-axis. If this parameter is specified, the built-in coordinates in the subtitle file will be ignored. The pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle position on the Y-axis is 10% of the video height.

By default, the position is 4% of the source video height.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _yPos Subtitle position on the Y-axis. If this parameter is specified, the built-in coordinates in the subtitle file will be ignored. The pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle position on the Y-axis is 10% of the video height.

By default, the position is 4% of the source video height.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Subtitle background position on the Y-axis. Pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle background position on the Y-axis is 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle background is at the bottom of the central axis of the source video, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BoardY Subtitle background position on the Y-axis. Pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle background position on the Y-axis is 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle background is at the bottom of the central axis of the source video, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBoardY() const;

                    /**
                     * 设置Subtitle background position on the Y-axis. Pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle background position on the Y-axis is 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle background is at the bottom of the central axis of the source video, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _boardY Subtitle background position on the Y-axis. Pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle background position on the Y-axis is 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle background is at the bottom of the central axis of the source video, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default width is 90% of the source video width.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BoardWidth Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default width is 90% of the source video width.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default width is 90% of the source video width.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _boardWidth Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default width is 90% of the source video width.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBoardWidth(const int64_t& _boardWidth);

                    /**
                     * 判断参数 BoardWidth 是否已赋值
                     * @return BoardWidth 是否已赋值
                     * 
                     */
                    bool BoardWidthHasBeenSet() const;

                    /**
                     * 获取Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default height is 15% of the source video height.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BoardHeight Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default height is 15% of the source video height.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default height is 15% of the source video height.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _boardHeight Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default height is 15% of the source video height.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBoardHeight(const int64_t& _boardHeight);

                    /**
                     * 判断参数 BoardHeight 是否已赋值
                     * @return BoardHeight 是否已赋值
                     * 
                     */
                    bool BoardHeightHasBeenSet() const;

                    /**
                     * 获取Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BoardColor Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _boardColor Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BoardAlpha Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _boardAlpha Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, the default width is 0.3% of the source video height.

                     * @return OutlineWidth Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, the default width is 0.3% of the source video height.

                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, the default width is 0.3% of the source video height.

                     * @param _outlineWidth Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, the default width is 0.3% of the source video height.

                     * 
                     */
                    void SetOutlineWidth(const double& _outlineWidth);

                    /**
                     * 判断参数 OutlineWidth 是否已赋值
                     * @return OutlineWidth 是否已赋值
                     * 
                     */
                    bool OutlineWidthHasBeenSet() const;

                    /**
                     * 获取Stroke color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black.

                     * @return OutlineColor Stroke color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black.

                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置Stroke color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black.

                     * @param _outlineColor Stroke color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black.

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
                     * 获取Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.

                     * @return OutlineAlpha Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.

                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.

                     * @param _outlineAlpha Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.

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
                     * 获取Shadow width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, no shadow is applied by default.

                     * @return ShadowWidth Shadow width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, no shadow is applied by default.

                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置Shadow width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, no shadow is applied by default.

                     * @param _shadowWidth Shadow width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, no shadow is applied by default.

                     * 
                     */
                    void SetShadowWidth(const double& _shadowWidth);

                    /**
                     * 判断参数 ShadowWidth 是否已赋值
                     * @return ShadowWidth 是否已赋值
                     * 
                     */
                    bool ShadowWidthHasBeenSet() const;

                    /**
                     * 获取Shadow color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black (with shadow configured).

                     * @return ShadowColor Shadow color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black (with shadow configured).

                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置Shadow color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black (with shadow configured).

                     * @param _shadowColor Shadow color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black (with shadow configured).

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
                     * 获取Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     * @return ShadowAlpha Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     * @param _shadowAlpha Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

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
                     * 获取Line spacing. The value should be a positive integer.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * @return LineSpacing Line spacing. The value should be a positive integer.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置Line spacing. The value should be a positive integer.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * @param _lineSpacing Line spacing. The value should be a positive integer.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     * 
                     */
                    void SetLineSpacing(const int64_t& _lineSpacing);

                    /**
                     * 判断参数 LineSpacing 是否已赋值
                     * @return LineSpacing 是否已赋值
                     * 
                     */
                    bool LineSpacingHasBeenSet() const;

                    /**
                     * 获取Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.

                     * @return Alignment Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.

                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.

                     * @param _alignment Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.

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
                     * 获取Default value is 0. If this is set to 1, the value of BoardWidth is a percentage based on the video width.

                     * @return BoardWidthUnit Default value is 0. If this is set to 1, the value of BoardWidth is a percentage based on the video width.

                     * 
                     */
                    int64_t GetBoardWidthUnit() const;

                    /**
                     * 设置Default value is 0. If this is set to 1, the value of BoardWidth is a percentage based on the video width.

                     * @param _boardWidthUnit Default value is 0. If this is set to 1, the value of BoardWidth is a percentage based on the video width.

                     * 
                     */
                    void SetBoardWidthUnit(const int64_t& _boardWidthUnit);

                    /**
                     * 判断参数 BoardWidthUnit 是否已赋值
                     * @return BoardWidthUnit 是否已赋值
                     * 
                     */
                    bool BoardWidthUnitHasBeenSet() const;

                    /**
                     * 获取Default value is 0. If this is set to 1, the value of BoardHeight is a percentage based on the video height.

                     * @return BoardHeightUnit Default value is 0. If this is set to 1, the value of BoardHeight is a percentage based on the video height.

                     * 
                     */
                    int64_t GetBoardHeightUnit() const;

                    /**
                     * 设置Default value is 0. If this is set to 1, the value of BoardHeight is a percentage based on the video height.

                     * @param _boardHeightUnit Default value is 0. If this is set to 1, the value of BoardHeight is a percentage based on the video height.

                     * 
                     */
                    void SetBoardHeightUnit(const int64_t& _boardHeightUnit);

                    /**
                     * 判断参数 BoardHeightUnit 是否已赋值
                     * @return BoardHeightUnit 是否已赋值
                     * 
                     */
                    bool BoardHeightUnitHasBeenSet() const;

                    /**
                     * 获取Default value is 0. If this is set to 1, the value of OutlineWidth is a percentage based on the video height.

                     * @return OutlineWidthUnit Default value is 0. If this is set to 1, the value of OutlineWidth is a percentage based on the video height.

                     * 
                     */
                    int64_t GetOutlineWidthUnit() const;

                    /**
                     * 设置Default value is 0. If this is set to 1, the value of OutlineWidth is a percentage based on the video height.

                     * @param _outlineWidthUnit Default value is 0. If this is set to 1, the value of OutlineWidth is a percentage based on the video height.

                     * 
                     */
                    void SetOutlineWidthUnit(const int64_t& _outlineWidthUnit);

                    /**
                     * 判断参数 OutlineWidthUnit 是否已赋值
                     * @return OutlineWidthUnit 是否已赋值
                     * 
                     */
                    bool OutlineWidthUnitHasBeenSet() const;

                    /**
                     * 获取Default value is 0. If this is set to 1, the value of ShadowWidth is a percentage based on the video height.

                     * @return ShadowWidthUnit Default value is 0. If this is set to 1, the value of ShadowWidth is a percentage based on the video height.

                     * 
                     */
                    int64_t GetShadowWidthUnit() const;

                    /**
                     * 设置Default value is 0. If this is set to 1, the value of ShadowWidth is a percentage based on the video height.

                     * @param _shadowWidthUnit Default value is 0. If this is set to 1, the value of ShadowWidth is a percentage based on the video height.

                     * 
                     */
                    void SetShadowWidthUnit(const int64_t& _shadowWidthUnit);

                    /**
                     * 判断参数 ShadowWidthUnit 是否已赋值
                     * @return ShadowWidthUnit 是否已赋值
                     * 
                     */
                    bool ShadowWidthUnitHasBeenSet() const;

                    /**
                     * 获取Default value is 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * @return LineSpacingUnit Default value is 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置Default value is 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * @param _lineSpacingUnit Default value is 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * 
                     */
                    void SetLineSpacingUnit(const int64_t& _lineSpacingUnit);

                    /**
                     * 判断参数 LineSpacingUnit 是否已赋值
                     * @return LineSpacingUnit 是否已赋值
                     * 
                     */
                    bool LineSpacingUnitHasBeenSet() const;

                private:

                    /**
                     * The URL of the subtitles to add to the video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Specifies the subtitle track for embedding subtitles into the video. the Streamindex parameter takes value starting from 0, where 0 indicates usage of the first subtitle track in the source video. if Path is specified, use Path preferentially. either Path or Streamindex should be specified.

-Note: StreamIndex must match the subtitle track index in the source file. for example, if the subtitle track in the source file is stream#0:3, StreamIndex should be 3. otherwise, task processing failed.


Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_streamIndex;
                    bool m_streamIndexHasBeenSet;

                    /**
                     * Input information on the subtitle file to be embedded into the video. Currently, only subtitle files stored in COS are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaInputInfo m_subtitleFileInput;
                    bool m_subtitleFileInputHasBeenSet;

                    /**
                     * Input information of the font file of the burned-in subtitle. URL and COS are supported. If both are specified, the URL information is used. If FontFileInput is specified, FontFileInput takes precedence over FontType.

                     */
                    MediaInputInfo m_fontFileInput;
                    bool m_fontFileInputHasBeenSet;

                    /**
                     * Font type. Valid values:
<li>hei.ttf: SimHei.</li>
<li>song.ttf: SimSun.</li>
<li>kai.ttf (recommend) or simkai.ttf: SimKai.</li>
<li>msyh.ttf: Microsoft YaHei.</li>
<li>msyhbd.ttf: Microsoft YaHei Bold.</li>
<li>hkjgt.ttf: DynaFont King Gothic.</li>
<li>dhttx.ttf: DianHei Extra Light.</li>
<li>xqgdzt.ttf: XiQue GuZiDian.</li>
<li>qpcyt.ttf: QiaoPin ChaoYuan.</li>
<li>arial.ttf: English only.</li>
<li>dinalternate.ttf: DIN Alternate Bold.</li>
<li>helveticalt.ttf: Helvetica.</li>
<li>helveticains.ttf: Helvetica Inserat.</li>
<li>trajanpro.ttf: TrajanPro-Bold.</li>
<li>korean.ttf: Korean.</li>
<li>japanese.ttf: Japanese.</li>
<li>thai.ttf: Thai.</li>
Default value: hei.ttf.
<br>Note:
<li>kai.ttf is recommended for SimKai.</li>
<li>FontFileInput takes precedence when specified.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * Font size. If not specified, the font size of the subtitle file applies. Pixel and percentage formats are supported:

- Pixel: Npx. Value range of N: (0,4096].
- Percentage: N%. Value range of N: (0,100]. For example, 10% means the subtitle font size is 10% of the source video height.

The default size is 5% of the source video height if this parameter is not specified or the font size is not configured in the subtitle file.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: Fully opaque.</li>
Default value: 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * Subtitle position on the Y-axis. If this parameter is specified, the built-in coordinates in the subtitle file will be ignored. The pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle position on the Y-axis is 10% of the video height.

By default, the position is 4% of the source video height.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the subtitle reference position is at the bottom of the central axis of the subtitles, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Subtitle background position on the Y-axis. Pixel and percentage formats are supported.

 - Pixel: Npx. Value range of N: [0,4096].
 - Percentage: N%. Value range of N: [0,100]. For example, 10% indicates that the subtitle background position on the Y-axis is 10% of the video height.

If this parameter is not specified, the subtitle background is disabled.
Note: The origin of the coordinate axes is at the bottom of the central axis of the source video, and the reference position of the subtitle background is at the bottom of the central axis of the source video, as shown in the figure below.
![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/mps-demo/102_ai_subtitle/subtitle_style.png)

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * Background width. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default width is 90% of the source video width.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * Background height. The value should be a positive integer.
- Value range for pixels: [0,4096].
- Value range for percentages: [0, 100].
If background is enabled and this parameter is not specified, the default height is 15% of the source video height.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * Board color. Format: 0xRRGGBB.
Default value: 0x000000 (black).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * Subtitle background transparency. Value range: [0, 1].
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 0.8.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                    /**
                     * Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, the default width is 0.3% of the source video height.

                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * Stroke color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black.

                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.

                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * Shadow width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
If this is not specified, no shadow is applied by default.

                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * Shadow color. The value should be a 6-digit hexadecimal RGB value. If this is not specified, the default color is black (with shadow configured).

                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * Shadow transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque (with shadow configured).

                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                    /**
                     * Line spacing. The value should be a positive integer.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100]. If this is not specified, the default value is 0.

                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * Alignment mode. Valid values: top: The top position of the subtitle is fixed, while the bottom position changes according to the number of lines. bottom: The bottom position of the subtitle is fixed, while the top position changes according to the number of lines. If this is not specified, bottom alignment is used by default.

                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                    /**
                     * Default value is 0. If this is set to 1, the value of BoardWidth is a percentage based on the video width.

                     */
                    int64_t m_boardWidthUnit;
                    bool m_boardWidthUnitHasBeenSet;

                    /**
                     * Default value is 0. If this is set to 1, the value of BoardHeight is a percentage based on the video height.

                     */
                    int64_t m_boardHeightUnit;
                    bool m_boardHeightUnitHasBeenSet;

                    /**
                     * Default value is 0. If this is set to 1, the value of OutlineWidth is a percentage based on the video height.

                     */
                    int64_t m_outlineWidthUnit;
                    bool m_outlineWidthUnitHasBeenSet;

                    /**
                     * Default value is 0. If this is set to 1, the value of ShadowWidth is a percentage based on the video height.

                     */
                    int64_t m_shadowWidthUnit;
                    bool m_shadowWidthUnitHasBeenSet;

                    /**
                     * Default value is 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
