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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_RULEFILTER_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_RULEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Throttling rule Filter
                */
                class RuleFilter : public AbstractModel
                {
                public:
                    RuleFilter();
                    ~RuleFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key of throttling conditions
                     * @return Key Key of throttling conditions
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key of throttling conditions
                     * @param _key Key of throttling conditions
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Values of throttling conditions
                     * @return Values Values of throttling conditions
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Values of throttling conditions
                     * @param _values Values of throttling conditions
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取operator
                     * @return Operator operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置operator
                     * @param _operator operator
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
                     * 获取name in header or query
                     * @return Name name in header or query
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置name in header or query
                     * @param _name name in header or query
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Key of throttling conditions
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Values of throttling conditions
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * name in header or query
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_RULEFILTER_H_
