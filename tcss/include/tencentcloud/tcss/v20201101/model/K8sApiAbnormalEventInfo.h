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
                     * 获取<p>Hit rule name.</p>
                     * @return MatchRuleName <p>Hit rule name.</p>
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置<p>Hit rule name.</p>
                     * @param _matchRuleName <p>Hit rule name.</p>
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
                     * 获取<p>Hit rule type.</p>
                     * @return MatchRuleType <p>Hit rule type.</p>
                     * 
                     */
                    std::string GetMatchRuleType() const;

                    /**
                     * 设置<p>Hit rule type.</p>
                     * @param _matchRuleType <p>Hit rule type.</p>
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
                     * 获取<p>Alarm level.</p>
                     * @return RiskLevel <p>Alarm level.</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Alarm level.</p>
                     * @param _riskLevel <p>Alarm level.</p>
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
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterID <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterID <p>Cluster ID.</p>
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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
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
                     * 获取<p>Cluster running status: CSR_RUNNING, CSR_EXCEPTION, and CSR_CREATING</p>
                     * @return ClusterRunningStatus <p>Cluster running status: CSR_RUNNING, CSR_EXCEPTION, and CSR_CREATING</p>
                     * 
                     */
                    std::string GetClusterRunningStatus() const;

                    /**
                     * 设置<p>Cluster running status: CSR_RUNNING, CSR_EXCEPTION, and CSR_CREATING</p>
                     * @param _clusterRunningStatus <p>Cluster running status: CSR_RUNNING, CSR_EXCEPTION, and CSR_CREATING</p>
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
                     * 获取<p>Initial generation time.</p>
                     * @return FirstCreateTime <p>Initial generation time.</p>
                     * 
                     */
                    std::string GetFirstCreateTime() const;

                    /**
                     * 设置<p>Initial generation time.</p>
                     * @param _firstCreateTime <p>Initial generation time.</p>
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
                     * 获取<p>Last generation time.</p>
                     * @return LastCreateTime <p>Last generation time.</p>
                     * 
                     */
                    std::string GetLastCreateTime() const;

                    /**
                     * 设置<p>Last generation time.</p>
                     * @param _lastCreateTime <p>Last generation time.</p>
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
                     * 获取<p>Number of alarms.</p>
                     * @return AlarmCount <p>Number of alarms.</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>Number of alarms.</p>
                     * @param _alarmCount <p>Number of alarms.</p>
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
                     * 获取<p>Status.<br>&quot;EVENT_UNDEAL&quot;: unhandled<br>&quot;EVENT_DEALED&quot;: handled<br>&quot;EVENT_IGNORE&quot;: ignored<br>&quot;EVENT_DEL&quot;: deleted<br>&quot;EVENT_ADD_WHITE&quot;: allowlisted</p>
                     * @return Status <p>Status.<br>&quot;EVENT_UNDEAL&quot;: unhandled<br>&quot;EVENT_DEALED&quot;: handled<br>&quot;EVENT_IGNORE&quot;: ignored<br>&quot;EVENT_DEL&quot;: deleted<br>&quot;EVENT_ADD_WHITE&quot;: allowlisted</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status.<br>&quot;EVENT_UNDEAL&quot;: unhandled<br>&quot;EVENT_DEALED&quot;: handled<br>&quot;EVENT_IGNORE&quot;: ignored<br>&quot;EVENT_DEL&quot;: deleted<br>&quot;EVENT_ADD_WHITE&quot;: allowlisted</p>
                     * @param _status <p>Status.<br>&quot;EVENT_UNDEAL&quot;: unhandled<br>&quot;EVENT_DEALED&quot;: handled<br>&quot;EVENT_IGNORE&quot;: ignored<br>&quot;EVENT_DEL&quot;: deleted<br>&quot;EVENT_ADD_WHITE&quot;: allowlisted</p>
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
                     * 获取<p>Cluster master IP address.</p>
                     * @return ClusterMasterIP <p>Cluster master IP address.</p>
                     * 
                     */
                    std::string GetClusterMasterIP() const;

                    /**
                     * 设置<p>Cluster master IP address.</p>
                     * @param _clusterMasterIP <p>Cluster master IP address.</p>
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
                     * 获取<p>K8s version.</p>
                     * @return K8sVersion <p>K8s version.</p>
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置<p>K8s version.</p>
                     * @param _k8sVersion <p>K8s version.</p>
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
                     * 获取<p>Runtime component.</p>
                     * @return RunningComponent <p>Runtime component.</p>
                     * 
                     */
                    std::vector<std::string> GetRunningComponent() const;

                    /**
                     * 设置<p>Runtime component.</p>
                     * @param _runningComponent <p>Runtime component.</p>
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
                     * 获取<p>Description.</p>
                     * @return Desc <p>Description.</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _desc <p>Description.</p>
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
                     * 获取<p>Suggestion.</p>
                     * @return Suggestion <p>Suggestion.</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>Suggestion.</p>
                     * @param _suggestion <p>Suggestion.</p>
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
                     * 获取<p>Request information.</p>
                     * @return Info <p>Request information.</p>
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置<p>Request information.</p>
                     * @param _info <p>Request information.</p>
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
                     * 获取<p>Rule ID.</p>
                     * @return MatchRuleID <p>Rule ID.</p>
                     * 
                     */
                    std::string GetMatchRuleID() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _matchRuleID <p>Rule ID.</p>
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
                     * 获取<p>Array of highlighted fields.</p>
                     * @return HighLightFields <p>Array of highlighted fields.</p>
                     * 
                     */
                    std::vector<std::string> GetHighLightFields() const;

                    /**
                     * 设置<p>Array of highlighted fields.</p>
                     * @param _highLightFields <p>Array of highlighted fields.</p>
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
                     * 获取<p>Hit rule.</p>
                     * @return MatchRule <p>Hit rule.</p>
                     * 
                     */
                    K8sApiAbnormalRuleScopeInfo GetMatchRule() const;

                    /**
                     * 设置<p>Hit rule.</p>
                     * @param _matchRule <p>Hit rule.</p>
                     * 
                     */
                    void SetMatchRule(const K8sApiAbnormalRuleScopeInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                    /**
                     * 获取<p>Hit rule content corresponding to highlighted fields (JSON string, such as {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>Parameter format: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * @return HighLightFieldsVal <p>Hit rule content corresponding to highlighted fields (JSON string, such as {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>Parameter format: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * 
                     */
                    std::string GetHighLightFieldsVal() const;

                    /**
                     * 设置<p>Hit rule content corresponding to highlighted fields (JSON string, such as {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>Parameter format: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * @param _highLightFieldsVal <p>Hit rule content corresponding to highlighted fields (JSON string, such as {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>Parameter format: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * 
                     */
                    void SetHighLightFieldsVal(const std::string& _highLightFieldsVal);

                    /**
                     * 判断参数 HighLightFieldsVal 是否已赋值
                     * @return HighLightFieldsVal 是否已赋值
                     * 
                     */
                    bool HighLightFieldsValHasBeenSet() const;

                    /**
                     * 获取<p>Rule type.</p>
                     * @return RuleTypeZH <p>Rule type.</p>
                     * 
                     */
                    std::string GetRuleTypeZH() const;

                    /**
                     * 设置<p>Rule type.</p>
                     * @param _ruleTypeZH <p>Rule type.</p>
                     * 
                     */
                    void SetRuleTypeZH(const std::string& _ruleTypeZH);

                    /**
                     * 判断参数 RuleTypeZH 是否已赋值
                     * @return RuleTypeZH 是否已赋值
                     * 
                     */
                    bool RuleTypeZHHasBeenSet() const;

                private:

                    /**
                     * <p>Hit rule name.</p>
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * <p>Hit rule type.</p>
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * <p>Alarm level.</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster running status: CSR_RUNNING, CSR_EXCEPTION, and CSR_CREATING</p>
                     */
                    std::string m_clusterRunningStatus;
                    bool m_clusterRunningStatusHasBeenSet;

                    /**
                     * <p>Initial generation time.</p>
                     */
                    std::string m_firstCreateTime;
                    bool m_firstCreateTimeHasBeenSet;

                    /**
                     * <p>Last generation time.</p>
                     */
                    std::string m_lastCreateTime;
                    bool m_lastCreateTimeHasBeenSet;

                    /**
                     * <p>Number of alarms.</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>Status.<br>&quot;EVENT_UNDEAL&quot;: unhandled<br>&quot;EVENT_DEALED&quot;: handled<br>&quot;EVENT_IGNORE&quot;: ignored<br>&quot;EVENT_DEL&quot;: deleted<br>&quot;EVENT_ADD_WHITE&quot;: allowlisted</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Cluster master IP address.</p>
                     */
                    std::string m_clusterMasterIP;
                    bool m_clusterMasterIPHasBeenSet;

                    /**
                     * <p>K8s version.</p>
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * <p>Runtime component.</p>
                     */
                    std::vector<std::string> m_runningComponent;
                    bool m_runningComponentHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>Suggestion.</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>Request information.</p>
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * <p>Rule ID.</p>
                     */
                    std::string m_matchRuleID;
                    bool m_matchRuleIDHasBeenSet;

                    /**
                     * <p>Array of highlighted fields.</p>
                     */
                    std::vector<std::string> m_highLightFields;
                    bool m_highLightFieldsHasBeenSet;

                    /**
                     * <p>Hit rule.</p>
                     */
                    K8sApiAbnormalRuleScopeInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                    /**
                     * <p>Hit rule content corresponding to highlighted fields (JSON string, such as {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>Parameter format: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     */
                    std::string m_highLightFieldsVal;
                    bool m_highLightFieldsValHasBeenSet;

                    /**
                     * <p>Rule type.</p>
                     */
                    std::string m_ruleTypeZH;
                    bool m_ruleTypeZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_
