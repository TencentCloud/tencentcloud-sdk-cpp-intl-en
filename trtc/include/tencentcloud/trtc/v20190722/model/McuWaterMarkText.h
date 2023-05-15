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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKTEXT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKTEXT_H_

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
                * The text watermark configuration.
                */
                class McuWaterMarkText : public AbstractModel
                {
                public:
                    McuWaterMarkText();
                    ~McuWaterMarkText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The text.
                     * @return Text The text.
                     */
                    std::string GetText() const;

                    /**
                     * 设置The text.
                     * @param Text The text.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取The watermark width (pixels).
                     * @return WaterMarkWidth The watermark width (pixels).
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置The watermark width (pixels).
                     * @param WaterMarkWidth The watermark width (pixels).
                     */
                    void SetWaterMarkWidth(const uint64_t& _waterMarkWidth);

                    /**
                     * 判断参数 WaterMarkWidth 是否已赋值
                     * @return WaterMarkWidth 是否已赋值
                     */
                    bool WaterMarkWidthHasBeenSet() const;

                    /**
                     * 获取The watermark height (pixels).
                     * @return WaterMarkHeight The watermark height (pixels).
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置The watermark height (pixels).
                     * @param WaterMarkHeight The watermark height (pixels).
                     */
                    void SetWaterMarkHeight(const uint64_t& _waterMarkHeight);

                    /**
                     * 判断参数 WaterMarkHeight 是否已赋值
                     * @return WaterMarkHeight 是否已赋值
                     */
                    bool WaterMarkHeightHasBeenSet() const;

                    /**
                     * 获取The horizontal offset (pixels) of the watermark.
                     * @return LocationX The horizontal offset (pixels) of the watermark.
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置The horizontal offset (pixels) of the watermark.
                     * @param LocationX The horizontal offset (pixels) of the watermark.
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取The vertical offset (pixels) of the watermark.
                     * @return LocationY The vertical offset (pixels) of the watermark.
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置The vertical offset (pixels) of the watermark.
                     * @param LocationY The vertical offset (pixels) of the watermark.
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取The font size.
                     * @return FontSize The font size.
                     */
                    uint64_t GetFontSize() const;

                    /**
                     * 设置The font size.
                     * @param FontSize The font size.
                     */
                    void SetFontSize(const uint64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取The text color. The default color is white. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     * @return FontColor The text color. The default color is white. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置The text color. The default color is white. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     * @param FontColor The text color. The default color is white. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取The text fill color. If you do not specify this parameter, the fill color will be transparent. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     * @return BackGroundColor The text fill color. If you do not specify this parameter, the fill color will be transparent. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置The text fill color. If you do not specify this parameter, the fill color will be transparent. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     * @param BackGroundColor The text fill color. If you do not specify this parameter, the fill color will be transparent. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     */
                    bool BackGroundColorHasBeenSet() const;

                private:

                    /**
                     * The text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The watermark width (pixels).
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * The watermark height (pixels).
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * The horizontal offset (pixels) of the watermark.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * The vertical offset (pixels) of the watermark.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * The font size.
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * The text color. The default color is white. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * The text fill color. If you do not specify this parameter, the fill color will be transparent. Values for some commonly used colors: Red: `0xcc0033`; yellow: `0xcc9900`; green: `0xcccc33`; blue: `0x99CCFF`; black: `0x000000`; white: `0xFFFFFF`; gray: `0x999999`.	
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKTEXT_H_
