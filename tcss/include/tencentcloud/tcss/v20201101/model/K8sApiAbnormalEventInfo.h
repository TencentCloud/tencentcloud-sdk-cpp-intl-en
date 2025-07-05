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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_

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
                * K8sApi api abnormal event details
                */
                class K8sApiAbnormalEventInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalEventInfo();
                    ~K8sApiAbnormalEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hit rule name
                     * @return MatchRuleName Hit rule name
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置Hit rule name
                     * @param _matchRuleName Hit rule name
                     * 
                     */
                    void SetMatchRuleName(const std::string& _matchRuleName);

                    /**
                     * 判断参数 MatchRuleName 是否已赋值
                     * @return MatchRuleName 是否已赋值
                     * 
                     */
                    bool MatchRuleNameHasBeenSet() const;

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
                     * 获取Alarm level
                     * @return RiskLevel Alarm level
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Alarm level
                     * @param _riskLevel Alarm level
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
`EVENT_UNDEAL`: Unhandled
`EVENT_DEALED`: Handled
`EVENT_IGNORE`: Ignored
`EVENT_DEL`: Deleted
`EVENT_ADD_WHITE`: Added to an allowlist
                     * @return Status Status
`EVENT_UNDEAL`: Unhandled
`EVENT_DEALED`: Handled
`EVENT_IGNORE`: Ignored
`EVENT_DEL`: Deleted
`EVENT_ADD_WHITE`: Added to an allowlist
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
`EVENT_UNDEAL`: Unhandled
`EVENT_DEALED`: Handled
`EVENT_IGNORE`: Ignored
`EVENT_DEL`: Deleted
`EVENT_ADD_WHITE`: Added to an allowlist
                     * @param _status Status
`EVENT_UNDEAL`: Unhandled
`EVENT_DEALED`: Handled
`EVENT_IGNORE`: Ignored
`EVENT_DEL`: Deleted
`EVENT_ADD_WHITE`: Added to an allowlist
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
                     * 获取The master IP of a cluster
                     * @return ClusterMasterIP The master IP of a cluster
                     * 
                     */
                    std::string GetClusterMasterIP() const;

                    /**
                     * 设置The master IP of a cluster
                     * @param _clusterMasterIP The master IP of a cluster
                     * 
                     */
                    void SetClusterMasterIP(const std::string& _clusterMasterIP);

                    /**
                     * 判断参数 ClusterMasterIP 是否已赋值
                     * @return ClusterMasterIP 是否已赋值
                     * 
                     */
                    bool ClusterMasterIPHasBeenSet() const;

                    /**
                     * 获取K8s version
                     * @return K8sVersion K8s version
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置K8s version
                     * @param _k8sVersion K8s version
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取Runtime component
                     * @return RunningComponent Runtime component
                     * 
                     */
                    std::vector<std::string> GetRunningComponent() const;

                    /**
                     * 设置Runtime component
                     * @param _runningComponent Runtime component
                     * 
                     */
                    void SetRunningComponent(const std::vector<std::string>& _runningComponent);

                    /**
                     * 判断参数 RunningComponent 是否已赋值
                     * @return RunningComponent 是否已赋值
                     * 
                     */
                    bool RunningComponentHasBeenSet() const;

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
                     * 获取Suggestion
                     * @return Suggestion Suggestion
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion
                     * @param _suggestion Suggestion
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
                     * 获取Request information
                     * @return Info Request information
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Request information
                     * @param _info Request information
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return MatchRuleID Rule ID
                     * 
                     */
                    std::string GetMatchRuleID() const;

                    /**
                     * 设置Rule ID
                     * @param _matchRuleID Rule ID
                     * 
                     */
                    void SetMatchRuleID(const std::string& _matchRuleID);

                    /**
                     * 判断参数 MatchRuleID 是否已赋值
                     * @return MatchRuleID 是否已赋值
                     * 
                     */
                    bool MatchRuleIDHasBeenSet() const;

                    /**
                     * 获取An array of highlighted fields
                     * @return HighLightFields An array of highlighted fields
                     * 
                     */
                    std::vector<std::string> GetHighLightFields() const;

                    /**
                     * 设置An array of highlighted fields
                     * @param _highLightFields An array of highlighted fields
                     * 
                     */
                    void SetHighLightFields(const std::vector<std::string>& _highLightFields);

                    /**
                     * 判断参数 HighLightFields 是否已赋值
                     * @return HighLightFields 是否已赋值
                     * 
                     */
                    bool HighLightFieldsHasBeenSet() const;

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
                     * Hit rule name
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * Hit rule type
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * Alarm level
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
`EVENT_UNDEAL`: Unhandled
`EVENT_DEALED`: Handled
`EVENT_IGNORE`: Ignored
`EVENT_DEL`: Deleted
`EVENT_ADD_WHITE`: Added to an allowlist
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The master IP of a cluster
                     */
                    std::string m_clusterMasterIP;
                    bool m_clusterMasterIPHasBeenSet;

                    /**
                     * K8s version
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * Runtime component
                     */
                    std::vector<std::string> m_runningComponent;
                    bool m_runningComponentHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Suggestion
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Request information
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_matchRuleID;
                    bool m_matchRuleIDHasBeenSet;

                    /**
                     * An array of highlighted fields
                     */
                    std::vector<std::string> m_highLightFields;
                    bool m_highLightFieldsHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_
