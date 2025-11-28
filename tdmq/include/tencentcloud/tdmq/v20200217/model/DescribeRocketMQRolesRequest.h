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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQROLESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQROLESREQUEST_H_

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
                * DescribeRocketMQRoles request structure.
                */
                class DescribeRocketMQRolesRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQRolesRequest();
                    ~DescribeRocketMQRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting index. Default is 0 if left empty.
                     * @return Offset Starting index. Default is 0 if left empty.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Starting index. Default is 0 if left empty.
                     * @param _offset Starting index. Default is 0 if left empty.
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
                     * 获取Number of returns, default to 10 if not specified, maximum value: 20.
                     * @return Limit Number of returns, default to 10 if not specified, maximum value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returns, default to 10 if not specified, maximum value: 20.
                     * @param _limit Number of returns, default to 10 if not specified, maximum value: 20.
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
                     * 获取Required field, cluster ID
                     * @return ClusterId Required field, cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Required field, cluster ID
                     * @param _clusterId Required field, cluster ID
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
                     * 获取Role name, fuzzy search
                     * @return RoleName Role name, fuzzy search
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name, fuzzy search
                     * @param _roleName Role name, fuzzy search
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
                     * 获取Filters RoleName by role name for precise query. Type: string. Required: no.
                     * @return Filters Filters RoleName by role name for precise query. Type: string. Required: no.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters RoleName by role name for precise query. Type: string. Required: no.
                     * @param _filters Filters RoleName by role name for precise query. Type: string. Required: no.
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
                     * Starting index. Default is 0 if left empty.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns, default to 10 if not specified, maximum value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Required field, cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Role name, fuzzy search
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Filters RoleName by role name for precise query. Type: string. Required: no.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQROLESREQUEST_H_
