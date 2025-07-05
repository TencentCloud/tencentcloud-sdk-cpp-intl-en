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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICY_H_

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
                * Baseline policy information
                */
                class BaselinePolicy : public AbstractModel
                {
                public:
                    BaselinePolicy();
                    ~BaselinePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name, which is no more than 128 English characters in length.
                     * @return PolicyName Policy name, which is no more than 128 English characters in length.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name, which is no more than 128 English characters in length.
                     * @param _policyName Policy name, which is no more than 128 English characters in length.
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
                     * 获取Detection interval [1: 1 day|3: 3 days|5: 5 days|7: 7 days]
                     * @return DetectInterval Detection interval [1: 1 day|3: 3 days|5: 5 days|7: 7 days]
                     * 
                     */
                    int64_t GetDetectInterval() const;

                    /**
                     * 设置Detection interval [1: 1 day|3: 3 days|5: 5 days|7: 7 days]
                     * @param _detectInterval Detection interval [1: 1 day|3: 3 days|5: 5 days|7: 7 days]
                     * 
                     */
                    void SetDetectInterval(const int64_t& _detectInterval);

                    /**
                     * 判断参数 DetectInterval 是否已赋值
                     * @return DetectInterval 是否已赋值
                     * 
                     */
                    bool DetectIntervalHasBeenSet() const;

                    /**
                     * 获取Detection time
                     * @return DetectTime Detection time
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置Detection time
                     * @param _detectTime Detection time
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取Whether enabled [0: not enabled|1: enabled]
                     * @return IsEnabled Whether enabled [0: not enabled|1: enabled]
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置Whether enabled [0: not enabled|1: enabled]
                     * @param _isEnabled Whether enabled [0: not enabled|1: enabled]
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * @return AssetType Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * @param _assetType Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

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
                     * 获取Number of associated baseline items
                     * @return RuleCount Number of associated baseline items
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置Number of associated baseline items
                     * @param _ruleCount Number of associated baseline items
                     * 
                     */
                    void SetRuleCount(const int64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取Number of associated baseline items
                     * @return ItemCount Number of associated baseline items
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置Number of associated baseline items
                     * @param _itemCount Number of associated baseline items
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取Number of associated baseline hosts
                     * @return HostCount Number of associated baseline hosts
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Number of associated baseline hosts
                     * @param _hostCount Number of associated baseline hosts
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleIds Rule ID
                     * 
                     */
                    std::vector<int64_t> GetRuleIds() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleIds Rule ID
                     * 
                     */
                    void SetRuleIds(const std::vector<int64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取Host ID
                     * @return HostIds Host ID
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Host ID
                     * @param _hostIds Host ID
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取Host IP
                     * @return HostIps Host IP
                     * 
                     */
                    std::vector<std::string> GetHostIps() const;

                    /**
                     * 设置Host IP
                     * @param _hostIps Host IP
                     * 
                     */
                    void SetHostIps(const std::vector<std::string>& _hostIps);

                    /**
                     * 判断参数 HostIps 是否已赋值
                     * @return HostIps 是否已赋值
                     * 
                     */
                    bool HostIpsHasBeenSet() const;

                    /**
                     * 获取Whether the system default
                     * @return IsDefault Whether the system default
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether the system default
                     * @param _isDefault Whether the system default
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * Policy name, which is no more than 128 English characters in length.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Detection interval [1: 1 day|3: 3 days|5: 5 days|7: 7 days]
                     */
                    int64_t m_detectInterval;
                    bool m_detectIntervalHasBeenSet;

                    /**
                     * Detection time
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * Whether enabled [0: not enabled|1: enabled]
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Asset type [0: all Professional and Ultimate editions|1: ID | 2: IP]
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Number of associated baseline items
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * Number of associated baseline items
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * Number of associated baseline hosts
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::vector<int64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * Host ID
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * Host IP
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                    /**
                     * Whether the system default
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICY_H_
