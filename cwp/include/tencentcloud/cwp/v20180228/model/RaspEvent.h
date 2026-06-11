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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENT_H_

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
                * Application protection event
                */
                class RaspEvent : public AbstractModel
                {
                public:
                    RaspEvent();
                    ~RaspEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability Event ID
                     * @return Id Vulnerability Event ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Vulnerability Event ID
                     * @param _id Vulnerability Event ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Machine UUID
                     * @return Uuid Machine UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Machine UUID
                     * @param _uuid Machine UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Machine QUuid.
                     * @return Quuid Machine QUuid.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Machine QUuid.
                     * @param _quuid Machine QUuid.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取host name
                     * @return Alias host name
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置host name
                     * @param _alias host name
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return PrivateIp Private IP address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIp Private IP address
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CveId CVE ID
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE ID
                     * @param _cveId CVE ID
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取Attack source IP address
                     * @return SourceIp Attack source IP address
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Attack source IP address
                     * @param _sourceIp Attack source IP address
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取City of the attack source IP address
                     * @return City City of the attack source IP address
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City of the attack source IP address
                     * @param _city City of the attack source IP address
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Port under attack
                     * @return AttackPort Port under attack
                     * 
                     */
                    uint64_t GetAttackPort() const;

                    /**
                     * 设置Port under attack
                     * @param _attackPort Port under attack
                     * 
                     */
                    void SetAttackPort(const uint64_t& _attackPort);

                    /**
                     * 判断参数 AttackPort 是否已赋值
                     * @return AttackPort 是否已赋值
                     * 
                     */
                    bool AttackPortHasBeenSet() const;

                    /**
                     * 获取First Attack Time
                     * @return CreateTime First Attack Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First Attack Time
                     * @param _createTime First Attack Time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last attack time
                     * @return MergeTime Last attack time
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Last attack time
                     * @param _mergeTime Last attack time
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取Attack count
                     * @return Count Attack count
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Attack count
                     * @param _count Attack count
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
                     * @return Status Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
                     * @param _status Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Application attack type
                     * @return AttackTypeName Application attack type
                     * 
                     */
                    std::string GetAttackTypeName() const;

                    /**
                     * 设置Application attack type
                     * @param _attackTypeName Application attack type
                     * 
                     */
                    void SetAttackTypeName(const std::string& _attackTypeName);

                    /**
                     * 判断参数 AttackTypeName 是否已赋值
                     * @return AttackTypeName 是否已赋值
                     * 
                     */
                    bool AttackTypeNameHasBeenSet() const;

                    /**
                     * 获取Application Attack Type id
                     * @return AttackType Application Attack Type id
                     * 
                     */
                    int64_t GetAttackType() const;

                    /**
                     * 设置Application Attack Type id
                     * @param _attackType Application Attack Type id
                     * 
                     */
                    void SetAttackType(const int64_t& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

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
                     * 获取Node ID.
                     * @return NodeId Node ID.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeId Node ID.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

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
                     * 获取container id
                     * @return ContainerId container id
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置container id
                     * @param _containerId container id
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
                     * 获取Container running status
                     * @return ContainerStatus Container running status
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container running status
                     * @param _containerStatus Container running status
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
                     * 获取Container isolation status
                     * @return ContainerNetStatus Container isolation status
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Container isolation status
                     * @param _containerNetStatus Container isolation status
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
                     * 获取Image ID
                     * @return ImageId Image ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param _imageId Image ID
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
                     * 获取podip
                     * @return PodIp podip
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置podip
                     * @param _podIp podip
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

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
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Event details, including poc
                     * @return RaspDetail Event details, including poc
                     * 
                     */
                    std::string GetRaspDetail() const;

                    /**
                     * 设置Event details, including poc
                     * @param _raspDetail Event details, including poc
                     * 
                     */
                    void SetRaspDetail(const std::string& _raspDetail);

                    /**
                     * 判断参数 RaspDetail 是否已赋值
                     * @return RaspDetail 是否已赋值
                     * 
                     */
                    bool RaspDetailHasBeenSet() const;

                    /**
                     * 获取regular node: NORMAL
Super node: SUPER
                     * @return NodeType regular node: NORMAL
Super node: SUPER
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置regular node: NORMAL
Super node: SUPER
                     * @param _nodeType regular node: NORMAL
Super node: SUPER
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
                     * 获取Event Type 1: Attack Time 2: Successful Defense
                     * @return EventType Event Type 1: Attack Time 2: Successful Defense
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置Event Type 1: Attack Time 2: Successful Defense
                     * @param _eventType Event Type 1: Attack Time 2: Successful Defense
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Unique id of a super node
                     * @return NodeUniqueID Unique id of a super node
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置Unique id of a super node
                     * @param _nodeUniqueID Unique id of a super node
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
                     * 获取poc id
                     * @return PocID poc id
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置poc id
                     * @param _pocID poc id
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取Request URL
                     * @return Url Request URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Request URL
                     * @param _url Request URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取malicious feature
                     * @return Poc malicious feature
                     * 
                     */
                    std::string GetPoc() const;

                    /**
                     * 设置malicious feature
                     * @param _poc malicious feature
                     * 
                     */
                    void SetPoc(const std::string& _poc);

                    /**
                     * 判断参数 Poc 是否已赋值
                     * @return Poc 是否已赋值
                     * 
                     */
                    bool PocHasBeenSet() const;

                private:

                    /**
                     * Vulnerability Event ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Machine UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Machine QUuid.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * host name
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Attack source IP address
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * City of the attack source IP address
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Port under attack
                     */
                    uint64_t m_attackPort;
                    bool m_attackPortHasBeenSet;

                    /**
                     * First Attack Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last attack time
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Attack count
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Application attack type
                     */
                    std::string m_attackTypeName;
                    bool m_attackTypeNameHasBeenSet;

                    /**
                     * Application Attack Type id
                     */
                    int64_t m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Container name
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * container id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Container running status
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Container isolation status
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image Name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * podip
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Event details, including poc
                     */
                    std::string m_raspDetail;
                    bool m_raspDetailHasBeenSet;

                    /**
                     * regular node: NORMAL
Super node: SUPER
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Event Type 1: Attack Time 2: Successful Defense
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Unique id of a super node
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * poc id
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Request URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * malicious feature
                     */
                    std::string m_poc;
                    bool m_pocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENT_H_
