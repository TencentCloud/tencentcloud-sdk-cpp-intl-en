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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULERESOURCEEVALUATIONRESULT_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULERESOURCEEVALUATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Tag.h>
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
                * Configuration rule resource evaluation result.
                */
                class ConfigRuleResourceEvaluationResult : public AbstractModel
                {
                public:
                    ConfigRuleResourceEvaluationResult();
                    ~ConfigRuleResourceEvaluationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
                     * 获取Rule ID.
                     * @return RuleIdentifier Rule ID.
                     * 
                     */
                    std::string GetRuleIdentifier() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleIdentifier Rule ID.
                     * 
                     */
                    void SetRuleIdentifier(const std::string& _ruleIdentifier);

                    /**
                     * 判断参数 RuleIdentifier 是否已赋值
                     * @return RuleIdentifier 是否已赋值
                     * 
                     */
                    bool RuleIdentifierHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleDescription Rule description
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 设置Rule description
                     * @param _ruleDescription Rule description
                     * 
                     */
                    void SetRuleDescription(const std::string& _ruleDescription);

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取Account to which the rule belongs.
                     * @return RuleOwnerId Account to which the rule belongs.
                     * 
                     */
                    int64_t GetRuleOwnerId() const;

                    /**
                     * 设置Account to which the rule belongs.
                     * @param _ruleOwnerId Account to which the rule belongs.
                     * 
                     */
                    void SetRuleOwnerId(const int64_t& _ruleOwnerId);

                    /**
                     * 判断参数 RuleOwnerId 是否已赋值
                     * @return RuleOwnerId 是否已赋值
                     * 
                     */
                    bool RuleOwnerIdHasBeenSet() const;

                    /**
                     * 获取Rule risk level.
                     * @return RuleRiskLevel Rule risk level.
                     * 
                     */
                    int64_t GetRuleRiskLevel() const;

                    /**
                     * 设置Rule risk level.
                     * @param _ruleRiskLevel Rule risk level.
                     * 
                     */
                    void SetRuleRiskLevel(const int64_t& _ruleRiskLevel);

                    /**
                     * 判断参数 RuleRiskLevel 是否已赋值
                     * @return RuleRiskLevel 是否已赋值
                     * 
                     */
                    bool RuleRiskLevelHasBeenSet() const;

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
                     * 获取Resource tag
                     * @return ResourceTags Resource tag
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置Resource tag
                     * @param _resourceTags Resource tag
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Compliance details
                     * @return Annotation Compliance details
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置Compliance details
                     * @param _annotation Compliance details
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    std::string m_ruleIdentifier;
                    bool m_ruleIdentifierHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * Account to which the rule belongs.
                     */
                    int64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                    /**
                     * Rule risk level.
                     */
                    int64_t m_ruleRiskLevel;
                    bool m_ruleRiskLevelHasBeenSet;

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
                     * Resource name
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Resource region
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource tag
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Compliance details
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULERESOURCEEVALUATIONRESULT_H_
