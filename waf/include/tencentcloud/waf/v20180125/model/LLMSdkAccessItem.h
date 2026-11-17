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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMSDKACCESSITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMSDKACCESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * sdk access configuration
                */
                class LLMSdkAccessItem : public AbstractModel
                {
                public:
                    LLMSdkAccessItem();
                    ~LLMSdkAccessItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Service id.</p>
                     * @return Domain <p>Service id.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Service id.</p>
                     * @param _domain <p>Service id.</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Service name.</p>
                     * @return Name <p>Service name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Service name.</p>
                     * @param _name <p>Service name.</p>
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
                     * 获取<p>Remarks.</p>
                     * @return Remark <p>Remarks.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks.</p>
                     * @param _remark <p>Remarks.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>SDK access source. This parameter is optional.</p>
                     * @return SdkSource <p>SDK access source. This parameter is optional.</p>
                     * 
                     */
                    std::string GetSdkSource() const;

                    /**
                     * 设置<p>SDK access source. This parameter is optional.</p>
                     * @param _sdkSource <p>SDK access source. This parameter is optional.</p>
                     * 
                     */
                    void SetSdkSource(const std::string& _sdkSource);

                    /**
                     * 判断参数 SdkSource 是否已赋值
                     * @return SdkSource 是否已赋值
                     * 
                     */
                    bool SdkSourceHasBeenSet() const;

                    /**
                     * 获取<p>Master switch.</p>
                     * @return MainStatus <p>Master switch.</p>
                     * 
                     */
                    bool GetMainStatus() const;

                    /**
                     * 设置<p>Master switch.</p>
                     * @param _mainStatus <p>Master switch.</p>
                     * 
                     */
                    void SetMainStatus(const bool& _mainStatus);

                    /**
                     * 判断参数 MainStatus 是否已赋值
                     * @return MainStatus 是否已赋值
                     * 
                     */
                    bool MainStatusHasBeenSet() const;

                    /**
                     * 获取<p>Rate limiting switch.</p>
                     * @return LimitRuleStatus <p>Rate limiting switch.</p>
                     * 
                     */
                    bool GetLimitRuleStatus() const;

                    /**
                     * 设置<p>Rate limiting switch.</p>
                     * @param _limitRuleStatus <p>Rate limiting switch.</p>
                     * 
                     */
                    void SetLimitRuleStatus(const bool& _limitRuleStatus);

                    /**
                     * 判断参数 LimitRuleStatus 是否已赋值
                     * @return LimitRuleStatus 是否已赋值
                     * 
                     */
                    bool LimitRuleStatusHasBeenSet() const;

                    /**
                     * 获取<p>Content security switch.</p>
                     * @return ContentRuleStatus <p>Content security switch.</p>
                     * 
                     */
                    bool GetContentRuleStatus() const;

                    /**
                     * 设置<p>Content security switch.</p>
                     * @param _contentRuleStatus <p>Content security switch.</p>
                     * 
                     */
                    void SetContentRuleStatus(const bool& _contentRuleStatus);

                    /**
                     * 判断参数 ContentRuleStatus 是否已赋值
                     * @return ContentRuleStatus 是否已赋值
                     * 
                     */
                    bool ContentRuleStatusHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Modification time.</p>
                     * @return UpdateTime <p>Modification time.</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Modification time.</p>
                     * @param _updateTime <p>Modification time.</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of rate limiting rules.</p>
                     * @return LimitRuleCount <p>Number of rate limiting rules.</p>
                     * 
                     */
                    uint64_t GetLimitRuleCount() const;

                    /**
                     * 设置<p>Number of rate limiting rules.</p>
                     * @param _limitRuleCount <p>Number of rate limiting rules.</p>
                     * 
                     */
                    void SetLimitRuleCount(const uint64_t& _limitRuleCount);

                    /**
                     * 判断参数 LimitRuleCount 是否已赋值
                     * @return LimitRuleCount 是否已赋值
                     * 
                     */
                    bool LimitRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of content security rules.</p>
                     * @return ContentRuleCount <p>Number of content security rules.</p>
                     * 
                     */
                    uint64_t GetContentRuleCount() const;

                    /**
                     * 设置<p>Number of content security rules.</p>
                     * @param _contentRuleCount <p>Number of content security rules.</p>
                     * 
                     */
                    void SetContentRuleCount(const uint64_t& _contentRuleCount);

                    /**
                     * 判断参数 ContentRuleCount 是否已赋值
                     * @return ContentRuleCount 是否已赋值
                     * 
                     */
                    bool ContentRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>Tool call protection switch.</p>
                     * @return ToolCallStatus <p>Tool call protection switch.</p>
                     * 
                     */
                    bool GetToolCallStatus() const;

                    /**
                     * 设置<p>Tool call protection switch.</p>
                     * @param _toolCallStatus <p>Tool call protection switch.</p>
                     * 
                     */
                    void SetToolCallStatus(const bool& _toolCallStatus);

                    /**
                     * 判断参数 ToolCallStatus 是否已赋值
                     * @return ToolCallStatus 是否已赋值
                     * 
                     */
                    bool ToolCallStatusHasBeenSet() const;

                    /**
                     * 获取<p>llm inference protection switch.</p>
                     * @return LLMProtectStatus <p>llm inference protection switch.</p>
                     * 
                     */
                    bool GetLLMProtectStatus() const;

                    /**
                     * 设置<p>llm inference protection switch.</p>
                     * @param _lLMProtectStatus <p>llm inference protection switch.</p>
                     * 
                     */
                    void SetLLMProtectStatus(const bool& _lLMProtectStatus);

                    /**
                     * 判断参数 LLMProtectStatus 是否已赋值
                     * @return LLMProtectStatus 是否已赋值
                     * 
                     */
                    bool LLMProtectStatusHasBeenSet() const;

                    /**
                     * 获取<p>Content compliance detection switch.</p>
                     * @return ContentComplianceStatus <p>Content compliance detection switch.</p>
                     * 
                     */
                    bool GetContentComplianceStatus() const;

                    /**
                     * 设置<p>Content compliance detection switch.</p>
                     * @param _contentComplianceStatus <p>Content compliance detection switch.</p>
                     * 
                     */
                    void SetContentComplianceStatus(const bool& _contentComplianceStatus);

                    /**
                     * 判断参数 ContentComplianceStatus 是否已赋值
                     * @return ContentComplianceStatus 是否已赋值
                     * 
                     */
                    bool ContentComplianceStatusHasBeenSet() const;

                    /**
                     * 获取<p>dlp protection switch.</p>
                     * @return DLPStatus <p>dlp protection switch.</p>
                     * 
                     */
                    bool GetDLPStatus() const;

                    /**
                     * 设置<p>dlp protection switch.</p>
                     * @param _dLPStatus <p>dlp protection switch.</p>
                     * 
                     */
                    void SetDLPStatus(const bool& _dLPStatus);

                    /**
                     * 判断参数 DLPStatus 是否已赋值
                     * @return DLPStatus 是否已赋值
                     * 
                     */
                    bool DLPStatusHasBeenSet() const;

                    /**
                     * 获取<p>skills protection switch.</p>
                     * @return SkillsStatus <p>skills protection switch.</p>
                     * 
                     */
                    bool GetSkillsStatus() const;

                    /**
                     * 设置<p>skills protection switch.</p>
                     * @param _skillsStatus <p>skills protection switch.</p>
                     * 
                     */
                    void SetSkillsStatus(const bool& _skillsStatus);

                    /**
                     * 判断参数 SkillsStatus 是否已赋值
                     * @return SkillsStatus 是否已赋值
                     * 
                     */
                    bool SkillsStatusHasBeenSet() const;

                    /**
                     * 获取<p>Intent recognition detection switch.</p>
                     * @return IntentStatus <p>Intent recognition detection switch.</p>
                     * 
                     */
                    bool GetIntentStatus() const;

                    /**
                     * 设置<p>Intent recognition detection switch.</p>
                     * @param _intentStatus <p>Intent recognition detection switch.</p>
                     * 
                     */
                    void SetIntentStatus(const bool& _intentStatus);

                    /**
                     * 判断参数 IntentStatus 是否已赋值
                     * @return IntentStatus 是否已赋值
                     * 
                     */
                    bool IntentStatusHasBeenSet() const;

                    /**
                     * 获取<p>Malicious URL detection switch.</p>
                     * @return UrlDetectStatus <p>Malicious URL detection switch.</p>
                     * 
                     */
                    bool GetUrlDetectStatus() const;

                    /**
                     * 设置<p>Malicious URL detection switch.</p>
                     * @param _urlDetectStatus <p>Malicious URL detection switch.</p>
                     * 
                     */
                    void SetUrlDetectStatus(const bool& _urlDetectStatus);

                    /**
                     * 判断参数 UrlDetectStatus 是否已赋值
                     * @return UrlDetectStatus 是否已赋值
                     * 
                     */
                    bool UrlDetectStatusHasBeenSet() const;

                    /**
                     * 获取<p>Number of effective rules.</p>
                     * @return EffectiveRules <p>Number of effective rules.</p>
                     * 
                     */
                    int64_t GetEffectiveRules() const;

                    /**
                     * 设置<p>Number of effective rules.</p>
                     * @param _effectiveRules <p>Number of effective rules.</p>
                     * 
                     */
                    void SetEffectiveRules(const int64_t& _effectiveRules);

                    /**
                     * 判断参数 EffectiveRules 是否已赋值
                     * @return EffectiveRules 是否已赋值
                     * 
                     */
                    bool EffectiveRulesHasBeenSet() const;

                private:

                    /**
                     * <p>Service id.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Service name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Remarks.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>SDK access source. This parameter is optional.</p>
                     */
                    std::string m_sdkSource;
                    bool m_sdkSourceHasBeenSet;

                    /**
                     * <p>Master switch.</p>
                     */
                    bool m_mainStatus;
                    bool m_mainStatusHasBeenSet;

                    /**
                     * <p>Rate limiting switch.</p>
                     */
                    bool m_limitRuleStatus;
                    bool m_limitRuleStatusHasBeenSet;

                    /**
                     * <p>Content security switch.</p>
                     */
                    bool m_contentRuleStatus;
                    bool m_contentRuleStatusHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Modification time.</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Number of rate limiting rules.</p>
                     */
                    uint64_t m_limitRuleCount;
                    bool m_limitRuleCountHasBeenSet;

                    /**
                     * <p>Number of content security rules.</p>
                     */
                    uint64_t m_contentRuleCount;
                    bool m_contentRuleCountHasBeenSet;

                    /**
                     * <p>Tool call protection switch.</p>
                     */
                    bool m_toolCallStatus;
                    bool m_toolCallStatusHasBeenSet;

                    /**
                     * <p>llm inference protection switch.</p>
                     */
                    bool m_lLMProtectStatus;
                    bool m_lLMProtectStatusHasBeenSet;

                    /**
                     * <p>Content compliance detection switch.</p>
                     */
                    bool m_contentComplianceStatus;
                    bool m_contentComplianceStatusHasBeenSet;

                    /**
                     * <p>dlp protection switch.</p>
                     */
                    bool m_dLPStatus;
                    bool m_dLPStatusHasBeenSet;

                    /**
                     * <p>skills protection switch.</p>
                     */
                    bool m_skillsStatus;
                    bool m_skillsStatusHasBeenSet;

                    /**
                     * <p>Intent recognition detection switch.</p>
                     */
                    bool m_intentStatus;
                    bool m_intentStatusHasBeenSet;

                    /**
                     * <p>Malicious URL detection switch.</p>
                     */
                    bool m_urlDetectStatus;
                    bool m_urlDetectStatusHasBeenSet;

                    /**
                     * <p>Number of effective rules.</p>
                     */
                    int64_t m_effectiveRules;
                    bool m_effectiveRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMSDKACCESSITEM_H_
