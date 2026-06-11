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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYEVENT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageRegistryInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image interception event
                */
                class ImageDenyEvent : public AbstractModel
                {
                public:
                    ImageDenyEvent();
                    ~ImageDenyEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event Type. EVENT_RISK: Risk Event Type; EVENT_PRIVILEGE: Privilege
                     * @return EventType Event Type. EVENT_RISK: Risk Event Type; EVENT_PRIVILEGE: Privilege
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event Type. EVENT_RISK: Risk Event Type; EVENT_PRIVILEGE: Privilege
                     * @param _eventType Event Type. EVENT_RISK: Risk Event Type; EVENT_PRIVILEGE: Privilege
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
                     * 获取Rule ID
                     * @return RuleID Rule ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleID Rule ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

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
                     * 获取Rule Enable Status. 0: Enabled; 1: Disabled
                     * @return RuleStatus Rule Enable Status. 0: Enabled; 1: Disabled
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置Rule Enable Status. 0: Enabled; 1: Disabled
                     * @param _ruleStatus Rule Enable Status. 0: Enabled; 1: Disabled
                     * 
                     */
                    void SetRuleStatus(const int64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取Rule Policy Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * @return RuleEffectStatus Rule Policy Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * 
                     */
                    std::string GetRuleEffectStatus() const;

                    /**
                     * 设置Rule Policy Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * @param _ruleEffectStatus Rule Policy Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * 
                     */
                    void SetRuleEffectStatus(const std::string& _ruleEffectStatus);

                    /**
                     * 判断参数 RuleEffectStatus 是否已赋值
                     * @return RuleEffectStatus 是否已赋值
                     * 
                     */
                    bool RuleEffectStatusHasBeenSet() const;

                    /**
                     * 获取Rule content
                     * @return RuleInfo Rule content
                     * 
                     */
                    std::vector<std::string> GetRuleInfo() const;

                    /**
                     * 设置Rule content
                     * @param _ruleInfo Rule content
                     * 
                     */
                    void SetRuleInfo(const std::vector<std::string>& _ruleInfo);

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleDescription Rule description
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 设置Rule description
                     * @param _ruleDescription Rule description
                     * 
                     */
                    void SetRuleDescription(const std::string& _ruleDescription);

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param _imageID Image ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image Name
                     * @return ImageName Image Name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image Name
                     * @param _imageName Image Name
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
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
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
                     * 获取Private IP address
                     * @return NodeIP Private IP address
                     * 
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 设置Private IP address
                     * @param _nodeIP Private IP address
                     * 
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return QUUID Host QUUID
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Host QUUID
                     * @param _qUUID Host QUUID
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取First generation time
                     * @return FoundTime First generation time
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置First generation time
                     * @param _foundTime First generation time
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
                     * 获取Latest creation time
                     * @return LatestFoundTime Latest creation time
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置Latest creation time
                     * @param _latestFoundTime Latest creation time
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
                     * 获取Execution action
BEHAVIOR_ALERT: Alert
BEHAVIOR_HOLDUP_SUCCESSED: Interception
                     * @return DealBehavior Execution action
BEHAVIOR_ALERT: Alert
BEHAVIOR_HOLDUP_SUCCESSED: Interception
                     * 
                     */
                    std::string GetDealBehavior() const;

                    /**
                     * 设置Execution action
BEHAVIOR_ALERT: Alert
BEHAVIOR_HOLDUP_SUCCESSED: Interception
                     * @param _dealBehavior Execution action
BEHAVIOR_ALERT: Alert
BEHAVIOR_HOLDUP_SUCCESSED: Interception
                     * 
                     */
                    void SetDealBehavior(const std::string& _dealBehavior);

                    /**
                     * 判断参数 DealBehavior 是否已赋值
                     * @return DealBehavior 是否已赋值
                     * 
                     */
                    bool DealBehaviorHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return EventID Event ID
                     * 
                     */
                    int64_t GetEventID() const;

                    /**
                     * 设置Event ID
                     * @param _eventID Event ID
                     * 
                     */
                    void SetEventID(const int64_t& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return PublicIP Public IP address
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIP Public IP address
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
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
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
                     * 获取Super Node Unique ID
                     * @return NodeUniqueID Super Node Unique ID
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置Super Node Unique ID
                     * @param _nodeUniqueID Super Node Unique ID
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
                     * 获取pod ip
                     * @return PodIP pod ip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置pod ip
                     * @param _podIP pod ip
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
                     * 获取pod name
                     * @return PodName pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod name
                     * @param _podName pod name
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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
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
                     * 获取Image repository information.
                     * @return ImageRegistryInfo Image repository information.
                     * 
                     */
                    ImageRegistryInfo GetImageRegistryInfo() const;

                    /**
                     * 设置Image repository information.
                     * @param _imageRegistryInfo Image repository information.
                     * 
                     */
                    void SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo);

                    /**
                     * 判断参数 ImageRegistryInfo 是否已赋值
                     * @return ImageRegistryInfo 是否已赋值
                     * 
                     */
                    bool ImageRegistryInfoHasBeenSet() const;

                private:

                    /**
                     * Event Type. EVENT_RISK: Risk Event Type; EVENT_PRIVILEGE: Privilege
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Rule type
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Rule Enable Status. 0: Enabled; 1: Disabled
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Rule Policy Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     */
                    std::string m_ruleEffectStatus;
                    bool m_ruleEffectStatusHasBeenSet;

                    /**
                     * Rule content
                     */
                    std::vector<std::string> m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image Name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * First generation time
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * Latest creation time
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * Number of events
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Execution action
BEHAVIOR_ALERT: Alert
BEHAVIOR_HOLDUP_SUCCESSED: Interception
                     */
                    std::string m_dealBehavior;
                    bool m_dealBehaviorHasBeenSet;

                    /**
                     * Event ID
                     */
                    int64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Node type.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Super Node Unique ID
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * pod ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Image repository information.
                     */
                    ImageRegistryInfo m_imageRegistryInfo;
                    bool m_imageRegistryInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYEVENT_H_
