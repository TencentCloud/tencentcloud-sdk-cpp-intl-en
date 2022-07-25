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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstances request structure.
                */
                class DescribePrometheusInstancesRequest : public AbstractModel
                {
                public:
                    DescribePrometheusInstancesRequest();
                    ~DescribePrometheusInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries by instance ID or IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     * @return InstanceIds Queries by instance ID or IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Queries by instance ID or IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     * @param InstanceIds Queries by instance ID or IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filter by instance status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     * @return InstanceStatus Filter by instance status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     */
                    std::vector<int64_t> GetInstanceStatus() const;

                    /**
                     * 设置Filter by instance status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     * @param InstanceStatus Filter by instance status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     */
                    void SetInstanceStatus(const std::vector<int64_t>& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Filter by instance name
                     * @return InstanceName Filter by instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Filter by instance name
                     * @param InstanceName Filter by instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Filter by AZ in the format of `ap-guangzhou-1`
                     * @return Zones Filter by AZ in the format of `ap-guangzhou-1`
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Filter by AZ in the format of `ap-guangzhou-1`
                     * @param Zones Filter by AZ in the format of `ap-guangzhou-1`
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Filter by tag key-value pair. The `tag-key` should be replaced with a specific tag key.
                     * @return TagFilters Filter by tag key-value pair. The `tag-key` should be replaced with a specific tag key.
                     */
                    std::vector<PrometheusTag> GetTagFilters() const;

                    /**
                     * 设置Filter by tag key-value pair. The `tag-key` should be replaced with a specific tag key.
                     * @param TagFilters Filter by tag key-value pair. The `tag-key` should be replaced with a specific tag key.
                     */
                    void SetTagFilters(const std::vector<PrometheusTag>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取Filter by instance IPv4 address
                     * @return IPv4Address Filter by instance IPv4 address
                     */
                    std::vector<std::string> GetIPv4Address() const;

                    /**
                     * 设置Filter by instance IPv4 address
                     * @param IPv4Address Filter by instance IPv4 address
                     */
                    void SetIPv4Address(const std::vector<std::string>& _iPv4Address);

                    /**
                     * 判断参数 IPv4Address 是否已赋值
                     * @return IPv4Address 是否已赋值
                     */
                    bool IPv4AddressHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter by billing mode
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
                     * @return InstanceChargeType Filter by billing mode
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置Filter by billing mode
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
                     * @param InstanceChargeType Filter by billing mode
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * Queries by instance ID or IDs. Instance ID is in the format of `prom-xxxxxxxx`. Up to 100 instances can be queried in one request.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filter by instance status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     */
                    std::vector<int64_t> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Filter by instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Filter by AZ in the format of `ap-guangzhou-1`
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Filter by tag key-value pair. The `tag-key` should be replaced with a specific tag key.
                     */
                    std::vector<PrometheusTag> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * Filter by instance IPv4 address
                     */
                    std::vector<std::string> m_iPv4Address;
                    bool m_iPv4AddressHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter by billing mode
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCESREQUEST_H_
