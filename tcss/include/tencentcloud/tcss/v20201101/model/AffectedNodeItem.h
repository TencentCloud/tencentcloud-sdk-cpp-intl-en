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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_AFFECTEDNODEITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_AFFECTEDNODEITEM_H_

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
                * Structure of the affected node type
                */
                class AffectedNodeItem : public AbstractModel
                {
                public:
                    AffectedNodeItem();
                    ~AffectedNodeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Private IP
                     * @return PrivateIpAddresses Private IP
                     */
                    std::string GetPrivateIpAddresses() const;

                    /**
                     * 设置Private IP
                     * @param PrivateIpAddresses Private IP
                     */
                    void SetPrivateIpAddresses(const std::string& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Node role, such as `Master` and `Work`.
                     * @return InstanceRole Node role, such as `Master` and `Work`.
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Node role, such as `Master` and `Work`.
                     * @param InstanceRole Node role, such as `Master` and `Work`.
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取K8s version
                     * @return ClusterVersion K8s version
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置K8s version
                     * @param ClusterVersion K8s version
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Runtime component. Valid values: `docker`, `containerd`.
                     * @return ContainerRuntime Runtime component. Valid values: `docker`, `containerd`.
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置Runtime component. Valid values: `docker`, `containerd`.
                     * @param ContainerRuntime Runtime component. Valid values: `docker`, `containerd`.
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param Region Region
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Verification information of the check result
                     * @return VerifyInfo Verification information of the check result
                     */
                    std::string GetVerifyInfo() const;

                    /**
                     * 设置Verification information of the check result
                     * @param VerifyInfo Verification information of the check result
                     */
                    void SetVerifyInfo(const std::string& _verifyInfo);

                    /**
                     * 判断参数 VerifyInfo 是否已赋值
                     * @return VerifyInfo 是否已赋值
                     */
                    bool VerifyInfoHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Private IP
                     */
                    std::string m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Node role, such as `Master` and `Work`.
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * K8s version
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Runtime component. Valid values: `docker`, `containerd`.
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Verification information of the check result
                     */
                    std::string m_verifyInfo;
                    bool m_verifyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_AFFECTEDNODEITEM_H_
