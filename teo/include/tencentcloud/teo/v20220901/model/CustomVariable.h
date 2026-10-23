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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom Variable details.
                */
                class CustomVariable : public AbstractModel
                {
                public:
                    CustomVariable();
                    ~CustomVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Variable name. You need to fill in the complete prefix: user.zone.* refers to a site-level custom variable, and user.rule.* refers to a rule-level custom variable. The custom part after the prefix supports only uppercase and lowercase letters, digits, and underscores. Variable names are case-sensitive and cannot exceed 50 characters in length. Once a variable is created successfully, its name cannot be modified.</p>
                     * @return Name <p>Variable name. You need to fill in the complete prefix: user.zone.* refers to a site-level custom variable, and user.rule.* refers to a rule-level custom variable. The custom part after the prefix supports only uppercase and lowercase letters, digits, and underscores. Variable names are case-sensitive and cannot exceed 50 characters in length. Once a variable is created successfully, its name cannot be modified.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Variable name. You need to fill in the complete prefix: user.zone.* refers to a site-level custom variable, and user.rule.* refers to a rule-level custom variable. The custom part after the prefix supports only uppercase and lowercase letters, digits, and underscores. Variable names are case-sensitive and cannot exceed 50 characters in length. Once a variable is created successfully, its name cannot be modified.</p>
                     * @param _name <p>Variable name. You need to fill in the complete prefix: user.zone.* refers to a site-level custom variable, and user.rule.* refers to a rule-level custom variable. The custom part after the prefix supports only uppercase and lowercase letters, digits, and underscores. Variable names are case-sensitive and cannot exceed 50 characters in length. Once a variable is created successfully, its name cannot be modified.</p>
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
                     * 获取<p>Initial value of the variable. Supports the use of constant strings, variables, and formulas. Length cannot exceed 255 characters.</p>
                     * @return InitialValue <p>Initial value of the variable. Supports the use of constant strings, variables, and formulas. Length cannot exceed 255 characters.</p>
                     * 
                     */
                    std::string GetInitialValue() const;

                    /**
                     * 设置<p>Initial value of the variable. Supports the use of constant strings, variables, and formulas. Length cannot exceed 255 characters.</p>
                     * @param _initialValue <p>Initial value of the variable. Supports the use of constant strings, variables, and formulas. Length cannot exceed 255 characters.</p>
                     * 
                     */
                    void SetInitialValue(const std::string& _initialValue);

                    /**
                     * 判断参数 InitialValue 是否已赋值
                     * @return InitialValue 是否已赋值
                     * 
                     */
                    bool InitialValueHasBeenSet() const;

                    /**
                     * 获取<p>Variable description. Length limited to no more than 60 characters.</p>
                     * @return Description <p>Variable description. Length limited to no more than 60 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Variable description. Length limited to no more than 60 characters.</p>
                     * @param _description <p>Variable description. Length limited to no more than 60 characters.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Variable name. You need to fill in the complete prefix: user.zone.* refers to a site-level custom variable, and user.rule.* refers to a rule-level custom variable. The custom part after the prefix supports only uppercase and lowercase letters, digits, and underscores. Variable names are case-sensitive and cannot exceed 50 characters in length. Once a variable is created successfully, its name cannot be modified.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Initial value of the variable. Supports the use of constant strings, variables, and formulas. Length cannot exceed 255 characters.</p>
                     */
                    std::string m_initialValue;
                    bool m_initialValueHasBeenSet;

                    /**
                     * <p>Variable description. Length limited to no more than 60 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLE_H_
