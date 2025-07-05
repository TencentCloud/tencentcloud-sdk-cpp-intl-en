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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTargetGroups request structure.
                */
                class DescribeTargetGroupsRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupsRequest();
                    ~DescribeTargetGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Target group ID, which is exclusive of `Filters`.
                     * @return TargetGroupIds Target group ID, which is exclusive of `Filters`.
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置Target group ID, which is exclusive of `Filters`.
                     * @param _targetGroupIds Target group ID, which is exclusive of `Filters`.
                     * 
                     */
                    void SetTargetGroupIds(const std::vector<std::string>& _targetGroupIds);

                    /**
                     * 判断参数 TargetGroupIds 是否已赋值
                     * @return TargetGroupIds 是否已赋值
                     * 
                     */
                    bool TargetGroupIdsHasBeenSet() const;

                    /**
                     * 获取Limit of the number of displayed results. Default value: 20.
                     * @return Limit Limit of the number of displayed results. Default value: 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit of the number of displayed results. Default value: 20.
                     * @param _limit Limit of the number of displayed results. Default value: 20.
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
                     * 获取Starting display offset
                     * @return Offset Starting display offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting display offset
                     * @param _offset Starting display offset
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
                     * 获取Filter array, which is exclusive of `TargetGroupIds`. Valid values: `TargetGroupVpcId` and `TargetGroupName`.
                     * @return Filters Filter array, which is exclusive of `TargetGroupIds`. Valid values: `TargetGroupVpcId` and `TargetGroupName`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter array, which is exclusive of `TargetGroupIds`. Valid values: `TargetGroupVpcId` and `TargetGroupName`.
                     * @param _filters Filter array, which is exclusive of `TargetGroupIds`. Valid values: `TargetGroupVpcId` and `TargetGroupName`.
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
                     * Target group ID, which is exclusive of `Filters`.
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                    /**
                     * Limit of the number of displayed results. Default value: 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting display offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter array, which is exclusive of `TargetGroupIds`. Valid values: `TargetGroupVpcId` and `TargetGroupName`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPSREQUEST_H_
