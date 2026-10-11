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
                     * 获取<p>Node billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li><li>SPOTPAID: spot billing (for Task nodes only)</li>
                     * @return InstanceChargeType <p>Node billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li><li>SPOTPAID: spot billing (for Task nodes only)</li>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Node billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li><li>SPOTPAID: spot billing (for Task nodes only)</li>
                     * @param _instanceChargeType <p>Node billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li><li>SPOTPAID: spot billing (for Task nodes only)</li>
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
                     * 获取<p>Cluster ID.</p>
                     * @return InstanceId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _instanceId <p>Cluster ID.</p>
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
                     * 获取<p>Type and number of nodes for the scale-out.</p>
                     * @return ScaleOutNodeConfig <p>Type and number of nodes for the scale-out.</p>
                     * 
                     */
                    ScaleOutNodeConfig GetScaleOutNodeConfig() const;

                    /**
                     * 设置<p>Type and number of nodes for the scale-out.</p>
                     * @param _scaleOutNodeConfig <p>Type and number of nodes for the scale-out.</p>
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
                     * 获取<p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * @return ClientToken <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * @param _clientToken <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
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
                     * 获取<p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     * @return InstanceChargePrepaid <p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     * @param _instanceChargePrepaid <p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
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
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * @return ScriptBootstrapActionConfig <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     * @param _scriptBootstrapActionConfig <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
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
                     * 获取<p>To scale out deployment services, new nodes will inherit the services deployed on the current node type by default. The deployment service includes default optional services. This parameter is supported only when optional services are used. For example, if existing task nodes have HDFS, YARN, and impala deployed, when using the API to scale out Task nodes without deploying impala, fill in only HDFS and YARN for the deployment service. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Component Name Mapping Table</a>.</p>
                     * @return SoftDeployInfo <p>To scale out deployment services, new nodes will inherit the services deployed on the current node type by default. The deployment service includes default optional services. This parameter is supported only when optional services are used. For example, if existing task nodes have HDFS, YARN, and impala deployed, when using the API to scale out Task nodes without deploying impala, fill in only HDFS and YARN for the deployment service. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Component Name Mapping Table</a>.</p>
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置<p>To scale out deployment services, new nodes will inherit the services deployed on the current node type by default. The deployment service includes default optional services. This parameter is supported only when optional services are used. For example, if existing task nodes have HDFS, YARN, and impala deployed, when using the API to scale out Task nodes without deploying impala, fill in only HDFS and YARN for the deployment service. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Component Name Mapping Table</a>.</p>
                     * @param _softDeployInfo <p>To scale out deployment services, new nodes will inherit the services deployed on the current node type by default. The deployment service includes default optional services. This parameter is supported only when optional services are used. For example, if existing task nodes have HDFS, YARN, and impala deployed, when using the API to scale out Task nodes without deploying impala, fill in only HDFS and YARN for the deployment service. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Component Name Mapping Table</a>.</p>
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
                     * 获取<p>Deployment processes. By default, all processes of the scaled‑out service are deployed. Deployment processes can be modified. For example, if the deployed services for the current task node are HDFS, YARN, and impala, the default deployment services are DataNode, NodeManager, and ImpalaServer. If you need to modify deployment process information, the deployment processes can be DataNode, NodeManager, and ImpalaServerCoordinator or DataNode, NodeManager, and ImpalaServerExecutor. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Process Name Mapping Table</a>.</p>
                     * @return ServiceNodeInfo <p>Deployment processes. By default, all processes of the scaled‑out service are deployed. Deployment processes can be modified. For example, if the deployed services for the current task node are HDFS, YARN, and impala, the default deployment services are DataNode, NodeManager, and ImpalaServer. If you need to modify deployment process information, the deployment processes can be DataNode, NodeManager, and ImpalaServerCoordinator or DataNode, NodeManager, and ImpalaServerExecutor. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Process Name Mapping Table</a>.</p>
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置<p>Deployment processes. By default, all processes of the scaled‑out service are deployed. Deployment processes can be modified. For example, if the deployed services for the current task node are HDFS, YARN, and impala, the default deployment services are DataNode, NodeManager, and ImpalaServer. If you need to modify deployment process information, the deployment processes can be DataNode, NodeManager, and ImpalaServerCoordinator or DataNode, NodeManager, and ImpalaServerExecutor. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Process Name Mapping Table</a>.</p>
                     * @param _serviceNodeInfo <p>Deployment processes. By default, all processes of the scaled‑out service are deployed. Deployment processes can be modified. For example, if the deployed services for the current task node are HDFS, YARN, and impala, the default deployment services are DataNode, NodeManager, and ImpalaServer. If you need to modify deployment process information, the deployment processes can be DataNode, NodeManager, and ImpalaServerCoordinator or DataNode, NodeManager, and ImpalaServerExecutor. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Process Name Mapping Table</a>.</p>
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
                     * 获取<p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     * @return DisasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     * @param _disasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
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
                     * 获取<p>List of tags bound to nodes for the scale-out.</p>
                     * @return Tags <p>List of tags bound to nodes for the scale-out.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tags bound to nodes for the scale-out.</p>
                     * @param _tags <p>List of tags bound to nodes for the scale-out.</p>
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
                     * 获取<p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     * @return HardwareSourceType <p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     * 
                     */
                    std::string GetHardwareSourceType() const;

                    /**
                     * 设置<p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     * @param _hardwareSourceType <p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
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
                     * 获取<p>Pod-related resource information.</p>
                     * @return PodSpecInfo <p>Pod-related resource information.</p>
                     * 
                     */
                    PodSpecInfo GetPodSpecInfo() const;

                    /**
                     * 设置<p>Pod-related resource information.</p>
                     * @param _podSpecInfo <p>Pod-related resource information.</p>
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
                     * 获取<p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     * @return ClickHouseClusterName <p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置<p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     * @param _clickHouseClusterName <p>Machine group name selected for the ClickHouse cluster scale-out.</p>
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
                     * 获取<p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     * @return ClickHouseClusterType <p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置<p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     * @param _clickHouseClusterType <p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
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
                     * 获取<p>YARN node label specified for the scale-out.</p>
                     * @return YarnNodeLabel <p>YARN node label specified for the scale-out.</p>
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置<p>YARN node label specified for the scale-out.</p>
                     * @param _yarnNodeLabel <p>YARN node label specified for the scale-out.</p>
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
                     * 获取<p>Whether to start the service after a scale-out. Default value: false. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * @return EnableStartServiceFlag <p>Whether to start the service after a scale-out. Default value: false. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * 
                     */
                    bool GetEnableStartServiceFlag() const;

                    /**
                     * 设置<p>Whether to start the service after a scale-out. Default value: false. Valid values:</p><li>true: yes</li><li>false: no</li>
                     * @param _enableStartServiceFlag <p>Whether to start the service after a scale-out. Default value: false. Valid values:</p><li>true: yes</li><li>false: no</li>
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
                     * 获取<p>Specification settings.</p>
                     * @return ResourceSpec <p>Specification settings.</p>
                     * 
                     */
                    NodeResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>Specification settings.</p>
                     * @param _resourceSpec <p>Specification settings.</p>
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
                     * 获取<p>AZ to which the instance belongs, for example, ap-guangzhou-1. This parameter can be obtained from the Zone field in the response of <a href="https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * @return Zone <p>AZ to which the instance belongs, for example, ap-guangzhou-1. This parameter can be obtained from the Zone field in the response of <a href="https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ to which the instance belongs, for example, ap-guangzhou-1. This parameter can be obtained from the Zone field in the response of <a href="https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * @param _zone <p>AZ to which the instance belongs, for example, ap-guangzhou-1. This parameter can be obtained from the Zone field in the response of <a href="https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
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
                     * 获取<p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     * @return SubnetId <p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     * @param _subnetId <p>Subnet. The subnet used during cluster creation is selected by default.</p>
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
                     * 获取<p>Configuration group specified for the scale-out.</p>
                     * @return ScaleOutServiceConfGroupsInfo <p>Configuration group specified for the scale-out.</p>
                     * 
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> GetScaleOutServiceConfGroupsInfo() const;

                    /**
                     * 设置<p>Configuration group specified for the scale-out.</p>
                     * @param _scaleOutServiceConfGroupsInfo <p>Configuration group specified for the scale-out.</p>
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
                     * 获取<p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * @return NodeMarks <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    NodeMark GetNodeMarks() const;

                    /**
                     * 设置<p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * @param _nodeMarks <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    void SetNodeMarks(const NodeMark& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>Name of the compute group specified for the scale-out.</p>
                     * @return WarehouseName <p>Name of the compute group specified for the scale-out.</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>Name of the compute group specified for the scale-out.</p>
                     * @param _warehouseName <p>Name of the compute group specified for the scale-out.</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

                    /**
                     * 获取<p>Partition of a partition placement group.</p>
                     * @return PartitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>Partition of a partition placement group.</p>
                     * @param _partitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                private:

                    /**
                     * <p>Node billing mode. Valid values:</p><li>PREPAID: prepaid, that is, yearly/monthly subscription</li><li>POSTPAID_BY_HOUR: pay-as-you-go on an hourly basis</li><li>SPOTPAID: spot billing (for Task nodes only)</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Type and number of nodes for the scale-out.</p>
                     */
                    ScaleOutNodeConfig m_scaleOutNodeConfig;
                    bool m_scaleOutNodeConfigHasBeenSet;

                    /**
                     * <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Parameter settings related to yearly/monthly subscription. This parameter can be used to specify the purchase duration of a yearly/monthly subscription instance, whether to enable auto-renewal, and other attributes. This parameter is required if the billing mode of the specified instance is prepaid.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/589/35656?from_cn_redirect=1">Bootstrap operation</a> script settings.</p>
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * <p>To scale out deployment services, new nodes will inherit the services deployed on the current node type by default. The deployment service includes default optional services. This parameter is supported only when optional services are used. For example, if existing task nodes have HDFS, YARN, and impala deployed, when using the API to scale out Task nodes without deploying impala, fill in only HDFS and YARN for the deployment service. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Component Name Mapping Table</a>.</p>
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * <p>Deployment processes. By default, all processes of the scaled‑out service are deployed. Deployment processes can be modified. For example, if the deployed services for the current task node are HDFS, YARN, and impala, the default deployment services are DataNode, NodeManager, and ImpalaServer. If you need to modify deployment process information, the deployment processes can be DataNode, NodeManager, and ImpalaServerCoordinator or DataNode, NodeManager, and ImpalaServerExecutor. For details, see <a href="https://www.tencentcloud.com/document/product/589/98760?from_cn_redirect=1">Process Name Mapping Table</a>.</p>
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * <p>List of dispersed placement group IDs. Currently, only one ID can be specified.<br>This parameter can be obtained by calling the DisasterRecoverGroupId field in the response result of <a href="https://www.tencentcloud.com/document/product/213/17810?from_cn_redirect=1">DescribeDisasterRecoverGroups</a>.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>List of tags bound to nodes for the scale-out.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     */
                    std::string m_hardwareSourceType;
                    bool m_hardwareSourceTypeHasBeenSet;

                    /**
                     * <p>Pod-related resource information.</p>
                     */
                    PodSpecInfo m_podSpecInfo;
                    bool m_podSpecInfoHasBeenSet;

                    /**
                     * <p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * <p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * <p>YARN node label specified for the scale-out.</p>
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * <p>Whether to start the service after a scale-out. Default value: false. Valid values:</p><li>true: yes</li><li>false: no</li>
                     */
                    bool m_enableStartServiceFlag;
                    bool m_enableStartServiceFlagHasBeenSet;

                    /**
                     * <p>Specification settings.</p>
                     */
                    NodeResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>AZ to which the instance belongs, for example, ap-guangzhou-1. This parameter can be obtained from the Zone field in the response of <a href="https://www.tencentcloud.com/document/product/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Configuration group specified for the scale-out.</p>
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> m_scaleOutServiceConfGroupsInfo;
                    bool m_scaleOutServiceConfGroupsInfoHasBeenSet;

                    /**
                     * <p>Node flag information, which is currently only provided for the Terraform platform.</p>
                     */
                    NodeMark m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>Name of the compute group specified for the scale-out.</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                    /**
                     * <p>Partition of a partition placement group.</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
