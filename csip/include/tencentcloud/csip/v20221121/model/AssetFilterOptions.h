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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETFILTEROPTIONS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETFILTEROPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset filter options
                */
                class AssetFilterOptions : public AbstractModel
                {
                public:
                    AssetFilterOptions();
                    ~AssetFilterOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Display value.</p>
                     * @return Text <p>Display value.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Display value.</p>
                     * @param _text <p>Display value.</p>
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
                     * 获取<p>Actual value.</p>
                     * @return Value <p>Actual value.</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Actual value.</p>
                     * @param _value <p>Actual value.</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>Style</p>
                     * @return Style <p>Style</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>Style</p>
                     * @param _style <p>Style</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * <p>Display value.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Actual value.</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Style</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETFILTEROPTIONS_H_
