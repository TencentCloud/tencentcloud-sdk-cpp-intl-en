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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLESTYLE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLESTYLE_H_

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
                * The subtitle style of a video editing/compositing task.
                */
                class ComposeSubtitleStyle : public AbstractModel
                {
                public:
                    ComposeSubtitleStyle();
                    ~ComposeSubtitleStyle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The subtitle height. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
The default value is the value of `FontSize`.
                     * @return Height The subtitle height. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
The default value is the value of `FontSize`.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置The subtitle height. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
The default value is the value of `FontSize`.
                     * @param _height The subtitle height. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
The default value is the value of `FontSize`.
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The bottom margin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas height. For example, `10%` means that the margin is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
Default value: `0px`.
                     * @return MarginBottom The bottom margin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas height. For example, `10%` means that the margin is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
Default value: `0px`.
                     * 
                     */
                    std::string GetMarginBottom() const;

                    /**
                     * 设置The bottom margin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas height. For example, `10%` means that the margin is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
Default value: `0px`.
                     * @param _marginBottom The bottom margin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas height. For example, `10%` means that the margin is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
Default value: `0px`.
                     * 
                     */
                    void SetMarginBottom(const std::string& _marginBottom);

                    /**
                     * 判断参数 MarginBottom 是否已赋值
                     * @return MarginBottom 是否已赋值
                     * 
                     */
                    bool MarginBottomHasBeenSet() const;

                    /**
                     * 获取The font type. Valid values:
<li>`SimHei`(default): Chinese font Heiti. </li>
<Li>`SimSun`: Chinese font Songti. </li>
                     * @return FontType The font type. Valid values:
<li>`SimHei`(default): Chinese font Heiti. </li>
<Li>`SimSun`: Chinese font Songti. </li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置The font type. Valid values:
<li>`SimHei`(default): Chinese font Heiti. </li>
<Li>`SimSun`: Chinese font Songti. </li>
                     * @param _fontType The font type. Valid values:
<li>`SimHei`(default): Chinese font Heiti. </li>
<Li>`SimSun`: Chinese font Songti. </li>
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
                     * 获取The font size. Two formats are supported:
u200c<li>If the value ends with %, it specifies the size as a percentage of the canvas height. For example, `10%` means that the size is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the size in pixels. For example, `100px` means that the size is 100 pixels. </li>
Default value: `2%`.
                     * @return FontSize The font size. Two formats are supported:
u200c<li>If the value ends with %, it specifies the size as a percentage of the canvas height. For example, `10%` means that the size is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the size in pixels. For example, `100px` means that the size is 100 pixels. </li>
Default value: `2%`.
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置The font size. Two formats are supported:
u200c<li>If the value ends with %, it specifies the size as a percentage of the canvas height. For example, `10%` means that the size is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the size in pixels. For example, `100px` means that the size is 100 pixels. </li>
Default value: `2%`.
                     * @param _fontSize The font size. Two formats are supported:
u200c<li>If the value ends with %, it specifies the size as a percentage of the canvas height. For example, `10%` means that the size is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the size in pixels. For example, `100px` means that the size is 100 pixels. </li>
Default value: `2%`.
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
                     * 获取Whether to bold the text (some fonts may not support bold). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @return FontBold Whether to bold the text (some fonts may not support bold). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    int64_t GetFontBold() const;

                    /**
                     * 设置Whether to bold the text (some fonts may not support bold). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @param _fontBold Whether to bold the text (some fonts may not support bold). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    void SetFontBold(const int64_t& _fontBold);

                    /**
                     * 判断参数 FontBold 是否已赋值
                     * @return FontBold 是否已赋值
                     * 
                     */
                    bool FontBoldHasBeenSet() const;

                    /**
                     * 获取Whether to italicize the text (some fonts may not support italics). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @return FontItalic Whether to italicize the text (some fonts may not support italics). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    int64_t GetFontItalic() const;

                    /**
                     * 设置Whether to italicize the text (some fonts may not support italics). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @param _fontItalic Whether to italicize the text (some fonts may not support italics). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    void SetFontItalic(const int64_t& _fontItalic);

                    /**
                     * 判断参数 FontItalic 是否已赋值
                     * @return FontItalic 是否已赋值
                     * 
                     */
                    bool FontItalicHasBeenSet() const;

                    /**
                     * 获取The font color (#RRGGBBAA).  
Default value: `0x000000FF` (black).  
Note: `AA` in the color notation defines the opacity of the color. It's optional.

                     * @return FontColor The font color (#RRGGBBAA).  
Default value: `0x000000FF` (black).  
Note: `AA` in the color notation defines the opacity of the color. It's optional.

                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置The font color (#RRGGBBAA).  
Default value: `0x000000FF` (black).  
Note: `AA` in the color notation defines the opacity of the color. It's optional.

                     * @param _fontColor The font color (#RRGGBBAA).  
Default value: `0x000000FF` (black).  
Note: `AA` in the color notation defines the opacity of the color. It's optional.

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
                     * 获取The text alignment. Valid values:
<li>`Center`(default) </li>
<li>`Left` </li>
<li>`Right` </li>
                     * @return FontAlign The text alignment. Valid values:
<li>`Center`(default) </li>
<li>`Left` </li>
<li>`Right` </li>
                     * 
                     */
                    std::string GetFontAlign() const;

                    /**
                     * 设置The text alignment. Valid values:
<li>`Center`(default) </li>
<li>`Left` </li>
<li>`Right` </li>
                     * @param _fontAlign The text alignment. Valid values:
<li>`Center`(default) </li>
<li>`Left` </li>
<li>`Right` </li>
                     * 
                     */
                    void SetFontAlign(const std::string& _fontAlign);

                    /**
                     * 判断参数 FontAlign 是否已赋值
                     * @return FontAlign 是否已赋值
                     * 
                     */
                    bool FontAlignHasBeenSet() const;

                    /**
                     * 获取The margin for left/right align.
<li>If `FontAlign` is `Left`, this parameter specifies the left margin of the subtitles. </li>
<li>If `FontAlign` is `Right`, this parameter specifies the right margin of the subtitles. </li>
Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas width. For example, `10%` means that the margin is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
                     * @return FontAlignMargin The margin for left/right align.
<li>If `FontAlign` is `Left`, this parameter specifies the left margin of the subtitles. </li>
<li>If `FontAlign` is `Right`, this parameter specifies the right margin of the subtitles. </li>
Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas width. For example, `10%` means that the margin is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
                     * 
                     */
                    std::string GetFontAlignMargin() const;

                    /**
                     * 设置The margin for left/right align.
<li>If `FontAlign` is `Left`, this parameter specifies the left margin of the subtitles. </li>
<li>If `FontAlign` is `Right`, this parameter specifies the right margin of the subtitles. </li>
Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas width. For example, `10%` means that the margin is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
                     * @param _fontAlignMargin The margin for left/right align.
<li>If `FontAlign` is `Left`, this parameter specifies the left margin of the subtitles. </li>
<li>If `FontAlign` is `Right`, this parameter specifies the right margin of the subtitles. </li>
Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas width. For example, `10%` means that the margin is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
                     * 
                     */
                    void SetFontAlignMargin(const std::string& _fontAlignMargin);

                    /**
                     * 判断参数 FontAlignMargin 是否已赋值
                     * @return FontAlignMargin 是否已赋值
                     * 
                     */
                    bool FontAlignMarginHasBeenSet() const;

                    /**
                     * 获取The subtitle border width. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas height. For example, `10%` means that the width is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the width is 100 pixels. </li>
The default value is `0`, which means the subtitles will have no borders.
                     * @return BorderWidth The subtitle border width. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas height. For example, `10%` means that the width is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the width is 100 pixels. </li>
The default value is `0`, which means the subtitles will have no borders.
                     * 
                     */
                    std::string GetBorderWidth() const;

                    /**
                     * 设置The subtitle border width. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas height. For example, `10%` means that the width is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the width is 100 pixels. </li>
The default value is `0`, which means the subtitles will have no borders.
                     * @param _borderWidth The subtitle border width. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas height. For example, `10%` means that the width is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the width is 100 pixels. </li>
The default value is `0`, which means the subtitles will have no borders.
                     * 
                     */
                    void SetBorderWidth(const std::string& _borderWidth);

                    /**
                     * 判断参数 BorderWidth 是否已赋值
                     * @return BorderWidth 是否已赋值
                     * 
                     */
                    bool BorderWidthHasBeenSet() const;

                    /**
                     * 获取The border color, whose format is the same as that for `FontColor`. This parameter is valid if `BorderWidth` is not `0`.
                     * @return BorderColor The border color, whose format is the same as that for `FontColor`. This parameter is valid if `BorderWidth` is not `0`.
                     * 
                     */
                    std::string GetBorderColor() const;

                    /**
                     * 设置The border color, whose format is the same as that for `FontColor`. This parameter is valid if `BorderWidth` is not `0`.
                     * @param _borderColor The border color, whose format is the same as that for `FontColor`. This parameter is valid if `BorderWidth` is not `0`.
                     * 
                     */
                    void SetBorderColor(const std::string& _borderColor);

                    /**
                     * 判断参数 BorderColor 是否已赋值
                     * @return BorderColor 是否已赋值
                     * 
                     */
                    bool BorderColorHasBeenSet() const;

                    /**
                     * 获取The text background color, whose format is the same as that for `FontColor`.  
The default value is an empty string, which means the subtitles will not have a background color.
                     * @return BottomColor The text background color, whose format is the same as that for `FontColor`.  
The default value is an empty string, which means the subtitles will not have a background color.
                     * 
                     */
                    std::string GetBottomColor() const;

                    /**
                     * 设置The text background color, whose format is the same as that for `FontColor`.  
The default value is an empty string, which means the subtitles will not have a background color.
                     * @param _bottomColor The text background color, whose format is the same as that for `FontColor`.  
The default value is an empty string, which means the subtitles will not have a background color.
                     * 
                     */
                    void SetBottomColor(const std::string& _bottomColor);

                    /**
                     * 判断参数 BottomColor 是否已赋值
                     * @return BottomColor 是否已赋值
                     * 
                     */
                    bool BottomColorHasBeenSet() const;

                private:

                    /**
                     * The subtitle height. Two formats are supported:
u200c<li>If the value ends with %, it specifies the height as a percentage of the canvas height. For example, `10%` means that the height is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the height in pixels. For example, `100px` means that the height is 100 pixels. </li>
The default value is the value of `FontSize`.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The bottom margin. Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas height. For example, `10%` means that the margin is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
Default value: `0px`.
                     */
                    std::string m_marginBottom;
                    bool m_marginBottomHasBeenSet;

                    /**
                     * The font type. Valid values:
<li>`SimHei`(default): Chinese font Heiti. </li>
<Li>`SimSun`: Chinese font Songti. </li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * The font size. Two formats are supported:
u200c<li>If the value ends with %, it specifies the size as a percentage of the canvas height. For example, `10%` means that the size is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the size in pixels. For example, `100px` means that the size is 100 pixels. </li>
Default value: `2%`.
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * Whether to bold the text (some fonts may not support bold). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     */
                    int64_t m_fontBold;
                    bool m_fontBoldHasBeenSet;

                    /**
                     * Whether to italicize the text (some fonts may not support italics). Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     */
                    int64_t m_fontItalic;
                    bool m_fontItalicHasBeenSet;

                    /**
                     * The font color (#RRGGBBAA).  
Default value: `0x000000FF` (black).  
Note: `AA` in the color notation defines the opacity of the color. It's optional.

                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * The text alignment. Valid values:
<li>`Center`(default) </li>
<li>`Left` </li>
<li>`Right` </li>
                     */
                    std::string m_fontAlign;
                    bool m_fontAlignHasBeenSet;

                    /**
                     * The margin for left/right align.
<li>If `FontAlign` is `Left`, this parameter specifies the left margin of the subtitles. </li>
<li>If `FontAlign` is `Right`, this parameter specifies the right margin of the subtitles. </li>
Two formats are supported:
u200c<li>If the value ends with %, it specifies the margin as a percentage of the canvas width. For example, `10%` means that the margin is 10% of the canvas width. </li>
u200c<li>If the value ends with px, it specifies the margin in pixels. For example, `100px` means that the margin is 100 pixels. </li>
                     */
                    std::string m_fontAlignMargin;
                    bool m_fontAlignMarginHasBeenSet;

                    /**
                     * The subtitle border width. Two formats are supported:
u200c<li>If the value ends with %, it specifies the width as a percentage of the canvas height. For example, `10%` means that the width is 10% of the canvas height. </li>
u200c<li>If the value ends with px, it specifies the width in pixels. For example, `100px` means that the width is 100 pixels. </li>
The default value is `0`, which means the subtitles will have no borders.
                     */
                    std::string m_borderWidth;
                    bool m_borderWidthHasBeenSet;

                    /**
                     * The border color, whose format is the same as that for `FontColor`. This parameter is valid if `BorderWidth` is not `0`.
                     */
                    std::string m_borderColor;
                    bool m_borderColorHasBeenSet;

                    /**
                     * The text background color, whose format is the same as that for `FontColor`.  
The default value is an empty string, which means the subtitles will not have a background color.
                     */
                    std::string m_bottomColor;
                    bool m_bottomColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLESTYLE_H_
