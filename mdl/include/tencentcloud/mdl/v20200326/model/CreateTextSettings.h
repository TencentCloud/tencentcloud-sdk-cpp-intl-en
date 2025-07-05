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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATETEXTSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATETEXTSETTINGS_H_

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
                * Watermark text settings
                */
                class CreateTextSettings : public AbstractModel
                {
                public:
                    CreateTextSettings();
                    ~CreateTextSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text
                     * @return Text Text
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Text
                     * @param _text Text
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * @return Location Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * @param _location Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * @return XPos The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * 
                     */
                    int64_t GetXPos() const;

                    /**
                     * 设置The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * @param _xPos The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     * 
                     */
                    void SetXPos(const int64_t& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * @return YPos The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * 
                     */
                    int64_t GetYPos() const;

                    /**
                     * 设置The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * @param _yPos The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     * 
                     */
                    void SetYPos(const int64_t& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取Font size. Value range: 25-50.
                     * @return FontSize Font size. Value range: 25-50.
                     * 
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置Font size. Value range: 25-50.
                     * @param _fontSize Font size. Value range: 25-50.
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
                     * 获取Font color, which is an RGB color value. Default value: 0x000000.
                     * @return FontColor Font color, which is an RGB color value. Default value: 0x000000.
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置Font color, which is an RGB color value. Default value: 0x000000.
                     * @param _fontColor Font color, which is an RGB color value. Default value: 0x000000.
                     * 
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     * 
                     */
                    bool FontColorHasBeenSet() const;

                private:

                    /**
                     * Text
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Origin. Valid values: TOP_LEFT, BOTTOM_LEFT, TOP_RIGHT, BOTTOM_RIGHT.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * The watermark’s horizontal distance from the origin as a percentage of the video width. Value range: 0-100. Default: 10.
                     */
                    int64_t m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The watermark’s vertical distance from the origin as a percentage of the video height. Value range: 0-100. Default: 10.
                     */
                    int64_t m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Font size. Value range: 25-50.
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * Font color, which is an RGB color value. Default value: 0x000000.
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATETEXTSETTINGS_H_
