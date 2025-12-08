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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_WEBVTTFONTSTYLE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_WEBVTTFONTSTYLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * WebVTT format configuration.
                */
                class WebVTTFontStyle : public AbstractModel
                {
                public:
                    WebVTTFontStyle();
                    ~WebVTTFontStyle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * @return TextColor Text color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * 
                     */
                    std::string GetTextColor() const;

                    /**
                     * 设置Text color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * @param _textColor Text color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * 
                     */
                    void SetTextColor(const std::string& _textColor);

                    /**
                     * 判断参数 TextColor 是否已赋值
                     * @return TextColor 是否已赋值
                     * 
                     */
                    bool TextColorHasBeenSet() const;

                    /**
                     * 获取Background color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * @return BackgroundColor Background color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置Background color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * @param _backgroundColor Background color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取Background opacity parameter, a number from 0 to 100, with 0 being the default for full transparency.
                     * @return BackgroundAlpha Background opacity parameter, a number from 0 to 100, with 0 being the default for full transparency.
                     * 
                     */
                    int64_t GetBackgroundAlpha() const;

                    /**
                     * 设置Background opacity parameter, a number from 0 to 100, with 0 being the default for full transparency.
                     * @param _backgroundAlpha Background opacity parameter, a number from 0 to 100, with 0 being the default for full transparency.
                     * 
                     */
                    void SetBackgroundAlpha(const int64_t& _backgroundAlpha);

                    /**
                     * 判断参数 BackgroundAlpha 是否已赋值
                     * @return BackgroundAlpha 是否已赋值
                     * 
                     */
                    bool BackgroundAlphaHasBeenSet() const;

                    /**
                     * 获取Font size, in units of vh (1% of height), default value 0 means automatic.
                     * @return FontSize Font size, in units of vh (1% of height), default value 0 means automatic.
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置Font size, in units of vh (1% of height), default value 0 means automatic.
                     * @param _fontSize Font size, in units of vh (1% of height), default value 0 means automatic.
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
                     * 获取The position of the text box, default value AUTO, can be empty; represents the percentage of video height, supports integers from 0 to 100.
                     * @return Line The position of the text box, default value AUTO, can be empty; represents the percentage of video height, supports integers from 0 to 100.
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置The position of the text box, default value AUTO, can be empty; represents the percentage of video height, supports integers from 0 to 100.
                     * @param _line The position of the text box, default value AUTO, can be empty; represents the percentage of video height, supports integers from 0 to 100.
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取The alignment of the text box on the Line. Optional values: START, CENTER, END. Which can be empty.
                     * @return LineAlignment The alignment of the text box on the Line. Optional values: START, CENTER, END. Which can be empty.
                     * 
                     */
                    std::string GetLineAlignment() const;

                    /**
                     * 设置The alignment of the text box on the Line. Optional values: START, CENTER, END. Which can be empty.
                     * @param _lineAlignment The alignment of the text box on the Line. Optional values: START, CENTER, END. Which can be empty.
                     * 
                     */
                    void SetLineAlignment(const std::string& _lineAlignment);

                    /**
                     * 判断参数 LineAlignment 是否已赋值
                     * @return LineAlignment 是否已赋值
                     * 
                     */
                    bool LineAlignmentHasBeenSet() const;

                    /**
                     * 获取The text box is positioned in another direction as a percentage of the video's width. It defaults to AUTO and can be empty.
                     * @return Position The text box is positioned in another direction as a percentage of the video's width. It defaults to AUTO and can be empty.
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置The text box is positioned in another direction as a percentage of the video's width. It defaults to AUTO and can be empty.
                     * @param _position The text box is positioned in another direction as a percentage of the video's width. It defaults to AUTO and can be empty.
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取The alignment of the text box on the Position. Optional values are LINE_LEFT, LINE_RIGHT, CENTER, and AUTO. The default value is AUTO, and it can be empty.
                     * @return PositionAlignment The alignment of the text box on the Position. Optional values are LINE_LEFT, LINE_RIGHT, CENTER, and AUTO. The default value is AUTO, and it can be empty.
                     * 
                     */
                    std::string GetPositionAlignment() const;

                    /**
                     * 设置The alignment of the text box on the Position. Optional values are LINE_LEFT, LINE_RIGHT, CENTER, and AUTO. The default value is AUTO, and it can be empty.
                     * @param _positionAlignment The alignment of the text box on the Position. Optional values are LINE_LEFT, LINE_RIGHT, CENTER, and AUTO. The default value is AUTO, and it can be empty.
                     * 
                     */
                    void SetPositionAlignment(const std::string& _positionAlignment);

                    /**
                     * 判断参数 PositionAlignment 是否已赋值
                     * @return PositionAlignment 是否已赋值
                     * 
                     */
                    bool PositionAlignmentHasBeenSet() const;

                    /**
                     * 获取Text box size, a percentage of video width/height, with values (0, 100), default AUTO, can be empty.
                     * @return CueSize Text box size, a percentage of video width/height, with values (0, 100), default AUTO, can be empty.
                     * 
                     */
                    std::string GetCueSize() const;

                    /**
                     * 设置Text box size, a percentage of video width/height, with values (0, 100), default AUTO, can be empty.
                     * @param _cueSize Text box size, a percentage of video width/height, with values (0, 100), default AUTO, can be empty.
                     * 
                     */
                    void SetCueSize(const std::string& _cueSize);

                    /**
                     * 判断参数 CueSize 是否已赋值
                     * @return CueSize 是否已赋值
                     * 
                     */
                    bool CueSizeHasBeenSet() const;

                    /**
                     * 获取Text alignment, with possible values  START, CENTER, END, LEFT, and RIGHT; the default value is CENTER, which can be empty.
                     * @return TextAlignment Text alignment, with possible values  START, CENTER, END, LEFT, and RIGHT; the default value is CENTER, which can be empty.
                     * 
                     */
                    std::string GetTextAlignment() const;

                    /**
                     * 设置Text alignment, with possible values  START, CENTER, END, LEFT, and RIGHT; the default value is CENTER, which can be empty.
                     * @param _textAlignment Text alignment, with possible values  START, CENTER, END, LEFT, and RIGHT; the default value is CENTER, which can be empty.
                     * 
                     */
                    void SetTextAlignment(const std::string& _textAlignment);

                    /**
                     * 判断参数 TextAlignment 是否已赋值
                     * @return TextAlignment 是否已赋值
                     * 
                     */
                    bool TextAlignmentHasBeenSet() const;

                private:

                    /**
                     * Text color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     */
                    std::string m_textColor;
                    bool m_textColorHasBeenSet;

                    /**
                     * Background color, RGB hexadecimal representation, 6 hexadecimal characters (no # needed).
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * Background opacity parameter, a number from 0 to 100, with 0 being the default for full transparency.
                     */
                    int64_t m_backgroundAlpha;
                    bool m_backgroundAlphaHasBeenSet;

                    /**
                     * Font size, in units of vh (1% of height), default value 0 means automatic.
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * The position of the text box, default value AUTO, can be empty; represents the percentage of video height, supports integers from 0 to 100.
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * The alignment of the text box on the Line. Optional values: START, CENTER, END. Which can be empty.
                     */
                    std::string m_lineAlignment;
                    bool m_lineAlignmentHasBeenSet;

                    /**
                     * The text box is positioned in another direction as a percentage of the video's width. It defaults to AUTO and can be empty.
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * The alignment of the text box on the Position. Optional values are LINE_LEFT, LINE_RIGHT, CENTER, and AUTO. The default value is AUTO, and it can be empty.
                     */
                    std::string m_positionAlignment;
                    bool m_positionAlignmentHasBeenSet;

                    /**
                     * Text box size, a percentage of video width/height, with values (0, 100), default AUTO, can be empty.
                     */
                    std::string m_cueSize;
                    bool m_cueSizeHasBeenSet;

                    /**
                     * Text alignment, with possible values  START, CENTER, END, LEFT, and RIGHT; the default value is CENTER, which can be empty.
                     */
                    std::string m_textAlignment;
                    bool m_textAlignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_WEBVTTFONTSTYLE_H_
