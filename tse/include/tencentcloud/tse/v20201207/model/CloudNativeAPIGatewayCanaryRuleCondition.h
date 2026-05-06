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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULECONDITION_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULECONDITION_H_

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
                * Condition configuration in grayscale rule
                */
                class CloudNativeAPIGatewayCanaryRuleCondition : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayCanaryRuleCondition();
                    ~CloudNativeAPIGatewayCanaryRuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Condition type, support path, method, query, header, cookie, body, and system.
                     * @return Type Condition type, support path, method, query, header, cookie, body, and system.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Condition type, support path, method, query, header, cookie, body, and system.
                     * @param _type Condition type, support path, method, query, header, cookie, body, and system.
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
                     * 获取Parameter name.
                     * @return Key Parameter name.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Parameter name.
                     * @param _key Parameter name.
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
                     * 获取Operator, supports "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in", "prefix", "exact", "regex"
                     * @return Operator Operator, supports "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in", "prefix", "exact", "regex"
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator, supports "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in", "prefix", "exact", "regex"
                     * @param _operator Operator, supports "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in", "prefix", "exact", "regex"
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
                     * 获取Target parameter value
                     * @return Value Target parameter value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Target parameter value
                     * @param _value Target parameter value
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
                     * 获取Separator. This parameter is valid only when Operator is in or not in. Supported values: comma, semicolon, space, line break.
                     * @return Delimiter Separator. This parameter is valid only when Operator is in or not in. Supported values: comma, semicolon, space, line break.
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置Separator. This parameter is valid only when Operator is in or not in. Supported values: comma, semicolon, space, line break.
                     * @param _delimiter Separator. This parameter is valid only when Operator is in or not in. Supported values: comma, semicolon, space, line break.
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取Global configuration Id
                     * @return GlobalConfigId Global configuration Id
                     * 
                     */
                    std::string GetGlobalConfigId() const;

                    /**
                     * 设置Global configuration Id
                     * @param _globalConfigId Global configuration Id
                     * 
                     */
                    void SetGlobalConfigId(const std::string& _globalConfigId);

                    /**
                     * 判断参数 GlobalConfigId 是否已赋值
                     * @return GlobalConfigId 是否已赋值
                     * 
                     */
                    bool GlobalConfigIdHasBeenSet() const;

                    /**
                     * 获取Global configuration name
                     * @return GlobalConfigName Global configuration name
                     * 
                     */
                    std::string GetGlobalConfigName() const;

                    /**
                     * 设置Global configuration name
                     * @param _globalConfigName Global configuration name
                     * 
                     */
                    void SetGlobalConfigName(const std::string& _globalConfigName);

                    /**
                     * 判断参数 GlobalConfigName 是否已赋值
                     * @return GlobalConfigName 是否已赋值
                     * 
                     */
                    bool GlobalConfigNameHasBeenSet() const;

                private:

                    /**
                     * Condition type, support path, method, query, header, cookie, body, and system.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Operator, supports "le", "eq", "lt", "ne", "ge", "gt", "regex", "exists", "in", "not in", "prefix", "exact", "regex"
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Target parameter value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Separator. This parameter is valid only when Operator is in or not in. Supported values: comma, semicolon, space, line break.
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * Global configuration Id
                     */
                    std::string m_globalConfigId;
                    bool m_globalConfigIdHasBeenSet;

                    /**
                     * Global configuration name
                     */
                    std::string m_globalConfigName;
                    bool m_globalConfigNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULECONDITION_H_
