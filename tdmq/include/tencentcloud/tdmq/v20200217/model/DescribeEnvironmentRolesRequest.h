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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTROLESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTROLESREQUEST_H_

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
                * DescribeEnvironmentRoles request structure.
                */
                class DescribeEnvironmentRolesRequest : public AbstractModel
                {
                public:
                    DescribeEnvironmentRolesRequest();
                    ~DescribeEnvironmentRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment/namespace name (required).
                     * @return EnvironmentId Environment/namespace name (required).
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment/namespace name (required).
                     * @param EnvironmentId Environment/namespace name (required).
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Offset, which defaults to 0 if left empty.
                     * @return Offset Offset, which defaults to 0 if left empty.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0 if left empty.
                     * @param Offset Offset, which defaults to 0 if left empty.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @return Limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     * @param Limit The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID (required).
                     * @return ClusterId Pulsar cluster ID (required).
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID (required).
                     * @param ClusterId Pulsar cluster ID (required).
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Role name.
                     * @return RoleName Role name.
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name.
                     * @param RoleName Role name.
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取* RoleName
Filter by role name for exact query.
Type: String
Required: No
                     * @return Filters * RoleName
Filter by role name for exact query.
Type: String
Required: No
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* RoleName
Filter by role name for exact query.
Type: String
Required: No
                     * @param Filters * RoleName
Filter by role name for exact query.
Type: String
Required: No
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Environment/namespace name (required).
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Offset, which defaults to 0 if left empty.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of results to be returned, which defaults to 10 if left empty. The maximum value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pulsar cluster ID (required).
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Role name.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * * RoleName
Filter by role name for exact query.
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

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTROLESREQUEST_H_
