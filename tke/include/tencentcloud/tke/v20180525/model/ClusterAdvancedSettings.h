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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster advanced configurations
                */
                class ClusterAdvancedSettings : public AbstractModel
                {
                public:
                    ClusterAdvancedSettings();
                    ~ClusterAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether IPVS is enabled
                     * @return IPVS Whether IPVS is enabled
                     */
                    bool GetIPVS() const;

                    /**
                     * 设置Whether IPVS is enabled
                     * @param IPVS Whether IPVS is enabled
                     */
                    void SetIPVS(const bool& _iPVS);

                    /**
                     * 判断参数 IPVS 是否已赋值
                     * @return IPVS 是否已赋值
                     */
                    bool IPVSHasBeenSet() const;

                    /**
                     * 获取Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     * @return AsEnabled Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     */
                    bool GetAsEnabled() const;

                    /**
                     * 设置Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     * @param AsEnabled Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     */
                    void SetAsEnabled(const bool& _asEnabled);

                    /**
                     * 判断参数 AsEnabled 是否已赋值
                     * @return AsEnabled 是否已赋值
                     */
                    bool AsEnabledHasBeenSet() const;

                    /**
                     * 获取Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     * @return ContainerRuntime Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     * @param ContainerRuntime Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return NodeNameType 
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置
                     * @param NodeNameType 
                     */
                    void SetNodeNameType(const std::string& _nodeNameType);

                    /**
                     * 判断参数 NodeNameType 是否已赋值
                     * @return NodeNameType 是否已赋值
                     */
                    bool NodeNameTypeHasBeenSet() const;

                    /**
                     * 获取Cluster custom parameter
                     * @return ExtraArgs Cluster custom parameter
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Cluster custom parameter
                     * @param ExtraArgs Cluster custom parameter
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     * @return NetworkType Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     * @param NetworkType Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     * @return IsNonStaticIpMode Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     */
                    bool GetIsNonStaticIpMode() const;

                    /**
                     * 设置Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     * @param IsNonStaticIpMode Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     */
                    void SetIsNonStaticIpMode(const bool& _isNonStaticIpMode);

                    /**
                     * 判断参数 IsNonStaticIpMode 是否已赋值
                     * @return IsNonStaticIpMode 是否已赋值
                     */
                    bool IsNonStaticIpModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeletionProtection 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置
                     * @param DeletionProtection 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Cluster network proxy model
                     * @return KubeProxyMode Cluster network proxy model
                     */
                    std::string GetKubeProxyMode() const;

                    /**
                     * 设置Cluster network proxy model
                     * @param KubeProxyMode Cluster network proxy model
                     */
                    void SetKubeProxyMode(const std::string& _kubeProxyMode);

                    /**
                     * 判断参数 KubeProxyMode 是否已赋值
                     * @return KubeProxyMode 是否已赋值
                     */
                    bool KubeProxyModeHasBeenSet() const;

                private:

                    /**
                     * Whether IPVS is enabled
                     */
                    bool m_iPVS;
                    bool m_iPVSHasBeenSet;

                    /**
                     * Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     */
                    bool m_asEnabled;
                    bool m_asEnabledHasBeenSet;

                    /**
                     * Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_nodeNameType;
                    bool m_nodeNameTypeHasBeenSet;

                    /**
                     * Cluster custom parameter
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     */
                    bool m_isNonStaticIpMode;
                    bool m_isNonStaticIpModeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Cluster network proxy model
                     */
                    std::string m_kubeProxyMode;
                    bool m_kubeProxyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
