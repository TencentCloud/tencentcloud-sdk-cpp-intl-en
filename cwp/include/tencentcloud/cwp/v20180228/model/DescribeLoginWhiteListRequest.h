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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLoginWhiteList request structure.
                */
                class DescribeLoginWhiteListRequest : public AbstractModel
                {
                public:
                    DescribeLoginWhiteListRequest();
                    ~DescribeLoginWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned entries. Maximum value: 100.
                     * @return Limit Number of returned entries. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Maximum value: 100.
                     * @param _limit Number of returned entries. Maximum value: 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Filter criteria
<li>IpOrAlias - String - required: no - keyword for search </li>
<li>UserName - String - required: no - username for filtering </li>
<li>ModifyBeginTime - String - required: no - modification start time for filtering </li>
<li>ModifyEndTime - String - required: no - modification end time for filtering </li>
                     * @return Filters Filter criteria
<li>IpOrAlias - String - required: no - keyword for search </li>
<li>UserName - String - required: no - username for filtering </li>
<li>ModifyBeginTime - String - required: no - modification start time for filtering </li>
<li>ModifyEndTime - String - required: no - modification end time for filtering </li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>IpOrAlias - String - required: no - keyword for search </li>
<li>UserName - String - required: no - username for filtering </li>
<li>ModifyBeginTime - String - required: no - modification start time for filtering </li>
<li>ModifyEndTime - String - required: no - modification end time for filtering </li>
                     * @param _filters Filter criteria
<li>IpOrAlias - String - required: no - keyword for search </li>
<li>UserName - String - required: no - username for filtering </li>
<li>ModifyBeginTime - String - required: no - modification start time for filtering </li>
<li>ModifyEndTime - String - required: no - modification end time for filtering </li>
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
                     * Number of returned entries. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria
<li>IpOrAlias - String - required: no - keyword for search </li>
<li>UserName - String - required: no - username for filtering </li>
<li>ModifyBeginTime - String - required: no - modification start time for filtering </li>
<li>ModifyEndTime - String - required: no - modification end time for filtering </li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINWHITELISTREQUEST_H_
