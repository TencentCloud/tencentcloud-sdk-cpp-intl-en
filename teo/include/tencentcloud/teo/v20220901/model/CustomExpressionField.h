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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMEXPRESSIONFIELD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMEXPRESSIONFIELD_H_

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
                * Custom log fields in a real-time log delivery task are customizable and support value expression configurations. For usage details, see [Custom Log Field Expression]().
                */
                class CustomExpressionField : public AbstractModel
                {
                public:
                    CustomExpressionField();
                    ~CustomExpressionField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom log field name. Enter 1-100 characters. Allowed characters are letters, digits, and _. It must start with a letter. This name must be unique.</p>
                     * @return Name <p>Custom log field name. Enter 1-100 characters. Allowed characters are letters, digits, and _. It must start with a letter. This name must be unique.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Custom log field name. Enter 1-100 characters. Allowed characters are letters, digits, and _. It must start with a letter. This name must be unique.</p>
                     * @param _name <p>Custom log field name. Enter 1-100 characters. Allowed characters are letters, digits, and _. It must start with a letter. This name must be unique.</p>
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
                     * 获取<p>The value expression of a custom log field. The maximum length of the expression is 4KB. For syntax explanation, see <a href="">Custom Log Field Expression</a>.</p>
                     * @return Expression <p>The value expression of a custom log field. The maximum length of the expression is 4KB. For syntax explanation, see <a href="">Custom Log Field Expression</a>.</p>
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置<p>The value expression of a custom log field. The maximum length of the expression is 4KB. For syntax explanation, see <a href="">Custom Log Field Expression</a>.</p>
                     * @param _expression <p>The value expression of a custom log field. The maximum length of the expression is 4KB. For syntax explanation, see <a href="">Custom Log Field Expression</a>.</p>
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to deliver this field. If left blank, it means not to deliver this field.</p>
                     * @return Enabled <p>Whether to deliver this field. If left blank, it means not to deliver this field.</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to deliver this field. If left blank, it means not to deliver this field.</p>
                     * @param _enabled <p>Whether to deliver this field. If left blank, it means not to deliver this field.</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>Custom log field name. Enter 1-100 characters. Allowed characters are letters, digits, and _. It must start with a letter. This name must be unique.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>The value expression of a custom log field. The maximum length of the expression is 4KB. For syntax explanation, see <a href="">Custom Log Field Expression</a>.</p>
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * <p>Whether to deliver this field. If left blank, it means not to deliver this field.</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMEXPRESSIONFIELD_H_
