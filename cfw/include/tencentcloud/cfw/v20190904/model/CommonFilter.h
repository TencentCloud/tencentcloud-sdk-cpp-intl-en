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
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search key.
                     * @param _name Search key.
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
                     * 获取Enumeration type, representing the matching relationship between Name and Values.
enum FilterOperatorType {
equal
    FILTER_OPERATOR_TYPE_EQUAL = 1;
Above
    FILTER_OPERATOR_TYPE_GREATER = 2;
less than
    FILTER_OPERATOR_TYPE_LESS = 3;
>=
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
<=
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
neq
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
Fuzzy matching
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * @return OperatorType Enumeration type, representing the matching relationship between Name and Values.
enum FilterOperatorType {
equal
    FILTER_OPERATOR_TYPE_EQUAL = 1;
Above
    FILTER_OPERATOR_TYPE_GREATER = 2;
less than
    FILTER_OPERATOR_TYPE_LESS = 3;
>=
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
<=
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
neq
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
Fuzzy matching
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * 
                     */
                    int64_t GetOperatorType() const;

                    /**
                     * 设置Enumeration type, representing the matching relationship between Name and Values.
enum FilterOperatorType {
equal
    FILTER_OPERATOR_TYPE_EQUAL = 1;
Above
    FILTER_OPERATOR_TYPE_GREATER = 2;
less than
    FILTER_OPERATOR_TYPE_LESS = 3;
>=
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
<=
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
neq
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
Fuzzy matching
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * @param _operatorType Enumeration type, representing the matching relationship between Name and Values.
enum FilterOperatorType {
equal
    FILTER_OPERATOR_TYPE_EQUAL = 1;
Above
    FILTER_OPERATOR_TYPE_GREATER = 2;
less than
    FILTER_OPERATOR_TYPE_LESS = 3;
>=
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
<=
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
neq
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
Fuzzy matching
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     * 
                     */
                    void SetOperatorType(const int64_t& _operatorType);

                    /**
                     * 判断参数 OperatorType 是否已赋值
                     * @return OperatorType 是否已赋值
                     * 
                     */
                    bool OperatorTypeHasBeenSet() const;

                    /**
                     * 获取Search values, with an OR relationship between each search value.
                     * @return Values Search values, with an OR relationship between each search value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Search values, with an OR relationship between each search value.
                     * @param _values Search values, with an OR relationship between each search value.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Search key.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Enumeration type, representing the matching relationship between Name and Values.
enum FilterOperatorType {
equal
    FILTER_OPERATOR_TYPE_EQUAL = 1;
Above
    FILTER_OPERATOR_TYPE_GREATER = 2;
less than
    FILTER_OPERATOR_TYPE_LESS = 3;
>=
    FILTER_OPERATOR_TYPE_GREATER_EQ = 4;
<=
    FILTER_OPERATOR_TYPE_LESS_EQ = 5;
neq
    FILTER_OPERATOR_TYPE_NO_EQ = 6;
    //not in
    FILTER_OPERATOR_TYPE_NOT_IN = 8;
Fuzzy matching
    FILTER_OPERATOR_TYPE_FUZZINESS = 9;
}
                     */
                    int64_t m_operatorType;
                    bool m_operatorTypeHasBeenSet;

                    /**
                     * Search values, with an OR relationship between each search value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_COMMONFILTER_H_
