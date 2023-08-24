/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Path The URL of the subtitles to add to the video.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置The URL of the subtitles to add to the video.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _path The URL of the subtitles to add to the video.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取The subtitle track to add to the video. If both `Path` and `StreamIndex` are specified, `Path` will be used. You need to specify at least one of the two parameters.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return StreamIndex The subtitle track to add to the video. If both `Path` and `StreamIndex` are specified, `Path` will be used. You need to specify at least one of the two parameters.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStreamIndex() const;

                    /**
                     * 设置The subtitle track to add to the video. If both `Path` and `StreamIndex` are specified, `Path` will be used. You need to specify at least one of the two parameters.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _streamIndex The subtitle track to add to the video. If both `Path` and `StreamIndex` are specified, `Path` will be used. You need to specify at least one of the two parameters.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取The font. Valid values:
<li>`hei.ttf`: Heiti.</li>
<li>`song.ttf`: Songti.</li>
<li>`simkai.ttf`: Kaiti.</li>
<li>`arial.ttf`: Arial.</li>
The default is `hei.ttf`.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return FontType The font. Valid values:
<li>`hei.ttf`: Heiti.</li>
<li>`song.ttf`: Songti.</li>
<li>`simkai.ttf`: Kaiti.</li>
<li>`arial.ttf`: Arial.</li>
The default is `hei.ttf`.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置The font. Valid values:
<li>`hei.ttf`: Heiti.</li>
<li>`song.ttf`: Songti.</li>
<li>`simkai.ttf`: Kaiti.</li>
<li>`arial.ttf`: Arial.</li>
The default is `hei.ttf`.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _fontType The font. Valid values:
<li>`hei.ttf`: Heiti.</li>
<li>`song.ttf`: Songti.</li>
<li>`simkai.ttf`: Kaiti.</li>
<li>`arial.ttf`: Arial.</li>
The default is `hei.ttf`.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取The font size (pixels). If this is not specified, the font size in the subtitle file will be used.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return FontSize The font size (pixels). If this is not specified, the font size in the subtitle file will be used.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置The font size (pixels). If this is not specified, the font size in the subtitle file will be used.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _fontSize The font size (pixels). If this is not specified, the font size in the subtitle file will be used.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取The font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return FontColor The font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置The font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _fontColor The font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
<li>`1`: u200dFully opaque.</li>
Default value: 1.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return FontAlpha The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: u200dFully opaque.</li>
Default value: 1.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: u200dFully opaque.</li>
Default value: 1.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _fontAlpha The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: u200dFully opaque.</li>
Default value: 1.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     * 
                     */
                    bool FontAlphaHasBeenSet() const;

                private:

                    /**
                     * The URL of the subtitles to add to the video.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * The subtitle track to add to the video. If both `Path` and `StreamIndex` are specified, `Path` will be used. You need to specify at least one of the two parameters.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_streamIndex;
                    bool m_streamIndexHasBeenSet;

                    /**
                     * The font. Valid values:
<li>`hei.ttf`: Heiti.</li>
<li>`song.ttf`: Songti.</li>
<li>`simkai.ttf`: Kaiti.</li>
<li>`arial.ttf`: Arial.</li>
The default is `hei.ttf`.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * The font size (pixels). If this is not specified, the font size in the subtitle file will be used.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * The font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * The text transparency. Value range: 0-1.
<li>`0`: Fully transparent.</li>
<li>`1`: u200dFully opaque.</li>
Default value: 1.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
