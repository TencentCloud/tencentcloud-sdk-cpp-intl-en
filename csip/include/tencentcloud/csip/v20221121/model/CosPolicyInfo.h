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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSPOLICYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos policy information
                */
                class CosPolicyInfo : public AbstractModel
                {
                public:
                    CosPolicyInfo();
                    ~CosPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name.
                     * @return PolicyName Policy name.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name.
                     * @param _policyName Policy name.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy type
PolicyType: 1 alarm policy 2 risk policy 3 allowlist policy 4 ip hiding policy
                     * @return PolicyType Policy type
PolicyType: 1 alarm policy 2 risk policy 3 allowlist policy 4 ip hiding policy
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置Policy type
PolicyType: 1 alarm policy 2 risk policy 3 allowlist policy 4 ip hiding policy
                     * @param _policyType Policy type
PolicyType: 1 alarm policy 2 risk policy 3 allowlist policy 4 ip hiding policy
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取system: system built-in user: user-customized
                     * @return PolicySource system: system built-in user: user-customized
                     * 
                     */
                    int64_t GetPolicySource() const;

                    /**
                     * 设置system: system built-in user: user-customized
                     * @param _policySource system: system built-in user: user-customized
                     * 
                     */
                    void SetPolicySource(const int64_t& _policySource);

                    /**
                     * 判断参数 PolicySource 是否已赋值
                     * @return PolicySource 是否已赋值
                     * 
                     */
                    bool PolicySourceHasBeenSet() const;

                    /**
                     * 获取Policy content
                     * @return PolicyContent Policy content
                     * 
                     */
                    std::string GetPolicyContent() const;

                    /**
                     * 设置Policy content
                     * @param _policyContent Policy content
                     * 
                     */
                    void SetPolicyContent(const std::string& _policyContent);

                    /**
                     * 判断参数 PolicyContent 是否已赋值
                     * @return PolicyContent 是否已赋值
                     * 
                     */
                    bool PolicyContentHasBeenSet() const;

                    /**
                     * 获取0: disabled
1: enabled.
                     * @return PolicyStatus 0: disabled
1: enabled.
                     * 
                     */
                    int64_t GetPolicyStatus() const;

                    /**
                     * 设置0: disabled
1: enabled.
                     * @param _policyStatus 0: disabled
1: enabled.
                     * 
                     */
                    void SetPolicyStatus(const int64_t& _policyStatus);

                    /**
                     * 判断参数 PolicyStatus 是否已赋值
                     * @return PolicyStatus 是否已赋值
                     * 
                     */
                    bool PolicyStatusHasBeenSet() const;

                    /**
                     * 获取Policy classification
                     * @return PolicyAbnormalType Policy classification
                     * 
                     */
                    int64_t GetPolicyAbnormalType() const;

                    /**
                     * 设置Policy classification
                     * @param _policyAbnormalType Policy classification
                     * 
                     */
                    void SetPolicyAbnormalType(const int64_t& _policyAbnormalType);

                    /**
                     * 判断参数 PolicyAbnormalType 是否已赋值
                     * @return PolicyAbnormalType 是否已赋值
                     * 
                     */
                    bool PolicyAbnormalTypeHasBeenSet() const;

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
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return PolicyCreateTime Creation time.
                     * 
                     */
                    int64_t GetPolicyCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _policyCreateTime Creation time.
                     * 
                     */
                    void SetPolicyCreateTime(const int64_t& _policyCreateTime);

                    /**
                     * 判断参数 PolicyCreateTime 是否已赋值
                     * @return PolicyCreateTime 是否已赋值
                     * 
                     */
                    bool PolicyCreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return PolicyUpdateTime Update time.
                     * 
                     */
                    int64_t GetPolicyUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _policyUpdateTime Update time.
                     * 
                     */
                    void SetPolicyUpdateTime(const int64_t& _policyUpdateTime);

                    /**
                     * 判断参数 PolicyUpdateTime 是否已赋值
                     * @return PolicyUpdateTime 是否已赋值
                     * 
                     */
                    bool PolicyUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Number of policy hits in the last 7 days
                     * @return PolicyHitCount Number of policy hits in the last 7 days
                     * 
                     */
                    int64_t GetPolicyHitCount() const;

                    /**
                     * 设置Number of policy hits in the last 7 days
                     * @param _policyHitCount Number of policy hits in the last 7 days
                     * 
                     */
                    void SetPolicyHitCount(const int64_t& _policyHitCount);

                    /**
                     * 判断参数 PolicyHitCount 是否已赋值
                     * @return PolicyHitCount 是否已赋值
                     * 
                     */
                    bool PolicyHitCountHasBeenSet() const;

                    /**
                     * 获取Alarm content hash
                     * @return PolicyContentHash Alarm content hash
                     * 
                     */
                    std::string GetPolicyContentHash() const;

                    /**
                     * 设置Alarm content hash
                     * @param _policyContentHash Alarm content hash
                     * 
                     */
                    void SetPolicyContentHash(const std::string& _policyContentHash);

                    /**
                     * 判断参数 PolicyContentHash 是否已赋值
                     * @return PolicyContentHash 是否已赋值
                     * 
                     */
                    bool PolicyContentHashHasBeenSet() const;

                    /**
                     * 获取Number of associated accounts.
                     * @return RelAccountCount Number of associated accounts.
                     * 
                     */
                    int64_t GetRelAccountCount() const;

                    /**
                     * 设置Number of associated accounts.
                     * @param _relAccountCount Number of associated accounts.
                     * 
                     */
                    void SetRelAccountCount(const int64_t& _relAccountCount);

                    /**
                     * 判断参数 RelAccountCount 是否已赋值
                     * @return RelAccountCount 是否已赋值
                     * 
                     */
                    bool RelAccountCountHasBeenSet() const;

                    /**
                     * 获取Associated account UIN
                     * @return RelAccountUin Associated account UIN
                     * 
                     */
                    std::string GetRelAccountUin() const;

                    /**
                     * 设置Associated account UIN
                     * @param _relAccountUin Associated account UIN
                     * 
                     */
                    void SetRelAccountUin(const std::string& _relAccountUin);

                    /**
                     * 判断参数 RelAccountUin 是否已赋值
                     * @return RelAccountUin 是否已赋值
                     * 
                     */
                    bool RelAccountUinHasBeenSet() const;

                    /**
                     * 获取Name of the associated account
                     * @return RelAccountName Name of the associated account
                     * 
                     */
                    std::string GetRelAccountName() const;

                    /**
                     * 设置Name of the associated account
                     * @param _relAccountName Name of the associated account
                     * 
                     */
                    void SetRelAccountName(const std::string& _relAccountName);

                    /**
                     * 判断参数 RelAccountName 是否已赋值
                     * @return RelAccountName 是否已赋值
                     * 
                     */
                    bool RelAccountNameHasBeenSet() const;

                    /**
                     * 获取Description information
                     * @return PolicyDescription Description information
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置Description information
                     * @param _policyDescription Description information
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return PolicyMarker Remarks
                     * 
                     */
                    std::string GetPolicyMarker() const;

                    /**
                     * 设置Remarks
                     * @param _policyMarker Remarks
                     * 
                     */
                    void SetPolicyMarker(const std::string& _policyMarker);

                    /**
                     * 判断参数 PolicyMarker 是否已赋值
                     * @return PolicyMarker 是否已赋值
                     * 
                     */
                    bool PolicyMarkerHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取id set in a multi-account scenario
                     * @return PolicyIdSet id set in a multi-account scenario
                     * 
                     */
                    std::vector<int64_t> GetPolicyIdSet() const;

                    /**
                     * 设置id set in a multi-account scenario
                     * @param _policyIdSet id set in a multi-account scenario
                     * 
                     */
                    void SetPolicyIdSet(const std::vector<int64_t>& _policyIdSet);

                    /**
                     * 判断参数 PolicyIdSet 是否已赋值
                     * @return PolicyIdSet 是否已赋值
                     * 
                     */
                    bool PolicyIdSetHasBeenSet() const;

                    /**
                     * 获取Whether to dispose of historical data status. 0: no disposal required. 1: disposal required. 2: processed
                     * @return PolicyHistoryHandleStatus Whether to dispose of historical data status. 0: no disposal required. 1: disposal required. 2: processed
                     * 
                     */
                    uint64_t GetPolicyHistoryHandleStatus() const;

                    /**
                     * 设置Whether to dispose of historical data status. 0: no disposal required. 1: disposal required. 2: processed
                     * @param _policyHistoryHandleStatus Whether to dispose of historical data status. 0: no disposal required. 1: disposal required. 2: processed
                     * 
                     */
                    void SetPolicyHistoryHandleStatus(const uint64_t& _policyHistoryHandleStatus);

                    /**
                     * 判断参数 PolicyHistoryHandleStatus 是否已赋值
                     * @return PolicyHistoryHandleStatus 是否已赋值
                     * 
                     */
                    bool PolicyHistoryHandleStatusHasBeenSet() const;

                    /**
                     * 获取System policy edit status
                     * @return SystemPolicyEditStatus System policy edit status
                     * 
                     */
                    int64_t GetSystemPolicyEditStatus() const;

                    /**
                     * 设置System policy edit status
                     * @param _systemPolicyEditStatus System policy edit status
                     * 
                     */
                    void SetSystemPolicyEditStatus(const int64_t& _systemPolicyEditStatus);

                    /**
                     * 判断参数 SystemPolicyEditStatus 是否已赋值
                     * @return SystemPolicyEditStatus 是否已赋值
                     * 
                     */
                    bool SystemPolicyEditStatusHasBeenSet() const;

                private:

                    /**
                     * Policy name.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy type
PolicyType: 1 alarm policy 2 risk policy 3 allowlist policy 4 ip hiding policy
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * system: system built-in user: user-customized
                     */
                    int64_t m_policySource;
                    bool m_policySourceHasBeenSet;

                    /**
                     * Policy content
                     */
                    std::string m_policyContent;
                    bool m_policyContentHasBeenSet;

                    /**
                     * 0: disabled
1: enabled.
                     */
                    int64_t m_policyStatus;
                    bool m_policyStatusHasBeenSet;

                    /**
                     * Policy classification
                     */
                    int64_t m_policyAbnormalType;
                    bool m_policyAbnormalTypeHasBeenSet;

                    /**
                     * Risk level
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_policyCreateTime;
                    bool m_policyCreateTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    int64_t m_policyUpdateTime;
                    bool m_policyUpdateTimeHasBeenSet;

                    /**
                     * Number of policy hits in the last 7 days
                     */
                    int64_t m_policyHitCount;
                    bool m_policyHitCountHasBeenSet;

                    /**
                     * Alarm content hash
                     */
                    std::string m_policyContentHash;
                    bool m_policyContentHashHasBeenSet;

                    /**
                     * Number of associated accounts.
                     */
                    int64_t m_relAccountCount;
                    bool m_relAccountCountHasBeenSet;

                    /**
                     * Associated account UIN
                     */
                    std::string m_relAccountUin;
                    bool m_relAccountUinHasBeenSet;

                    /**
                     * Name of the associated account
                     */
                    std::string m_relAccountName;
                    bool m_relAccountNameHasBeenSet;

                    /**
                     * Description information
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_policyMarker;
                    bool m_policyMarkerHasBeenSet;

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * id set in a multi-account scenario
                     */
                    std::vector<int64_t> m_policyIdSet;
                    bool m_policyIdSetHasBeenSet;

                    /**
                     * Whether to dispose of historical data status. 0: no disposal required. 1: disposal required. 2: processed
                     */
                    uint64_t m_policyHistoryHandleStatus;
                    bool m_policyHistoryHandleStatusHasBeenSet;

                    /**
                     * System policy edit status
                     */
                    int64_t m_systemPolicyEditStatus;
                    bool m_systemPolicyEditStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSPOLICYINFO_H_
