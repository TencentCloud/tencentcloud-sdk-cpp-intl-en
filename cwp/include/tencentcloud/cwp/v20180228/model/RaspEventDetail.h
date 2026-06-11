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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTDETAIL_H_

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
                * Application protection event details
                */
                class RaspEventDetail : public AbstractModel
                {
                public:
                    RaspEventDetail();
                    ~RaspEventDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Vulnerability Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Vulnerability Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Vulnerability Event ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Machine QUuid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Machine QUuid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Machine QUuid.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Machine QUuid.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Alias host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alias host name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceID Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceID Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Asset tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostTags Asset tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHostTags() const;

                    /**
                     * 设置Asset tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostTags Asset tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostTags(const std::vector<std::string>& _hostTags);

                    /**
                     * 判断参数 HostTags 是否已赋值
                     * @return HostTags 是否已赋值
                     * 
                     */
                    bool HostTagsHasBeenSet() const;

                    /**
                     * 获取First Attack Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime First Attack Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First Attack Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime First Attack Time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MergeTime Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mergeTime Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackTypeName Application attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAttackTypeName() const;

                    /**
                     * 设置Application attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackTypeName Application attack type
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackType Application Attack Type id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAttackType() const;

                    /**
                     * 设置Application Attack Type id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackType Application Attack Type id
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Request URL
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulName Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Attack count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Attack count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Attack count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Attack count
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CveId CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cveId CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceIp Attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceIp Attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return City City of the attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置City of the attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _city City of the attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackPort Port under attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackPort() const;

                    /**
                     * 设置Port under attack
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackPort Port under attack
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Repair method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Fix Repair method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Repair method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fix Repair method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Request content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkPayload Request content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkPayload() const;

                    /**
                     * 设置Request content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkPayload Request content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkPayload(const std::string& _networkPayload);

                    /**
                     * 判断参数 NetworkPayload 是否已赋值
                     * @return NetworkPayload 是否已赋值
                     * 
                     */
                    bool NetworkPayloadHasBeenSet() const;

                    /**
                     * 获取Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Node name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerName Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerName Container name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerId container id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置container id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerId container id
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerStatus Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 设置Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerStatus Container running status
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetStatus Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 设置Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _containerNetStatus Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageName Image Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageName Image Name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodName Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podName Pod name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodIp podip
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置podip
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podIp podip
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterName Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Process id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pid Process id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Process id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pid Process id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取Associated Process Main Class Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MainClass Associated Process Main Class Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置Associated Process Main Class Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mainClass Associated Process Main Class Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StackTrace Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStackTrace() const;

                    /**
                     * 设置Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stackTrace Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStackTrace(const std::string& _stackTrace);

                    /**
                     * 判断参数 StackTrace 是否已赋值
                     * @return StackTrace 是否已赋值
                     * 
                     */
                    bool StackTraceHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RaspDetail Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRaspDetail() const;

                    /**
                     * 设置Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _raspDetail Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Intrusion Status: 1 Attack Event, 2 Successful Defense
                     * @return EventType Intrusion Status: 1 Attack Event, 2 Successful Defense
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置Intrusion Status: 1 Attack Event, 2 Successful Defense
                     * @param _eventType Intrusion Status: 1 Attack Event, 2 Successful Defense
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * Vulnerability Event ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Status 0: pending 1: defended 2: processed 3: ignored 4: deleted 5: allowlisted
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Machine QUuid.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Asset tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_hostTags;
                    bool m_hostTagsHasBeenSet;

                    /**
                     * First Attack Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last attack time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * Application attack type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_attackTypeName;
                    bool m_attackTypeNameHasBeenSet;

                    /**
                     * Application Attack Type id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Vulnerability name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Attack count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * CVE ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * City of the attack source IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Port under attack
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackPort;
                    bool m_attackPortHasBeenSet;

                    /**
                     * Vulnerability description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Repair method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Request content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkPayload;
                    bool m_networkPayloadHasBeenSet;

                    /**
                     * Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * container id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Container running status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Pod name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * podip
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * Cluster name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Process id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * Associated Process Main Class Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * Stack information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stackTrace;
                    bool m_stackTraceHasBeenSet;

                    /**
                     * Vulnerability ID-Related Event Details (JSON array format, unique to RASP)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_raspDetail;
                    bool m_raspDetailHasBeenSet;

                    /**
                     * Intrusion Status: 1 Attack Event, 2 Successful Defense
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPEVENTDETAIL_H_
