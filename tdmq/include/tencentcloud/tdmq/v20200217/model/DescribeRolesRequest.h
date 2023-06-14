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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROLESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROLESREQUEST_H_

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
                * DescribeRoles request structure.
                */
                class DescribeRolesRequest : public AbstractModel
                {
                public:
                    DescribeRolesRequest();
                    ~DescribeRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Fuzzy query by role name
                     * @return RoleName Fuzzy query by role name
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Fuzzy query by role name
                     * @param _roleName Fuzzy query by role name
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Offset. If this parameter is left empty, 0 will be used by default.
                     * @return Offset Offset. If this parameter is left empty, 0 will be used by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. If this parameter is left empty, 0 will be used by default.
                     * @param _offset Offset. If this parameter is left empty, 0 will be used by default.
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
                     * 获取Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * @return Limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * @param _limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
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
                     * 获取Cluster ID (required)
                     * @return ClusterId Cluster ID (required)
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID (required)
                     * @param _clusterId Cluster ID (required)
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
                     * 获取* RoleName
Filter by role name for exact query.
Type: String
Required: no
                     * @return Filters * RoleName
Filter by role name for exact query.
Type: String
Required: no
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* RoleName
Filter by role name for exact query.
Type: String
Required: no
                     * @param _filters * RoleName
Filter by role name for exact query.
Type: String
Required: no
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
                     * Fuzzy query by role name
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Cluster ID (required)
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * * RoleName
Filter by role name for exact query.
Type: String
Required: no
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROLESREQUEST_H_
