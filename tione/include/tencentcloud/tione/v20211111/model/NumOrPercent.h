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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_NUMORPERCENT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_NUMORPERCENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Percentage or quantity.
                */
                class NumOrPercent : public AbstractModel
                {
                public:
                    NumOrPercent();
                    ~NumOrPercent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values: Num and Percent, which indicate quantity and percentage respectively. The default value is Num.
                     * @return Type Valid values: Num and Percent, which indicate quantity and percentage respectively. The default value is Num.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Valid values: Num and Percent, which indicate quantity and percentage respectively. The default value is Num.
                     * @param _type Valid values: Num and Percent, which indicate quantity and percentage respectively. The default value is Num.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Numeric value.
                     * @return Value Numeric value.
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Numeric value.
                     * @param _value Numeric value.
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Valid values: Num and Percent, which indicate quantity and percentage respectively. The default value is Num.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Numeric value.
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_NUMORPERCENT_H_
