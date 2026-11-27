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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleChoicePropertiesItem.h>
#include <tencentcloud/teo/v20220901/model/RuleExtraParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule engine settings applicable to matchmaking requests.
                */
                class RulesProperties : public AbstractModel
                {
                public:
                    RulesProperties();
                    ~RulesProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value of the parameter name.
                     * @return Name Value of the parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Value of the parameter name.
                     * @param _name Value of the parameter name.
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
                     * 获取Minimum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * @return Min Minimum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置Minimum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * @param _min Minimum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Available values of the parameter.
Note: If the parameter value is user-customized, this array is an empty array.
                     * @return ChoicesValue Available values of the parameter.
Note: If the parameter value is user-customized, this array is an empty array.
                     * 
                     */
                    std::vector<std::string> GetChoicesValue() const;

                    /**
                     * 设置Available values of the parameter.
Note: If the parameter value is user-customized, this array is an empty array.
                     * @param _choicesValue Available values of the parameter.
Note: If the parameter value is user-customized, this array is an empty array.
                     * 
                     */
                    void SetChoicesValue(const std::vector<std::string>& _choicesValue);

                    /**
                     * 判断参数 ChoicesValue 是否已赋值
                     * @return ChoicesValue 是否已赋值
                     * 
                     */
                    bool ChoicesValueHasBeenSet() const;

                    /**
                     * 获取Parameter type.
<li> CHOICE: The parameter value can only be selected from ChoicesValue; </li>
<li> TOGGLE: The parameter value is a switch type, select from ChoicesValue;</li>
<li> OBJECT: The parameter value is an object type, and ChoiceProperties are attributes associated with the object type;</li>
<li> CUSTOM_NUM: user-customized parameter value, integer type;</li>
<li>CUSTOM_STRING: The parameter value is user-customized, string type.</li>Note: When the parameter type is OBJECT, see [Example 2: Create with the parameter type OBJECT](https://www.tencentcloud.com/document/api/1145/50471#Example2-Changing-the-origin-server-type-to-IP-domain-name)
                     * @return Type Parameter type.
<li> CHOICE: The parameter value can only be selected from ChoicesValue; </li>
<li> TOGGLE: The parameter value is a switch type, select from ChoicesValue;</li>
<li> OBJECT: The parameter value is an object type, and ChoiceProperties are attributes associated with the object type;</li>
<li> CUSTOM_NUM: user-customized parameter value, integer type;</li>
<li>CUSTOM_STRING: The parameter value is user-customized, string type.</li>Note: When the parameter type is OBJECT, see [Example 2: Create with the parameter type OBJECT](https://www.tencentcloud.com/document/api/1145/50471#Example2-Changing-the-origin-server-type-to-IP-domain-name)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter type.
<li> CHOICE: The parameter value can only be selected from ChoicesValue; </li>
<li> TOGGLE: The parameter value is a switch type, select from ChoicesValue;</li>
<li> OBJECT: The parameter value is an object type, and ChoiceProperties are attributes associated with the object type;</li>
<li> CUSTOM_NUM: user-customized parameter value, integer type;</li>
<li>CUSTOM_STRING: The parameter value is user-customized, string type.</li>Note: When the parameter type is OBJECT, see [Example 2: Create with the parameter type OBJECT](https://www.tencentcloud.com/document/api/1145/50471#Example2-Changing-the-origin-server-type-to-IP-domain-name)
                     * @param _type Parameter type.
<li> CHOICE: The parameter value can only be selected from ChoicesValue; </li>
<li> TOGGLE: The parameter value is a switch type, select from ChoicesValue;</li>
<li> OBJECT: The parameter value is an object type, and ChoiceProperties are attributes associated with the object type;</li>
<li> CUSTOM_NUM: user-customized parameter value, integer type;</li>
<li>CUSTOM_STRING: The parameter value is user-customized, string type.</li>Note: When the parameter type is OBJECT, see [Example 2: Create with the parameter type OBJECT](https://www.tencentcloud.com/document/api/1145/50471#Example2-Changing-the-origin-server-type-to-IP-domain-name)
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
                     * 获取Maximum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * @return Max Maximum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置Maximum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * @param _max Maximum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Whether the parameter value supports multiple selections or filling in multiple values.
                     * @return IsMultiple Whether the parameter value supports multiple selections or filling in multiple values.
                     * 
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置Whether the parameter value supports multiple selections or filling in multiple values.
                     * @param _isMultiple Whether the parameter value supports multiple selections or filling in multiple values.
                     * 
                     */
                    void SetIsMultiple(const bool& _isMultiple);

                    /**
                     * 判断参数 IsMultiple 是否已赋值
                     * @return IsMultiple 是否已赋值
                     * 
                     */
                    bool IsMultipleHasBeenSet() const;

                    /**
                     * 获取Allow Empty.
                     * @return IsAllowEmpty Allow Empty.
                     * 
                     */
                    bool GetIsAllowEmpty() const;

                    /**
                     * 设置Allow Empty.
                     * @param _isAllowEmpty Allow Empty.
                     * 
                     */
                    void SetIsAllowEmpty(const bool& _isAllowEmpty);

                    /**
                     * 判断参数 IsAllowEmpty 是否已赋值
                     * @return IsAllowEmpty 是否已赋值
                     * 
                     */
                    bool IsAllowEmptyHasBeenSet() const;

                    /**
                     * 获取The associated configuration parameter of this parameter is required for the API call.
Note: If no new configuration parameters are added to the optional parameter, this array is an empty array.
                     * @return ChoiceProperties The associated configuration parameter of this parameter is required for the API call.
Note: If no new configuration parameters are added to the optional parameter, this array is an empty array.
                     * 
                     */
                    std::vector<RuleChoicePropertiesItem> GetChoiceProperties() const;

                    /**
                     * 设置The associated configuration parameter of this parameter is required for the API call.
Note: If no new configuration parameters are added to the optional parameter, this array is an empty array.
                     * @param _choiceProperties The associated configuration parameter of this parameter is required for the API call.
Note: If no new configuration parameters are added to the optional parameter, this array is an empty array.
                     * 
                     */
                    void SetChoiceProperties(const std::vector<RuleChoicePropertiesItem>& _choiceProperties);

                    /**
                     * 判断参数 ChoiceProperties 是否已赋值
                     * @return ChoiceProperties 是否已赋值
                     * 
                     */
                    bool ChoicePropertiesHasBeenSet() const;

                    /**
                     * 获取<li> NULL: no special parameter. Select NormalAction for RuleAction;</li>
                     * @return ExtraParameter <li> NULL: no special parameter. Select NormalAction for RuleAction;</li>
                     * 
                     */
                    RuleExtraParameter GetExtraParameter() const;

                    /**
                     * 设置<li> NULL: no special parameter. Select NormalAction for RuleAction;</li>
                     * @param _extraParameter <li> NULL: no special parameter. Select NormalAction for RuleAction;</li>
                     * 
                     */
                    void SetExtraParameter(const RuleExtraParameter& _extraParameter);

                    /**
                     * 判断参数 ExtraParameter 是否已赋值
                     * @return ExtraParameter 是否已赋值
                     * 
                     */
                    bool ExtraParameterHasBeenSet() const;

                private:

                    /**
                     * Value of the parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Minimum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Available values of the parameter.
Note: If the parameter value is user-customized, this array is an empty array.
                     */
                    std::vector<std::string> m_choicesValue;
                    bool m_choicesValueHasBeenSet;

                    /**
                     * Parameter type.
<li> CHOICE: The parameter value can only be selected from ChoicesValue; </li>
<li> TOGGLE: The parameter value is a switch type, select from ChoicesValue;</li>
<li> OBJECT: The parameter value is an object type, and ChoiceProperties are attributes associated with the object type;</li>
<li> CUSTOM_NUM: user-customized parameter value, integer type;</li>
<li>CUSTOM_STRING: The parameter value is user-customized, string type.</li>Note: When the parameter type is OBJECT, see [Example 2: Create with the parameter type OBJECT](https://www.tencentcloud.com/document/api/1145/50471#Example2-Changing-the-origin-server-type-to-IP-domain-name)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Maximum value of the numeric parameter. This item is meaningless for non-numeric parameters or when both Min and Max are 0.
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Whether the parameter value supports multiple selections or filling in multiple values.
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * Allow Empty.
                     */
                    bool m_isAllowEmpty;
                    bool m_isAllowEmptyHasBeenSet;

                    /**
                     * The associated configuration parameter of this parameter is required for the API call.
Note: If no new configuration parameters are added to the optional parameter, this array is an empty array.
                     */
                    std::vector<RuleChoicePropertiesItem> m_choiceProperties;
                    bool m_choicePropertiesHasBeenSet;

                    /**
                     * <li> NULL: no special parameter. Select NormalAction for RuleAction;</li>
                     */
                    RuleExtraParameter m_extraParameter;
                    bool m_extraParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_
