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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetContainerList request structure.
                */
                class DescribeAssetContainerListRequest : public AbstractModel
                {
                public:
                    DescribeAssetContainerListRequest();
                    ~DescribeAssetContainerListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param _limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Filter condition
<li>`ContainerName`: String - Required: No - Container name</li>
<li>`Status` - String - Required: No - Container status. Values: `0` (created); `1` (running); `2` (paused); `3` (restarting); `4` (removing); `5` (exited); `6` (dead).</li>
<li>`Runas`: String - Required: No - Operator</li>
<li>`ImageName`: String - Required: No - Image name</li>
<li>`HostIP`: String - Required: No - Server IP</li>
<li>`OrderBy` - String - Required: No - Sorting field, which supports dynamic sorting by `cpu_usage` or `mem_usage` such as ["cpu_usage","+"]. '+' indicates ascending, and '-' indicates descending.</li>
<li>`NetStatus`: String - Required: No - Container network status. Values: `normal`, `isolated`, `isolating`, `isolate_failed`, `restoring`, `restore_failed`.</li>
<li>`PodID`: String - Required: No- Pod ID </li>
<li>`NodeUniqueID`: String - Required: No - Super Node</li>
<li>`PodUid`: String - Required: No - Pod</li>
<li>`PodIP`: String - Required: No - Pod IP</li>
<li>`NodeType`: String - Required: No - Values: `NORMAL` (general nodes), `SUPER` (super nodes)</li>
                     * @return Filters Filter condition
<li>`ContainerName`: String - Required: No - Container name</li>
<li>`Status` - String - Required: No - Container status. Values: `0` (created); `1` (running); `2` (paused); `3` (restarting); `4` (removing); `5` (exited); `6` (dead).</li>
<li>`Runas`: String - Required: No - Operator</li>
<li>`ImageName`: String - Required: No - Image name</li>
<li>`HostIP`: String - Required: No - Server IP</li>
<li>`OrderBy` - String - Required: No - Sorting field, which supports dynamic sorting by `cpu_usage` or `mem_usage` such as ["cpu_usage","+"]. '+' indicates ascending, and '-' indicates descending.</li>
<li>`NetStatus`: String - Required: No - Container network status. Values: `normal`, `isolated`, `isolating`, `isolate_failed`, `restoring`, `restore_failed`.</li>
<li>`PodID`: String - Required: No- Pod ID </li>
<li>`NodeUniqueID`: String - Required: No - Super Node</li>
<li>`PodUid`: String - Required: No - Pod</li>
<li>`PodIP`: String - Required: No - Pod IP</li>
<li>`NodeType`: String - Required: No - Values: `NORMAL` (general nodes), `SUPER` (super nodes)</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter condition
<li>`ContainerName`: String - Required: No - Container name</li>
<li>`Status` - String - Required: No - Container status. Values: `0` (created); `1` (running); `2` (paused); `3` (restarting); `4` (removing); `5` (exited); `6` (dead).</li>
<li>`Runas`: String - Required: No - Operator</li>
<li>`ImageName`: String - Required: No - Image name</li>
<li>`HostIP`: String - Required: No - Server IP</li>
<li>`OrderBy` - String - Required: No - Sorting field, which supports dynamic sorting by `cpu_usage` or `mem_usage` such as ["cpu_usage","+"]. '+' indicates ascending, and '-' indicates descending.</li>
<li>`NetStatus`: String - Required: No - Container network status. Values: `normal`, `isolated`, `isolating`, `isolate_failed`, `restoring`, `restore_failed`.</li>
<li>`PodID`: String - Required: No- Pod ID </li>
<li>`NodeUniqueID`: String - Required: No - Super Node</li>
<li>`PodUid`: String - Required: No - Pod</li>
<li>`PodIP`: String - Required: No - Pod IP</li>
<li>`NodeType`: String - Required: No - Values: `NORMAL` (general nodes), `SUPER` (super nodes)</li>
                     * @param _filters Filter condition
<li>`ContainerName`: String - Required: No - Container name</li>
<li>`Status` - String - Required: No - Container status. Values: `0` (created); `1` (running); `2` (paused); `3` (restarting); `4` (removing); `5` (exited); `6` (dead).</li>
<li>`Runas`: String - Required: No - Operator</li>
<li>`ImageName`: String - Required: No - Image name</li>
<li>`HostIP`: String - Required: No - Server IP</li>
<li>`OrderBy` - String - Required: No - Sorting field, which supports dynamic sorting by `cpu_usage` or `mem_usage` such as ["cpu_usage","+"]. '+' indicates ascending, and '-' indicates descending.</li>
<li>`NetStatus`: String - Required: No - Container network status. Values: `normal`, `isolated`, `isolating`, `isolate_failed`, `restoring`, `restore_failed`.</li>
<li>`PodID`: String - Required: No- Pod ID </li>
<li>`NodeUniqueID`: String - Required: No - Super Node</li>
<li>`PodUid`: String - Required: No - Pod</li>
<li>`PodIP`: String - Required: No - Pod IP</li>
<li>`NodeType`: String - Required: No - Values: `NORMAL` (general nodes), `SUPER` (super nodes)</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc`, `desc`.
                     * @return Order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `asc`, `desc`.
                     * @param _order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter condition
<li>`ContainerName`: String - Required: No - Container name</li>
<li>`Status` - String - Required: No - Container status. Values: `0` (created); `1` (running); `2` (paused); `3` (restarting); `4` (removing); `5` (exited); `6` (dead).</li>
<li>`Runas`: String - Required: No - Operator</li>
<li>`ImageName`: String - Required: No - Image name</li>
<li>`HostIP`: String - Required: No - Server IP</li>
<li>`OrderBy` - String - Required: No - Sorting field, which supports dynamic sorting by `cpu_usage` or `mem_usage` such as ["cpu_usage","+"]. '+' indicates ascending, and '-' indicates descending.</li>
<li>`NetStatus`: String - Required: No - Container network status. Values: `normal`, `isolated`, `isolating`, `isolate_failed`, `restoring`, `restore_failed`.</li>
<li>`PodID`: String - Required: No- Pod ID </li>
<li>`NodeUniqueID`: String - Required: No - Super Node</li>
<li>`PodUid`: String - Required: No - Pod</li>
<li>`PodIP`: String - Required: No - Pod IP</li>
<li>`NodeType`: String - Required: No - Values: `NORMAL` (general nodes), `SUPER` (super nodes)</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc`, `desc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETCONTAINERLISTREQUEST_H_
