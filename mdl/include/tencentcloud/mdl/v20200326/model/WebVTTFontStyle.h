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
                     * 获取Text color, 6 hexadecimal characters in RGB (not required #).
                     * @return TextColor Text color, 6 hexadecimal characters in RGB (not required #).
                     * 
                     */
                    std::string GetTextColor() const;

                    /**
                     * 设置Text color, 6 hexadecimal characters in RGB (not required #).
                     * @param _textColor Text color, 6 hexadecimal characters in RGB (not required #).
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
                     * 获取Background color, 6 hexadecimal characters in RGB (not required #)
                     * @return BackgroundColor Background color, 6 hexadecimal characters in RGB (not required #)
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置Background color, 6 hexadecimal characters in RGB (not required #)
                     * @param _backgroundColor Background color, 6 hexadecimal characters in RGB (not required #)
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
                     * 获取Background opacity parameter. A number from 0 to 100. The default value is 0 (fully transparent).
                     * @return BackgroundAlpha Background opacity parameter. A number from 0 to 100. The default value is 0 (fully transparent).
                     * 
                     */
                    int64_t GetBackgroundAlpha() const;

                    /**
                     * 设置Background opacity parameter. A number from 0 to 100. The default value is 0 (fully transparent).
                     * @param _backgroundAlpha Background opacity parameter. A number from 0 to 100. The default value is 0 (fully transparent).
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
                     * 获取Font size, in vh (1% of height), default value 0 means auto.
                     * @return FontSize Font size, in vh (1% of height), default value 0 means auto.
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置Font size, in vh (1% of height), default value 0 means auto.
                     * @param _fontSize Font size, in vh (1% of height), default value 0 means auto.
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
                     * 获取The position of the text box, default value AUTO, can be empty; it represents the percentage of video height and supports integers from 0 to 100.
                     * @return Line The position of the text box, default value AUTO, can be empty; it represents the percentage of video height and supports integers from 0 to 100.
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置The position of the text box, default value AUTO, can be empty; it represents the percentage of video height and supports integers from 0 to 100.
                     * @param _line The position of the text box, default value AUTO, can be empty; it represents the percentage of video height and supports integers from 0 to 100.
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
                     * 获取The alignment mode of the text box on the Line. Available values: START, CENTER, END. Default: START. Can be blank.
                     * @return LineAlignment The alignment mode of the text box on the Line. Available values: START, CENTER, END. Default: START. Can be blank.
                     * 
                     */
                    std::string GetLineAlignment() const;

                    /**
                     * 设置The alignment mode of the text box on the Line. Available values: START, CENTER, END. Default: START. Can be blank.
                     * @param _lineAlignment The alignment mode of the text box on the Line. Available values: START, CENTER, END. Default: START. Can be blank.
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
                     * 获取The position of the text box in another direction is a percentage of the video width or height, defaults to AUTO, and can be empty.
                     * @return Position The position of the text box in another direction is a percentage of the video width or height, defaults to AUTO, and can be empty.
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置The position of the text box in another direction is a percentage of the video width or height, defaults to AUTO, and can be empty.
                     * @param _position The position of the text box in another direction is a percentage of the video width or height, defaults to AUTO, and can be empty.
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
                     * 获取The alignment mode of the text box on Position. Available values: LINE_LEFT, LINE_RIGHT, CENTER, AUTO. Default value: AUTO. Can be empty.
                     * @return PositionAlignment The alignment mode of the text box on Position. Available values: LINE_LEFT, LINE_RIGHT, CENTER, AUTO. Default value: AUTO. Can be empty.
                     * 
                     */
                    std::string GetPositionAlignment() const;

                    /**
                     * 设置The alignment mode of the text box on Position. Available values: LINE_LEFT, LINE_RIGHT, CENTER, AUTO. Default value: AUTO. Can be empty.
                     * @param _positionAlignment The alignment mode of the text box on Position. Available values: LINE_LEFT, LINE_RIGHT, CENTER, AUTO. Default value: AUTO. Can be empty.
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
                     * 获取The size of the text box, a percentage of video width/height, value (0, 100], default AUTO, can be empty.
                     * @return CueSize The size of the text box, a percentage of video width/height, value (0, 100], default AUTO, can be empty.
                     * 
                     */
                    std::string GetCueSize() const;

                    /**
                     * 设置The size of the text box, a percentage of video width/height, value (0, 100], default AUTO, can be empty.
                     * @param _cueSize The size of the text box, a percentage of video width/height, value (0, 100], default AUTO, can be empty.
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
                     * 获取Text alignment mode, available values START, CENTER, END, LEFT, RIGHT; default value CENTER, can be empty.
                     * @return TextAlignment Text alignment mode, available values START, CENTER, END, LEFT, RIGHT; default value CENTER, can be empty.
                     * 
                     */
                    std::string GetTextAlignment() const;

                    /**
                     * 设置Text alignment mode, available values START, CENTER, END, LEFT, RIGHT; default value CENTER, can be empty.
                     * @param _textAlignment Text alignment mode, available values START, CENTER, END, LEFT, RIGHT; default value CENTER, can be empty.
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
                     * Text color, 6 hexadecimal characters in RGB (not required #).
                     */
                    std::string m_textColor;
                    bool m_textColorHasBeenSet;

                    /**
                     * Background color, 6 hexadecimal characters in RGB (not required #)
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * Background opacity parameter. A number from 0 to 100. The default value is 0 (fully transparent).
                     */
                    int64_t m_backgroundAlpha;
                    bool m_backgroundAlphaHasBeenSet;

                    /**
                     * Font size, in vh (1% of height), default value 0 means auto.
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * The position of the text box, default value AUTO, can be empty; it represents the percentage of video height and supports integers from 0 to 100.
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * The alignment mode of the text box on the Line. Available values: START, CENTER, END. Default: START. Can be blank.
                     */
                    std::string m_lineAlignment;
                    bool m_lineAlignmentHasBeenSet;

                    /**
                     * The position of the text box in another direction is a percentage of the video width or height, defaults to AUTO, and can be empty.
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * The alignment mode of the text box on Position. Available values: LINE_LEFT, LINE_RIGHT, CENTER, AUTO. Default value: AUTO. Can be empty.
                     */
                    std::string m_positionAlignment;
                    bool m_positionAlignmentHasBeenSet;

                    /**
                     * The size of the text box, a percentage of video width/height, value (0, 100], default AUTO, can be empty.
                     */
                    std::string m_cueSize;
                    bool m_cueSizeHasBeenSet;

                    /**
                     * Text alignment mode, available values START, CENTER, END, LEFT, RIGHT; default value CENTER, can be empty.
                     */
                    std::string m_textAlignment;
                    bool m_textAlignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_WEBVTTFONTSTYLE_H_
