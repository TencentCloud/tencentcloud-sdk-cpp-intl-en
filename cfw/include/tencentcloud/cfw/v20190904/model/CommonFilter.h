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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Common filters for search
                */
                class CommonFilter : public AbstractModel
                {
                public:
                    CommonFilter();
                    ~CommonFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Search key.
                     * @return Name Search key.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search key.
                     * @param Name Search key.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Search values.
                     * @return Values Search values.
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Search values.
                     * @param Values Search values.
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取Enum of integers that represent relations between Name and Values.
enum FilterOperatorType {
    // Invalid
    FILTER_OPERATOR_TYPE_INVALID = 0;
    // Equal to
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    // Greater than
    FILTER_OPERATOR_TYPE_GREATER = 2;
    // Less than
    FILTER_OPERATOR_TYPE_LESS = 3;
    // Greater than or equal to
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    // Less than or equal to
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    // Not equal to
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    // In (contained in the array)
    FILTER_OPERATOR_TYPE_IN = 7;
    // Not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    // Fuzzily matched
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
    // Existing
    FILTER_OPERATOR_TYPE_EXIST = 10;
    // Not existing
    FILTER_OPERATOR_TYPE_NOT_EXIST = 11;
    // Regular
    FILTER_OPERATOR_TYPE_REGULAR = 12;
}
                     * @return OperatorType Enum of integers that represent relations between Name and Values.
enum FilterOperatorType {
    // Invalid
    FILTER_OPERATOR_TYPE_INVALID = 0;
    // Equal to
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    // Greater than
    FILTER_OPERATOR_TYPE_GREATER = 2;
    // Less than
    FILTER_OPERATOR_TYPE_LESS = 3;
    // Greater than or equal to
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    // Less than or equal to
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    // Not equal to
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    // In (contained in the array)
    FILTER_OPERATOR_TYPE_IN = 7;
    // Not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    // Fuzzily matched
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
    // Existing
    FILTER_OPERATOR_TYPE_EXIST = 10;
    // Not existing
    FILTER_OPERATOR_TYPE_NOT_EXIST = 11;
    // Regular
    FILTER_OPERATOR_TYPE_REGULAR = 12;
}
                     */
                    int64_t GetOperatorType() const;

                    /**
                     * 设置Enum of integers that represent relations between Name and Values.
enum FilterOperatorType {
    // Invalid
    FILTER_OPERATOR_TYPE_INVALID = 0;
    // Equal to
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    // Greater than
    FILTER_OPERATOR_TYPE_GREATER = 2;
    // Less than
    FILTER_OPERATOR_TYPE_LESS = 3;
    // Greater than or equal to
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    // Less than or equal to
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    // Not equal to
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    // In (contained in the array)
    FILTER_OPERATOR_TYPE_IN = 7;
    // Not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    // Fuzzily matched
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
    // Existing
    FILTER_OPERATOR_TYPE_EXIST = 10;
    // Not existing
    FILTER_OPERATOR_TYPE_NOT_EXIST = 11;
    // Regular
    FILTER_OPERATOR_TYPE_REGULAR = 12;
}
                     * @param OperatorType Enum of integers that represent relations between Name and Values.
enum FilterOperatorType {
    // Invalid
    FILTER_OPERATOR_TYPE_INVALID = 0;
    // Equal to
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    // Greater than
    FILTER_OPERATOR_TYPE_GREATER = 2;
    // Less than
    FILTER_OPERATOR_TYPE_LESS = 3;
    // Greater than or equal to
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    // Less than or equal to
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    // Not equal to
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    // In (contained in the array)
    FILTER_OPERATOR_TYPE_IN = 7;
    // Not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    // Fuzzily matched
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
    // Existing
    FILTER_OPERATOR_TYPE_EXIST = 10;
    // Not existing
    FILTER_OPERATOR_TYPE_NOT_EXIST = 11;
    // Regular
    FILTER_OPERATOR_TYPE_REGULAR = 12;
}
                     */
                    void SetOperatorType(const int64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     */
                    bool OperatorTypeHasBeenSet() const;

                private:

                    /**
                     * Search key.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Search values.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * Enum of integers that represent relations between Name and Values.
enum FilterOperatorType {
    // Invalid
    FILTER_OPERATOR_TYPE_INVALID = 0;
    // Equal to
    FILTER_OPERATOR_TYPE_EQUAL = 1;
    // Greater than
    FILTER_OPERATOR_TYPE_GREATER = 2;
    // Less than
    FILTER_OPERATOR_TYPE_LESS = 3;
    // Greater than or equal to
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
    // Less than or equal to
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
    // Not equal to
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    // In (contained in the array)
    FILTER_OPERATOR_TYPE_IN = 7;
    // Not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
    // Fuzzily matched
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
    // Existing
    FILTER_OPERATOR_TYPE_EXIST = 10;
    // Not existing
    FILTER_OPERATOR_TYPE_NOT_EXIST = 11;
    // Regular
    FILTER_OPERATOR_TYPE_REGULAR = 12;
}
                     */
                    int64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_
