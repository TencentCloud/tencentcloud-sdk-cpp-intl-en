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
                * Subtitle stream configuration parameters.
                */
                class SubtitleTemplate : public AbstractModel
                {
                public:
                    SubtitleTemplate();
                    ~SubtitleTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Path 
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置
                     * @param _path 
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
                     * 获取
                     * @return StreamIndex 
                     * 
                     */
                    int64_t GetStreamIndex() const;

                    /**
                     * 设置
                     * @param _streamIndex 
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
                     * 获取
                     * @return SubtitleFileInput 
                     * 
                     */
                    MediaInputInfo GetSubtitleFileInput() const;

                    /**
                     * 设置
                     * @param _subtitleFileInput 
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
                     * 获取Input information for the subtitle font file to be suppressed. Currently only support url and cos. If both are filled, url takes precedence over cos. If FontFileInput is filled, FontFileInput takes precedence over FontType.

                     * @return FontFileInput Input information for the subtitle font file to be suppressed. Currently only support url and cos. If both are filled, url takes precedence over cos. If FontFileInput is filled, FontFileInput takes precedence over FontType.

                     * 
                     */
                    MediaInputInfo GetFontFileInput() const;

                    /**
                     * 设置Input information for the subtitle font file to be suppressed. Currently only support url and cos. If both are filled, url takes precedence over cos. If FontFileInput is filled, FontFileInput takes precedence over FontType.

                     * @param _fontFileInput Input information for the subtitle font file to be suppressed. Currently only support url and cos. If both are filled, url takes precedence over cos. If FontFileInput is filled, FontFileInput takes precedence over FontType.

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
                     * 获取
                     * @return FontType 
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置
                     * @param _fontType 
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
                     * 获取
                     * @return FontSize 
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置
                     * @param _fontSize 
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
                     * 获取
                     * @return FontColor 
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置
                     * @param _fontColor 
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
                     * 获取
                     * @return FontAlpha 
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置
                     * @param _fontAlpha 
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
                     * 获取
                     * @return YPos 
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置
                     * @param _yPos 
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
                     * 获取
                     * @return BoardY 
                     * 
                     */
                    std::string GetBoardY() const;

                    /**
                     * 设置
                     * @param _boardY 
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
                     * 获取
                     * @return BoardWidth 
                     * 
                     */
                    int64_t GetBoardWidth() const;

                    /**
                     * 设置
                     * @param _boardWidth 
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
                     * 获取
                     * @return BoardHeight 
                     * 
                     */
                    int64_t GetBoardHeight() const;

                    /**
                     * 设置
                     * @param _boardHeight 
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
                     * 获取
                     * @return BoardColor 
                     * 
                     */
                    std::string GetBoardColor() const;

                    /**
                     * 设置
                     * @param _boardColor 
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
                     * 获取
                     * @return BoardAlpha 
                     * 
                     */
                    double GetBoardAlpha() const;

                    /**
                     * 设置
                     * @param _boardAlpha 
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
0.3% of the source video height by default if left blank.

                     * @return OutlineWidth Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
0.3% of the source video height by default if left blank.

                     * 
                     */
                    double GetOutlineWidth() const;

                    /**
                     * 设置Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
0.3% of the source video height by default if left blank.

                     * @param _outlineWidth Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
0.3% of the source video height by default if left blank.

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
                     * 获取Border color. 6-digit hexadecimal RGB. Black by default if left blank.

                     * @return OutlineColor Border color. 6-digit hexadecimal RGB. Black by default if left blank.

                     * 
                     */
                    std::string GetOutlineColor() const;

                    /**
                     * 设置Border color. 6-digit hexadecimal RGB. Black by default if left blank.

                     * @param _outlineColor Border color. 6-digit hexadecimal RGB. Black by default if left blank.

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
                     * 获取Shadow width. Floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
No shading by default if left blank.

                     * @return ShadowWidth Shadow width. Floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
No shading by default if left blank.

                     * 
                     */
                    double GetShadowWidth() const;

                    /**
                     * 设置Shadow width. Floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
No shading by default if left blank.

                     * @param _shadowWidth Shadow width. Floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
No shading by default if left blank.

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
                     * 获取Shadow color. 6-bit base RGB. Black by default if left blank (when shadow has set).

                     * @return ShadowColor Shadow color. 6-bit base RGB. Black by default if left blank (when shadow has set).

                     * 
                     */
                    std::string GetShadowColor() const;

                    /**
                     * 设置Shadow color. 6-bit base RGB. Black by default if left blank (when shadow has set).

                     * @param _shadowColor Shadow color. 6-bit base RGB. Black by default if left blank (when shadow has set).

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
                     * 获取Default value: 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * @return LineSpacingUnit Default value: 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * 
                     */
                    int64_t GetLineSpacingUnit() const;

                    /**
                     * 设置Default value: 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     * @param _lineSpacingUnit Default value: 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

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
                     * 
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_streamIndex;
                    bool m_streamIndexHasBeenSet;

                    /**
                     * 
                     */
                    MediaInputInfo m_subtitleFileInput;
                    bool m_subtitleFileInputHasBeenSet;

                    /**
                     * Input information for the subtitle font file to be suppressed. Currently only support url and cos. If both are filled, url takes precedence over cos. If FontFileInput is filled, FontFileInput takes precedence over FontType.

                     */
                    MediaInputInfo m_fontFileInput;
                    bool m_fontFileInputHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardY;
                    bool m_boardYHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardWidth;
                    bool m_boardWidthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_boardHeight;
                    bool m_boardHeightHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_boardColor;
                    bool m_boardColorHasBeenSet;

                    /**
                     * 
                     */
                    double m_boardAlpha;
                    bool m_boardAlphaHasBeenSet;

                    /**
                     * Stroke width. The value should be a floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
0.3% of the source video height by default if left blank.

                     */
                    double m_outlineWidth;
                    bool m_outlineWidthHasBeenSet;

                    /**
                     * Border color. 6-digit hexadecimal RGB. Black by default if left blank.

                     */
                    std::string m_outlineColor;
                    bool m_outlineColorHasBeenSet;

                    /**
                     * Stroke transparency. The value should be a positive floating-point number in the range of (0, 1]. If this is not specified, the default value is 1, which means completely opaque.

                     */
                    double m_outlineAlpha;
                    bool m_outlineAlphaHasBeenSet;

                    /**
                     * Shadow width. Floating-point number.
- Value range for pixels: [0, 1000].
- Value range for percentages: [0, 100].
No shading by default if left blank.

                     */
                    double m_shadowWidth;
                    bool m_shadowWidthHasBeenSet;

                    /**
                     * Shadow color. 6-bit base RGB. Black by default if left blank (when shadow has set).

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
                     * Default value: 0. If this is set to 1, the value of LineSpacing is a percentage based on the video height.

                     */
                    int64_t m_lineSpacingUnit;
                    bool m_lineSpacingUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETEMPLATE_H_
