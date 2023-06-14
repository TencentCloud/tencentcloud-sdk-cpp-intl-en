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
                     * 
                     */
                    bool GetIPVS() const;

                    /**
                     * 设置Whether IPVS is enabled
                     * @param _iPVS Whether IPVS is enabled
                     * 
                     */
                    void SetIPVS(const bool& _iPVS);

                    /**
                     * 判断参数 IPVS 是否已赋值
                     * @return IPVS 是否已赋值
                     * 
                     */
                    bool IPVSHasBeenSet() const;

                    /**
                     * 获取Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     * @return AsEnabled Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     * 
                     */
                    bool GetAsEnabled() const;

                    /**
                     * 设置Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     * @param _asEnabled Whether auto-scaling is enabled for nodes in the cluster (Enabling this function is not supported when you create a cluster)
                     * 
                     */
                    void SetAsEnabled(const bool& _asEnabled);

                    /**
                     * 判断参数 AsEnabled 是否已赋值
                     * @return AsEnabled 是否已赋值
                     * 
                     */
                    bool AsEnabledHasBeenSet() const;

                    /**
                     * 获取Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     * @return ContainerRuntime Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     * @param _containerRuntime Type of runtime component used by the cluster. The types include "docker" and "containerd". Default value: docker
                     * 
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取NodeName type for a node in a cluster (This includes the two forms of **hostname** and **lan-ip**, with the default as **lan-ip**. If **hostname** is used, you need to set the HostName parameter when creating a node, and the InstanceName needs to be the same as the HostName.)
                     * @return NodeNameType NodeName type for a node in a cluster (This includes the two forms of **hostname** and **lan-ip**, with the default as **lan-ip**. If **hostname** is used, you need to set the HostName parameter when creating a node, and the InstanceName needs to be the same as the HostName.)
                     * 
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置NodeName type for a node in a cluster (This includes the two forms of **hostname** and **lan-ip**, with the default as **lan-ip**. If **hostname** is used, you need to set the HostName parameter when creating a node, and the InstanceName needs to be the same as the HostName.)
                     * @param _nodeNameType NodeName type for a node in a cluster (This includes the two forms of **hostname** and **lan-ip**, with the default as **lan-ip**. If **hostname** is used, you need to set the HostName parameter when creating a node, and the InstanceName needs to be the same as the HostName.)
                     * 
                     */
                    void SetNodeNameType(const std::string& _nodeNameType);

                    /**
                     * 判断参数 NodeNameType 是否已赋值
                     * @return NodeNameType 是否已赋值
                     * 
                     */
                    bool NodeNameTypeHasBeenSet() const;

                    /**
                     * 获取Cluster custom parameter
                     * @return ExtraArgs Cluster custom parameter
                     * 
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Cluster custom parameter
                     * @param _extraArgs Cluster custom parameter
                     * 
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     * @return NetworkType Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     * @param _networkType Cluster network type, which can be GR (Global Router) or VPC-CNI. The default value is GR.
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     * @return IsNonStaticIpMode Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     * 
                     */
                    bool GetIsNonStaticIpMode() const;

                    /**
                     * 设置Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     * @param _isNonStaticIpMode Whether a cluster in VPC-CNI mode uses dynamic IP addresses. The default value is FALSE, which indicates that static IP addresses are used.
                     * 
                     */
                    void SetIsNonStaticIpMode(const bool& _isNonStaticIpMode);

                    /**
                     * 判断参数 IsNonStaticIpMode 是否已赋值
                     * @return IsNonStaticIpMode 是否已赋值
                     * 
                     */
                    bool IsNonStaticIpModeHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable cluster deletion protection.
                     * @return DeletionProtection Indicates whether to enable cluster deletion protection.
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Indicates whether to enable cluster deletion protection.
                     * @param _deletionProtection Indicates whether to enable cluster deletion protection.
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Cluster network proxy model, which is only used when ipvs-bpf mode is used. At present, TKE cluster supports three network proxy modes including `iptables`, `ipvs` and `ipvs-bpf` and their parameter setting relationships are as follows:
`iptables`: do not set IPVS and KubeProxyMode.
`ipvs`: set IPVS to `true` and do not set KubeProxyMode.
`ipvs-bpf`: set KubeProxyMode to `kube-proxy-bpf`.
The following conditions are required to use ipvs-bpf network mode:
1. The cluster version must be v1.14 or later.
2. The system image must be Tencent Linux 2.4.
                     * @return KubeProxyMode Cluster network proxy model, which is only used when ipvs-bpf mode is used. At present, TKE cluster supports three network proxy modes including `iptables`, `ipvs` and `ipvs-bpf` and their parameter setting relationships are as follows:
`iptables`: do not set IPVS and KubeProxyMode.
`ipvs`: set IPVS to `true` and do not set KubeProxyMode.
`ipvs-bpf`: set KubeProxyMode to `kube-proxy-bpf`.
The following conditions are required to use ipvs-bpf network mode:
1. The cluster version must be v1.14 or later.
2. The system image must be Tencent Linux 2.4.
                     * 
                     */
                    std::string GetKubeProxyMode() const;

                    /**
                     * 设置Cluster network proxy model, which is only used when ipvs-bpf mode is used. At present, TKE cluster supports three network proxy modes including `iptables`, `ipvs` and `ipvs-bpf` and their parameter setting relationships are as follows:
`iptables`: do not set IPVS and KubeProxyMode.
`ipvs`: set IPVS to `true` and do not set KubeProxyMode.
`ipvs-bpf`: set KubeProxyMode to `kube-proxy-bpf`.
The following conditions are required to use ipvs-bpf network mode:
1. The cluster version must be v1.14 or later.
2. The system image must be Tencent Linux 2.4.
                     * @param _kubeProxyMode Cluster network proxy model, which is only used when ipvs-bpf mode is used. At present, TKE cluster supports three network proxy modes including `iptables`, `ipvs` and `ipvs-bpf` and their parameter setting relationships are as follows:
`iptables`: do not set IPVS and KubeProxyMode.
`ipvs`: set IPVS to `true` and do not set KubeProxyMode.
`ipvs-bpf`: set KubeProxyMode to `kube-proxy-bpf`.
The following conditions are required to use ipvs-bpf network mode:
1. The cluster version must be v1.14 or later.
2. The system image must be Tencent Linux 2.4.
                     * 
                     */
                    void SetKubeProxyMode(const std::string& _kubeProxyMode);

                    /**
                     * 判断参数 KubeProxyMode 是否已赋值
                     * @return KubeProxyMode 是否已赋值
                     * 
                     */
                    bool KubeProxyModeHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable auditing
                     * @return AuditEnabled Indicates whether to enable auditing
                     * 
                     */
                    bool GetAuditEnabled() const;

                    /**
                     * 设置Indicates whether to enable auditing
                     * @param _auditEnabled Indicates whether to enable auditing
                     * 
                     */
                    void SetAuditEnabled(const bool& _auditEnabled);

                    /**
                     * 判断参数 AuditEnabled 是否已赋值
                     * @return AuditEnabled 是否已赋值
                     * 
                     */
                    bool AuditEnabledHasBeenSet() const;

                    /**
                     * 获取Specifies the ID of logset to which the audit logs are uploaded.
                     * @return AuditLogsetId Specifies the ID of logset to which the audit logs are uploaded.
                     * 
                     */
                    std::string GetAuditLogsetId() const;

                    /**
                     * 设置Specifies the ID of logset to which the audit logs are uploaded.
                     * @param _auditLogsetId Specifies the ID of logset to which the audit logs are uploaded.
                     * 
                     */
                    void SetAuditLogsetId(const std::string& _auditLogsetId);

                    /**
                     * 判断参数 AuditLogsetId 是否已赋值
                     * @return AuditLogsetId 是否已赋值
                     * 
                     */
                    bool AuditLogsetIdHasBeenSet() const;

                    /**
                     * 获取Specifies the ID of topic to which the audit logs are uploaded.
                     * @return AuditLogTopicId Specifies the ID of topic to which the audit logs are uploaded.
                     * 
                     */
                    std::string GetAuditLogTopicId() const;

                    /**
                     * 设置Specifies the ID of topic to which the audit logs are uploaded.
                     * @param _auditLogTopicId Specifies the ID of topic to which the audit logs are uploaded.
                     * 
                     */
                    void SetAuditLogTopicId(const std::string& _auditLogTopicId);

                    /**
                     * 判断参数 AuditLogTopicId 是否已赋值
                     * @return AuditLogTopicId 是否已赋值
                     * 
                     */
                    bool AuditLogTopicIdHasBeenSet() const;

                    /**
                     * 获取Specifies the ENI type. Values: `tke-route-eni` (multi-IP shared ENI); `tke-direct-eni` (independent ENI). It defaults to `tke-route-eni`.
                     * @return VpcCniType Specifies the ENI type. Values: `tke-route-eni` (multi-IP shared ENI); `tke-direct-eni` (independent ENI). It defaults to `tke-route-eni`.
                     * 
                     */
                    std::string GetVpcCniType() const;

                    /**
                     * 设置Specifies the ENI type. Values: `tke-route-eni` (multi-IP shared ENI); `tke-direct-eni` (independent ENI). It defaults to `tke-route-eni`.
                     * @param _vpcCniType Specifies the ENI type. Values: `tke-route-eni` (multi-IP shared ENI); `tke-direct-eni` (independent ENI). It defaults to `tke-route-eni`.
                     * 
                     */
                    void SetVpcCniType(const std::string& _vpcCniType);

                    /**
                     * 判断参数 VpcCniType 是否已赋值
                     * @return VpcCniType 是否已赋值
                     * 
                     */
                    bool VpcCniTypeHasBeenSet() const;

                    /**
                     * 获取Runtime version
                     * @return RuntimeVersion Runtime version
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置Runtime version
                     * @param _runtimeVersion Runtime version
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable the custom mode for the node’s pod CIDR range
                     * @return EnableCustomizedPodCIDR Indicates whether to enable the custom mode for the node’s pod CIDR range
                     * 
                     */
                    bool GetEnableCustomizedPodCIDR() const;

                    /**
                     * 设置Indicates whether to enable the custom mode for the node’s pod CIDR range
                     * @param _enableCustomizedPodCIDR Indicates whether to enable the custom mode for the node’s pod CIDR range
                     * 
                     */
                    void SetEnableCustomizedPodCIDR(const bool& _enableCustomizedPodCIDR);

                    /**
                     * 判断参数 EnableCustomizedPodCIDR 是否已赋值
                     * @return EnableCustomizedPodCIDR 是否已赋值
                     * 
                     */
                    bool EnableCustomizedPodCIDRHasBeenSet() const;

                    /**
                     * 获取The basic number of Pods in custom mode
                     * @return BasePodNumber The basic number of Pods in custom mode
                     * 
                     */
                    int64_t GetBasePodNumber() const;

                    /**
                     * 设置The basic number of Pods in custom mode
                     * @param _basePodNumber The basic number of Pods in custom mode
                     * 
                     */
                    void SetBasePodNumber(const int64_t& _basePodNumber);

                    /**
                     * 判断参数 BasePodNumber 是否已赋值
                     * @return BasePodNumber 是否已赋值
                     * 
                     */
                    bool BasePodNumberHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable Cilium. If it’s left empty, Cilium is not enabled. If `clusterIP` is passed in, it means to enable Cilium to support the clusterIP service type.
                     * @return CiliumMode Specifies whether to enable Cilium. If it’s left empty, Cilium is not enabled. If `clusterIP` is passed in, it means to enable Cilium to support the clusterIP service type.
                     * 
                     */
                    std::string GetCiliumMode() const;

                    /**
                     * 设置Specifies whether to enable Cilium. If it’s left empty, Cilium is not enabled. If `clusterIP` is passed in, it means to enable Cilium to support the clusterIP service type.
                     * @param _ciliumMode Specifies whether to enable Cilium. If it’s left empty, Cilium is not enabled. If `clusterIP` is passed in, it means to enable Cilium to support the clusterIP service type.
                     * 
                     */
                    void SetCiliumMode(const std::string& _ciliumMode);

                    /**
                     * 判断参数 CiliumMode 是否已赋值
                     * @return CiliumMode 是否已赋值
                     * 
                     */
                    bool CiliumModeHasBeenSet() const;

                    /**
                     * 获取Whether it is a dual-stack cluster in VPC-CNI mode. Default value: `false`, which indicates it is not a dual-stack cluster.
                     * @return IsDualStack Whether it is a dual-stack cluster in VPC-CNI mode. Default value: `false`, which indicates it is not a dual-stack cluster.
                     * 
                     */
                    bool GetIsDualStack() const;

                    /**
                     * 设置Whether it is a dual-stack cluster in VPC-CNI mode. Default value: `false`, which indicates it is not a dual-stack cluster.
                     * @param _isDualStack Whether it is a dual-stack cluster in VPC-CNI mode. Default value: `false`, which indicates it is not a dual-stack cluster.
                     * 
                     */
                    void SetIsDualStack(const bool& _isDualStack);

                    /**
                     * 判断参数 IsDualStack 是否已赋值
                     * @return IsDualStack 是否已赋值
                     * 
                     */
                    bool IsDualStackHasBeenSet() const;

                    /**
                     * 获取Whether to enable qGPU Sharing
                     * @return QGPUShareEnable Whether to enable qGPU Sharing
                     * 
                     */
                    bool GetQGPUShareEnable() const;

                    /**
                     * 设置Whether to enable qGPU Sharing
                     * @param _qGPUShareEnable Whether to enable qGPU Sharing
                     * 
                     */
                    void SetQGPUShareEnable(const bool& _qGPUShareEnable);

                    /**
                     * 判断参数 QGPUShareEnable 是否已赋值
                     * @return QGPUShareEnable 是否已赋值
                     * 
                     */
                    bool QGPUShareEnableHasBeenSet() const;

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
                     * NodeName type for a node in a cluster (This includes the two forms of **hostname** and **lan-ip**, with the default as **lan-ip**. If **hostname** is used, you need to set the HostName parameter when creating a node, and the InstanceName needs to be the same as the HostName.)
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
                     * Indicates whether to enable cluster deletion protection.
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Cluster network proxy model, which is only used when ipvs-bpf mode is used. At present, TKE cluster supports three network proxy modes including `iptables`, `ipvs` and `ipvs-bpf` and their parameter setting relationships are as follows:
`iptables`: do not set IPVS and KubeProxyMode.
`ipvs`: set IPVS to `true` and do not set KubeProxyMode.
`ipvs-bpf`: set KubeProxyMode to `kube-proxy-bpf`.
The following conditions are required to use ipvs-bpf network mode:
1. The cluster version must be v1.14 or later.
2. The system image must be Tencent Linux 2.4.
                     */
                    std::string m_kubeProxyMode;
                    bool m_kubeProxyModeHasBeenSet;

                    /**
                     * Indicates whether to enable auditing
                     */
                    bool m_auditEnabled;
                    bool m_auditEnabledHasBeenSet;

                    /**
                     * Specifies the ID of logset to which the audit logs are uploaded.
                     */
                    std::string m_auditLogsetId;
                    bool m_auditLogsetIdHasBeenSet;

                    /**
                     * Specifies the ID of topic to which the audit logs are uploaded.
                     */
                    std::string m_auditLogTopicId;
                    bool m_auditLogTopicIdHasBeenSet;

                    /**
                     * Specifies the ENI type. Values: `tke-route-eni` (multi-IP shared ENI); `tke-direct-eni` (independent ENI). It defaults to `tke-route-eni`.
                     */
                    std::string m_vpcCniType;
                    bool m_vpcCniTypeHasBeenSet;

                    /**
                     * Runtime version
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * Indicates whether to enable the custom mode for the node’s pod CIDR range
                     */
                    bool m_enableCustomizedPodCIDR;
                    bool m_enableCustomizedPodCIDRHasBeenSet;

                    /**
                     * The basic number of Pods in custom mode
                     */
                    int64_t m_basePodNumber;
                    bool m_basePodNumberHasBeenSet;

                    /**
                     * Specifies whether to enable Cilium. If it’s left empty, Cilium is not enabled. If `clusterIP` is passed in, it means to enable Cilium to support the clusterIP service type.
                     */
                    std::string m_ciliumMode;
                    bool m_ciliumModeHasBeenSet;

                    /**
                     * Whether it is a dual-stack cluster in VPC-CNI mode. Default value: `false`, which indicates it is not a dual-stack cluster.
                     */
                    bool m_isDualStack;
                    bool m_isDualStackHasBeenSet;

                    /**
                     * Whether to enable qGPU Sharing
                     */
                    bool m_qGPUShareEnable;
                    bool m_qGPUShareEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERADVANCEDSETTINGS_H_
