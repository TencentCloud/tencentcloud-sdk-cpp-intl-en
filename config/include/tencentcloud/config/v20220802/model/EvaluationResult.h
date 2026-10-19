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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATIONRESULT_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Assessment result.
                */
                class EvaluationResult : public AbstractModel
                {
                public:
                    EvaluationResult();
                    ~EvaluationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource type.
                     * @return ResourceType Resource type.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type.
                     * @param _resourceType Resource type.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource region
                     * @return ResourceRegion Resource region
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Resource region
                     * @param _resourceRegion Resource region
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Resource name
                     * @return ResourceName Resource name
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
                     * @param _resourceName Resource name
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return ConfigRuleId Rule ID
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _configRuleId Rule ID
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return ConfigRuleName Rule name
                     * 
                     */
                    std::string GetConfigRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _configRuleName Rule name
                     * 
                     */
                    void SetConfigRuleName(const std::string& _configRuleName);

                    /**
                     * 判断参数 ConfigRuleName 是否已赋值
                     * @return ConfigRuleName 是否已赋值
                     * 
                     */
                    bool ConfigRuleNameHasBeenSet() const;

                    /**
                     * 获取Compliance package ID.
                     * @return CompliancePackId Compliance package ID.
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置Compliance package ID.
                     * @param _compliancePackId Compliance package ID.
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return RiskLevel Risk level
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level
                     * @param _riskLevel Risk level
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
                     * 获取Assessment result.
                     * @return Annotation Assessment result.
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置Assessment result.
                     * @param _annotation Assessment result.
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                    /**
                     * 获取Compliance type.
                     * @return ComplianceType Compliance type.
                     * 
                     */
                    std::string GetComplianceType() const;

                    /**
                     * 设置Compliance type.
                     * @param _complianceType Compliance type.
                     * 
                     */
                    void SetComplianceType(const std::string& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                    /**
                     * 获取Rule initiation type.
                     * @return InvokingEventMessageType Rule initiation type.
                     * 
                     */
                    std::string GetInvokingEventMessageType() const;

                    /**
                     * 设置Rule initiation type.
                     * @param _invokingEventMessageType Rule initiation type.
                     * 
                     */
                    void SetInvokingEventMessageType(const std::string& _invokingEventMessageType);

                    /**
                     * 判断参数 InvokingEventMessageType 是否已赋值
                     * @return InvokingEventMessageType 是否已赋值
                     * 
                     */
                    bool InvokingEventMessageTypeHasBeenSet() const;

                    /**
                     * 获取Evaluation initiation time.
                     * @return ConfigRuleInvokedTime Evaluation initiation time.
                     * 
                     */
                    std::string GetConfigRuleInvokedTime() const;

                    /**
                     * 设置Evaluation initiation time.
                     * @param _configRuleInvokedTime Evaluation initiation time.
                     * 
                     */
                    void SetConfigRuleInvokedTime(const std::string& _configRuleInvokedTime);

                    /**
                     * 判断参数 ConfigRuleInvokedTime 是否已赋值
                     * @return ConfigRuleInvokedTime 是否已赋值
                     * 
                     */
                    bool ConfigRuleInvokedTimeHasBeenSet() const;

                    /**
                     * 获取Actual evaluation time.
                     * @return ResultRecordedTime Actual evaluation time.
                     * 
                     */
                    std::string GetResultRecordedTime() const;

                    /**
                     * 设置Actual evaluation time.
                     * @param _resultRecordedTime Actual evaluation time.
                     * 
                     */
                    void SetResultRecordedTime(const std::string& _resultRecordedTime);

                    /**
                     * 判断参数 ResultRecordedTime 是否已赋值
                     * @return ResultRecordedTime 是否已赋值
                     * 
                     */
                    bool ResultRecordedTimeHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource type.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource region
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource name
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_configRuleName;
                    bool m_configRuleNameHasBeenSet;

                    /**
                     * Compliance package ID.
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * Risk level
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Assessment result.
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                    /**
                     * Compliance type.
                     */
                    std::string m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                    /**
                     * Rule initiation type.
                     */
                    std::string m_invokingEventMessageType;
                    bool m_invokingEventMessageTypeHasBeenSet;

                    /**
                     * Evaluation initiation time.
                     */
                    std::string m_configRuleInvokedTime;
                    bool m_configRuleInvokedTimeHasBeenSet;

                    /**
                     * Actual evaluation time.
                     */
                    std::string m_resultRecordedTime;
                    bool m_resultRecordedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_EVALUATIONRESULT_H_
