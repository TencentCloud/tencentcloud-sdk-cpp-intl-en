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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRuleCondition.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayBalancedService.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Grayscale rule
                */
                class CloudNativeAPIGatewayCanaryRule : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayCanaryRule();
                    ~CloudNativeAPIGatewayCanaryRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Priority, with a range of 0 to 100. A larger value indicates a higher priority. Priorities must be unique across different rules.
                     * @return Priority Priority, with a range of 0 to 100. A larger value indicates a higher priority. Priorities must be unique across different rules.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority, with a range of 0 to 100. A larger value indicates a higher priority. Priorities must be unique across different rules.
                     * @param _priority Priority, with a range of 0 to 100. A larger value indicates a higher priority. Priorities must be unique across different rules.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Whether the rule is enabled.
                     * @return Enabled Whether the rule is enabled.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether the rule is enabled.
                     * @param _enabled Whether the rule is enabled.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Match condition parameter
                     * @return ConditionList Match condition parameter
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRuleCondition> GetConditionList() const;

                    /**
                     * 设置Match condition parameter
                     * @param _conditionList Match condition parameter
                     * 
                     */
                    void SetConditionList(const std::vector<CloudNativeAPIGatewayCanaryRuleCondition>& _conditionList);

                    /**
                     * 判断参数 ConditionList 是否已赋值
                     * @return ConditionList 是否已赋值
                     * 
                     */
                    bool ConditionListHasBeenSet() const;

                    /**
                     * 获取Traffic percentage configuration of the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BalancedServiceList Traffic percentage configuration of the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayBalancedService> GetBalancedServiceList() const;

                    /**
                     * 设置Traffic percentage configuration of the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _balancedServiceList Traffic percentage configuration of the service
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBalancedServiceList(const std::vector<CloudNativeAPIGatewayBalancedService>& _balancedServiceList);

                    /**
                     * 判断参数 BalancedServiceList 是否已赋值
                     * @return BalancedServiceList 是否已赋值
                     * 
                     */
                    bool BalancedServiceListHasBeenSet() const;

                    /**
                     * 获取service ID
                     * @return ServiceId service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置service ID
                     * @param _serviceId service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Service name
                     * @return ServiceName Service name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
                     * @param _serviceName Service name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Grayscale rule type
Standard｜Lane
                     * @return RuleType Grayscale rule type
Standard｜Lane
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Grayscale rule type
Standard｜Lane
                     * @param _ruleType Grayscale rule type
Standard｜Lane
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
                     * 获取Full-link grayscale policy match mode between multiple conditions: AND, OR
                     * @return MatchType Full-link grayscale policy match mode between multiple conditions: AND, OR
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Full-link grayscale policy match mode between multiple conditions: AND, OR
                     * @param _matchType Full-link grayscale policy match mode between multiple conditions: AND, OR
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取Lane group ID
                     * @return GroupId Lane group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Lane group ID
                     * @param _groupId Lane group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Lane group name
                     * @return GroupName Lane group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Lane group name
                     * @param _groupName Lane group name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Lane ID
                     * @return LaneId Lane ID
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置Lane ID
                     * @param _laneId Lane ID
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取swimlane name
                     * @return LaneName swimlane name
                     * 
                     */
                    std::string GetLaneName() const;

                    /**
                     * 设置swimlane name
                     * @param _laneName swimlane name
                     * 
                     */
                    void SetLaneName(const std::string& _laneName);

                    /**
                     * 判断参数 LaneName 是否已赋值
                     * @return LaneName 是否已赋值
                     * 
                     */
                    bool LaneNameHasBeenSet() const;

                    /**
                     * 获取Lane match rule: STRICT | PERMISSIVE
                     * @return MatchMode Lane match rule: STRICT | PERMISSIVE
                     * 
                     */
                    std::string GetMatchMode() const;

                    /**
                     * 设置Lane match rule: STRICT | PERMISSIVE
                     * @param _matchMode Lane match rule: STRICT | PERMISSIVE
                     * 
                     */
                    void SetMatchMode(const std::string& _matchMode);

                    /**
                     * 判断参数 MatchMode 是否已赋值
                     * @return MatchMode 是否已赋值
                     * 
                     */
                    bool MatchModeHasBeenSet() const;

                    /**
                     * 获取Lane tag
                     * @return LaneTag Lane tag
                     * 
                     */
                    std::string GetLaneTag() const;

                    /**
                     * 设置Lane tag
                     * @param _laneTag Lane tag
                     * 
                     */
                    void SetLaneTag(const std::string& _laneTag);

                    /**
                     * 判断参数 LaneTag 是否已赋值
                     * @return LaneTag 是否已赋值
                     * 
                     */
                    bool LaneTagHasBeenSet() const;

                private:

                    /**
                     * Priority, with a range of 0 to 100. A larger value indicates a higher priority. Priorities must be unique across different rules.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Whether the rule is enabled.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Match condition parameter
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRuleCondition> m_conditionList;
                    bool m_conditionListHasBeenSet;

                    /**
                     * Traffic percentage configuration of the service
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CloudNativeAPIGatewayBalancedService> m_balancedServiceList;
                    bool m_balancedServiceListHasBeenSet;

                    /**
                     * service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Grayscale rule type
Standard｜Lane
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Full-link grayscale policy match mode between multiple conditions: AND, OR
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Lane group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Lane group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Lane ID
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * swimlane name
                     */
                    std::string m_laneName;
                    bool m_laneNameHasBeenSet;

                    /**
                     * Lane match rule: STRICT | PERMISSIVE
                     */
                    std::string m_matchMode;
                    bool m_matchModeHasBeenSet;

                    /**
                     * Lane tag
                     */
                    std::string m_laneTag;
                    bool m_laneTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_
