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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_TEXTMARKCONFIG_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_TEXTMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The watermark text.
Used by actions: GetWatermark.
                */
                class TextMarkConfig : public AbstractModel
                {
                public:
                    TextMarkConfig();
                    ~TextMarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _text The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The watermark text color. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Color The watermark text color. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置The watermark text color. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _color The watermark text color. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * The watermark text. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The watermark text color. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_TEXTMARKCONFIG_H_
