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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Filter.h>
#include <tencentcloud/tke/v20220501/model/SortBy.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeClusterInstances request structure.
                */
                class DescribeClusterInstancesRequest : public AbstractModel
                {
                public:
                    DescribeClusterInstancesRequest();
                    ~DescribeClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on Offset, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on Offset, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on Offset, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on Offset, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20, maximum value: 100. For more information on Limit, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20, maximum value: 100. For more information on Limit, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20, maximum value: 100. For more information on Limit, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default value: 20, maximum value: 100. For more information on Limit, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter criteria list:
InstanceIds (Instance ID), InstanceType (Instance type: Regular, Native, Virtual, External), VagueIpAddress (Fuzzy matching IP), Labels (k8s node label), NodePoolNames (Node pool name), VagueInstanceName (Fuzzy matching node name), InstanceStates (Node status), Unschedulable (Cordoning status), NodePoolIds (Node pool ID)
                     * @return Filters Filter criteria list:
InstanceIds (Instance ID), InstanceType (Instance type: Regular, Native, Virtual, External), VagueIpAddress (Fuzzy matching IP), Labels (k8s node label), NodePoolNames (Node pool name), VagueInstanceName (Fuzzy matching node name), InstanceStates (Node status), Unschedulable (Cordoning status), NodePoolIds (Node pool ID)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria list:
InstanceIds (Instance ID), InstanceType (Instance type: Regular, Native, Virtual, External), VagueIpAddress (Fuzzy matching IP), Labels (k8s node label), NodePoolNames (Node pool name), VagueInstanceName (Fuzzy matching node name), InstanceStates (Node status), Unschedulable (Cordoning status), NodePoolIds (Node pool ID)
                     * @param _filters Filter criteria list:
InstanceIds (Instance ID), InstanceType (Instance type: Regular, Native, Virtual, External), VagueIpAddress (Fuzzy matching IP), Labels (k8s node label), NodePoolNames (Node pool name), VagueInstanceName (Fuzzy matching node name), InstanceStates (Node status), Unschedulable (Cordoning status), NodePoolIds (Node pool ID)
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting information
                     * @return SortBy Sorting information
                     * 
                     */
                    SortBy GetSortBy() const;

                    /**
                     * 设置Sorting information
                     * @param _sortBy Sorting information
                     * 
                     */
                    void SetSortBy(const SortBy& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on Offset, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20, maximum value: 100. For more information on Limit, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria list:
InstanceIds (Instance ID), InstanceType (Instance type: Regular, Native, Virtual, External), VagueIpAddress (Fuzzy matching IP), Labels (k8s node label), NodePoolNames (Node pool name), VagueInstanceName (Fuzzy matching node name), InstanceStates (Node status), Unschedulable (Cordoning status), NodePoolIds (Node pool ID)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting information
                     */
                    SortBy m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERINSTANCESREQUEST_H_
