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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDLOGLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDLOGLISTREQUEST_H_

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
                * DescribeImageAutoAuthorizedLogList request structure.
                */
                class DescribeImageAutoAuthorizedLogListRequest : public AbstractModel
                {
                public:
                    DescribeImageAutoAuthorizedLogListRequest();
                    ~DescribeImageAutoAuthorizedLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the automatic licensing task
                     * @return TaskId ID of the automatic licensing task
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置ID of the automatic licensing task
                     * @param _taskId ID of the automatic licensing task
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取`Status` (licensing result). Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * @return Filters `Status` (licensing result). Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置`Status` (licensing result). Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     * @param _filters `Status` (licensing result). Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
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
                     * 获取Sorting field: `AuthorizedTime`.
                     * @return By Sorting field: `AuthorizedTime`.
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: `AuthorizedTime`.
                     * @param _by Sorting field: `AuthorizedTime`.
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
                     * ID of the automatic licensing task
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * `Status` (licensing result). Valid values: `SUCCESS` (success); `REACH_LIMIT` (reaching the upper limit on licenses); `LICENSE_INSUFFICIENT` (insufficient licenses).
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

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
                     * Sorting field: `AuthorizedTime`.
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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDLOGLISTREQUEST_H_
