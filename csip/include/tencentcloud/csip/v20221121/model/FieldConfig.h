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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FIELDCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FIELDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/FieldStyle.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset detail field configuration
                */
                class FieldConfig : public AbstractModel
                {
                public:
                    FieldConfig();
                    ~FieldConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Field display</p>
                     * @return Label <p>Field display</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>Field display</p>
                     * @param _label <p>Field display</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>Field value</p>
                     * @return Value <p>Field value</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Field value</p>
                     * @param _value <p>Field value</p>
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
                     * 获取<p>Field style configuration</p>
                     * @return Style <p>Field style configuration</p>
                     * 
                     */
                    FieldStyle GetStyle() const;

                    /**
                     * 设置<p>Field style configuration</p>
                     * @param _style <p>Field style configuration</p>
                     * 
                     */
                    void SetStyle(const FieldStyle& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>Field content quantity.</p>
                     * @return ValueCount <p>Field content quantity.</p>
                     * 
                     */
                    uint64_t GetValueCount() const;

                    /**
                     * 设置<p>Field content quantity.</p>
                     * @param _valueCount <p>Field content quantity.</p>
                     * 
                     */
                    void SetValueCount(const uint64_t& _valueCount);

                    /**
                     * 判断参数 ValueCount 是否已赋值
                     * @return ValueCount 是否已赋值
                     * 
                     */
                    bool ValueCountHasBeenSet() const;

                private:

                    /**
                     * <p>Field display</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Field value</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>Field style configuration</p>
                     */
                    FieldStyle m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>Field content quantity.</p>
                     */
                    uint64_t m_valueCount;
                    bool m_valueCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FIELDCONFIG_H_
