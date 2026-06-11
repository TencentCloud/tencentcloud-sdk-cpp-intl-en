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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Container runtime security - Information of the abnormal process
                */
                class AbnormalProcessEventInfo : public AbstractModel
                {
                public:
                    AbnormalProcessEventInfo();
                    ~AbnormalProcessEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Process directory.</p>
                     * @return ProcessPath <p>Process directory.</p>
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置<p>Process directory.</p>
                     * @param _processPath <p>Process directory.</p>
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取<p>Event type. MALICE_PROCESS_START: malicious process startup.</p>
                     * @return EventType <p>Event type. MALICE_PROCESS_START: malicious process startup.</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>Event type. MALICE_PROCESS_START: malicious process startup.</p>
                     * @param _eventType <p>Event type. MALICE_PROCESS_START: malicious process startup.</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>Hit rule name. PROXY_TOOL: proxy software; TRANSFER_CONTROL: lateral movement; ATTACK_CMD: malicious command; REVERSE_SHELL: reverse shell; FILELESS: fileless execution; RISK_CMD: high-risk command; ABNORMAL_CHILD_PROC: abnormal child process startup of sensitive service; USER_DEFINED_RULE: user-defined rule</p>
                     * @return MatchRuleName <p>Hit rule name. PROXY_TOOL: proxy software; TRANSFER_CONTROL: lateral movement; ATTACK_CMD: malicious command; REVERSE_SHELL: reverse shell; FILELESS: fileless execution; RISK_CMD: high-risk command; ABNORMAL_CHILD_PROC: abnormal child process startup of sensitive service; USER_DEFINED_RULE: user-defined rule</p>
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置<p>Hit rule name. PROXY_TOOL: proxy software; TRANSFER_CONTROL: lateral movement; ATTACK_CMD: malicious command; REVERSE_SHELL: reverse shell; FILELESS: fileless execution; RISK_CMD: high-risk command; ABNORMAL_CHILD_PROC: abnormal child process startup of sensitive service; USER_DEFINED_RULE: user-defined rule</p>
                     * @param _matchRuleName <p>Hit rule name. PROXY_TOOL: proxy software; TRANSFER_CONTROL: lateral movement; ATTACK_CMD: malicious command; REVERSE_SHELL: reverse shell; FILELESS: fileless execution; RISK_CMD: high-risk command; ABNORMAL_CHILD_PROC: abnormal child process startup of sensitive service; USER_DEFINED_RULE: user-defined rule</p>
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
                     * 获取<p>Generation time.</p>
                     * @return FoundTime <p>Generation time.</p>
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置<p>Generation time.</p>
                     * @param _foundTime <p>Generation time.</p>
                     * 
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Container name.</p>
                     * @return ContainerName <p>Container name.</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>Container name.</p>
                     * @param _containerName <p>Container name.</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Image name.</p>
                     * @return ImageName <p>Image name.</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>Image name.</p>
                     * @param _imageName <p>Image name.</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>Action execution result: BEHAVIOR_NONE: none<br>BEHAVIOR_ALERT: alarm<br>BEHAVIOR_RELEASE: allow<br>BEHAVIOR_HOLDUP_FAILED: block failed<br>BEHAVIOR_HOLDUP_SUCCESSED: block succeeded</p>
                     * @return Behavior <p>Action execution result: BEHAVIOR_NONE: none<br>BEHAVIOR_ALERT: alarm<br>BEHAVIOR_RELEASE: allow<br>BEHAVIOR_HOLDUP_FAILED: block failed<br>BEHAVIOR_HOLDUP_SUCCESSED: block succeeded</p>
                     * 
                     */
                    std::string GetBehavior() const;

                    /**
                     * 设置<p>Action execution result: BEHAVIOR_NONE: none<br>BEHAVIOR_ALERT: alarm<br>BEHAVIOR_RELEASE: allow<br>BEHAVIOR_HOLDUP_FAILED: block failed<br>BEHAVIOR_HOLDUP_SUCCESSED: block succeeded</p>
                     * @param _behavior <p>Action execution result: BEHAVIOR_NONE: none<br>BEHAVIOR_ALERT: alarm<br>BEHAVIOR_RELEASE: allow<br>BEHAVIOR_HOLDUP_FAILED: block failed<br>BEHAVIOR_HOLDUP_SUCCESSED: block succeeded</p>
                     * 
                     */
                    void SetBehavior(const std::string& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取<p>Status: EVENT_UNDEAL: event unhandled<br>    EVENT_DEALED: event handled<br>    EVENT_INGNORE: event ignored</p>
                     * @return Status <p>Status: EVENT_UNDEAL: event unhandled<br>    EVENT_DEALED: event handled<br>    EVENT_INGNORE: event ignored</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status: EVENT_UNDEAL: event unhandled<br>    EVENT_DEALED: event handled<br>    EVENT_INGNORE: event ignored</p>
                     * @param _status <p>Status: EVENT_UNDEAL: event unhandled<br>    EVENT_DEALED: event handled<br>    EVENT_INGNORE: event ignored</p>
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
                     * 获取<p>Unique ID of the event record.</p>
                     * @return Id <p>Unique ID of the event record.</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Unique ID of the event record.</p>
                     * @param _id <p>Unique ID of the event record.</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Image ID, used for redirection.</p>
                     * @return ImageId <p>Image ID, used for redirection.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID, used for redirection.</p>
                     * @param _imageId <p>Image ID, used for redirection.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Container ID, used for redirection.</p>
                     * @return ContainerId <p>Container ID, used for redirection.</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>Container ID, used for redirection.</p>
                     * @param _containerId <p>Container ID, used for redirection.</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>Event solution.</p>
                     * @return Solution <p>Event solution.</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>Event solution.</p>
                     * @param _solution <p>Event solution.</p>
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>Event detailed description.</p>
                     * @return Description <p>Event detailed description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Event detailed description.</p>
                     * @param _description <p>Event detailed description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Hit policy ID.</p>
                     * @return MatchRuleId <p>Hit policy ID.</p>
                     * 
                     */
                    std::string GetMatchRuleId() const;

                    /**
                     * 设置<p>Hit policy ID.</p>
                     * @param _matchRuleId <p>Hit policy ID.</p>
                     * 
                     */
                    void SetMatchRuleId(const std::string& _matchRuleId);

                    /**
                     * 判断参数 MatchRuleId 是否已赋值
                     * @return MatchRuleId 是否已赋值
                     * 
                     */
                    bool MatchRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Hit rule action:<br>RULE_MODE_RELEASE: allow<br>RULE_MODE_ALERT: alarm<br>RULE_MODE_HOLDUP: block</p>
                     * @return MatchAction <p>Hit rule action:<br>RULE_MODE_RELEASE: allow<br>RULE_MODE_ALERT: alarm<br>RULE_MODE_HOLDUP: block</p>
                     * 
                     */
                    std::string GetMatchAction() const;

                    /**
                     * 设置<p>Hit rule action:<br>RULE_MODE_RELEASE: allow<br>RULE_MODE_ALERT: alarm<br>RULE_MODE_HOLDUP: block</p>
                     * @param _matchAction <p>Hit rule action:<br>RULE_MODE_RELEASE: allow<br>RULE_MODE_ALERT: alarm<br>RULE_MODE_HOLDUP: block</p>
                     * 
                     */
                    void SetMatchAction(const std::string& _matchAction);

                    /**
                     * 判断参数 MatchAction 是否已赋值
                     * @return MatchAction 是否已赋值
                     * 
                     */
                    bool MatchActionHasBeenSet() const;

                    /**
                     * 获取<p>Hit rule process information.</p>
                     * @return MatchProcessPath <p>Hit rule process information.</p>
                     * 
                     */
                    std::string GetMatchProcessPath() const;

                    /**
                     * 设置<p>Hit rule process information.</p>
                     * @param _matchProcessPath <p>Hit rule process information.</p>
                     * 
                     */
                    void SetMatchProcessPath(const std::string& _matchProcessPath);

                    /**
                     * 判断参数 MatchProcessPath 是否已赋值
                     * @return MatchProcessPath 是否已赋值
                     * 
                     */
                    bool MatchProcessPathHasBeenSet() const;

                    /**
                     * 获取<p>Whether the rule exists.</p>
                     * @return RuleExist <p>Whether the rule exists.</p>
                     * 
                     */
                    bool GetRuleExist() const;

                    /**
                     * 设置<p>Whether the rule exists.</p>
                     * @param _ruleExist <p>Whether the rule exists.</p>
                     * 
                     */
                    void SetRuleExist(const bool& _ruleExist);

                    /**
                     * 判断参数 RuleExist 是否已赋值
                     * @return RuleExist 是否已赋值
                     * 
                     */
                    bool RuleExistHasBeenSet() const;

                    /**
                     * 获取<p>Number of events.</p>
                     * @return EventCount <p>Number of events.</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>Number of events.</p>
                     * @param _eventCount <p>Number of events.</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>Last generation time.</p>
                     * @return LatestFoundTime <p>Last generation time.</p>
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置<p>Last generation time.</p>
                     * @param _latestFoundTime <p>Last generation time.</p>
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取<p>Rule group ID.</p>
                     * @return RuleId <p>Rule group ID.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Rule group ID.</p>
                     * @param _ruleId <p>Rule group ID.</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Hit policy name: SYSTEM_DEFINED_RULE (system policy) or user-defined policy name.</p>
                     * @return MatchGroupName <p>Hit policy name: SYSTEM_DEFINED_RULE (system policy) or user-defined policy name.</p>
                     * 
                     */
                    std::string GetMatchGroupName() const;

                    /**
                     * 设置<p>Hit policy name: SYSTEM_DEFINED_RULE (system policy) or user-defined policy name.</p>
                     * @param _matchGroupName <p>Hit policy name: SYSTEM_DEFINED_RULE (system policy) or user-defined policy name.</p>
                     * 
                     */
                    void SetMatchGroupName(const std::string& _matchGroupName);

                    /**
                     * 判断参数 MatchGroupName 是否已赋值
                     * @return MatchGroupName 是否已赋值
                     * 
                     */
                    bool MatchGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Hit rule level: HIGH, MIDDLE, and LOW.</p>
                     * @return MatchRuleLevel <p>Hit rule level: HIGH, MIDDLE, and LOW.</p>
                     * 
                     */
                    std::string GetMatchRuleLevel() const;

                    /**
                     * 设置<p>Hit rule level: HIGH, MIDDLE, and LOW.</p>
                     * @param _matchRuleLevel <p>Hit rule level: HIGH, MIDDLE, and LOW.</p>
                     * 
                     */
                    void SetMatchRuleLevel(const std::string& _matchRuleLevel);

                    /**
                     * 判断参数 MatchRuleLevel 是否已赋值
                     * @return MatchRuleLevel 是否已赋值
                     * 
                     */
                    bool MatchRuleLevelHasBeenSet() const;

                    /**
                     * 获取<p>Network status<br>Not isolated: NORMAL<br>Isolated: ISOLATED<br>Isolating: ISOLATING<br>Isolation failed: ISOLATE_FAILED<br>Restoring: RESTORING<br>Restoring failed: RESTORE_FAILED</p>
                     * @return ContainerNetStatus <p>Network status<br>Not isolated: NORMAL<br>Isolated: ISOLATED<br>Isolating: ISOLATING<br>Isolation failed: ISOLATE_FAILED<br>Restoring: RESTORING<br>Restoring failed: RESTORE_FAILED</p>
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置<p>Network status<br>Not isolated: NORMAL<br>Isolated: ISOLATED<br>Isolating: ISOLATING<br>Isolation failed: ISOLATE_FAILED<br>Restoring: RESTORING<br>Restoring failed: RESTORE_FAILED</p>
                     * @param _containerNetStatus <p>Network status<br>Not isolated: NORMAL<br>Isolated: ISOLATED<br>Isolating: ISOLATING<br>Isolation failed: ISOLATE_FAILED<br>Restoring: RESTORING<br>Restoring failed: RESTORE_FAILED</p>
                     * 
                     */
                    void SetContainerNetStatus(const std::string& _containerNetStatus);

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取<p>Container sub-status.<br>&quot;AGENT_OFFLINE&quot;       //Agent offline<br>&quot;NODE_DESTROYED&quot;      //Node destroyed<br>&quot;CONTAINER_EXITED&quot;    //Container exited<br>&quot;CONTAINER_DESTROYED&quot; //Container destroyed<br>&quot;SHARED_HOST&quot;         //Container and host sharing the network<br>&quot;RESOURCE_LIMIT&quot;      //Resource limit exceeded for the isolation operation<br>&quot;UNKNOW&quot;              //Unknown reason</p>
                     * @return ContainerNetSubStatus <p>Container sub-status.<br>&quot;AGENT_OFFLINE&quot;       //Agent offline<br>&quot;NODE_DESTROYED&quot;      //Node destroyed<br>&quot;CONTAINER_EXITED&quot;    //Container exited<br>&quot;CONTAINER_DESTROYED&quot; //Container destroyed<br>&quot;SHARED_HOST&quot;         //Container and host sharing the network<br>&quot;RESOURCE_LIMIT&quot;      //Resource limit exceeded for the isolation operation<br>&quot;UNKNOW&quot;              //Unknown reason</p>
                     * 
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置<p>Container sub-status.<br>&quot;AGENT_OFFLINE&quot;       //Agent offline<br>&quot;NODE_DESTROYED&quot;      //Node destroyed<br>&quot;CONTAINER_EXITED&quot;    //Container exited<br>&quot;CONTAINER_DESTROYED&quot; //Container destroyed<br>&quot;SHARED_HOST&quot;         //Container and host sharing the network<br>&quot;RESOURCE_LIMIT&quot;      //Resource limit exceeded for the isolation operation<br>&quot;UNKNOW&quot;              //Unknown reason</p>
                     * @param _containerNetSubStatus <p>Container sub-status.<br>&quot;AGENT_OFFLINE&quot;       //Agent offline<br>&quot;NODE_DESTROYED&quot;      //Node destroyed<br>&quot;CONTAINER_EXITED&quot;    //Container exited<br>&quot;CONTAINER_DESTROYED&quot; //Container destroyed<br>&quot;SHARED_HOST&quot;         //Container and host sharing the network<br>&quot;RESOURCE_LIMIT&quot;      //Resource limit exceeded for the isolation operation<br>&quot;UNKNOW&quot;              //Unknown reason</p>
                     * 
                     */
                    void SetContainerNetSubStatus(const std::string& _containerNetSubStatus);

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>Source of container isolation operation.</p>
                     * @return ContainerIsolateOperationSrc <p>Source of container isolation operation.</p>
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置<p>Source of container isolation operation.</p>
                     * @param _containerIsolateOperationSrc <p>Source of container isolation operation.</p>
                     * 
                     */
                    void SetContainerIsolateOperationSrc(const std::string& _containerIsolateOperationSrc);

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     * 
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                    /**
                     * 获取<p>Container status.<br>RUNNING<br>PAUSED<br>STOPPED<br>CREATED<br>DESTROYED<br>RESTARTING<br>REMOVING</p>
                     * @return ContainerStatus <p>Container status.<br>RUNNING<br>PAUSED<br>STOPPED<br>CREATED<br>DESTROYED<br>RESTARTING<br>REMOVING</p>
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置<p>Container status.<br>RUNNING<br>PAUSED<br>STOPPED<br>CREATED<br>DESTROYED<br>RESTARTING<br>REMOVING</p>
                     * @param _containerStatus <p>Container status.<br>RUNNING<br>PAUSED<br>STOPPED<br>CREATED<br>DESTROYED<br>RESTARTING<br>REMOVING</p>
                     * 
                     */
                    void SetContainerStatus(const std::string& _containerStatus);

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

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
                     * 获取<p>Node type: NORMAL (normal node) and SUPER (super node).</p>
                     * @return NodeType <p>Node type: NORMAL (normal node) and SUPER (super node).</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node type: NORMAL (normal node) and SUPER (super node).</p>
                     * @param _nodeType <p>Node type: NORMAL (normal node) and SUPER (super node).</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Pod name.</p>
                     * @return PodName <p>Pod name.</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod name.</p>
                     * @param _podName <p>Pod name.</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>pod ip</p>
                     * @return PodIP <p>pod ip</p>
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置<p>pod ip</p>
                     * @param _podIP <p>pod ip</p>
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return NodeUniqueID <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _nodeUniqueID <p>Cluster ID.</p>
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>Node public IP address.</p>
                     * @return PublicIP <p>Node public IP address.</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>Node public IP address.</p>
                     * @param _publicIP <p>Node public IP address.</p>
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取<p>Node name.</p>
                     * @return NodeName <p>Node name.</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>Node name.</p>
                     * @param _nodeName <p>Node name.</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>Node ID.</p>
                     * @return NodeID <p>Node ID.</p>
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置<p>Node ID.</p>
                     * @param _nodeID <p>Node ID.</p>
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取<p>uuid</p>
                     * @return HostID <p>uuid</p>
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置<p>uuid</p>
                     * @param _hostID <p>uuid</p>
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取<p>Node private IP address.</p>
                     * @return HostIP <p>Node private IP address.</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置<p>Node private IP address.</p>
                     * @param _hostIP <p>Node private IP address.</p>
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

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
                     * 获取<p>Command line parameters.</p>
                     * @return CmdLine <p>Command line parameters.</p>
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置<p>Command line parameters.</p>
                     * @param _cmdLine <p>Command line parameters.</p>
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                private:

                    /**
                     * <p>Process directory.</p>
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * <p>Event type. MALICE_PROCESS_START: malicious process startup.</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>Hit rule name. PROXY_TOOL: proxy software; TRANSFER_CONTROL: lateral movement; ATTACK_CMD: malicious command; REVERSE_SHELL: reverse shell; FILELESS: fileless execution; RISK_CMD: high-risk command; ABNORMAL_CHILD_PROC: abnormal child process startup of sensitive service; USER_DEFINED_RULE: user-defined rule</p>
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * <p>Generation time.</p>
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * <p>Container name.</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Image name.</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>Action execution result: BEHAVIOR_NONE: none<br>BEHAVIOR_ALERT: alarm<br>BEHAVIOR_RELEASE: allow<br>BEHAVIOR_HOLDUP_FAILED: block failed<br>BEHAVIOR_HOLDUP_SUCCESSED: block succeeded</p>
                     */
                    std::string m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>Status: EVENT_UNDEAL: event unhandled<br>    EVENT_DEALED: event handled<br>    EVENT_INGNORE: event ignored</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Unique ID of the event record.</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Image ID, used for redirection.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Container ID, used for redirection.</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>Event solution.</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>Event detailed description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Hit policy ID.</p>
                     */
                    std::string m_matchRuleId;
                    bool m_matchRuleIdHasBeenSet;

                    /**
                     * <p>Hit rule action:<br>RULE_MODE_RELEASE: allow<br>RULE_MODE_ALERT: alarm<br>RULE_MODE_HOLDUP: block</p>
                     */
                    std::string m_matchAction;
                    bool m_matchActionHasBeenSet;

                    /**
                     * <p>Hit rule process information.</p>
                     */
                    std::string m_matchProcessPath;
                    bool m_matchProcessPathHasBeenSet;

                    /**
                     * <p>Whether the rule exists.</p>
                     */
                    bool m_ruleExist;
                    bool m_ruleExistHasBeenSet;

                    /**
                     * <p>Number of events.</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>Last generation time.</p>
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * <p>Rule group ID.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Hit policy name: SYSTEM_DEFINED_RULE (system policy) or user-defined policy name.</p>
                     */
                    std::string m_matchGroupName;
                    bool m_matchGroupNameHasBeenSet;

                    /**
                     * <p>Hit rule level: HIGH, MIDDLE, and LOW.</p>
                     */
                    std::string m_matchRuleLevel;
                    bool m_matchRuleLevelHasBeenSet;

                    /**
                     * <p>Network status<br>Not isolated: NORMAL<br>Isolated: ISOLATED<br>Isolating: ISOLATING<br>Isolation failed: ISOLATE_FAILED<br>Restoring: RESTORING<br>Restoring failed: RESTORE_FAILED</p>
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * <p>Container sub-status.<br>&quot;AGENT_OFFLINE&quot;       //Agent offline<br>&quot;NODE_DESTROYED&quot;      //Node destroyed<br>&quot;CONTAINER_EXITED&quot;    //Container exited<br>&quot;CONTAINER_DESTROYED&quot; //Container destroyed<br>&quot;SHARED_HOST&quot;         //Container and host sharing the network<br>&quot;RESOURCE_LIMIT&quot;      //Resource limit exceeded for the isolation operation<br>&quot;UNKNOW&quot;              //Unknown reason</p>
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * <p>Source of container isolation operation.</p>
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * <p>Container status.<br>RUNNING<br>PAUSED<br>STOPPED<br>CREATED<br>DESTROYED<br>RESTARTING<br>REMOVING</p>
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Node type: NORMAL (normal node) and SUPER (super node).</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Pod name.</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>pod ip</p>
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * <p>Node public IP address.</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>Node name.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>Node ID.</p>
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * <p>uuid</p>
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * <p>Node private IP address.</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Command line parameters.</p>
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ABNORMALPROCESSEVENTINFO_H_
