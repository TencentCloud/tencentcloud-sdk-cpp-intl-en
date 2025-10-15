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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKCONFIGURATION_H_

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
                * Creates task configuration information.
                */
                class CreateTaskConfiguration : public AbstractModel
                {
                public:
                    CreateTaskConfiguration();
                    ~CreateTaskConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource Group ID: Must be obtained via DescribeNormalSchedulerExecutorGroups API to get the ExecutorGroupId.
                     * @return ResourceGroup Resource Group ID: Must be obtained via DescribeNormalSchedulerExecutorGroups API to get the ExecutorGroupId.
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置Resource Group ID: Must be obtained via DescribeNormalSchedulerExecutorGroups API to get the ExecutorGroupId.
                     * @param _resourceGroup Resource Group ID: Must be obtained via DescribeNormalSchedulerExecutorGroups API to get the ExecutorGroupId.
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
                     * 获取Base64 encoding of the code content.
                     * @return CodeContent Base64 encoding of the code content.
                     * 
                     */
                    std::string GetCodeContent() const;

                    /**
                     * 设置Base64 encoding of the code content.
                     * @param _codeContent Base64 encoding of the code content.
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
                     * 获取Specifies the configuration list of task extended attributes.
                     * @return TaskExtConfigurationList Specifies the configuration list of task extended attributes.
                     * 
                     */
                    std::vector<TaskExtParameter> GetTaskExtConfigurationList() const;

                    /**
                     * 设置Specifies the configuration list of task extended attributes.
                     * @param _taskExtConfigurationList Specifies the configuration list of task extended attributes.
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
                     * @return DataCluster Cluster ID
                     * 
                     */
                    std::string GetDataCluster() const;

                    /**
                     * 设置Cluster ID
                     * @param _dataCluster Cluster ID
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
                     * 获取Specifies the running node.
                     * @return BrokerIp Specifies the running node.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Specifies the running node.
                     * @param _brokerIp Specifies the running node.
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
                     * 获取Resource Pool Queue Name: Must be obtained using DescribeProjectClusterQueues API.
                     * @return YarnQueue Resource Pool Queue Name: Must be obtained using DescribeProjectClusterQueues API.
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置Resource Pool Queue Name: Must be obtained using DescribeProjectClusterQueues API.
                     * @param _yarnQueue Resource Pool Queue Name: Must be obtained using DescribeProjectClusterQueues API.
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
                     * 获取Source Data Source ID - One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     * @return SourceServiceId Source Data Source ID - One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置Source Data Source ID - One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     * @param _sourceServiceId Source Data Source ID - One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
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
                     * 获取Target data source ID- One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     * @return TargetServiceId Target data source ID- One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置Target data source ID- One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     * @param _targetServiceId Target data source ID- One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
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
                     * 获取Scheduling parameter.
                     * @return TaskSchedulingParameterList Scheduling parameter.
                     * 
                     */
                    std::vector<TaskSchedulingParameter> GetTaskSchedulingParameterList() const;

                    /**
                     * 设置Scheduling parameter.
                     * @param _taskSchedulingParameterList Scheduling parameter.
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
                     * @return BundleId ID used by the Bundle.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置ID used by the Bundle.
                     * @param _bundleId ID used by the Bundle.
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
                     * @return BundleInfo Bundle info.
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Bundle info.
                     * @param _bundleInfo Bundle info.
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
                     * Resource Group ID: Must be obtained via DescribeNormalSchedulerExecutorGroups API to get the ExecutorGroupId.
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * Base64 encoding of the code content.
                     */
                    std::string m_codeContent;
                    bool m_codeContentHasBeenSet;

                    /**
                     * Specifies the configuration list of task extended attributes.
                     */
                    std::vector<TaskExtParameter> m_taskExtConfigurationList;
                    bool m_taskExtConfigurationListHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_dataCluster;
                    bool m_dataClusterHasBeenSet;

                    /**
                     * Specifies the running node.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Resource Pool Queue Name: Must be obtained using DescribeProjectClusterQueues API.
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * Source Data Source ID - One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * Target data source ID- One or more IDs separated by semicolons (;). Retrieve IDs using the DescribeDataSourceWithoutInfo API.
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * Scheduling parameter.
                     */
                    std::vector<TaskSchedulingParameter> m_taskSchedulingParameterList;
                    bool m_taskSchedulingParameterListHasBeenSet;

                    /**
                     * ID used by the Bundle.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Bundle info.
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKCONFIGURATION_H_
