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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULTITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULTITEM_H_

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
                * Comparison Result Item
                */
                class CompareResultItem : public AbstractModel
                {
                public:
                    CompareResultItem();
                    ~CompareResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Comparison Result, 1 is true, 2 is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FixResult Comparison Result, 1 is true, 2 is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetFixResult() const;

                    /**
                     * 设置Comparison Result, 1 is true, 2 is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fixResult Comparison Result, 1 is true, 2 is false
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFixResult(const uint64_t& _fixResult);

                    /**
                     * 判断参数 FixResult 是否已赋值
                     * @return FixResult 是否已赋值
                     * 
                     */
                    bool FixResultHasBeenSet() const;

                    /**
                     * 获取Quality SQL Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ResultValue Quality SQL Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResultValue() const;

                    /**
                     * 设置Quality SQL Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _resultValue Quality SQL Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResultValue(const std::string& _resultValue);

                    /**
                     * 判断参数 ResultValue 是否已赋值
                     * @return ResultValue 是否已赋值
                     * 
                     */
                    bool ResultValueHasBeenSet() const;

                    /**
                     * 获取Threshold List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Values Threshold List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ThresholdValue> GetValues() const;

                    /**
                     * 设置Threshold List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _values Threshold List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValues(const std::vector<ThresholdValue>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Comparison Operation Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator Comparison Operation Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Comparison Operation Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator Comparison Operation Type
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
                     * 获取Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompareType Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCompareType() const;

                    /**
                     * 设置Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _compareType Comparison Type
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
                     * 获取Value Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ValueComputeType Value Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetValueComputeType() const;

                    /**
                     * 设置Value Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _valueComputeType Value Comparison Type
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

                private:

                    /**
                     * Comparison Result, 1 is true, 2 is false
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_fixResult;
                    bool m_fixResultHasBeenSet;

                    /**
                     * Quality SQL Execution Result
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_resultValue;
                    bool m_resultValueHasBeenSet;

                    /**
                     * Threshold List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<ThresholdValue> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Comparison Operation Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * Value Comparison Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_valueComputeType;
                    bool m_valueComputeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULTITEM_H_
