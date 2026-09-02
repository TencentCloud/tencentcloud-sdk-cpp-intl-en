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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECOMBINEDLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECOMBINEDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeLoginWhiteCombinedList request structure.
                */
                class DescribeLoginWhiteCombinedListRequest : public AbstractModel
                {
                public:
                    DescribeLoginWhiteCombinedListRequest();
                    ~DescribeLoginWhiteCombinedListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * @return Limit <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * @param _limit <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Filter criteria. IpOrAlias - String - Required: No - host ip or alias filter. UserName - String - Required: No - UserName filter. SrcIP - String - Required: No - source ip filtering. Location - String - Required: No - login Location filter. ModifyBeginTime - String - Required: No - filter by modification time range, start time. ModifyEndTime - String - Required: No - filter by modification time range, end time.</p>
                     * @return Filters <p>Filter criteria. IpOrAlias - String - Required: No - host ip or alias filter. UserName - String - Required: No - UserName filter. SrcIP - String - Required: No - source ip filtering. Location - String - Required: No - login Location filter. ModifyBeginTime - String - Required: No - filter by modification time range, start time. ModifyEndTime - String - Required: No - filter by modification time range, end time.</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. IpOrAlias - String - Required: No - host ip or alias filter. UserName - String - Required: No - UserName filter. SrcIP - String - Required: No - source ip filtering. Location - String - Required: No - login Location filter. ModifyBeginTime - String - Required: No - filter by modification time range, start time. ModifyEndTime - String - Required: No - filter by modification time range, end time.</p>
                     * @param _filters <p>Filter criteria. IpOrAlias - String - Required: No - host ip or alias filter. UserName - String - Required: No - UserName filter. SrcIP - String - Required: No - source ip filtering. Location - String - Required: No - login Location filter. ModifyBeginTime - String - Required: No - filter by modification time range, start time. ModifyEndTime - String - Required: No - filter by modification time range, end time.</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Filter criteria. IpOrAlias - String - Required: No - host ip or alias filter. UserName - String - Required: No - UserName filter. SrcIP - String - Required: No - source ip filtering. Location - String - Required: No - login Location filter. ModifyBeginTime - String - Required: No - filter by modification time range, start time. ModifyEndTime - String - Required: No - filter by modification time range, end time.</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECOMBINEDLISTREQUEST_H_
