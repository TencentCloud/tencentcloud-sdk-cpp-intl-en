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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESLISTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Filters.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstancesList request structure.
                */
                class DescribeInstancesListRequest : public AbstractModel
                {
                public:
                    DescribeInstancesListRequest();
                    ~DescribeInstancesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster filtering policy. Valid values: <li>clusterList: Queries the list of clusters excluding terminated ones.</li><li>monitorManage: Queries the list of clusters excluding those terminated, under creation and not successfully created.</li><li>cloudHardwareManage/componentManage: Two reserved values, which have the same implications as those of `monitorManage`.</li>
                     * @return DisplayStrategy Cluster filtering policy. Valid values: <li>clusterList: Queries the list of clusters excluding terminated ones.</li><li>monitorManage: Queries the list of clusters excluding those terminated, under creation and not successfully created.</li><li>cloudHardwareManage/componentManage: Two reserved values, which have the same implications as those of `monitorManage`.</li>
                     * 
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置Cluster filtering policy. Valid values: <li>clusterList: Queries the list of clusters excluding terminated ones.</li><li>monitorManage: Queries the list of clusters excluding those terminated, under creation and not successfully created.</li><li>cloudHardwareManage/componentManage: Two reserved values, which have the same implications as those of `monitorManage`.</li>
                     * @param _displayStrategy Cluster filtering policy. Valid values: <li>clusterList: Queries the list of clusters excluding terminated ones.</li><li>monitorManage: Queries the list of clusters excluding those terminated, under creation and not successfully created.</li><li>cloudHardwareManage/componentManage: Two reserved values, which have the same implications as those of `monitorManage`.</li>
                     * 
                     */
                    void SetDisplayStrategy(const std::string& _displayStrategy);

                    /**
                     * 判断参数 DisplayStrategy 是否已赋值
                     * @return DisplayStrategy 是否已赋值
                     * 
                     */
                    bool DisplayStrategyHasBeenSet() const;

                    /**
                     * 获取Page number. Default value: `0`, indicating the first page.
                     * @return Offset Page number. Default value: `0`, indicating the first page.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: `0`, indicating the first page.
                     * @param _offset Page number. Default value: `0`, indicating the first page.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both limit and offset are 0, all records will be queried.
                     * @return Limit Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both limit and offset are 0, all records will be queried.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both limit and offset are 0, all records will be queried.
                     * @param _limit Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both limit and offset are 0, all records will be queried.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values: <li>clusterId: Sorting by instance ID. </li><li>addTime: Sorting by instance creation time.</li><li>status: Sorting by instance status code.</li>
                     * @return OrderField Sorting field. Valid values: <li>clusterId: Sorting by instance ID. </li><li>addTime: Sorting by instance creation time.</li><li>status: Sorting by instance status code.</li>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. Valid values: <li>clusterId: Sorting by instance ID. </li><li>addTime: Sorting by instance creation time.</li><li>status: Sorting by instance status code.</li>
                     * @param _orderField Sorting field. Valid values: <li>clusterId: Sorting by instance ID. </li><li>addTime: Sorting by instance creation time.</li><li>status: Sorting by instance status code.</li>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Sort by OrderField in ascending or descending order. Valid values: <li>0: ascending order;</li> <li>1: descending order.</li> The default value is 0.
                     * @return Asc Sort by OrderField in ascending or descending order. Valid values: <li>0: ascending order;</li> <li>1: descending order.</li> The default value is 0.
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置Sort by OrderField in ascending or descending order. Valid values: <li>0: ascending order;</li> <li>1: descending order.</li> The default value is 0.
                     * @param _asc Sort by OrderField in ascending or descending order. Valid values: <li>0: ascending order;</li> <li>1: descending order.</li> The default value is 0.
                     * 
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取Custom search filter. Examples: <li>instance of filtering by ClusterId: [{"Name":"ClusterId","Values":["emr-xxxxxxxx"]}]</li><li>instance of filtering by clusterName: [{"Name": "ClusterName","Values": ["cluster_name"]}]</li><li>instance of filtering by ClusterStatus: [{"Name": "ClusterStatus","Values": ["2"]}]</li>.
                     * @return Filters Custom search filter. Examples: <li>instance of filtering by ClusterId: [{"Name":"ClusterId","Values":["emr-xxxxxxxx"]}]</li><li>instance of filtering by clusterName: [{"Name": "ClusterName","Values": ["cluster_name"]}]</li><li>instance of filtering by ClusterStatus: [{"Name": "ClusterStatus","Values": ["2"]}]</li>.
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Custom search filter. Examples: <li>instance of filtering by ClusterId: [{"Name":"ClusterId","Values":["emr-xxxxxxxx"]}]</li><li>instance of filtering by clusterName: [{"Name": "ClusterName","Values": ["cluster_name"]}]</li><li>instance of filtering by ClusterStatus: [{"Name": "ClusterStatus","Values": ["2"]}]</li>.
                     * @param _filters Custom search filter. Examples: <li>instance of filtering by ClusterId: [{"Name":"ClusterId","Values":["emr-xxxxxxxx"]}]</li><li>instance of filtering by clusterName: [{"Name": "ClusterName","Values": ["cluster_name"]}]</li><li>instance of filtering by ClusterStatus: [{"Name": "ClusterStatus","Values": ["2"]}]</li>.
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Cluster filtering policy. Valid values: <li>clusterList: Queries the list of clusters excluding terminated ones.</li><li>monitorManage: Queries the list of clusters excluding those terminated, under creation and not successfully created.</li><li>cloudHardwareManage/componentManage: Two reserved values, which have the same implications as those of `monitorManage`.</li>
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * Page number. Default value: `0`, indicating the first page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of records to be returned per page. The default value is 100, and the maximum value is 100.
If both limit and offset are 0, all records will be queried.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting field. Valid values: <li>clusterId: Sorting by instance ID. </li><li>addTime: Sorting by instance creation time.</li><li>status: Sorting by instance status code.</li>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Sort by OrderField in ascending or descending order. Valid values: <li>0: ascending order;</li> <li>1: descending order.</li> The default value is 0.
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * Custom search filter. Examples: <li>instance of filtering by ClusterId: [{"Name":"ClusterId","Values":["emr-xxxxxxxx"]}]</li><li>instance of filtering by clusterName: [{"Name": "ClusterName","Values": ["cluster_name"]}]</li><li>instance of filtering by ClusterStatus: [{"Name": "ClusterStatus","Values": ["2"]}]</li>.
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCESLISTREQUEST_H_
