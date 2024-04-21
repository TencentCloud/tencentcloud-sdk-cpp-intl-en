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
                     * 获取The cluster instance ID.
                     * @return InstanceId The cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The cluster instance ID.
                     * @param _instanceId The cluster instance ID.
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
                     * 获取The type and number of nodes to be added.
                     * @return ScaleOutNodeConfig The type and number of nodes to be added.
                     * 
                     */
                    ScaleOutNodeConfig GetScaleOutNodeConfig() const;

                    /**
                     * 设置The type and number of nodes to be added.
                     * @param _scaleOutNodeConfig The type and number of nodes to be added.
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
                     * 获取A unique random token, which is valid for 5 minutes and needs to be specified by the caller to prevent the client from repeatedly creating resources. An example value is `a9a90aa6-751a-41b6-aad6-fae36063280`.
                     * @return ClientToken A unique random token, which is valid for 5 minutes and needs to be specified by the caller to prevent the client from repeatedly creating resources. An example value is `a9a90aa6-751a-41b6-aad6-fae36063280`.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique random token, which is valid for 5 minutes and needs to be specified by the caller to prevent the client from repeatedly creating resources. An example value is `a9a90aa6-751a-41b6-aad6-fae36063280`.
                     * @param _clientToken A unique random token, which is valid for 5 minutes and needs to be specified by the caller to prevent the client from repeatedly creating resources. An example value is `a9a90aa6-751a-41b6-aad6-fae36063280`.
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
                     * 获取The details of the monthly subscription, including the instance period and auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     * @return InstanceChargePrepaid The details of the monthly subscription, including the instance period and auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置The details of the monthly subscription, including the instance period and auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     * @param _instanceChargePrepaid The details of the monthly subscription, including the instance period and auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
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
                     * 获取The [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * @return ScriptBootstrapActionConfig The [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * 
                     */
                    std::vector<ScriptBootstrapActionConfig> GetScriptBootstrapActionConfig() const;

                    /**
                     * 设置The [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     * @param _scriptBootstrapActionConfig The [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings.
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
                     * 获取The services to be deployed for new nodes. By default, new nodes will inherit services deployed for the current node type, including default optional services. This parameter only supports the inclusion of optional services. For example, if HDFS, YARN, and Impala have been deployed for existing task nodes, when using the API for task node scale-out without deploying Impala, only HDFS and YARN are included in with this parameter. 
                     * @return SoftDeployInfo The services to be deployed for new nodes. By default, new nodes will inherit services deployed for the current node type, including default optional services. This parameter only supports the inclusion of optional services. For example, if HDFS, YARN, and Impala have been deployed for existing task nodes, when using the API for task node scale-out without deploying Impala, only HDFS and YARN are included in with this parameter. 
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置The services to be deployed for new nodes. By default, new nodes will inherit services deployed for the current node type, including default optional services. This parameter only supports the inclusion of optional services. For example, if HDFS, YARN, and Impala have been deployed for existing task nodes, when using the API for task node scale-out without deploying Impala, only HDFS and YARN are included in with this parameter. 
                     * @param _softDeployInfo The services to be deployed for new nodes. By default, new nodes will inherit services deployed for the current node type, including default optional services. This parameter only supports the inclusion of optional services. For example, if HDFS, YARN, and Impala have been deployed for existing task nodes, when using the API for task node scale-out without deploying Impala, only HDFS and YARN are included in with this parameter. 
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
                     * 获取The processes to be deployed. All processes for services to be added are deployed by default. Deployed processes can be changed. For example, HDFS, YARN, and Impala have been deployed for current task nodes, and default services are DataNode, NodeManager, and ImpalaServer; if you want to change deployed processes, you can set this parameter to DataNode,NodeManager,ImpalaServerCoordinator or DataNode,NodeManager,ImpalaServerExecutor. 
                     * @return ServiceNodeInfo The processes to be deployed. All processes for services to be added are deployed by default. Deployed processes can be changed. For example, HDFS, YARN, and Impala have been deployed for current task nodes, and default services are DataNode, NodeManager, and ImpalaServer; if you want to change deployed processes, you can set this parameter to DataNode,NodeManager,ImpalaServerCoordinator or DataNode,NodeManager,ImpalaServerExecutor. 
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置The processes to be deployed. All processes for services to be added are deployed by default. Deployed processes can be changed. For example, HDFS, YARN, and Impala have been deployed for current task nodes, and default services are DataNode, NodeManager, and ImpalaServer; if you want to change deployed processes, you can set this parameter to DataNode,NodeManager,ImpalaServerCoordinator or DataNode,NodeManager,ImpalaServerExecutor. 
                     * @param _serviceNodeInfo The processes to be deployed. All processes for services to be added are deployed by default. Deployed processes can be changed. For example, HDFS, YARN, and Impala have been deployed for current task nodes, and default services are DataNode, NodeManager, and ImpalaServer; if you want to change deployed processes, you can set this parameter to DataNode,NodeManager,ImpalaServerCoordinator or DataNode,NodeManager,ImpalaServerExecutor. 
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
                     * 获取The list of spread placement group IDs. Only one can be specified.
You can call the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1) API and obtain this parameter from the `DisasterRecoverGroupId` field in the response.
                     * @return DisasterRecoverGroupIds The list of spread placement group IDs. Only one can be specified.
You can call the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1) API and obtain this parameter from the `DisasterRecoverGroupId` field in the response.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置The list of spread placement group IDs. Only one can be specified.
You can call the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1) API and obtain this parameter from the `DisasterRecoverGroupId` field in the response.
                     * @param _disasterRecoverGroupIds The list of spread placement group IDs. Only one can be specified.
You can call the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1) API and obtain this parameter from the `DisasterRecoverGroupId` field in the response.
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
                     * 获取The list of tags bound to added nodes.
                     * @return Tags The list of tags bound to added nodes.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of tags bound to added nodes.
                     * @param _tags The list of tags bound to added nodes.
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
                     * 获取The type of resources to add. Valid values: `host` (general CVM resources) and `pod` (resources provided by a TKE or EKS cluster).
                     * @return HardwareSourceType The type of resources to add. Valid values: `host` (general CVM resources) and `pod` (resources provided by a TKE or EKS cluster).
                     * 
                     */
                    std::string GetHardwareSourceType() const;

                    /**
                     * 设置The type of resources to add. Valid values: `host` (general CVM resources) and `pod` (resources provided by a TKE or EKS cluster).
                     * @param _hardwareSourceType The type of resources to add. Valid values: `host` (general CVM resources) and `pod` (resources provided by a TKE or EKS cluster).
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
                     * 获取The pod resource information.
                     * @return PodSpecInfo The pod resource information.
                     * 
                     */
                    PodSpecInfo GetPodSpecInfo() const;

                    /**
                     * 设置The pod resource information.
                     * @param _podSpecInfo The pod resource information.
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
                     * 获取The server group name selected for ClickHouse cluster scale-out.
                     * @return ClickHouseClusterName The server group name selected for ClickHouse cluster scale-out.
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置The server group name selected for ClickHouse cluster scale-out.
                     * @param _clickHouseClusterName The server group name selected for ClickHouse cluster scale-out.
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
                     * 获取The server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * @return ClickHouseClusterType The server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置The server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * @param _clickHouseClusterType The server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
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
                     * 获取The YARN node label specified for scale-out.
                     * @return YarnNodeLabel The YARN node label specified for scale-out.
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置The YARN node label specified for scale-out.
                     * @param _yarnNodeLabel The YARN node label specified for scale-out.
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
                     * 获取Whether to start services after scale-out.
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     * @return EnableStartServiceFlag Whether to start services after scale-out.
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     * 
                     */
                    bool GetEnableStartServiceFlag() const;

                    /**
                     * 设置Whether to start services after scale-out.
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     * @param _enableStartServiceFlag Whether to start services after scale-out.
<li>`true`: Yes</li>
<li>`false` (default): No</li>
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
                     * 获取The spec settings.
                     * @return ResourceSpec The spec settings.
                     * 
                     */
                    NodeResourceSpec GetResourceSpec() const;

                    /**
                     * 设置The spec settings.
                     * @param _resourceSpec The spec settings.
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
                     * 获取The ID of the AZ where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     * @return Zone The ID of the AZ where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The ID of the AZ where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     * @param _zone The ID of the AZ where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
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
                     * 获取The subnet, which defaults to the subnet used when the cluster is created.
                     * @return SubnetId The subnet, which defaults to the subnet used when the cluster is created.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The subnet, which defaults to the subnet used when the cluster is created.
                     * @param _subnetId The subnet, which defaults to the subnet used when the cluster is created.
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
                     * 获取
                     * @return ScaleOutServiceConfGroupsInfo 
                     * 
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> GetScaleOutServiceConfGroupsInfo() const;

                    /**
                     * 设置
                     * @param _scaleOutServiceConfGroupsInfo 
                     * 
                     */
                    void SetScaleOutServiceConfGroupsInfo(const std::vector<ScaleOutServiceConfGroupsInfo>& _scaleOutServiceConfGroupsInfo);

                    /**
                     * 判断参数 ScaleOutServiceConfGroupsInfo 是否已赋值
                     * @return ScaleOutServiceConfGroupsInfo 是否已赋值
                     * 
                     */
                    bool ScaleOutServiceConfGroupsInfoHasBeenSet() const;

                private:

                    /**
                     * The node billing mode. Valid values:
<li>`POSTPAID_BY_HOUR`: The postpaid mode by hour.</li>
<li>`SPOTPAID`: The spot instance mode (for task nodes only).</li>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * The cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The type and number of nodes to be added.
                     */
                    ScaleOutNodeConfig m_scaleOutNodeConfig;
                    bool m_scaleOutNodeConfigHasBeenSet;

                    /**
                     * A unique random token, which is valid for 5 minutes and needs to be specified by the caller to prevent the client from repeatedly creating resources. An example value is `a9a90aa6-751a-41b6-aad6-fae36063280`.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * The details of the monthly subscription, including the instance period and auto-renewal. It is required if the `InstanceChargeType` is `PREPAID`.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * The [Bootstrap action](https://intl.cloud.tencent.com/document/product/589/35656?from_cn_redirect=1) script settings.
                     */
                    std::vector<ScriptBootstrapActionConfig> m_scriptBootstrapActionConfig;
                    bool m_scriptBootstrapActionConfigHasBeenSet;

                    /**
                     * The services to be deployed for new nodes. By default, new nodes will inherit services deployed for the current node type, including default optional services. This parameter only supports the inclusion of optional services. For example, if HDFS, YARN, and Impala have been deployed for existing task nodes, when using the API for task node scale-out without deploying Impala, only HDFS and YARN are included in with this parameter. 
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * The processes to be deployed. All processes for services to be added are deployed by default. Deployed processes can be changed. For example, HDFS, YARN, and Impala have been deployed for current task nodes, and default services are DataNode, NodeManager, and ImpalaServer; if you want to change deployed processes, you can set this parameter to DataNode,NodeManager,ImpalaServerCoordinator or DataNode,NodeManager,ImpalaServerExecutor. 
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * The list of spread placement group IDs. Only one can be specified.
You can call the [DescribeDisasterRecoverGroups](https://intl.cloud.tencent.com/document/product/213/17810?from_cn_redirect=1) API and obtain this parameter from the `DisasterRecoverGroupId` field in the response.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * The list of tags bound to added nodes.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The type of resources to add. Valid values: `host` (general CVM resources) and `pod` (resources provided by a TKE or EKS cluster).
                     */
                    std::string m_hardwareSourceType;
                    bool m_hardwareSourceTypeHasBeenSet;

                    /**
                     * The pod resource information.
                     */
                    PodSpecInfo m_podSpecInfo;
                    bool m_podSpecInfoHasBeenSet;

                    /**
                     * The server group name selected for ClickHouse cluster scale-out.
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * The server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * The YARN node label specified for scale-out.
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * Whether to start services after scale-out.
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     */
                    bool m_enableStartServiceFlag;
                    bool m_enableStartServiceFlagHasBeenSet;

                    /**
                     * The spec settings.
                     */
                    NodeResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * The ID of the AZ where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The subnet, which defaults to the subnet used when the cluster is created.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ScaleOutServiceConfGroupsInfo> m_scaleOutServiceConfGroupsInfo;
                    bool m_scaleOutServiceConfGroupsInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTCLUSTERREQUEST_H_
