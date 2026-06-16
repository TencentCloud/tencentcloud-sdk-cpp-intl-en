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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUECONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/EmptyValue.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Empty value display style configuration structure
                */
                class EmptyValueConfig : public AbstractModel
                {
                public:
                    EmptyValueConfig();
                    ~EmptyValueConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Numeric value field null style configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Number Numeric value field null style configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EmptyValue GetNumber() const;

                    /**
                     * 设置Numeric value field null style configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _number Numeric value field null style configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumber(const EmptyValue& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Style configuration for empty string fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return String Style configuration for empty string fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EmptyValue GetString() const;

                    /**
                     * 设置Style configuration for empty string fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _string Style configuration for empty string fields
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetString(const EmptyValue& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                private:

                    /**
                     * Numeric value field null style configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EmptyValue m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Style configuration for empty string fields
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EmptyValue m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EMPTYVALUECONFIG_H_
