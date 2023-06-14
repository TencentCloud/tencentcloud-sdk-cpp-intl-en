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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusters request structure.
                */
                class DescribeClustersRequest : public AbstractModel
                {
                public:
                    DescribeClustersRequest();
                    ~DescribeClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID list (When it is empty,
all clusters under the account will be obtained)
                     * @return ClusterIds Cluster ID list (When it is empty,
all clusters under the account will be obtained)
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置Cluster ID list (When it is empty,
all clusters under the account will be obtained)
                     * @param _clusterIds Cluster ID list (When it is empty,
all clusters under the account will be obtained)
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
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
                     * 获取Maximum number of output entries. Default value: 20
                     * @return Limit Maximum number of output entries. Default value: 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: 20
                     * @param _limit Maximum number of output entries. Default value: 20
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
                     * 获取·  ClusterName
    Filters by the cluster name
    Type: String
    Required: No

·  ClusterType
    Filters by the cluster type
    Type: String
    Required: No

·  ClusterStatus
    Filters by the cluster status
    Type: String
    Required: No

·  Tags
    Filters by key-value pairs of tags
    Type: String
    Required: No

·  vpc-id
    Filters by the VPC ID
    Type: String
    Required: No

·  tag-key
    Filters by the tag key
    Type: String
    Required: No

·  tag-value
    Filters by the tag value
    Type: String
    Required: No

·  tag:tag-key
    Filters by key-value pairs of tags
    Type: String
    Required: No
                     * @return Filters ·  ClusterName
    Filters by the cluster name
    Type: String
    Required: No

·  ClusterType
    Filters by the cluster type
    Type: String
    Required: No

·  ClusterStatus
    Filters by the cluster status
    Type: String
    Required: No

·  Tags
    Filters by key-value pairs of tags
    Type: String
    Required: No

·  vpc-id
    Filters by the VPC ID
    Type: String
    Required: No

·  tag-key
    Filters by the tag key
    Type: String
    Required: No

·  tag-value
    Filters by the tag value
    Type: String
    Required: No

·  tag:tag-key
    Filters by key-value pairs of tags
    Type: String
    Required: No
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置·  ClusterName
    Filters by the cluster name
    Type: String
    Required: No

·  ClusterType
    Filters by the cluster type
    Type: String
    Required: No

·  ClusterStatus
    Filters by the cluster status
    Type: String
    Required: No

·  Tags
    Filters by key-value pairs of tags
    Type: String
    Required: No

·  vpc-id
    Filters by the VPC ID
    Type: String
    Required: No

·  tag-key
    Filters by the tag key
    Type: String
    Required: No

·  tag-value
    Filters by the tag value
    Type: String
    Required: No

·  tag:tag-key
    Filters by key-value pairs of tags
    Type: String
    Required: No
                     * @param _filters ·  ClusterName
    Filters by the cluster name
    Type: String
    Required: No

·  ClusterType
    Filters by the cluster type
    Type: String
    Required: No

·  ClusterStatus
    Filters by the cluster status
    Type: String
    Required: No

·  Tags
    Filters by key-value pairs of tags
    Type: String
    Required: No

·  vpc-id
    Filters by the VPC ID
    Type: String
    Required: No

·  tag-key
    Filters by the tag key
    Type: String
    Required: No

·  tag-value
    Filters by the tag value
    Type: String
    Required: No

·  tag:tag-key
    Filters by key-value pairs of tags
    Type: String
    Required: No
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
                     * 获取Cluster type, such as `MANAGED_CLUSTER`
                     * @return ClusterType Cluster type, such as `MANAGED_CLUSTER`
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type, such as `MANAGED_CLUSTER`
                     * @param _clusterType Cluster type, such as `MANAGED_CLUSTER`
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID list (When it is empty,
all clusters under the account will be obtained)
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ·  ClusterName
    Filters by the cluster name
    Type: String
    Required: No

·  ClusterType
    Filters by the cluster type
    Type: String
    Required: No

·  ClusterStatus
    Filters by the cluster status
    Type: String
    Required: No

·  Tags
    Filters by key-value pairs of tags
    Type: String
    Required: No

·  vpc-id
    Filters by the VPC ID
    Type: String
    Required: No

·  tag-key
    Filters by the tag key
    Type: String
    Required: No

·  tag-value
    Filters by the tag value
    Type: String
    Required: No

·  tag:tag-key
    Filters by key-value pairs of tags
    Type: String
    Required: No
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Cluster type, such as `MANAGED_CLUSTER`
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSREQUEST_H_
