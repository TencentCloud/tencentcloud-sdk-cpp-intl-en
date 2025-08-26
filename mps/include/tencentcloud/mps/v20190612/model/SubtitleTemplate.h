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
                     * 获取Font type. valid values:.
<li>hei.ttf: simhei.</li>.
<li>song.ttf: simsun.</li>.
<Li>Kai.Ttf (recommend) or simkai.ttf: kaiti.</li>.
<li>msyh.ttf: microsoft yahei</li>.
<li>msyhbd.ttf: microsoft yahei in bold.</li>.
<li>hkjgt.ttf: dynafont king gothic</li>.
<li>dhttx.ttf: dianheitexiti.</li>.
<li>xqgdzt.ttf: xiqueguzidianti</li>.
<li>qpcyt.ttf: smart splice super round body.</li>.
<li>arial.ttf: english only.</li>.
<li>dinalternate.ttf:DIN Alternate Bold</li>
<li>helveticalt.ttf:Helvetica</li>
<li>helveticains.ttf:Helvetica Inserat</li>
<li>trajanpro.ttf:TrajanPro-Bold</li>
<li>korean.ttf: specifies the korean language.</li>.
<li>japanese.ttf: specifies the japanese language.</li>.
<li>thai.ttf: specifies the thai language.</li>.
Default: hei.ttf (heiti). note: kaiti is recommended for use with kai.ttf.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FontType Font type. valid values:.
<li>hei.ttf: simhei.</li>.
<li>song.ttf: simsun.</li>.
<Li>Kai.Ttf (recommend) or simkai.ttf: kaiti.</li>.
<li>msyh.ttf: microsoft yahei</li>.
<li>msyhbd.ttf: microsoft yahei in bold.</li>.
<li>hkjgt.ttf: dynafont king gothic</li>.
<li>dhttx.ttf: dianheitexiti.</li>.
<li>xqgdzt.ttf: xiqueguzidianti</li>.
<li>qpcyt.ttf: smart splice super round body.</li>.
<li>arial.ttf: english only.</li>.
<li>dinalternate.ttf:DIN Alternate Bold</li>
<li>helveticalt.ttf:Helvetica</li>
<li>helveticains.ttf:Helvetica Inserat</li>
<li>trajanpro.ttf:TrajanPro-Bold</li>
<li>korean.ttf: specifies the korean language.</li>.
<li>japanese.ttf: specifies the japanese language.</li>.
<li>thai.ttf: specifies the thai language.</li>.
Default: hei.ttf (heiti). note: kaiti is recommended for use with kai.ttf.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置Font type. valid values:.
<li>hei.ttf: simhei.</li>.
<li>song.ttf: simsun.</li>.
<Li>Kai.Ttf (recommend) or simkai.ttf: kaiti.</li>.
<li>msyh.ttf: microsoft yahei</li>.
<li>msyhbd.ttf: microsoft yahei in bold.</li>.
<li>hkjgt.ttf: dynafont king gothic</li>.
<li>dhttx.ttf: dianheitexiti.</li>.
<li>xqgdzt.ttf: xiqueguzidianti</li>.
<li>qpcyt.ttf: smart splice super round body.</li>.
<li>arial.ttf: english only.</li>.
<li>dinalternate.ttf:DIN Alternate Bold</li>
<li>helveticalt.ttf:Helvetica</li>
<li>helveticains.ttf:Helvetica Inserat</li>
<li>trajanpro.ttf:TrajanPro-Bold</li>
<li>korean.ttf: specifies the korean language.</li>.
<li>japanese.ttf: specifies the japanese language.</li>.
<li>thai.ttf: specifies the thai language.</li>.
Default: hei.ttf (heiti). note: kaiti is recommended for use with kai.ttf.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fontType Font type. valid values:.
<li>hei.ttf: simhei.</li>.
<li>song.ttf: simsun.</li>.
<Li>Kai.Ttf (recommend) or simkai.ttf: kaiti.</li>.
<li>msyh.ttf: microsoft yahei</li>.
<li>msyhbd.ttf: microsoft yahei in bold.</li>.
<li>hkjgt.ttf: dynafont king gothic</li>.
<li>dhttx.ttf: dianheitexiti.</li>.
<li>xqgdzt.ttf: xiqueguzidianti</li>.
<li>qpcyt.ttf: smart splice super round body.</li>.
<li>arial.ttf: english only.</li>.
<li>dinalternate.ttf:DIN Alternate Bold</li>
<li>helveticalt.ttf:Helvetica</li>
<li>helveticains.ttf:Helvetica Inserat</li>
<li>trajanpro.ttf:TrajanPro-Bold</li>
<li>korean.ttf: specifies the korean language.</li>.
<li>japanese.ttf: specifies the japanese language.</li>.
<li>thai.ttf: specifies the thai language.</li>.
Default: hei.ttf (heiti). note: kaiti is recommended for use with kai.ttf.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Font size. Format: Npx, where N is a numerical value. If it is not specified, the font size of the subtitle file applies.
It is 5% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FontSize Font size. Format: Npx, where N is a numerical value. If it is not specified, the font size of the subtitle file applies.
It is 5% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置Font size. Format: Npx, where N is a numerical value. If it is not specified, the font size of the subtitle file applies.
It is 5% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fontSize Font size. Format: Npx, where N is a numerical value. If it is not specified, the font size of the subtitle file applies.
It is 5% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Board width. Unit: pixels. Value range: [0,4096].
It is 90% of the source video width by default.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BoardWidth Board width. Unit: pixels. Value range: [0,4096].
It is 90% of the source video width by default.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置Board width. Unit: pixels. Value range: [0,4096].
It is 90% of the source video width by default.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _boardWidth Board width. Unit: pixels. Value range: [0,4096].
It is 90% of the source video width by default.

Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Board height. Unit: pixels. Value range: [0,4096].
It is 15% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BoardHeight Board height. Unit: pixels. Value range: [0,4096].
It is 15% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置Board height. Unit: pixels. Value range: [0,4096].
It is 15% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _boardHeight Board height. Unit: pixels. Value range: [0,4096].
It is 15% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Stroke width.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutlineWidth Stroke width.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置Stroke width.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outlineWidth Stroke width.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Stroke color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutlineColor Stroke color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置Stroke color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outlineColor Stroke color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutlineAlpha Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetOutlineAlpha() const;

                    /**
                     * 设置Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outlineAlpha Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Shadow width. The value should be a floating-point number in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShadowWidth Shadow width. The value should be a floating-point number in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置Shadow width. The value should be a floating-point number in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shadowWidth Shadow width. The value should be a floating-point number in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Shadow color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShadowColor Shadow color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置Shadow color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shadowColor Shadow color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShadowAlpha Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetShadowAlpha() const;

                    /**
                     * 设置Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shadowAlpha Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Line spacing. The value should be a positive integer in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineSpacing Line spacing. The value should be a positive integer in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLineSpacing() const;

                    /**
                     * 设置Line spacing. The value should be a positive integer in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineSpacing Line spacing. The value should be a positive integer in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Alignment mode. Valid values: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the number of lines. bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the number of lines.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alignment Alignment mode. Valid values: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the number of lines. bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the number of lines.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlignment() const;

                    /**
                     * 设置Alignment mode. Valid values: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the number of lines. bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the number of lines.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alignment Alignment mode. Valid values: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the number of lines. bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the number of lines.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlignment(const std::string& _alignment);

                    /**
                     * 判断参数 Alignment 是否已赋值
                     * @return Alignment 是否已赋值
                     * 
                     */
                    bool AlignmentHasBeenSet() const;

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
                     * Font type. valid values:.
<li>hei.ttf: simhei.</li>.
<li>song.ttf: simsun.</li>.
<Li>Kai.Ttf (recommend) or simkai.ttf: kaiti.</li>.
<li>msyh.ttf: microsoft yahei</li>.
<li>msyhbd.ttf: microsoft yahei in bold.</li>.
<li>hkjgt.ttf: dynafont king gothic</li>.
<li>dhttx.ttf: dianheitexiti.</li>.
<li>xqgdzt.ttf: xiqueguzidianti</li>.
<li>qpcyt.ttf: smart splice super round body.</li>.
<li>arial.ttf: english only.</li>.
<li>dinalternate.ttf:DIN Alternate Bold</li>
<li>helveticalt.ttf:Helvetica</li>
<li>helveticains.ttf:Helvetica Inserat</li>
<li>trajanpro.ttf:TrajanPro-Bold</li>
<li>korean.ttf: specifies the korean language.</li>.
<li>japanese.ttf: specifies the japanese language.</li>.
<li>thai.ttf: specifies the thai language.</li>.
Default: hei.ttf (heiti). note: kaiti is recommended for use with kai.ttf.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * Font size. Format: Npx, where N is a numerical value. If it is not specified, the font size of the subtitle file applies.
It is 5% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Board width. Unit: pixels. Value range: [0,4096].
It is 90% of the source video width by default.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * Board height. Unit: pixels. Value range: [0,4096].
It is 15% of the source video height by default.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Stroke width.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * Stroke color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * Stroke transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * Shadow width. The value should be a floating-point number in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * Shadow color. The value should be a 6-digit hexadecimal RGB value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_shadowColor;
                    bool m_shadowColorHasBeenSet;

                    /**
                     * Shadow transparency. The value should be a positive floating-point number in the range of (0, 1].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_shadowAlpha;
                    bool m_shadowAlphaHasBeenSet;

                    /**
                     * Line spacing. The value should be a positive integer in the range of [0, 1000].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lineSpacing;
                    bool m_lineSpacingHasBeenSet;

                    /**
                     * Alignment mode. Valid values: top alignment. The top position of subtitles is fixed, while the bottom position changes according to the number of lines. bottom: bottom alignment. The bottom position of subtitles is fixed, while the top position changes according to the number of lines.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alignment;
                    bool m_alignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
