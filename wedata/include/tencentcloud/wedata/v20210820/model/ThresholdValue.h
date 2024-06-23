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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_THRESHOLDVALUE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_THRESHOLDVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data quality threshold
                */
                class ThresholdValue : public AbstractModel
                {
                public:
                    ThresholdValue();
                    ~ThresholdValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Threshold type 1. Low threshold 2. High threshold 3. Normal threshold 4. Enumerated values
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ValueType Threshold type 1. Low threshold 2. High threshold 3. Normal threshold 4. Enumerated values
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetValueType() const;

                    /**
                     * 设置Threshold type 1. Low threshold 2. High threshold 3. Normal threshold 4. Enumerated values
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _valueType Threshold type 1. Low threshold 2. High threshold 3. Normal threshold 4. Enumerated values
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValueType(const uint64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取ThresholdNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Value ThresholdNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置ThresholdNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _value ThresholdNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Threshold type 1. Low threshold 2. High threshold 3. Normal threshold 4. Enumerated values
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * ThresholdNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_THRESHOLDVALUE_H_
