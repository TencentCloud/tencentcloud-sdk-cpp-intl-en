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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBARULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBARULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UebaCustomRule.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * User Behavior Analysis Policy
                */
                class UebaRule : public AbstractModel
                {
                public:
                    UebaRule();
                    ~UebaRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
                     * @return RuleID Policy ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Policy ID
                     * @param _ruleID Policy ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

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
                     * 获取Policy type
System policy
custom policy
                     * @return RuleType Policy type
System policy
custom policy
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置Policy type
System policy
custom policy
                     * @param _ruleType Policy type
System policy
custom policy
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Policy level
Prompt.
1: low
2: Medium risk
3: High risk
4: Critical
                     * @return RuleLevel Policy level
Prompt.
1: low
2: Medium risk
3: High risk
4: Critical
                     * 
                     */
                    int64_t GetRuleLevel() const;

                    /**
                     * 设置Policy level
Prompt.
1: low
2: Medium risk
3: High risk
4: Critical
                     * @param _ruleLevel Policy level
Prompt.
1: low
2: Medium risk
3: High risk
4: Critical
                     * 
                     */
                    void SetRuleLevel(const int64_t& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取Policy content
                     * @return RuleContent Policy content
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置Policy content
                     * @param _ruleContent Policy content
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取Policy switch
                     * @return RuleStatus Policy switch
                     * 
                     */
                    bool GetRuleStatus() const;

                    /**
                     * 设置Policy switch
                     * @param _ruleStatus Policy switch
                     * 
                     */
                    void SetRuleStatus(const bool& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取Number of hits
                     * @return HitCount Number of hits
                     * 
                     */
                    uint64_t GetHitCount() const;

                    /**
                     * 设置Number of hits
                     * @param _hitCount Number of hits
                     * 
                     */
                    void SetHitCount(const uint64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取Associated account Appid.
                     * @return AppID Associated account Appid.
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置Associated account Appid.
                     * @param _appID Associated account Appid.
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Multi-account, member ID
                     * @return MemberID Multi-account, member ID
                     * 
                     */
                    std::string GetMemberID() const;

                    /**
                     * 设置Multi-account, member ID
                     * @param _memberID Multi-account, member ID
                     * 
                     */
                    void SetMemberID(const std::string& _memberID);

                    /**
                     * 判断参数 MemberID 是否已赋值
                     * @return MemberID 是否已赋值
                     * 
                     */
                    bool MemberIDHasBeenSet() const;

                    /**
                     * 获取Uin
                     * @return Uin Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin
                     * @param _uin Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Nickname
                     * @return Nickname Nickname
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname
                     * @param _nickname Nickname
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Custom rule specific content
                     * @return CustomRuleDetail Custom rule specific content
                     * 
                     */
                    UebaCustomRule GetCustomRuleDetail() const;

                    /**
                     * 设置Custom rule specific content
                     * @param _customRuleDetail Custom rule specific content
                     * 
                     */
                    void SetCustomRuleDetail(const UebaCustomRule& _customRuleDetail);

                    /**
                     * 判断参数 CustomRuleDetail 是否已赋值
                     * @return CustomRuleDetail 是否已赋值
                     * 
                     */
                    bool CustomRuleDetailHasBeenSet() const;

                    /**
                     * 获取Cloud type
0 Tencent Cloud
aws:1
                     * @return CloudType Cloud type
0 Tencent Cloud
aws:1
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud type
0 Tencent Cloud
aws:1
                     * @param _cloudType Cloud type
0 Tencent Cloud
aws:1
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Policy type
System policy
custom policy
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Policy level
Prompt.
1: low
2: Medium risk
3: High risk
4: Critical
                     */
                    int64_t m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * Policy content
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * Policy switch
                     */
                    bool m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Number of hits
                     */
                    uint64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * Associated account Appid.
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Multi-account, member ID
                     */
                    std::string m_memberID;
                    bool m_memberIDHasBeenSet;

                    /**
                     * Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Custom rule specific content
                     */
                    UebaCustomRule m_customRuleDetail;
                    bool m_customRuleDetailHasBeenSet;

                    /**
                     * Cloud type
0 Tencent Cloud
aws:1
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBARULE_H_
