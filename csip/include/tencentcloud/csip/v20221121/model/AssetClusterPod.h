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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTERPOD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTERPOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * This example shows you how to list the list of cluster pods. 
                */
                class AssetClusterPod : public AbstractModel
                {
                public:
                    AssetClusterPod();
                    ~AssetClusterPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant ID
                     * @return AppId Tenant ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tenant ID
                     * @param _appId Tenant ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Tenant UIN
                     * @return Uin Tenant UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Tenant UIN
                     * @param _uin Tenant UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Tenant name
                     * @return Nick Tenant name
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置Tenant name
                     * @param _nick Tenant name
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Pod ID
                     * @return AssetId Pod ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Pod ID
                     * @param _assetId Pod ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Pod name
                     * @return AssetName Pod name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Pod name
                     * @param _assetName Pod name
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Creation time of the pod
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InstanceCreateTime Creation time of the pod
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置Creation time of the pod
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _instanceCreateTime Creation time of the pod
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取Namespace
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Namespace Namespace
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _namespace Namespace
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Cluster ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ClusterId Cluster ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _clusterId Cluster ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Cluster name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ClusterName Cluster name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _clusterName Cluster name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Server ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MachineId Server ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineId() const;

                    /**
                     * 设置Server ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _machineId Server ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineId(const std::string& _machineId);

                    /**
                     * 判断参数 MachineId 是否已赋值
                     * @return MachineId 是否已赋值
                     * 
                     */
                    bool MachineIdHasBeenSet() const;

                    /**
                     * 获取Server name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MachineName Server name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _machineName Server name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Pod IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PodIp Pod IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置Pod IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _podIp Pod IP
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of associated services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ServiceCount Number of associated services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置Number of associated services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _serviceCount Number of associated services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Number of associated containers
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ContainerCount Number of associated containers
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置Number of associated containers
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _containerCount Number of associated containers
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Whether it's a critical asset. Values: `1` (critical asset), `0` (non-critical asset)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCore Whether it's a critical asset. Values: `1` (critical asset), `0` (non-critical asset)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsCore() const;

                    /**
                     * 设置Whether it's a critical asset. Values: `1` (critical asset), `0` (non-critical asset)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCore Whether it's a critical asset. Values: `1` (critical asset), `0` (non-critical asset)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCore(const int64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsNewAsset Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isNewAsset Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                private:

                    /**
                     * Tenant ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Tenant UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Tenant name
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Pod ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Pod name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Creation time of the pod
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * Namespace
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Server ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineId;
                    bool m_machineIdHasBeenSet;

                    /**
                     * Server name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Pod IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * Number of associated services
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Number of associated containers
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Whether it's a critical asset. Values: `1` (critical asset), `0` (non-critical asset)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETCLUSTERPOD_H_
