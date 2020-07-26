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
                     */
                    std::string GetFontType() const;

                    /**
                     * 设置Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     * @param FontType Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     */
                    void SetFontType(const std::string& _fontType);

                    /**
                     * 判断参数 FontType 是否已赋值
                     * @return FontType 是否已赋值
                     */
                    bool FontTypeHasBeenSet() const;

                    /**
                     * 获取Font size in Npx format where N is a numeric value.
                     * @return FontSize Font size in Npx format where N is a numeric value.
                     */
                    std::string GetFontSize() const;

                    /**
                     * 设置Font size in Npx format where N is a numeric value.
                     * @param FontSize Font size in Npx format where N is a numeric value.
                     */
                    void SetFontSize(const std::string& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     * @return FontColor Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     * @param FontColor Font color in 0xRRGGBB format. Default value: 0xFFFFFF (white).
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     * @return FontAlpha Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     */
                    double GetFontAlpha() const;

                    /**
                     * 设置Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     * @param FontAlpha Text transparency. Value range: (0, 1]
<li>0: Completely transparent</li>
<li>1: Completely opaque</li>
                     */
                    void SetFontAlpha(const double& _fontAlpha);

                    /**
                     * 判断参数 FontAlpha 是否已赋值
                     * @return FontAlpha 是否已赋值
                     */
                    bool FontAlphaHasBeenSet() const;

                private:

                    /**
                     * Font type. Currently, two types are supported:
<li>simkai.ttf: Both Chinese and English are supported;</li>
<li>arial.ttf: Only English is supported.</li>
                     */
                    std::string m_fontType;
                    bool m_fontTypeHasBeenSet;

                    /**
                     * Font size in Npx format where N is a numeric value.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEXTWATERMARKTEMPLATEINPUTFORUPDATE_H_
