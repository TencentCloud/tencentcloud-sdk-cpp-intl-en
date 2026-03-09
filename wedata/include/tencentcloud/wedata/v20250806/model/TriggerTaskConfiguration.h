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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TaskExtParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskSchedulingParameter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task configuration information.
                */
                class TriggerTaskConfiguration : public AbstractModel
                {
                public:
                    TriggerTaskConfiguration();
                    ~TriggerTaskConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64 encoding of the code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CodeContent Base64 encoding of the code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodeContent() const;

                    /**
                     * 设置Base64 encoding of the code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codeContent Base64 encoding of the code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodeContent(const std::string& _codeContent);

                    /**
                     * 判断参数 CodeContent 是否已赋值
                     * @return CodeContent 是否已赋值
                     * 
                     */
                    bool CodeContentHasBeenSet() const;

                    /**
                     * 获取Task extended attribute configuration list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskExtConfigurationList Task extended attribute configuration list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskExtParameter> GetTaskExtConfigurationList() const;

                    /**
                     * 设置Task extended attribute configuration list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskExtConfigurationList Task extended attribute configuration list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskExtConfigurationList(const std::vector<TaskExtParameter>& _taskExtConfigurationList);

                    /**
                     * 判断参数 TaskExtConfigurationList 是否已赋值
                     * @return TaskExtConfigurationList 是否已赋值
                     * 
                     */
                    bool TaskExtConfigurationListHasBeenSet() const;

                    /**
                     * 获取Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataCluster Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataCluster() const;

                    /**
                     * 设置Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataCluster Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataCluster(const std::string& _dataCluster);

                    /**
                     * 判断参数 DataCluster 是否已赋值
                     * @return DataCluster 是否已赋值
                     * 
                     */
                    bool DataClusterHasBeenSet() const;

                    /**
                     * 获取Specified running node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BrokerIp Specified running node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Specified running node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _brokerIp Specified running node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取Resource pool queue name. need to pass through DescribeProjectClusterQueues to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return YarnQueue Resource pool queue name. need to pass through DescribeProjectClusterQueues to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置Resource pool queue name. need to pass through DescribeProjectClusterQueues to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _yarnQueue Resource pool queue name. need to pass through DescribeProjectClusterQueues to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetYarnQueue(const std::string& _yarnQueue);

                    /**
                     * 判断参数 YarnQueue 是否已赋值
                     * @return YarnQueue 是否已赋值
                     * 
                     */
                    bool YarnQueueHasBeenSet() const;

                    /**
                     * 获取Source data source ID, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceServiceId Source data source ID, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置Source data source ID, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceServiceId Source data source ID, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取Data source type, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceServiceType Data source type, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceServiceType() const;

                    /**
                     * 设置Data source type, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceServiceType Data source type, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceServiceType(const std::string& _sourceServiceType);

                    /**
                     * 判断参数 SourceServiceType 是否已赋值
                     * @return SourceServiceType 是否已赋值
                     * 
                     */
                    bool SourceServiceTypeHasBeenSet() const;

                    /**
                     * 获取Data source name, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceServiceName Data source name, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceServiceName() const;

                    /**
                     * 设置Data source name, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceServiceName Data source name, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceServiceName(const std::string& _sourceServiceName);

                    /**
                     * 判断参数 SourceServiceName 是否已赋值
                     * @return SourceServiceName 是否已赋值
                     * 
                     */
                    bool SourceServiceNameHasBeenSet() const;

                    /**
                     * 获取Target data source ID. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetServiceId Target data source ID. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置Target data source ID. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetServiceId Target data source ID. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取Target data source type. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetServiceType Target data source type. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetServiceType() const;

                    /**
                     * 设置Target data source type. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetServiceType Target data source type. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetServiceType(const std::string& _targetServiceType);

                    /**
                     * 判断参数 TargetServiceType 是否已赋值
                     * @return TargetServiceType 是否已赋值
                     * 
                     */
                    bool TargetServiceTypeHasBeenSet() const;

                    /**
                     * 获取Target data source name. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetServiceName Target data source name. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetServiceName() const;

                    /**
                     * 设置Target data source name. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetServiceName Target data source name. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetServiceName(const std::string& _targetServiceName);

                    /**
                     * 判断参数 TargetServiceName 是否已赋值
                     * @return TargetServiceName 是否已赋值
                     * 
                     */
                    bool TargetServiceNameHasBeenSet() const;

                    /**
                     * 获取Resource group ID: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroup Resource group ID: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Resource group ID: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroup Resource group ID: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取Resource group name: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupName.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupName Resource group name: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupName.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置Resource group name: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupName.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupName Resource group name: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupName.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取Scheduling parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskSchedulingParameterList Scheduling parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskSchedulingParameter> GetTaskSchedulingParameterList() const;

                    /**
                     * 设置Scheduling parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskSchedulingParameterList Scheduling parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskSchedulingParameterList(const std::vector<TaskSchedulingParameter>& _taskSchedulingParameterList);

                    /**
                     * 判断参数 TaskSchedulingParameterList 是否已赋值
                     * @return TaskSchedulingParameterList 是否已赋值
                     * 
                     */
                    bool TaskSchedulingParameterListHasBeenSet() const;

                    /**
                     * 获取ID used by the Bundle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BundleId ID used by the Bundle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置ID used by the Bundle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bundleId ID used by the Bundle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Bundle info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BundleInfo Bundle info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Bundle info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bundleInfo Bundle info.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * Base64 encoding of the code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codeContent;
                    bool m_codeContentHasBeenSet;

                    /**
                     * Task extended attribute configuration list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskExtParameter> m_taskExtConfigurationList;
                    bool m_taskExtConfigurationListHasBeenSet;

                    /**
                     * Cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataCluster;
                    bool m_dataClusterHasBeenSet;

                    /**
                     * Specified running node.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Resource pool queue name. need to pass through DescribeProjectClusterQueues to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * Source data source ID, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * Data source type, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceServiceType;
                    bool m_sourceServiceTypeHasBeenSet;

                    /**
                     * Data source name, need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceServiceName;
                    bool m_sourceServiceNameHasBeenSet;

                    /**
                     * Target data source ID. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * Target data source type. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetServiceType;
                    bool m_targetServiceTypeHasBeenSet;

                    /**
                     * Target data source name. need to pass through DescribeDataSourceWithoutInfo to obtain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetServiceName;
                    bool m_targetServiceNameHasBeenSet;

                    /**
                     * Resource group ID: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Resource group name: need to pass through DescribeNormalSchedulerExecutorGroups to obtain ExecutorGroupName.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * Scheduling parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskSchedulingParameter> m_taskSchedulingParameterList;
                    bool m_taskSchedulingParameterListHasBeenSet;

                    /**
                     * ID used by the Bundle.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Bundle info.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKCONFIGURATION_H_
