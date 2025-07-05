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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKCHAR_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKCHAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 
                */
                class WaterMarkChar : public AbstractModel
                {
                public:
                    WaterMarkChar();
                    ~WaterMarkChar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The Y coordinate of the text watermark from the top left.
                     * @return Top The Y coordinate of the text watermark from the top left.
                     * 
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置The Y coordinate of the text watermark from the top left.
                     * @param _top The Y coordinate of the text watermark from the top left.
                     * 
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取The X coordinate of the text watermark from the top left.
                     * @return Left The X coordinate of the text watermark from the top left.
                     * 
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置The X coordinate of the text watermark from the top left.
                     * @param _left The X coordinate of the text watermark from the top left.
                     * 
                     */
                    void SetLeft(const uint64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取The watermark width (pixels).
                     * @return Width The watermark width (pixels).
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The watermark width (pixels).
                     * @param _width The watermark width (pixels).
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The watermark height (pixels).
                     * @return Height The watermark height (pixels).
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The watermark height (pixels).
                     * @param _height The watermark height (pixels).
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The text.
                     * @return Chars The text.
                     * 
                     */
                    std::string GetChars() const;

                    /**
                     * 设置The text.
                     * @param _chars The text.
                     * 
                     */
                    void SetChars(const std::string& _chars);

                    /**
                     * 判断参数 Chars 是否已赋值
                     * @return Chars 是否已赋值
                     * 
                     */
                    bool CharsHasBeenSet() const;

                    /**
                     * 获取The font size (pixels). The default value is `14`.
                     * @return FontSize The font size (pixels). The default value is `14`.
                     * 
                     */
                    uint64_t GetFontSize() const;

                    /**
                     * 设置The font size (pixels). The default value is `14`.
                     * @param _fontSize The font size (pixels). The default value is `14`.
                     * 
                     */
                    void SetFontSize(const uint64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     * 
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取The text color. The default color is white.
                     * @return FontColor The text color. The default color is white.
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置The text color. The default color is white.
                     * @param _fontColor The text color. The default color is white.
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
                     * 获取The background color. If this parameter is empty, the background will be transparent (default).
                     * @return BackGroundColor The background color. If this parameter is empty, the background will be transparent (default).
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置The background color. If this parameter is empty, the background will be transparent (default).
                     * @param _backGroundColor The background color. If this parameter is empty, the background will be transparent (default).
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                private:

                    /**
                     * The Y coordinate of the text watermark from the top left.
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * The X coordinate of the text watermark from the top left.
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * The watermark width (pixels).
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The watermark height (pixels).
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The text.
                     */
                    std::string m_chars;
                    bool m_charsHasBeenSet;

                    /**
                     * The font size (pixels). The default value is `14`.
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * The text color. The default color is white.
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * The background color. If this parameter is empty, the background will be transparent (default).
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKCHAR_H_
