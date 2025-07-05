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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEEXTRAPARAMETER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEEXTRAPARAMETER_H_

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
                * Rule engine parameter details and special parameter types.
                */
                class RuleExtraParameter : public AbstractModel
                {
                public:
                    RuleExtraParameter();
                    ~RuleExtraParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name. Valid values:
<li>`Action`: Required parameter for HTTP header modification when `RewirteAction` is selected for `RuleAction`.</li>
<li>`StatusCode`: Required parameter for the status code feature when `CodeAction` is selected for `RuleAction`.</li>
                     * @return Id Parameter name. Valid values:
<li>`Action`: Required parameter for HTTP header modification when `RewirteAction` is selected for `RuleAction`.</li>
<li>`StatusCode`: Required parameter for the status code feature when `CodeAction` is selected for `RuleAction`.</li>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Parameter name. Valid values:
<li>`Action`: Required parameter for HTTP header modification when `RewirteAction` is selected for `RuleAction`.</li>
<li>`StatusCode`: Required parameter for the status code feature when `CodeAction` is selected for `RuleAction`.</li>
                     * @param _id Parameter name. Valid values:
<li>`Action`: Required parameter for HTTP header modification when `RewirteAction` is selected for `RuleAction`.</li>
<li>`StatusCode`: Required parameter for the status code feature when `CodeAction` is selected for `RuleAction`.</li>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Parameter value type.
<li>`CHOICE`: The parameter value can be selected only from `Values`.</li>
<li>`CUSTOM_NUM`: The parameter value is a custom integer.</li>
<li>`CUSTOM_STRING`: The parameter value is a custom string.</li>
                     * @return Type Parameter value type.
<li>`CHOICE`: The parameter value can be selected only from `Values`.</li>
<li>`CUSTOM_NUM`: The parameter value is a custom integer.</li>
<li>`CUSTOM_STRING`: The parameter value is a custom string.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter value type.
<li>`CHOICE`: The parameter value can be selected only from `Values`.</li>
<li>`CUSTOM_NUM`: The parameter value is a custom integer.</li>
<li>`CUSTOM_STRING`: The parameter value is a custom string.</li>
                     * @param _type Parameter value type.
<li>`CHOICE`: The parameter value can be selected only from `Values`.</li>
<li>`CUSTOM_NUM`: The parameter value is a custom integer.</li>
<li>`CUSTOM_STRING`: The parameter value is a custom string.</li>
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
                     * 获取Valid values.
Note: If the value of `Id` is `StatusCode`, values in the array are all integer values. When entering a parameter value, enter the integer value of the string.
                     * @return Choices Valid values.
Note: If the value of `Id` is `StatusCode`, values in the array are all integer values. When entering a parameter value, enter the integer value of the string.
                     * 
                     */
                    std::vector<std::string> GetChoices() const;

                    /**
                     * 设置Valid values.
Note: If the value of `Id` is `StatusCode`, values in the array are all integer values. When entering a parameter value, enter the integer value of the string.
                     * @param _choices Valid values.
Note: If the value of `Id` is `StatusCode`, values in the array are all integer values. When entering a parameter value, enter the integer value of the string.
                     * 
                     */
                    void SetChoices(const std::vector<std::string>& _choices);

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                private:

                    /**
                     * Parameter name. Valid values:
<li>`Action`: Required parameter for HTTP header modification when `RewirteAction` is selected for `RuleAction`.</li>
<li>`StatusCode`: Required parameter for the status code feature when `CodeAction` is selected for `RuleAction`.</li>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Parameter value type.
<li>`CHOICE`: The parameter value can be selected only from `Values`.</li>
<li>`CUSTOM_NUM`: The parameter value is a custom integer.</li>
<li>`CUSTOM_STRING`: The parameter value is a custom string.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Valid values.
Note: If the value of `Id` is `StatusCode`, values in the array are all integer values. When entering a parameter value, enter the integer value of the string.
                     */
                    std::vector<std::string> m_choices;
                    bool m_choicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEEXTRAPARAMETER_H_
