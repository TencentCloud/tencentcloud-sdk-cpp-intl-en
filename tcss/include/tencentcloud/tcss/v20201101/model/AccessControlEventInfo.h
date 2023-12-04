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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTINFO_H_

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
                * Container runtime security - Information of the access control event
                */
                class AccessControlEventInfo : public AbstractModel
                {
                public:
                    AccessControlEventInfo();
                    ~AccessControlEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Name of the hit rule
                     * @return MatchRuleName Name of the hit rule
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置Name of the hit rule
                     * @param _matchRuleName Name of the hit rule
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
                     * 获取Generation time
                     * @return FoundTime Generation time
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置Generation time
                     * @param _foundTime Generation time
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
                     * 获取Container name
                     * @return ContainerName Container name
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
                     * @param _containerName Container name
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
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
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
                     * 获取Action execution result. `BEHAVIOR_NONE`: None.
    `BEHAVIOR_ALERT`: Alert.
    `BEHAVIOR_RELEASE`: Allow.
    `BEHAVIOR_HOLDUP_FAILED`: Failed to block.
    `BEHAVIOR_HOLDUP_SUCCESSED`: Blocked.
                     * @return Behavior Action execution result. `BEHAVIOR_NONE`: None.
    `BEHAVIOR_ALERT`: Alert.
    `BEHAVIOR_RELEASE`: Allow.
    `BEHAVIOR_HOLDUP_FAILED`: Failed to block.
    `BEHAVIOR_HOLDUP_SUCCESSED`: Blocked.
                     * 
                     */
                    std::string GetBehavior() const;

                    /**
                     * 设置Action execution result. `BEHAVIOR_NONE`: None.
    `BEHAVIOR_ALERT`: Alert.
    `BEHAVIOR_RELEASE`: Allow.
    `BEHAVIOR_HOLDUP_FAILED`: Failed to block.
    `BEHAVIOR_HOLDUP_SUCCESSED`: Blocked.
                     * @param _behavior Action execution result. `BEHAVIOR_NONE`: None.
    `BEHAVIOR_ALERT`: Alert.
    `BEHAVIOR_RELEASE`: Allow.
    `BEHAVIOR_HOLDUP_FAILED`: Failed to block.
    `BEHAVIOR_HOLDUP_SUCCESSED`: Blocked.
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
                     * 获取Status. `0`: Pending. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     * @return Status Status. `0`: Pending. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. `0`: Pending. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     * @param _status Status. `0`: Pending. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
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
                     * 获取Unique event ID
                     * @return Id Unique event ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique event ID
                     * @param _id Unique event ID
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
                     * 获取Filename
                     * @return FileName Filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param _fileName Filename
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Event type. `FILE_ABNORMAL_READ`: Abnormal file read.
                     * @return EventType Event type. `FILE_ABNORMAL_READ`: Abnormal file read.
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type. `FILE_ABNORMAL_READ`: Abnormal file read.
                     * @param _eventType Event type. `FILE_ABNORMAL_READ`: Abnormal file read.
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
                     * 获取Image ID, which is used for redirect.
                     * @return ImageId Image ID, which is used for redirect.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID, which is used for redirect.
                     * @param _imageId Image ID, which is used for redirect.
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
                     * 获取Container ID, which is used for redirect.
                     * @return ContainerId Container ID, which is used for redirect.
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID, which is used for redirect.
                     * @param _containerId Container ID, which is used for redirect.
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
                     * 获取Event solution
                     * @return Solution Event solution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Event solution
                     * @param _solution Event solution
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
                     * 获取Event description
                     * @return Description Event description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event description
                     * @param _description Event description
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
                     * 获取Hit policy ID
                     * @return MatchRuleId Hit policy ID
                     * 
                     */
                    std::string GetMatchRuleId() const;

                    /**
                     * 设置Hit policy ID
                     * @param _matchRuleId Hit policy ID
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
                     * 获取Action of the hit rule:
`RULE_MODE_RELEASE`: Allow.
`RULE_MODE_ALERT`: Alert.
`RULE_MODE_HOLDUP`: Block.
                     * @return MatchAction Action of the hit rule:
`RULE_MODE_RELEASE`: Allow.
`RULE_MODE_ALERT`: Alert.
`RULE_MODE_HOLDUP`: Block.
                     * 
                     */
                    std::string GetMatchAction() const;

                    /**
                     * 设置Action of the hit rule:
`RULE_MODE_RELEASE`: Allow.
`RULE_MODE_ALERT`: Alert.
`RULE_MODE_HOLDUP`: Block.
                     * @param _matchAction Action of the hit rule:
`RULE_MODE_RELEASE`: Allow.
`RULE_MODE_ALERT`: Alert.
`RULE_MODE_HOLDUP`: Block.
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
                     * 获取Information of the process that hits the rule
                     * @return MatchProcessPath Information of the process that hits the rule
                     * 
                     */
                    std::string GetMatchProcessPath() const;

                    /**
                     * 设置Information of the process that hits the rule
                     * @param _matchProcessPath Information of the process that hits the rule
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
                     * 获取Information of the file that hits the rule
                     * @return MatchFilePath Information of the file that hits the rule
                     * 
                     */
                    std::string GetMatchFilePath() const;

                    /**
                     * 设置Information of the file that hits the rule
                     * @param _matchFilePath Information of the file that hits the rule
                     * 
                     */
                    void SetMatchFilePath(const std::string& _matchFilePath);

                    /**
                     * 判断参数 MatchFilePath 是否已赋值
                     * @return MatchFilePath 是否已赋值
                     * 
                     */
                    bool MatchFilePathHasBeenSet() const;

                    /**
                     * 获取File path containing the name
                     * @return FilePath File path containing the name
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File path containing the name
                     * @param _filePath File path containing the name
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Whether the rule exists
                     * @return RuleExist Whether the rule exists
                     * 
                     */
                    bool GetRuleExist() const;

                    /**
                     * 设置Whether the rule exists
                     * @param _ruleExist Whether the rule exists
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
                     * 获取Number of events
                     * @return EventCount Number of events
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置Number of events
                     * @param _eventCount Number of events
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
                     * 获取Last generation time
                     * @return LatestFoundTime Last generation time
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置Last generation time
                     * @param _latestFoundTime Last generation time
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
                     * 获取Rule group ID
                     * @return RuleId Rule group ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule group ID
                     * @param _ruleId Rule group ID
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
                     * 获取Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @return ContainerNetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     * @param _containerNetStatus Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
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
                     * 获取Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
"NODE_DESTROYED"      // The node is terminated.
"CONTAINER_EXITED"    // The container exited.
"CONTAINER_DESTROYED" // The container was terminated.
"SHARED_HOST"         // The container shares the network with the server.
"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
"UNKNOW"              // The reason is unknown.
                     * @return ContainerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
"NODE_DESTROYED"      // The node is terminated.
"CONTAINER_EXITED"    // The container exited.
"CONTAINER_DESTROYED" // The container was terminated.
"SHARED_HOST"         // The container shares the network with the server.
"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
"UNKNOW"              // The reason is unknown.
                     * 
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 设置Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
"NODE_DESTROYED"      // The node is terminated.
"CONTAINER_EXITED"    // The container exited.
"CONTAINER_DESTROYED" // The container was terminated.
"SHARED_HOST"         // The container shares the network with the server.
"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
"UNKNOW"              // The reason is unknown.
                     * @param _containerNetSubStatus Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
"NODE_DESTROYED"      // The node is terminated.
"CONTAINER_EXITED"    // The container exited.
"CONTAINER_DESTROYED" // The container was terminated.
"SHARED_HOST"         // The container shares the network with the server.
"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
"UNKNOW"              // The reason is unknown.
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
                     * 获取Container isolation operation source
                     * @return ContainerIsolateOperationSrc Container isolation operation source
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 设置Container isolation operation source
                     * @param _containerIsolateOperationSrc Container isolation operation source
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
                     * 获取Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     * @return ContainerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     * @param _containerStatus Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
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
                     * 获取Node name: For super nodes, the node_id is displayed.
                     * @return NodeName Node name: For super nodes, the node_id is displayed.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name: For super nodes, the node_id is displayed.
                     * @param _nodeName Node name: For super nodes, the node_id is displayed.
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
                     * 获取Pod name
                     * @return PodName Pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
                     * @param _podName Pod name
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
                     * 获取Pod IP
                     * @return PodIP Pod IP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod IP
                     * @param _podIP Pod IP
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
                     * 获取Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * @return NodeType Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     * @param _nodeType Node type. Values: `NORMAL` (general node), `SUPER` (super node).
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
                     * 获取Node unique ID. It's used for super nodes.
                     * @return NodeUniqueID Node unique ID. It's used for super nodes.
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置Node unique ID. It's used for super nodes.
                     * @param _nodeUniqueID Node unique ID. It's used for super nodes.
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
                     * 获取Node public IP
                     * @return PublicIP Node public IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Node public IP
                     * @param _publicIP Node public IP
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
                     * 获取Node ID
                     * @return NodeID Node ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置Node ID
                     * @param _nodeID Node ID
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
                     * 获取uuid
                     * @return HostID uuid
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置uuid
                     * @param _hostID uuid
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
                     * 获取Private IP of the node
                     * @return HostIP Private IP of the node
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Private IP of the node
                     * @param _hostIP Private IP of the node
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

                private:

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Name of the hit rule
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * Generation time
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Action execution result. `BEHAVIOR_NONE`: None.
    `BEHAVIOR_ALERT`: Alert.
    `BEHAVIOR_RELEASE`: Allow.
    `BEHAVIOR_HOLDUP_FAILED`: Failed to block.
    `BEHAVIOR_HOLDUP_SUCCESSED`: Blocked.
                     */
                    std::string m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * Status. `0`: Pending. `EVENT_UNDEAL`: Pending.
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unique event ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Event type. `FILE_ABNORMAL_READ`: Abnormal file read.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Image ID, which is used for redirect.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Container ID, which is used for redirect.
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Event solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Event description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Hit policy ID
                     */
                    std::string m_matchRuleId;
                    bool m_matchRuleIdHasBeenSet;

                    /**
                     * Action of the hit rule:
`RULE_MODE_RELEASE`: Allow.
`RULE_MODE_ALERT`: Alert.
`RULE_MODE_HOLDUP`: Block.
                     */
                    std::string m_matchAction;
                    bool m_matchActionHasBeenSet;

                    /**
                     * Information of the process that hits the rule
                     */
                    std::string m_matchProcessPath;
                    bool m_matchProcessPathHasBeenSet;

                    /**
                     * Information of the file that hits the rule
                     */
                    std::string m_matchFilePath;
                    bool m_matchFilePathHasBeenSet;

                    /**
                     * File path containing the name
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Whether the rule exists
                     */
                    bool m_ruleExist;
                    bool m_ruleExistHasBeenSet;

                    /**
                     * Number of events
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Last generation time
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * Rule group ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Network status
`NORMAL`: 	Not isolated.
`ISOLATED`: 		Isolated.
`ISOLATING`: 		Isolating.
`ISOLATE_FAILED`: 	Isolation failed.
`RESTORING`: Recovering.
`RESTORE_FAILED`: Recovery failed.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Sub-status of the container
"AGENT_OFFLINE"       // The agent is offline.
"NODE_DESTROYED"      // The node is terminated.
"CONTAINER_EXITED"    // The container exited.
"CONTAINER_DESTROYED" // The container was terminated.
"SHARED_HOST"         // The container shares the network with the server.
"RESOURCE_LIMIT"      // The number of resources to be isolated exceeds the limit.
"UNKNOW"              // The reason is unknown.
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * Container isolation operation source
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * Container status
`RUNNING`: Running.
`PAUSED`: Paused.
`STOPPED`: Stopped.
`CREATED`: Created.
`DESTROYED`: Terminated.
`RESTARTING`: Restarting.
`REMOVING`: Removing.
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Node name: For super nodes, the node_id is displayed.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Node type. Values: `NORMAL` (general node), `SUPER` (super node).
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Node unique ID. It's used for super nodes.
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * Node public IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * uuid
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Private IP of the node
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTINFO_H_
