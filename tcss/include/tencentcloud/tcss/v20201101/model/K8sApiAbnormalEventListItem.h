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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleScopeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Items in the K8sApi abnormal event list
                */
                class K8sApiAbnormalEventListItem : public AbstractModel
                {
                public:
                    K8sApiAbnormalEventListItem();
                    ~K8sApiAbnormalEventListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
                     * @return ID Event ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Event ID
                     * @param _iD Event ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Hit rule type
                     * @return MatchRuleType Hit rule type
                     * 
                     */
                    std::string GetMatchRuleType() const;

                    /**
                     * 设置Hit rule type
                     * @param _matchRuleType Hit rule type
                     * 
                     */
                    void SetMatchRuleType(const std::string& _matchRuleType);

                    /**
                     * 判断参数 MatchRuleType 是否已赋值
                     * @return MatchRuleType 是否已赋值
                     * 
                     */
                    bool MatchRuleTypeHasBeenSet() const;

                    /**
                     * 获取Threat level
                     * @return RiskLevel Threat level
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Threat level
                     * @param _riskLevel Threat level
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterID Cluster ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster running status
                     * @return ClusterRunningStatus Cluster running status
                     * 
                     */
                    std::string GetClusterRunningStatus() const;

                    /**
                     * 设置Cluster running status
                     * @param _clusterRunningStatus Cluster running status
                     * 
                     */
                    void SetClusterRunningStatus(const std::string& _clusterRunningStatus);

                    /**
                     * 判断参数 ClusterRunningStatus 是否已赋值
                     * @return ClusterRunningStatus 是否已赋值
                     * 
                     */
                    bool ClusterRunningStatusHasBeenSet() const;

                    /**
                     * 获取First creation time
                     * @return FirstCreateTime First creation time
                     * 
                     */
                    std::string GetFirstCreateTime() const;

                    /**
                     * 设置First creation time
                     * @param _firstCreateTime First creation time
                     * 
                     */
                    void SetFirstCreateTime(const std::string& _firstCreateTime);

                    /**
                     * 判断参数 FirstCreateTime 是否已赋值
                     * @return FirstCreateTime 是否已赋值
                     * 
                     */
                    bool FirstCreateTimeHasBeenSet() const;

                    /**
                     * 获取Last creation time
                     * @return LastCreateTime Last creation time
                     * 
                     */
                    std::string GetLastCreateTime() const;

                    /**
                     * 设置Last creation time
                     * @param _lastCreateTime Last creation time
                     * 
                     */
                    void SetLastCreateTime(const std::string& _lastCreateTime);

                    /**
                     * 判断参数 LastCreateTime 是否已赋值
                     * @return LastCreateTime 是否已赋值
                     * 
                     */
                    bool LastCreateTimeHasBeenSet() const;

                    /**
                     * 获取Number of alarms
                     * @return AlarmCount Number of alarms
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置Number of alarms
                     * @param _alarmCount Number of alarms
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Rule type
                     * @return RuleType Rule type
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type
                     * @param _ruleType Rule type
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Desc Description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param _desc Description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return Suggestion Solution
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Solution
                     * @param _suggestion Solution
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

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
                     * 获取Hit rule
                     * @return MatchRule Hit rule
                     * 
                     */
                    K8sApiAbnormalRuleScopeInfo GetMatchRule() const;

                    /**
                     * 设置Hit rule
                     * @param _matchRule Hit rule
                     * 
                     */
                    void SetMatchRule(const K8sApiAbnormalRuleScopeInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                private:

                    /**
                     * Event ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Hit rule type
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * Threat level
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster running status
                     */
                    std::string m_clusterRunningStatus;
                    bool m_clusterRunningStatusHasBeenSet;

                    /**
                     * First creation time
                     */
                    std::string m_firstCreateTime;
                    bool m_firstCreateTimeHasBeenSet;

                    /**
                     * Last creation time
                     */
                    std::string m_lastCreateTime;
                    bool m_lastCreateTimeHasBeenSet;

                    /**
                     * Number of alarms
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule type
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Hit rule
                     */
                    K8sApiAbnormalRuleScopeInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTLISTITEM_H_
