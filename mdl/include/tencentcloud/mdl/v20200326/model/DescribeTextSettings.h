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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBETEXTSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBETEXTSETTINGS_H_

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
                class DescribeTextSettings : public AbstractModel
                {
                public:
                    DescribeTextSettings();
                    ~DescribeTextSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text
                     * @return Text Text
                     */
                    std::string GetText() const;

                    /**
                     * 设置Text
                     * @param Text Text
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Origin
                     * @return Location Origin
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Origin
                     * @param Location Origin
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取The watermark image’s horizontal distance from the origin as a percentage of the video width
                     * @return XPos The watermark image’s horizontal distance from the origin as a percentage of the video width
                     */
                    int64_t GetXPos() const;

                    /**
                     * 设置The watermark image’s horizontal distance from the origin as a percentage of the video width
                     * @param XPos The watermark image’s horizontal distance from the origin as a percentage of the video width
                     */
                    void SetXPos(const int64_t& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取The watermark image’s vertical distance from the origin as a percentage of the video height
                     * @return YPos The watermark image’s vertical distance from the origin as a percentage of the video height
                     */
                    int64_t GetYPos() const;

                    /**
                     * 设置The watermark image’s vertical distance from the origin as a percentage of the video height
                     * @param YPos The watermark image’s vertical distance from the origin as a percentage of the video height
                     */
                    void SetYPos(const int64_t& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取Font size
                     * @return FontSize Font size
                     */
                    int64_t GetFontSize() const;

                    /**
                     * 设置Font size
                     * @param FontSize Font size
                     */
                    void SetFontSize(const int64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取Font color
                     * @return FontColor Font color
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置Font color
                     * @param FontColor Font color
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     */
                    bool FontColorHasBeenSet() const;

                private:

                    /**
                     * Text
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Origin
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * The watermark image’s horizontal distance from the origin as a percentage of the video width
                     */
                    int64_t m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The watermark image’s vertical distance from the origin as a percentage of the video height
                     */
                    int64_t m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Font size
                     */
                    int64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * Font color
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBETEXTSETTINGS_H_
