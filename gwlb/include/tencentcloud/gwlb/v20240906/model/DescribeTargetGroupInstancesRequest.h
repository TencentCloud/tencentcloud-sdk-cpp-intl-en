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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPINSTANCESREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/Filter.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeTargetGroupInstances request structure.
                */
                class DescribeTargetGroupInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupInstancesRequest();
                    ~DescribeTargetGroupInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria. Currently, only filtering by TargetGroupId, BindIP, or InstanceId is supported.
                     * @return Filters Filter criteria. Currently, only filtering by TargetGroupId, BindIP, or InstanceId is supported.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Currently, only filtering by TargetGroupId, BindIP, or InstanceId is supported.
                     * @param _filters Filter criteria. Currently, only filtering by TargetGroupId, BindIP, or InstanceId is supported.
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
                     * 获取Number of displayed results. Default value: 20.
                     * @return Limit Number of displayed results. Default value: 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of displayed results. Default value: 20.
                     * @param _limit Number of displayed results. Default value: 20.
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
                     * 获取Displayed offset. Default value: 0.
                     * @return Offset Displayed offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Displayed offset. Default value: 0.
                     * @param _offset Displayed offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Filter criteria. Currently, only filtering by TargetGroupId, BindIP, or InstanceId is supported.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of displayed results. Default value: 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Displayed offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPINSTANCESREQUEST_H_
