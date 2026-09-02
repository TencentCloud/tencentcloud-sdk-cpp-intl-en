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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORASSETREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertCountForAsset request structure.
                */
                class DescribeEdrAlertCountForAssetRequest : public AbstractModel
                {
                public:
                    DescribeEdrAlertCountForAssetRequest();
                    ~DescribeEdrAlertCountForAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>List of host instance_id. If empty, return summarize for the appid corresponding to MemberId within range. If not empty, return statistics by each instance_id granularity.</p>
                     * @return InstanceIds <p>List of host instance_id. If empty, return summarize for the appid corresponding to MemberId within range. If not empty, return statistics by each instance_id granularity.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>List of host instance_id. If empty, return summarize for the appid corresponding to MemberId within range. If not empty, return statistics by each instance_id granularity.</p>
                     * @param _instanceIds <p>List of host instance_id. If empty, return summarize for the appid corresponding to MemberId within range. If not empty, return statistics by each instance_id granularity.</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria list, consistent with DescribeEdrAlertList. Supported Name Values and corresponding Values enumeration: Status - string - Required: No - Alarm Status. Values: PENDING, WHITELISTED, PROCESSED, IGNORED. Level - string - Required: No - Alarm Level. Values: CRITICAL, HIGH, MEDIUM, LOW, INFO. DetectMode - string - Required: No - Detection mode. Values: PRECISE, BALANCED, DEEP. AlertCategory - string - Required: No - Major category of alarm. Values: VIRUS_TROJAN, ABNORMAL_LOGIN, HOST_BEHAVIOR, NETWORK_BEHAVIOR, AI_LINK_ENGINE. AlertSubType - string - Required: No - Alarm sub-type. Values: MALWARE_FILE, MALWARE_PROCESS, RISK_LOGIN, BRUTE_FORCE, DNS, BASH, PRIV_ESCALATION, REVERSE_SHELL, NET_ATTACK, VUL_DEFENCE, MEMORY_SHELL_INJECT, MEMORY_SHELL_SCAN, MULTI_BEHAVIOR_ATTACK. AttackStage - string - Required: No - ATT&CK ATTACK stage. Values: TA0001-TA0011, TA0040, TA0042, TA0043. Empty string means unclassified. AlertSource - string - Required: No - Alarm source. Values: HOST. StartTime - string - Required: No - Start time in YYYY-MM-DD HH:MM:SS format. Defaults to the last 180 days if not passed. EndTime - string - Required: No - End time in YYYY-MM-DD HH:MM:SS format. Defaults to the current time if not passed.</p>
                     * @return Filters <p>Filter criteria list, consistent with DescribeEdrAlertList. Supported Name Values and corresponding Values enumeration: Status - string - Required: No - Alarm Status. Values: PENDING, WHITELISTED, PROCESSED, IGNORED. Level - string - Required: No - Alarm Level. Values: CRITICAL, HIGH, MEDIUM, LOW, INFO. DetectMode - string - Required: No - Detection mode. Values: PRECISE, BALANCED, DEEP. AlertCategory - string - Required: No - Major category of alarm. Values: VIRUS_TROJAN, ABNORMAL_LOGIN, HOST_BEHAVIOR, NETWORK_BEHAVIOR, AI_LINK_ENGINE. AlertSubType - string - Required: No - Alarm sub-type. Values: MALWARE_FILE, MALWARE_PROCESS, RISK_LOGIN, BRUTE_FORCE, DNS, BASH, PRIV_ESCALATION, REVERSE_SHELL, NET_ATTACK, VUL_DEFENCE, MEMORY_SHELL_INJECT, MEMORY_SHELL_SCAN, MULTI_BEHAVIOR_ATTACK. AttackStage - string - Required: No - ATT&CK ATTACK stage. Values: TA0001-TA0011, TA0040, TA0042, TA0043. Empty string means unclassified. AlertSource - string - Required: No - Alarm source. Values: HOST. StartTime - string - Required: No - Start time in YYYY-MM-DD HH:MM:SS format. Defaults to the last 180 days if not passed. EndTime - string - Required: No - End time in YYYY-MM-DD HH:MM:SS format. Defaults to the current time if not passed.</p>
                     * 
                     */
                    std::vector<EDRFilters> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria list, consistent with DescribeEdrAlertList. Supported Name Values and corresponding Values enumeration: Status - string - Required: No - Alarm Status. Values: PENDING, WHITELISTED, PROCESSED, IGNORED. Level - string - Required: No - Alarm Level. Values: CRITICAL, HIGH, MEDIUM, LOW, INFO. DetectMode - string - Required: No - Detection mode. Values: PRECISE, BALANCED, DEEP. AlertCategory - string - Required: No - Major category of alarm. Values: VIRUS_TROJAN, ABNORMAL_LOGIN, HOST_BEHAVIOR, NETWORK_BEHAVIOR, AI_LINK_ENGINE. AlertSubType - string - Required: No - Alarm sub-type. Values: MALWARE_FILE, MALWARE_PROCESS, RISK_LOGIN, BRUTE_FORCE, DNS, BASH, PRIV_ESCALATION, REVERSE_SHELL, NET_ATTACK, VUL_DEFENCE, MEMORY_SHELL_INJECT, MEMORY_SHELL_SCAN, MULTI_BEHAVIOR_ATTACK. AttackStage - string - Required: No - ATT&CK ATTACK stage. Values: TA0001-TA0011, TA0040, TA0042, TA0043. Empty string means unclassified. AlertSource - string - Required: No - Alarm source. Values: HOST. StartTime - string - Required: No - Start time in YYYY-MM-DD HH:MM:SS format. Defaults to the last 180 days if not passed. EndTime - string - Required: No - End time in YYYY-MM-DD HH:MM:SS format. Defaults to the current time if not passed.</p>
                     * @param _filters <p>Filter criteria list, consistent with DescribeEdrAlertList. Supported Name Values and corresponding Values enumeration: Status - string - Required: No - Alarm Status. Values: PENDING, WHITELISTED, PROCESSED, IGNORED. Level - string - Required: No - Alarm Level. Values: CRITICAL, HIGH, MEDIUM, LOW, INFO. DetectMode - string - Required: No - Detection mode. Values: PRECISE, BALANCED, DEEP. AlertCategory - string - Required: No - Major category of alarm. Values: VIRUS_TROJAN, ABNORMAL_LOGIN, HOST_BEHAVIOR, NETWORK_BEHAVIOR, AI_LINK_ENGINE. AlertSubType - string - Required: No - Alarm sub-type. Values: MALWARE_FILE, MALWARE_PROCESS, RISK_LOGIN, BRUTE_FORCE, DNS, BASH, PRIV_ESCALATION, REVERSE_SHELL, NET_ATTACK, VUL_DEFENCE, MEMORY_SHELL_INJECT, MEMORY_SHELL_SCAN, MULTI_BEHAVIOR_ATTACK. AttackStage - string - Required: No - ATT&CK ATTACK stage. Values: TA0001-TA0011, TA0040, TA0042, TA0043. Empty string means unclassified. AlertSource - string - Required: No - Alarm source. Values: HOST. StartTime - string - Required: No - Start time in YYYY-MM-DD HH:MM:SS format. Defaults to the last 180 days if not passed. EndTime - string - Required: No - End time in YYYY-MM-DD HH:MM:SS format. Defaults to the current time if not passed.</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>List of host instance_id. If empty, return summarize for the appid corresponding to MemberId within range. If not empty, return statistics by each instance_id granularity.</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Filter criteria list, consistent with DescribeEdrAlertList. Supported Name Values and corresponding Values enumeration: Status - string - Required: No - Alarm Status. Values: PENDING, WHITELISTED, PROCESSED, IGNORED. Level - string - Required: No - Alarm Level. Values: CRITICAL, HIGH, MEDIUM, LOW, INFO. DetectMode - string - Required: No - Detection mode. Values: PRECISE, BALANCED, DEEP. AlertCategory - string - Required: No - Major category of alarm. Values: VIRUS_TROJAN, ABNORMAL_LOGIN, HOST_BEHAVIOR, NETWORK_BEHAVIOR, AI_LINK_ENGINE. AlertSubType - string - Required: No - Alarm sub-type. Values: MALWARE_FILE, MALWARE_PROCESS, RISK_LOGIN, BRUTE_FORCE, DNS, BASH, PRIV_ESCALATION, REVERSE_SHELL, NET_ATTACK, VUL_DEFENCE, MEMORY_SHELL_INJECT, MEMORY_SHELL_SCAN, MULTI_BEHAVIOR_ATTACK. AttackStage - string - Required: No - ATT&CK ATTACK stage. Values: TA0001-TA0011, TA0040, TA0042, TA0043. Empty string means unclassified. AlertSource - string - Required: No - Alarm source. Values: HOST. StartTime - string - Required: No - Start time in YYYY-MM-DD HH:MM:SS format. Defaults to the last 180 days if not passed. EndTime - string - Required: No - End time in YYYY-MM-DD HH:MM:SS format. Defaults to the current time if not passed.</p>
                     */
                    std::vector<EDRFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORASSETREQUEST_H_
