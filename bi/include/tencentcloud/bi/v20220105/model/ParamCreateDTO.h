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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PARAMCREATEDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PARAMCREATEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 1
                */
                class ParamCreateDTO : public AbstractModel
                {
                public:
                    ParamCreateDTO();
                    ~ParamCreateDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamName Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramName Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultValue Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultValue Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Parameter type, string/datetime/number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamType Parameter type, string/datetime/number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter type, string/datetime/number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramType Parameter type, string/datetime/number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取Format type, yyyy-MM-dd HH:mm:ss.SSS (only time required)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FormatRule Format type, yyyy-MM-dd HH:mm:ss.SSS (only time required)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFormatRule() const;

                    /**
                     * 设置Format type, yyyy-MM-dd HH:mm:ss.SSS (only time required)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _formatRule Format type, yyyy-MM-dd HH:mm:ss.SSS (only time required)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormatRule(const std::string& _formatRule);

                    /**
                     * 判断参数 FormatRule 是否已赋值
                     * @return FormatRule 是否已赋值
                     * 
                     */
                    bool FormatRuleHasBeenSet() const;

                    /**
                     * 获取Complex type, another format expression, such as YYYY-MM
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComplexType Complex type, another format expression, such as YYYY-MM
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComplexType() const;

                    /**
                     * 设置Complex type, another format expression, such as YYYY-MM
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _complexType Complex type, another format expression, such as YYYY-MM
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComplexType(const std::string& _complexType);

                    /**
                     * 判断参数 ComplexType 是否已赋值
                     * @return ComplexType 是否已赋值
                     * 
                     */
                    bool ComplexTypeHasBeenSet() const;

                    /**
                     * 获取Application scope
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scope Application scope
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Application scope
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scope Application scope
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Parameter type, string/datetime/number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * Format type, yyyy-MM-dd HH:mm:ss.SSS (only time required)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_formatRule;
                    bool m_formatRuleHasBeenSet;

                    /**
                     * Complex type, another format expression, such as YYYY-MM
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_complexType;
                    bool m_complexTypeHasBeenSet;

                    /**
                     * Application scope
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PARAMCREATEDTO_H_
