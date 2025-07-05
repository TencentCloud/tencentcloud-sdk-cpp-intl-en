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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeProjects request structure.
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items per page (integer)
                     * @return Limit Number of items per page (integer)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page (integer)
                     * @param _limit Number of items per page (integer)
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
                     * 获取Page number (integer)
                     * @return Offset Page number (integer)
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number (integer)
                     * @param _offset Page number (integer)
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
                     * 获取Filter parameter. Pass in {"Name": "IsDemo", "Values":["1"]} for the demo mode.
                     * @return Filters Filter parameter. Pass in {"Name": "IsDemo", "Values":["1"]} for the demo mode.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter parameter. Pass in {"Name": "IsDemo", "Values":["1"]} for the demo mode.
                     * @param _filters Filter parameter. Pass in {"Name": "IsDemo", "Values":["1"]} for the demo mode.
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
                     * 获取This parameter has been disused. You need to indicate whether the demo mode is used in `Filters`.
                     * @return IsDemo This parameter has been disused. You need to indicate whether the demo mode is used in `Filters`.
                     * 
                     */
                    int64_t GetIsDemo() const;

                    /**
                     * 设置This parameter has been disused. You need to indicate whether the demo mode is used in `Filters`.
                     * @param _isDemo This parameter has been disused. You need to indicate whether the demo mode is used in `Filters`.
                     * 
                     */
                    void SetIsDemo(const int64_t& _isDemo);

                    /**
                     * 判断参数 IsDemo 是否已赋值
                     * @return IsDemo 是否已赋值
                     * 
                     */
                    bool IsDemoHasBeenSet() const;

                private:

                    /**
                     * Number of items per page (integer)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number (integer)
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter parameter. Pass in {"Name": "IsDemo", "Values":["1"]} for the demo mode.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * This parameter has been disused. You need to indicate whether the demo mode is used in `Filters`.
                     */
                    int64_t m_isDemo;
                    bool m_isDemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSREQUEST_H_
