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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeFlowLogs request structure.
                */
                class DescribeFlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeFlowLogsRequest();
                    ~DescribeFlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the VPC instance
                     * @return VpcId ID of the VPC instance
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance
                     * @param VpcId ID of the VPC instance
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The unique ID of the flow log.
                     * @return FlowLogId The unique ID of the flow log.
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置The unique ID of the flow log.
                     * @param FlowLogId The unique ID of the flow log.
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取The name of the flow log instance.
                     * @return FlowLogName The name of the flow log instance.
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置The name of the flow log instance.
                     * @param FlowLogName The name of the flow log instance.
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取The resource type of the flow log. Valid values: 'VPC', 'SUBNET', and 'NETWORKINTERFACE'.
                     * @return ResourceType The resource type of the flow log. Valid values: 'VPC', 'SUBNET', and 'NETWORKINTERFACE'.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The resource type of the flow log. Valid values: 'VPC', 'SUBNET', and 'NETWORKINTERFACE'.
                     * @param ResourceType The resource type of the flow log. Valid values: 'VPC', 'SUBNET', and 'NETWORKINTERFACE'.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取The unique ID of the resource.
                     * @return ResourceId The unique ID of the resource.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The unique ID of the resource.
                     * @param ResourceId The unique ID of the resource.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Type of flow logs to be collected. Valid values: 'ACCEPT', 'REJECT' and 'ALL'.
                     * @return TrafficType Type of flow logs to be collected. Valid values: 'ACCEPT', 'REJECT' and 'ALL'.
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置Type of flow logs to be collected. Valid values: 'ACCEPT', 'REJECT' and 'ALL'.
                     * @param TrafficType Type of flow logs to be collected. Valid values: 'ACCEPT', 'REJECT' and 'ALL'.
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取The storage ID of the flow log.
                     * @return CloudLogId The storage ID of the flow log.
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置The storage ID of the flow log.
                     * @param CloudLogId The storage ID of the flow log.
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取The storage ID status of the flow log.
                     * @return CloudLogState The storage ID status of the flow log.
                     */
                    std::string GetCloudLogState() const;

                    /**
                     * 设置The storage ID status of the flow log.
                     * @param CloudLogState The storage ID status of the flow log.
                     */
                    void SetCloudLogState(const std::string& _cloudLogState);

                    /**
                     * 判断参数 CloudLogState 是否已赋值
                     * @return CloudLogState 是否已赋值
                     */
                    bool CloudLogStateHasBeenSet() const;

                    /**
                     * 获取Order by field. Valid values: 'flowLogName' and 'createTime'. Default value: 'createTime'.
                     * @return OrderField Order by field. Valid values: 'flowLogName' and 'createTime'. Default value: 'createTime'.
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Order by field. Valid values: 'flowLogName' and 'createTime'. Default value: 'createTime'.
                     * @param OrderField Order by field. Valid values: 'flowLogName' and 'createTime'. Default value: 'createTime'.
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取In ascending (`asc`) or descending (`desc`) order. Default value: 'desc'.
                     * @return OrderDirection In ascending (`asc`) or descending (`desc`) order. Default value: 'desc'.
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置In ascending (`asc`) or descending (`desc`) order. Default value: 'desc'.
                     * @param OrderDirection In ascending (`asc`) or descending (`desc`) order. Default value: 'desc'.
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取The offset. Default value: 0.
                     * @return Offset The offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: 0.
                     * @param Offset The offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of rows per page. Default value: 10.
                     * @return Limit The number of rows per page. Default value: 10.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of rows per page. Default value: 10.
                     * @param Limit The number of rows per page. Default value: 10.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter condition. `FlowLogIds` and `Filters` cannot be specified at the same time.
<li>tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. The tag-key should be replaced with a specified tag key.</li>
                     * @return Filters Filter condition. `FlowLogIds` and `Filters` cannot be specified at the same time.
<li>tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. The tag-key should be replaced with a specified tag key.</li>
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置Filter condition. `FlowLogIds` and `Filters` cannot be specified at the same time.
<li>tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. The tag-key should be replaced with a specified tag key.</li>
                     * @param Filters Filter condition. `FlowLogIds` and `Filters` cannot be specified at the same time.
<li>tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. The tag-key should be replaced with a specified tag key.</li>
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The region corresponding to the flow log storage ID.
                     * @return CloudLogRegion The region corresponding to the flow log storage ID.
                     */
                    std::string GetCloudLogRegion() const;

                    /**
                     * 设置The region corresponding to the flow log storage ID.
                     * @param CloudLogRegion The region corresponding to the flow log storage ID.
                     */
                    void SetCloudLogRegion(const std::string& _cloudLogRegion);

                    /**
                     * 判断参数 CloudLogRegion 是否已赋值
                     * @return CloudLogRegion 是否已赋值
                     */
                    bool CloudLogRegionHasBeenSet() const;

                private:

                    /**
                     * ID of the VPC instance
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The unique ID of the flow log.
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * The name of the flow log instance.
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * The resource type of the flow log. Valid values: 'VPC', 'SUBNET', and 'NETWORKINTERFACE'.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * The unique ID of the resource.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Type of flow logs to be collected. Valid values: 'ACCEPT', 'REJECT' and 'ALL'.
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * The storage ID of the flow log.
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * The storage ID status of the flow log.
                     */
                    std::string m_cloudLogState;
                    bool m_cloudLogStateHasBeenSet;

                    /**
                     * Order by field. Valid values: 'flowLogName' and 'createTime'. Default value: 'createTime'.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * In ascending (`asc`) or descending (`desc`) order. Default value: 'desc'.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * The offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of rows per page. Default value: 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter condition. `FlowLogIds` and `Filters` cannot be specified at the same time.
<li>tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. The tag-key should be replaced with a specified tag key.</li>
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The region corresponding to the flow log storage ID.
                     */
                    std::string m_cloudLogRegion;
                    bool m_cloudLogRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSREQUEST_H_
