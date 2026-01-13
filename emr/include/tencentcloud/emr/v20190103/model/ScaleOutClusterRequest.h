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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutNodeConfig.h>
#include <tencentcloud/emr/v20190103/model/InstanceChargePrepaid.h>
#include <tencentcloud/emr/v20190103/model/ScriptBootstrapActionConfig.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/PodSpecInfo.h>
#include <tencentcloud/emr/v20190103/model/NodeResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutServiceConfGroupsInfo.h>
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ScaleOutCluster request structure.
                */
                class ScaleOutClusterRequest : public AbstractModel
                {
                public:
                    ScaleOutClusterRequest();
                    ~ScaleOutClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The node billing mode. Valid values:
<li>`POSTPAID_BY_HOUR`: The postpaid mode by hour.</li>
<li>`SPOTPAID`: The spot instance mode (for task nodes only).</li>
                     * @return InstanceChargeType The node billing mode. Valid values:
<li>`POSTPAID_BY_HOUR`: The postpaid mode by hour.</li>
<li>`SPOTPAID`: The spot instance mode (for task nodes only).</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置The node billing mode. Valid values:
<li>`POSTPAID_BY_HOUR`: The postpaid mode by hour.</li>
<li>`SPOTPAID`: The spot instance mode (for task nodes only).</li>
                     * @param _instanceChargeType The node billing mode. Valid values:
<li>`POSTPAID_BY_HOUR`: The postpaid mode by hour.</li>
<li>`SPOTPAID`: The spot instance mode (for task nodes only).</li>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Cluster instance ID.
                     * @return InstanceId Cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _instanceId Cluster instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Scale-up node type and quantity.
                     * @return ScaleOutNodeConfig Scale-up node type and quantity.
                     * 
                     */
                    ScaleOutNodeConfig GetScaleOutNodeConfig() const;

                    /**
                     * 设置Scale-up node type and quantity.
                     * @param _scaleOutNodeConfig Scale-up node type and quantity.
                     * 
                     */
                    void SetScaleOutNodeConfig(const ScaleOutNodeConfig& _scaleOutNodeConfig);

                    /**
                     * 判断参数 ScaleOutNodeConfig 是否已赋值
                     * @return ScaleOutNodeConfig 是否已赋值
                     * 
                     */
                    bool ScaleOutNodeConfigHasBeenSet() const;

                    /**
                     * 获取Unique random identifier with the time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources again, for example, a9a90aa6-****-****-****-fae36063280.
                     * @return ClientToken Unique random identifier with the time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources again, for example, a9a90aa6-****-****-****-fae36063280.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Unique random identifier with the time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources again, for example, a9a90aa6-****-****-****-fae36063280.
                     * @param _clientToken Unique random identifier with the time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources again, for example, a9a90aa6-****-****-****-fae36063280.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Setting of parameters related to monthly subscription. Through this parameter, you can specify the duration of purchase for monthly subscription instances, whether to set auto-renewal, and other attributes. This parameter is required when the specified instance is subject to the payment mode of prepaid.
                     * @return InstanceChargePrepaid Setting of parameters related to monthly subscription. Through this parameter, you can specify the duration of purchase for monthly subscription instances, whether to set auto-renewal, and other attributes. This parameter is required when the specified instance is subject to the payment mode of prepaid.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Setting of parameters related to monthly subscription. Through this parameter, you can specify the duration of purchase for monthly subscription instances, whether to set auto-renewal, and other attributes. This parameter is required when the specified instance is subject to the payment mode of prepaid.
                     * @param _instanceChargePrepaid Setting of parameters related to monthly subscription. Through this parameter, you can specify the duration of purchase for monthly subscription instances, whether to set auto-renewal, and other attributes. This parameter is required when the specified instance is subject to the payment mode of prepaid.
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取[Bootstrap Actions](https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * @return ScriptBootstrapActionConfig [Bootstrap Actions](https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置[Bootstrap Actions](https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * @param _scriptBootstrapActionConfig [Bootstrap Actions](https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * 
                     */
                    void SetScriptBootstrapActionConfig(const std::vector<ScriptBootstrapActionConfig>& _scriptBootstrapActionConfig);

                    /**
                     * 判断参数 ScriptBootstrapActionConfig 是否已赋值
                     * @return ScriptBootstrapActionConfig 是否已赋值
                     * 
                     */
                    bool ScriptBootstrapActionConfigHasBeenSet() const;

                    /**
                     * 获取Scale-out deployment service. New nodes inherit services deployed in the current node type by default, including default optional services. This parameter only supports optional service filling, for example: HDFS, YARN, and Impala have been deployed to existing task nodes. When API is used to scale out the task nodes without deploying Impala, only HDFS and YARN are filled for deployment services. For more details, see [Mapping Table of Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * @return SoftDeployInfo Scale-out deployment service. New nodes inherit services deployed in the current node type by default, including default optional services. This parameter only supports optional service filling, for example: HDFS, YARN, and Impala have been deployed to existing task nodes. When API is used to scale out the task nodes without deploying Impala, only HDFS and YARN are filled for deployment services. For more details, see [Mapping Table of Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置Scale-out deployment service. New nodes inherit services deployed in the current node type by default, including default optional services. This parameter only supports optional service filling, for example: HDFS, YARN, and Impala have been deployed to existing task nodes. When API is used to scale out the task nodes without deploying Impala, only HDFS and YARN are filled for deployment services. For more details, see [Mapping Table of Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * @param _softDeployInfo Scale-out deployment service. New nodes inherit services deployed in the current node type by default, including default optional services. This parameter only supports optional service filling, for example: HDFS, YARN, and Impala have been deployed to existing task nodes. When API is used to scale out the task nodes without deploying Impala, only HDFS and YARN are filled for deployment services. For more details, see [Mapping Table of Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * 
                     */
                    void SetSoftDeployInfo(const std::vector<int64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     * 
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取Deployment process. By default, all scale-out service processes are deployed. Deployment processes can be modified. For example, HDFS, YARN, or Impala has been deployed for the current Task node. The default deployment services include DataNode,NodeManager,ImpalaServer. If users need to modify deployment process information, the deployment process can be DataNode, NodeManager, ImpalaServerCoordinator or DataNode, NodeManager, ImpalaServerExecutor. For more details, see [Mapping Table of Process Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * @return ServiceNodeInfo Deployment process. By default, all scale-out service processes are deployed. Deployment processes can be modified. For example, HDFS, YARN, or Impala has been deployed for the current Task node. The default deployment services include DataNode,NodeManager,ImpalaServer. If users need to modify deployment process information, the deployment process can be DataNode, NodeManager, ImpalaServerCoordinator or DataNode, NodeManager, ImpalaServerExecutor. For more details, see [Mapping Table of Process Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置Deployment process. By default, all scale-out service processes are deployed. Deployment processes can be modified. For example, HDFS, YARN, or Impala has been deployed for the current Task node. The default deployment services include DataNode,NodeManager,ImpalaServer. If users need to modify deployment process information, the deployment process can be DataNode, NodeManager, ImpalaServerCoordinator or DataNode, NodeManager, ImpalaServerExecutor. For more details, see [Mapping Table of Process Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * @param _serviceNodeInfo Deployment process. By default, all scale-out service processes are deployed. Deployment processes can be modified. For example, HDFS, YARN, or Impala has been deployed for the current Task node. The default deployment services include DataNode,NodeManager,ImpalaServer. If users need to modify deployment process information, the deployment process can be DataNode, NodeManager, ImpalaServerCoordinator or DataNode, NodeManager, ImpalaServerExecutor. For more details, see [Mapping Table of Process Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     * 
                     */
                    void SetServiceNodeInfo(const std::vector<int64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     * 
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取Spread placement group ID list. Only one can be specified currently.
This parameter can be obtained by calling the DisasterRecoverGroupId field in the return value of the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1) API.
                     * @return DisasterRecoverGroupIds Spread placement group ID list. Only one can be specified currently.
This parameter can be obtained by calling the DisasterRecoverGroupId field in the return value of the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置Spread placement group ID list. Only one can be specified currently.
This parameter can be obtained by calling the DisasterRecoverGroupId field in the return value of the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1) API.
                     * @param _disasterRecoverGroupIds Spread placement group ID list. Only one can be specified currently.
This parameter can be obtained by calling the DisasterRecoverGroupId field in the return value of the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1) API.
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取List of tags bound to scale-out nodes.
                     * @return Tags List of tags bound to scale-out nodes.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound to scale-out nodes.
                     * @param _tags List of tags bound to scale-out nodes.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Resource type selected for scale-out with valid values "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * @return HardwareSourceType Resource type selected for scale-out with valid values "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * 
                     */
                    std::string GetHardwareSourceType() const;

                    /**
                     * 设置Resource type selected for scale-out with valid values "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * @param _hardwareSourceType Resource type selected for scale-out with valid values "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * 
                     */
                    void SetHardwareSourceType(const std::string& _hardwareSourceType);

                    /**
                     * 判断参数 HardwareSourceType 是否已赋值
                     * @return HardwareSourceType 是否已赋值
                     * 
                     */
                    bool HardwareSourceTypeHasBeenSet() const;

                    /**
                     * 获取Pod-related resource information.
                     * @return PodSpecInfo Pod-related resource information.
                     * 
                     */
                    PodSpecInfo GetPodSpecInfo() const;

                    /**
                     * 设置Pod-related resource information.
                     * @param _podSpecInfo Pod-related resource information.
                     * 
                     */
                    void SetPodSpecInfo(const PodSpecInfo& _podSpecInfo);

                    /**
                     * 判断参数 PodSpecInfo 是否已赋值
                     * @return PodSpecInfo 是否已赋值
                     * 
                     */
                    bool PodSpecInfoHasBeenSet() const;

                    /**
                     * 获取Machine group name selected for ClickHouse cluster scale-out.
                     * @return ClickHouseClusterName Machine group name selected for ClickHouse cluster scale-out.
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置Machine group name selected for ClickHouse cluster scale-out.
                     * @param _clickHouseClusterName Machine group name selected for ClickHouse cluster scale-out.
                     * 
                     */
                    void SetClickHouseClusterName(const std::string& _clickHouseClusterName);

                    /**
                     * 判断参数 ClickHouseClusterName 是否已赋值
                     * @return ClickHouseClusterName 是否已赋值
                     * 
                     */
                    bool ClickHouseClusterNameHasBeenSet() const;

                    /**
                     * 获取Machine group type selected for ClickHouse cluster scale-out. "New" indicates creating a group type, and "old" indicates using an existing group type.
                     * @return ClickHouseClusterType Machine group type selected for ClickHouse cluster scale-out. "New" indicates creating a group type, and "old" indicates using an existing group type.
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置Machine group type selected for ClickHouse cluster scale-out. "New" indicates creating a group type, and "old" indicates using an existing group type.
                     * @param _clickHouseClusterType Machine group type selected for ClickHouse cluster scale-out. "New" indicates creating a group type, and "old" indicates using an existing group type.
                     * 
                     */
                    void SetClickHouseClusterType(const std::string& _clickHouseClusterType);

                    /**
                     * 判断参数 ClickHouseClusterType 是否已赋值
                     * @return ClickHouseClusterType 是否已赋值
                     * 
                     */
                    bool ClickHouseClusterTypeHasBeenSet() const;

                    /**
                     * 获取Specified Yarn Node Label for scale-out.
                     * @return YarnNodeLabel Specified Yarn Node Label for scale-out.
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置Specified Yarn Node Label for scale-out.
                     * @param _yarnNodeLabel Specified Yarn Node Label for scale-out.
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取Whether to start a service after scale-out (default: false).
<li>true: yes</li>.
<li>false: no</li>.
                     * @return EnableStartServiceFlag Whether to start a service after scale-out (default: false).
<li>true: yes</li>.
<li>false: no</li>.
                     * 
                     */
                    bool GetEnableStartServiceFlag() const;

                    /**
                     * 设置Whether to start a service after scale-out (default: false).
<li>true: yes</li>.
<li>false: no</li>.
                     * @param _enableStartServiceFlag Whether to start a service after scale-out (default: false).
<li>true: yes</li>.
<li>false: no</li>.
                     * 
                     */
                    void SetEnableStartServiceFlag(const bool& _enableStartServiceFlag);

                    /**
                     * 判断参数 EnableStartServiceFlag 是否已赋值
                     * @return EnableStartServiceFlag 是否已赋值
                     * 
                     */
                    bool EnableStartServiceFlagHasBeenSet() const;

                    /**
                     * 获取Specifications settings.
                     * @return ResourceSpec Specifications settings.
                     * 
                     */
                    NodeResourceSpec GetResourceSpec() const;

                    /**
                     * 设置Specifications settings.
                     * @param _resourceSpec Specifications settings.
                     * 
                     */
                    void SetResourceSpec(const NodeResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取Availability zone of the instance, such as ap-guangzhou-1. This parameter can also be obtained from the Zone field in the return value of [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * @return Zone Availability zone of the instance, such as ap-guangzhou-1. This parameter can also be obtained from the Zone field in the return value of [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone of the instance, such as ap-guangzhou-1. This parameter can also be obtained from the Zone field in the return value of [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * @param _zone Availability zone of the instance, such as ap-guangzhou-1. This parameter can also be obtained from the Zone field in the return value of [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Subnet, which is the subnet at the time of cluster creation by default.
                     * @return SubnetId Subnet, which is the subnet at the time of cluster creation by default.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet, which is the subnet at the time of cluster creation by default.
                     * @param _subnetId Subnet, which is the subnet at the time of cluster creation by default.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Configuration group specified for scale-out.
                     * @return ScaleOutServiceConfGroupsInfo Configuration group specified for scale-out.
                     * 
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> GetScaleOutServiceConfGroupsInfo() const;

                    /**
                     * 设置Configuration group specified for scale-out.
                     * @param _scaleOutServiceConfGroupsInfo Configuration group specified for scale-out.
                     * 
                     */
                    void SetScaleOutServiceConfGroupsInfo(const std::vector<ScaleOutServiceConfGroupsInfo>& _scaleOutServiceConfGroupsInfo);

                    /**
                     * 判断参数 ScaleOutServiceConfGroupsInfo 是否已赋值
                     * @return ScaleOutServiceConfGroupsInfo 是否已赋值
                     * 
                     */
                    bool ScaleOutServiceConfGroupsInfoHasBeenSet() const;

                    /**
                     * 获取Node tag information: currently used only in Terraform.
                     * @return NodeMarks Node tag information: currently used only in Terraform.
                     * 
                     */
                    NodeMark GetNodeMarks() const;

                    /**
                     * 设置Node tag information: currently used only in Terraform.
                     * @param _nodeMarks Node tag information: currently used only in Terraform.
                     * 
                     */
                    void SetNodeMarks(const NodeMark& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                private:

                    /**
                     * The node billing mode. Valid values:
<li>`POSTPAID_BY_HOUR`: The postpaid mode by hour.</li>
<li>`SPOTPAID`: The spot instance mode (for task nodes only).</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Scale-up node type and quantity.
                     */
                    ScaleOutNodeConfig m_scaleOutNodeConfig;
                    bool m_scaleOutNodeConfigHasBeenSet;

                    /**
                     * Unique random identifier with the time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources again, for example, a9a90aa6-****-****-****-fae36063280.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Setting of parameters related to monthly subscription. Through this parameter, you can specify the duration of purchase for monthly subscription instances, whether to set auto-renewal, and other attributes. This parameter is required when the specified instance is subject to the payment mode of prepaid.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * [Bootstrap Actions](https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * Scale-out deployment service. New nodes inherit services deployed in the current node type by default, including default optional services. This parameter only supports optional service filling, for example: HDFS, YARN, and Impala have been deployed to existing task nodes. When API is used to scale out the task nodes without deploying Impala, only HDFS and YARN are filled for deployment services. For more details, see [Mapping Table of Component Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * Deployment process. By default, all scale-out service processes are deployed. Deployment processes can be modified. For example, HDFS, YARN, or Impala has been deployed for the current Task node. The default deployment services include DataNode,NodeManager,ImpalaServer. If users need to modify deployment process information, the deployment process can be DataNode, NodeManager, ImpalaServerCoordinator or DataNode, NodeManager, ImpalaServerExecutor. For more details, see [Mapping Table of Process Names](https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1).
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * Spread placement group ID list. Only one can be specified currently.
This parameter can be obtained by calling the DisasterRecoverGroupId field in the return value of the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * List of tags bound to scale-out nodes.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Resource type selected for scale-out with valid values "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     */
                    std::string m_hardwareSourceType;
                    bool m_hardwareSourceTypeHasBeenSet;

                    /**
                     * Pod-related resource information.
                     */
                    PodSpecInfo m_podSpecInfo;
                    bool m_podSpecInfoHasBeenSet;

                    /**
                     * Machine group name selected for ClickHouse cluster scale-out.
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * Machine group type selected for ClickHouse cluster scale-out. "New" indicates creating a group type, and "old" indicates using an existing group type.
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * Specified Yarn Node Label for scale-out.
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * Whether to start a service after scale-out (default: false).
<li>true: yes</li>.
<li>false: no</li>.
                     */
                    bool m_enableStartServiceFlag;
                    bool m_enableStartServiceFlagHasBeenSet;

                    /**
                     * Specifications settings.
                     */
                    NodeResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * Availability zone of the instance, such as ap-guangzhou-1. This parameter can also be obtained from the Zone field in the return value of [DescribeZones](https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1).
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Subnet, which is the subnet at the time of cluster creation by default.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Configuration group specified for scale-out.
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> m_scaleOutServiceConfGroupsInfo;
                    bool m_scaleOutServiceConfGroupsInfoHasBeenSet;

                    /**
                     * Node tag information: currently used only in Terraform.
                     */
                    NodeMark m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
