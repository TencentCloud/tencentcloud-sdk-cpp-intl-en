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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Universal list filter criteria (multiple Filters are in an AND relationship, while multiple value_list elements within the same Filter are in an OR relationship; for BETWEEN, value_list must contain exactly 2 elements, representing an inclusive interval [start, end])
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter field name
                     * @return Name Filter field name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter field name
                     * @param _name Filter field name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Operator, default IN (backward compatibility)<table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>Belongs to value_list (default value, backward compatibility; value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>Does not belong to value_list (value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_BETWEEN</td><td>2</td><td>Between (inclusive interval [start, end]; value_list must contain exactly 2 elements, one of which can be empty to indicate a unilateral open interval)</td></tr></table>
                     * @return Operator Operator, default IN (backward compatibility)<table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>Belongs to value_list (default value, backward compatibility; value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>Does not belong to value_list (value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_BETWEEN</td><td>2</td><td>Between (inclusive interval [start, end]; value_list must contain exactly 2 elements, one of which can be empty to indicate a unilateral open interval)</td></tr></table>
                     * 
                     */
                    int64_t GetOperator() const;

                    /**
                     * 设置Operator, default IN (backward compatibility)<table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>Belongs to value_list (default value, backward compatibility; value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>Does not belong to value_list (value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_BETWEEN</td><td>2</td><td>Between (inclusive interval [start, end]; value_list must contain exactly 2 elements, one of which can be empty to indicate a unilateral open interval)</td></tr></table>
                     * @param _operator Operator, default IN (backward compatibility)<table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>Belongs to value_list (default value, backward compatibility; value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>Does not belong to value_list (value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_BETWEEN</td><td>2</td><td>Between (inclusive interval [start, end]; value_list must contain exactly 2 elements, one of which can be empty to indicate a unilateral open interval)</td></tr></table>
                     * 
                     */
                    void SetOperator(const int64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Filter value array
                     * @return ValueList Filter value array
                     * 
                     */
                    std::vector<std::string> GetValueList() const;

                    /**
                     * 设置Filter value array
                     * @param _valueList Filter value array
                     * 
                     */
                    void SetValueList(const std::vector<std::string>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                private:

                    /**
                     * Filter field name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Operator, default IN (backward compatibility)<table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>Belongs to value_list (default value, backward compatibility; value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>Does not belong to value_list (value_list cannot be empty)</td></tr><tr><td>FILTER_OPERATOR_BETWEEN</td><td>2</td><td>Between (inclusive interval [start, end]; value_list must contain exactly 2 elements, one of which can be empty to indicate a unilateral open interval)</td></tr></table>
                     */
                    int64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Filter value array
                     */
                    std::vector<std::string> m_valueList;
                    bool m_valueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_
