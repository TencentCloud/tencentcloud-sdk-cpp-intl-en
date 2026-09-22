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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTWATERMARKTEMPLATEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTWATERMARKTEMPLATEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Text watermarking template
                */
                class TextWatermarkTemplateInput : public AbstractModel
                {
                public:
                    TextWatermarkTemplateInput();
                    ~TextWatermarkTemplateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Font type. Currently, two are supported:
<li>simkai.ttf: Supports Chinese and English;</li>
<li>arial.ttf: English only.</li>
                     * @return FontType Font type. Currently, two are supported:
<li>simkai.ttf: Supports Chinese and English;</li>
<li>arial.ttf: English only.</li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置Font type. Currently, two are supported:
<li>simkai.ttf: Supports Chinese and English;</li>
<li>arial.ttf: English only.</li>
                     * @param _fontType Font type. Currently, two are supported:
<li>simkai.ttf: Supports Chinese and English;</li>
<li>arial.ttf: English only.</li>
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
                     * 获取Font size. Format: Npx, where N is a numerical value.
                     * @return FontSize Font size. Format: Npx, where N is a numerical value.
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置Font size. Format: Npx, where N is a numerical value.
                     * @param _fontSize Font size. Format: Npx, where N is a numerical value.
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
                     * @return FontColor Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
                     * @param _fontColor Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
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
                     * 获取Text opacity, value ranges from 0 to 1.
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 1.
                     * @return FontAlpha Text opacity, value ranges from 0 to 1.
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 1.
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置Text opacity, value ranges from 0 to 1.
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 1.
                     * @param _fontAlpha Text opacity, value ranges from 0 to 1.
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 1.
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
                     * Font type. Currently, two are supported:
<li>simkai.ttf: Supports Chinese and English;</li>
<li>arial.ttf: English only.</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * Font size. Format: Npx, where N is a numerical value.
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * Font color. Format: 0xRRGGBB. Default value: 0xFFFFFF (white).
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * Text opacity, value ranges from 0 to 1.
<li>0: completely transparent.</li>
<li>1: completely opaque.</li>
Default value: 1.
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTWATERMARKTEMPLATEINPUT_H_
