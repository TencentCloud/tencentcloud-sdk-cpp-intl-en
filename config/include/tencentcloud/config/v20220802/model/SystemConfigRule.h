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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCONFIGRULE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCONFIGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>
#include <tencentcloud/config/v20220802/model/SourceConditionForManage.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Rule details on the operation side.
                */
                class SystemConfigRule : public AbstractModel
                {
                public:
                    SystemConfigRule();
                    ~SystemConfigRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule ID.</p>
                     * @return Identifier <p>Rule ID.</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _identifier <p>Rule ID.</p>
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取<p>Rule name.</p>
                     * @return RuleName <p>Rule name.</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Rule name.</p>
                     * @param _ruleName <p>Rule name.</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Rule parameters</p>
                     * @return InputParameter <p>Rule parameters</p>
                     * 
                     */
                    std::vector<InputParameterForManage> GetInputParameter() const;

                    /**
                     * 设置<p>Rule parameters</p>
                     * @param _inputParameter <p>Rule parameters</p>
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameterForManage>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

                    /**
                     * 获取<p>Rule trigger condition</p>
                     * @return SourceCondition <p>Rule trigger condition</p>
                     * 
                     */
                    std::vector<SourceConditionForManage> GetSourceCondition() const;

                    /**
                     * 设置<p>Rule trigger condition</p>
                     * @param _sourceCondition <p>Rule trigger condition</p>
                     * 
                     */
                    void SetSourceCondition(const std::vector<SourceConditionForManage>& _sourceCondition);

                    /**
                     * 判断参数 SourceCondition 是否已赋值
                     * @return SourceCondition 是否已赋值
                     * 
                     */
                    bool SourceConditionHasBeenSet() const;

                    /**
                     * 获取<p>Supported resource types.</p>
                     * @return ResourceType <p>Supported resource types.</p>
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置<p>Supported resource types.</p>
                     * @param _resourceType <p>Supported resource types.</p>
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Label <p>Tag.</p>
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _label <p>Tag.</p>
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>Risk level, 1, 2, 3</p>
                     * @return RiskLevel <p>Risk level, 1, 2, 3</p>
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level, 1, 2, 3</p>
                     * @param _riskLevel <p>Risk level, 1, 2, 3</p>
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Corresponding function</p>
                     * @return ServiceFunction <p>Corresponding function</p>
                     * 
                     */
                    std::string GetServiceFunction() const;

                    /**
                     * 设置<p>Corresponding function</p>
                     * @param _serviceFunction <p>Corresponding function</p>
                     * 
                     */
                    void SetServiceFunction(const std::string& _serviceFunction);

                    /**
                     * 判断参数 ServiceFunction 是否已赋值
                     * @return ServiceFunction 是否已赋值
                     * 
                     */
                    bool ServiceFunctionHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Trigger type.</p>
                     * @return TriggerType <p>Trigger type.</p>
                     * 
                     */
                    std::vector<std::string> GetTriggerType() const;

                    /**
                     * 设置<p>Trigger type.</p>
                     * @param _triggerType <p>Trigger type.</p>
                     * 
                     */
                    void SetTriggerType(const std::vector<std::string>& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Number of use</p>
                     * @return ReferenceCount <p>Number of use</p>
                     * 
                     */
                    uint64_t GetReferenceCount() const;

                    /**
                     * 设置<p>Number of use</p>
                     * @param _referenceCount <p>Number of use</p>
                     * 
                     */
                    void SetReferenceCount(const uint64_t& _referenceCount);

                    /**
                     * 判断参数 ReferenceCount 是否已赋值
                     * @return ReferenceCount 是否已赋值
                     * 
                     */
                    bool ReferenceCountHasBeenSet() const;

                    /**
                     * 获取<p>Rule type.</p>
                     * @return IdentifierType <p>Rule type.</p>
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置<p>Rule type.</p>
                     * @param _identifierType <p>Rule type.</p>
                     * 
                     */
                    void SetIdentifierType(const std::string& _identifierType);

                    /**
                     * 判断参数 IdentifierType 是否已赋值
                     * @return IdentifierType 是否已赋值
                     * 
                     */
                    bool IdentifierTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Rule ID.</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>Rule name.</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Rule parameters</p>
                     */
                    std::vector<InputParameterForManage> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * <p>Rule trigger condition</p>
                     */
                    std::vector<SourceConditionForManage> m_sourceCondition;
                    bool m_sourceConditionHasBeenSet;

                    /**
                     * <p>Supported resource types.</p>
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>Risk level, 1, 2, 3</p>
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Corresponding function</p>
                     */
                    std::string m_serviceFunction;
                    bool m_serviceFunctionHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Trigger type.</p>
                     */
                    std::vector<std::string> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Number of use</p>
                     */
                    uint64_t m_referenceCount;
                    bool m_referenceCountHasBeenSet;

                    /**
                     * <p>Rule type.</p>
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCONFIGRULE_H_
