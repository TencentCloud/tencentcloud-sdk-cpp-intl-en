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
                * Detailed settings of the rule engine that can be used for request match.
                */
                class RulesProperties : public AbstractModel
                {
                public:
                    RulesProperties();
                    ~RulesProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
                     * @return Name Parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name.
                     * @param _name Parameter name.
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
                     * 获取Minimum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     * @return Min Minimum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置Minimum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     * @param _min Minimum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
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
                     * 获取Valid parameter values.
Note: If `Type` is `CUSTOM_NUM` or `CUSTOM_STRING`, this parameter will be an empty array.
                     * @return ChoicesValue Valid parameter values.
Note: If `Type` is `CUSTOM_NUM` or `CUSTOM_STRING`, this parameter will be an empty array.
                     * 
                     */
                    std::vector<std::string> GetChoicesValue() const;

                    /**
                     * 设置Valid parameter values.
Note: If `Type` is `CUSTOM_NUM` or `CUSTOM_STRING`, this parameter will be an empty array.
                     * @param _choicesValue Valid parameter values.
Note: If `Type` is `CUSTOM_NUM` or `CUSTOM_STRING`, this parameter will be an empty array.
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
                     * 获取The parameter value type.
<li>`CHOICE`: `If Type=CHOICE`, choose a value in `ChoiceValue`.</li>
<li>`TOGGLE`: If `Type=TOGGLE`, choose `on` or `off` from `ChoicesValue`.</li>
<li>`OBJECT`: Specify an object. If this is specified, `ChoiceProperties` includes attributes of the specified object. See [Example 2. Create a rule with Type=OBJECT](https://intl.cloud.tencent.com/document/product/1552/80622?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.8F.82.E6.95.B0.E4.B8.BA-OBJECT-.E7.B1.BB.E5.9E.8B.E7.9A.84.E5.88.9B.E5.BB.BA)</li>
<li>`CUSTOM_NUM`: (Integer) Custom value.</li>
<li>`CUSTOM_STRING`: (String) Custom value.</li>
                     * @return Type The parameter value type.
<li>`CHOICE`: `If Type=CHOICE`, choose a value in `ChoiceValue`.</li>
<li>`TOGGLE`: If `Type=TOGGLE`, choose `on` or `off` from `ChoicesValue`.</li>
<li>`OBJECT`: Specify an object. If this is specified, `ChoiceProperties` includes attributes of the specified object. See [Example 2. Create a rule with Type=OBJECT](https://intl.cloud.tencent.com/document/product/1552/80622?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.8F.82.E6.95.B0.E4.B8.BA-OBJECT-.E7.B1.BB.E5.9E.8B.E7.9A.84.E5.88.9B.E5.BB.BA)</li>
<li>`CUSTOM_NUM`: (Integer) Custom value.</li>
<li>`CUSTOM_STRING`: (String) Custom value.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The parameter value type.
<li>`CHOICE`: `If Type=CHOICE`, choose a value in `ChoiceValue`.</li>
<li>`TOGGLE`: If `Type=TOGGLE`, choose `on` or `off` from `ChoicesValue`.</li>
<li>`OBJECT`: Specify an object. If this is specified, `ChoiceProperties` includes attributes of the specified object. See [Example 2. Create a rule with Type=OBJECT](https://intl.cloud.tencent.com/document/product/1552/80622?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.8F.82.E6.95.B0.E4.B8.BA-OBJECT-.E7.B1.BB.E5.9E.8B.E7.9A.84.E5.88.9B.E5.BB.BA)</li>
<li>`CUSTOM_NUM`: (Integer) Custom value.</li>
<li>`CUSTOM_STRING`: (String) Custom value.</li>
                     * @param _type The parameter value type.
<li>`CHOICE`: `If Type=CHOICE`, choose a value in `ChoiceValue`.</li>
<li>`TOGGLE`: If `Type=TOGGLE`, choose `on` or `off` from `ChoicesValue`.</li>
<li>`OBJECT`: Specify an object. If this is specified, `ChoiceProperties` includes attributes of the specified object. See [Example 2. Create a rule with Type=OBJECT](https://intl.cloud.tencent.com/document/product/1552/80622?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.8F.82.E6.95.B0.E4.B8.BA-OBJECT-.E7.B1.BB.E5.9E.8B.E7.9A.84.E5.88.9B.E5.BB.BA)</li>
<li>`CUSTOM_NUM`: (Integer) Custom value.</li>
<li>`CUSTOM_STRING`: (String) Custom value.</li>
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
                     * 获取Maximum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     * @return Max Maximum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置Maximum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     * @param _max Maximum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
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
                     * 获取Whether multiple values can be selected or entered.
                     * @return IsMultiple Whether multiple values can be selected or entered.
                     * 
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置Whether multiple values can be selected or entered.
                     * @param _isMultiple Whether multiple values can be selected or entered.
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
                     * 获取Whether the parameter can be left empty.
                     * @return IsAllowEmpty Whether the parameter can be left empty.
                     * 
                     */
                    bool GetIsAllowEmpty() const;

                    /**
                     * 设置Whether the parameter can be left empty.
                     * @param _isAllowEmpty Whether the parameter can be left empty.
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
                     * 获取Associated configuration parameters of this parameter, which are required for API call.
Note: This parameter will be an empty array if no special parameters are added as optional parameters.
                     * @return ChoiceProperties Associated configuration parameters of this parameter, which are required for API call.
Note: This parameter will be an empty array if no special parameters are added as optional parameters.
                     * 
                     */
                    std::vector<RuleChoicePropertiesItem> GetChoiceProperties() const;

                    /**
                     * 设置Associated configuration parameters of this parameter, which are required for API call.
Note: This parameter will be an empty array if no special parameters are added as optional parameters.
                     * @param _choiceProperties Associated configuration parameters of this parameter, which are required for API call.
Note: This parameter will be an empty array if no special parameters are added as optional parameters.
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
                     * 获取<li>NULL: No special parameters when `NormalAction` is selected for `RuleAction`.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraParameter <li>NULL: No special parameters when `NormalAction` is selected for `RuleAction`.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RuleExtraParameter GetExtraParameter() const;

                    /**
                     * 设置<li>NULL: No special parameters when `NormalAction` is selected for `RuleAction`.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraParameter <li>NULL: No special parameters when `NormalAction` is selected for `RuleAction`.</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Minimum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Valid parameter values.
Note: If `Type` is `CUSTOM_NUM` or `CUSTOM_STRING`, this parameter will be an empty array.
                     */
                    std::vector<std::string> m_choicesValue;
                    bool m_choicesValueHasBeenSet;

                    /**
                     * The parameter value type.
<li>`CHOICE`: `If Type=CHOICE`, choose a value in `ChoiceValue`.</li>
<li>`TOGGLE`: If `Type=TOGGLE`, choose `on` or `off` from `ChoicesValue`.</li>
<li>`OBJECT`: Specify an object. If this is specified, `ChoiceProperties` includes attributes of the specified object. See [Example 2. Create a rule with Type=OBJECT](https://intl.cloud.tencent.com/document/product/1552/80622?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.8F.82.E6.95.B0.E4.B8.BA-OBJECT-.E7.B1.BB.E5.9E.8B.E7.9A.84.E5.88.9B.E5.BB.BA)</li>
<li>`CUSTOM_NUM`: (Integer) Custom value.</li>
<li>`CUSTOM_STRING`: (String) Custom value.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Maximum value. If both `Min` and `Max` are set to `0`, this parameter does not take effect.
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Whether multiple values can be selected or entered.
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * Whether the parameter can be left empty.
                     */
                    bool m_isAllowEmpty;
                    bool m_isAllowEmptyHasBeenSet;

                    /**
                     * Associated configuration parameters of this parameter, which are required for API call.
Note: This parameter will be an empty array if no special parameters are added as optional parameters.
                     */
                    std::vector<RuleChoicePropertiesItem> m_choiceProperties;
                    bool m_choicePropertiesHasBeenSet;

                    /**
                     * <li>NULL: No special parameters when `NormalAction` is selected for `RuleAction`.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RuleExtraParameter m_extraParameter;
                    bool m_extraParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_
