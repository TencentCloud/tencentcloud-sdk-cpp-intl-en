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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPLISTREQUEST_H_

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
                * DescribeTargetGroupList request structure.
                */
                class DescribeTargetGroupListRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupListRequest();
                    ~DescribeTargetGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Target group ID array.</p>
                     * @return TargetGroupIds <p>Target group ID array.</p>
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置<p>Target group ID array.</p>
                     * @param _targetGroupIds <p>Target group ID array.</p>
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
                     * 获取<p>Filter condition array. Support TargetGroupVpcId and TargetGroupName. Mutually exclusive with TargetGroupIds. Prioritize target group ID.</p>
                     * @return Filters <p>Filter condition array. Support TargetGroupVpcId and TargetGroupName. Mutually exclusive with TargetGroupIds. Prioritize target group ID.</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter condition array. Support TargetGroupVpcId and TargetGroupName. Mutually exclusive with TargetGroupIds. Prioritize target group ID.</p>
                     * @param _filters <p>Filter condition array. Support TargetGroupVpcId and TargetGroupName. Mutually exclusive with TargetGroupIds. Prioritize target group ID.</p>
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
                     * 获取<p>Starting display offset.</p>
                     * @return Offset <p>Starting display offset.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Starting display offset.</p>
                     * @param _offset <p>Starting display offset.</p>
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
                     * 获取<p>Number of entries displayed per page.</p><p>Value ranges from 0 to 100.</p><p>The default value is 20.</p>
                     * @return Limit <p>Number of entries displayed per page.</p><p>Value ranges from 0 to 100.</p><p>The default value is 20.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of entries displayed per page.</p><p>Value ranges from 0 to 100.</p><p>The default value is 20.</p>
                     * @param _limit <p>Number of entries displayed per page.</p><p>Value ranges from 0 to 100.</p><p>The default value is 20.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Target group ID array.</p>
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                    /**
                     * <p>Filter condition array. Support TargetGroupVpcId and TargetGroupName. Mutually exclusive with TargetGroupIds. Prioritize target group ID.</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Starting display offset.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of entries displayed per page.</p><p>Value ranges from 0 to 100.</p><p>The default value is 20.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPLISTREQUEST_H_
