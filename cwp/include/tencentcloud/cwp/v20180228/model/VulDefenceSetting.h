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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCESETTING_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Vulnerability defense settings
                */
                class VulDefenceSetting : public AbstractModel
                {
                public:
                    VulDefenceSetting();
                    ~VulDefenceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取System policy
Create a custom policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyType System policy
Create a custom policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStrategyType() const;

                    /**
                     * 设置System policy
Create a custom policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyType System policy
Create a custom policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyType(const uint64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Threat level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ThreatLevel Threat level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetThreatLevel() const;

                    /**
                     * 设置Threat level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _threatLevel Threat level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetThreatLevel(const uint64_t& _threatLevel);

                    /**
                     * 判断参数 ThreatLevel 是否已赋值
                     * @return ThreatLevel 是否已赋值
                     * 
                     */
                    bool ThreatLevelHasBeenSet() const;

                    /**
                     * 获取All Flagship Edition Hosts
Specified hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scope All Flagship Edition Hosts
Specified hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置All Flagship Edition Hosts
Specified hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scope All Flagship Edition Hosts
Specified hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Number of supported vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportVulNum Number of supported vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSupportVulNum() const;

                    /**
                     * 设置Number of supported vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportVulNum Number of supported vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportVulNum(const uint64_t& _supportVulNum);

                    /**
                     * 判断参数 SupportVulNum 是否已赋值
                     * @return SupportVulNum 是否已赋值
                     * 
                     */
                    bool SupportVulNumHasBeenSet() const;

                    /**
                     * 获取0: disabled, 1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable 0: disabled, 1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置0: disabled, 1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable 0: disabled, 1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User's member ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberId User's member ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置User's member ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberId User's member ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Policy action
Alarm
1. Defense
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyAction Policy action
Alarm
1. Defense
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStrategyAction() const;

                    /**
                     * 设置Policy action
Alarm
1. Defense
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyAction Policy action
Alarm
1. Defense
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyAction(const uint64_t& _strategyAction);

                    /**
                     * 判断参数 StrategyAction 是否已赋值
                     * @return StrategyAction 是否已赋值
                     * 
                     */
                    bool StrategyActionHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nickname User Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置User Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nickname User Nickname
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Protection type
Vulnerability defense
Attack detection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceType Protection type
Vulnerability defense
Attack detection
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDefenceType() const;

                    /**
                     * 设置Protection type
Vulnerability defense
Attack detection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceType Protection type
Vulnerability defense
Attack detection
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefenceType(const uint64_t& _defenceType);

                    /**
                     * 判断参数 DefenceType 是否已赋值
                     * @return DefenceType 是否已赋值
                     * 
                     */
                    bool DefenceTypeHasBeenSet() const;

                    /**
                     * 获取Number of custom hosts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceNum Number of custom hosts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInstanceNum() const;

                    /**
                     * 设置Number of custom hosts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceNum Number of custom hosts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceNum(const uint64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * System policy
Create a custom policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Threat level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_threatLevel;
                    bool m_threatLevelHasBeenSet;

                    /**
                     * All Flagship Edition Hosts
Specified hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Number of supported vulnerabilities.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_supportVulNum;
                    bool m_supportVulNumHasBeenSet;

                    /**
                     * 0: disabled, 1: enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * User appid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User's member ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Policy action
Alarm
1. Defense
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_strategyAction;
                    bool m_strategyActionHasBeenSet;

                    /**
                     * User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * User Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Protection type
Vulnerability defense
Attack detection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_defenceType;
                    bool m_defenceTypeHasBeenSet;

                    /**
                     * Number of custom hosts.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCESETTING_H_
