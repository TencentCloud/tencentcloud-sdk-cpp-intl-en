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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_

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
                * Text watermarking template
                */
                class TextWatermarkTemplateInputForUpdate : public AbstractModel
                {
                public:
                    TextWatermarkTemplateInputForUpdate();
                    ~TextWatermarkTemplateInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     * @return FontType Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     * 
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     * @param _fontType Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
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
                     * 获取Font size, in the format of Npx. N is a numerical value with a value range of [0, 1] or [8, 4096].
                     * @return FontSize Font size, in the format of Npx. N is a numerical value with a value range of [0, 1] or [8, 4096].
                     * 
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置Font size, in the format of Npx. N is a numerical value with a value range of [0, 1] or [8, 4096].
                     * @param _fontSize Font size, in the format of Npx. N is a numerical value with a value range of [0, 1] or [8, 4096].
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
                     * 获取Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     * @return FontColor Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     * 
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     * @param _fontColor Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
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
                     * 获取Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     * @return FontAlpha Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     * 
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     * @param _fontAlpha Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
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
                     * 获取Text content, up to 100 characters.
                     * @return TextContent Text content, up to 100 characters.
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置Text content, up to 100 characters.
                     * @param _textContent Text content, up to 100 characters.
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                private:

                    /**
                     * Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * Font size, in the format of Npx. N is a numerical value with a value range of [0, 1] or [8, 4096].
                     */
                    std::string m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     */
                    double m_fontAlpha;
                    bool m_fontAlphaHasBeenSet;

                    /**
                     * Text content, up to 100 characters.
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_
