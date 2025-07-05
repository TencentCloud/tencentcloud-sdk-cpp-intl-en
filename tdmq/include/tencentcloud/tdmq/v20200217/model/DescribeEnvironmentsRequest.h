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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeEnvironments request structure.
                */
                class DescribeEnvironmentsRequest : public AbstractModel
                {
                public:
                    DescribeEnvironmentsRequest();
                    ~DescribeEnvironmentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Fuzzy search by namespace name.
                     * @return EnvironmentId Fuzzy search by namespace name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Fuzzy search by namespace name.
                     * @param _environmentId Fuzzy search by namespace name.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Offset, which defaults to 0 if left empty.
                     * @return Offset Offset, which defaults to 0 if left empty.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0 if left empty.
                     * @param _offset Offset, which defaults to 0 if left empty.
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
                     * 获取The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @return Limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @param _limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
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
                     * 获取Pulsar cluster ID
                     * @return ClusterId Pulsar cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID
                     * @param _clusterId Pulsar cluster ID
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
                     * 获取* EnvironmentId
Filter by namespace for exact query.
Type: String
Required: No
                     * @return Filters * EnvironmentId
Filter by namespace for exact query.
Type: String
Required: No
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* EnvironmentId
Filter by namespace for exact query.
Type: String
Required: No
                     * @param _filters * EnvironmentId
Filter by namespace for exact query.
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

                private:

                    /**
                     * Fuzzy search by namespace name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Offset, which defaults to 0 if left empty.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pulsar cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * * EnvironmentId
Filter by namespace for exact query.
Type: String
Required: No
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTSREQUEST_H_
