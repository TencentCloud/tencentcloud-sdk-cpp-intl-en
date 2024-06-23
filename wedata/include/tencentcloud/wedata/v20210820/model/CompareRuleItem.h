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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULEITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ThresholdValue.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Comparison Criterion
                */
                class CompareRuleItem : public AbstractModel
                {
                public:
                    CompareRuleItem();
                    ~CompareRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comparison Type 1. Fixed value  2. Fluctuation Value  3. Numeric Range Comparison  4. Enumeration Range Comparison  5. No Comparison
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompareType Comparison Type 1. Fixed value  2. Fluctuation Value  3. Numeric Range Comparison  4. Enumeration Range Comparison  5. No Comparison
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置Comparison Type 1. Fixed value  2. Fluctuation Value  3. Numeric Range Comparison  4. Enumeration Range Comparison  5. No Comparison
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compareType Comparison Type 1. Fixed value  2. Fluctuation Value  3. Numeric Range Comparison  4. Enumeration Range Comparison  5. No Comparison
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompareType(const uint64_t& _compareType);

                    /**
                     * 判断参数 CompareType 是否已赋值
                     * @return CompareType 是否已赋值
                     * 
                     */
                    bool CompareTypeHasBeenSet() const;

                    /**
                     * 获取Comparison Operation Type
<  <=  ==  =>  > !=
IRLCRO: Within the interval (left closed, right open)
IRLORC: Within the interval (left open, right closed)
IRLCRC: Within the interval (left closed, right closed)
IRLORO: Within the interval (left open, right open)
NRLCRO: Not within the range (left-closed, right-open)
NRLORC: Not within the range (left-open, right-closed)
NRLCRC: Not within the range (left-closed, right-closed)
NRLORO: Not within the range (left-open, right-open)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator Comparison Operation Type
<  <=  ==  =>  > !=
IRLCRO: Within the interval (left closed, right open)
IRLORC: Within the interval (left open, right closed)
IRLCRC: Within the interval (left closed, right closed)
IRLORO: Within the interval (left open, right open)
NRLCRO: Not within the range (left-closed, right-open)
NRLORC: Not within the range (left-open, right-closed)
NRLCRC: Not within the range (left-closed, right-closed)
NRLORO: Not within the range (left-open, right-open)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Comparison Operation Type
<  <=  ==  =>  > !=
IRLCRO: Within the interval (left closed, right open)
IRLORC: Within the interval (left open, right closed)
IRLCRC: Within the interval (left closed, right closed)
IRLORO: Within the interval (left open, right open)
NRLCRO: Not within the range (left-closed, right-open)
NRLORC: Not within the range (left-open, right-closed)
NRLCRC: Not within the range (left-closed, right-closed)
NRLORO: Not within the range (left-open, right-open)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator Comparison Operation Type
<  <=  ==  =>  > !=
IRLCRO: Within the interval (left closed, right open)
IRLORC: Within the interval (left open, right closed)
IRLCRC: Within the interval (left closed, right closed)
IRLORO: Within the interval (left open, right open)
NRLCRO: Not within the range (left-closed, right-open)
NRLORC: Not within the range (left-open, right-closed)
NRLCRC: Not within the range (left-closed, right-closed)
NRLORO: Not within the range (left-open, right-open)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Quality statistical value types 1. Absolute Value 2. Increase 3. Decline 4. _C includes 5. N_C does not include
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ValueComputeType Quality statistical value types 1. Absolute Value 2. Increase 3. Decline 4. _C includes 5. N_C does not include
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetValueComputeType() const;

                    /**
                     * 设置Quality statistical value types 1. Absolute Value 2. Increase 3. Decline 4. _C includes 5. N_C does not include
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _valueComputeType Quality statistical value types 1. Absolute Value 2. Increase 3. Decline 4. _C includes 5. N_C does not include
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValueComputeType(const uint64_t& _valueComputeType);

                    /**
                     * 判断参数 ValueComputeType 是否已赋值
                     * @return ValueComputeType 是否已赋值
                     * 
                     */
                    bool ValueComputeTypeHasBeenSet() const;

                    /**
                     * 获取Comparison threshold list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ValueList Comparison threshold list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ThresholdValue> GetValueList() const;

                    /**
                     * 设置Comparison threshold list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _valueList Comparison threshold list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValueList(const std::vector<ThresholdValue>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                private:

                    /**
                     * Comparison Type 1. Fixed value  2. Fluctuation Value  3. Numeric Range Comparison  4. Enumeration Range Comparison  5. No Comparison
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * Comparison Operation Type
<  <=  ==  =>  > !=
IRLCRO: Within the interval (left closed, right open)
IRLORC: Within the interval (left open, right closed)
IRLCRC: Within the interval (left closed, right closed)
IRLORO: Within the interval (left open, right open)
NRLCRO: Not within the range (left-closed, right-open)
NRLORC: Not within the range (left-open, right-closed)
NRLCRC: Not within the range (left-closed, right-closed)
NRLORO: Not within the range (left-open, right-open)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Quality statistical value types 1. Absolute Value 2. Increase 3. Decline 4. _C includes 5. N_C does not include
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_valueComputeType;
                    bool m_valueComputeTypeHasBeenSet;

                    /**
                     * Comparison threshold list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<ThresholdValue> m_valueList;
                    bool m_valueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERULEITEM_H_
