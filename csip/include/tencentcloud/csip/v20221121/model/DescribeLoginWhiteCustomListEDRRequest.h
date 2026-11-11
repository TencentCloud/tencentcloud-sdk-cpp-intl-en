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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECUSTOMLISTEDRREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECUSTOMLISTEDRREQUEST_H_

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
                * DescribeLoginWhiteCustomListEDR request structure.
                */
                class DescribeLoginWhiteCustomListEDRRequest : public AbstractModel
                {
                public:
                    DescribeLoginWhiteCustomListEDRRequest();
                    ~DescribeLoginWhiteCustomListEDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
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
                     * 获取<p>Filter condition array (multiple Filters have an AND relationship). Supports Name: Keyword (SrcIp/UserName/Locations/Remark blurry), SrcIp, UserName, Location, Remark, ModifyBeginTime, ModifyEndTime (time format 2006-01-02 15:04:05); unknown Name is ignored with no error reported</p>
                     * @return Filters <p>Filter condition array (multiple Filters have an AND relationship). Supports Name: Keyword (SrcIp/UserName/Locations/Remark blurry), SrcIp, UserName, Location, Remark, ModifyBeginTime, ModifyEndTime (time format 2006-01-02 15:04:05); unknown Name is ignored with no error reported</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter condition array (multiple Filters have an AND relationship). Supports Name: Keyword (SrcIp/UserName/Locations/Remark blurry), SrcIp, UserName, Location, Remark, ModifyBeginTime, ModifyEndTime (time format 2006-01-02 15:04:05); unknown Name is ignored with no error reported</p>
                     * @param _filters <p>Filter condition array (multiple Filters have an AND relationship). Supports Name: Keyword (SrcIp/UserName/Locations/Remark blurry), SrcIp, UserName, Location, Remark, ModifyBeginTime, ModifyEndTime (time format 2006-01-02 15:04:05); unknown Name is ignored with no error reported</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Page size. Default: 10. Upper limit: 100. If 0 or more than 100 is passed, the default or upper limit is used.</p>
                     * @return Limit <p>Page size. Default: 10. Upper limit: 100. If 0 or more than 100 is passed, the default or upper limit is used.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Page size. Default: 10. Upper limit: 100. If 0 or more than 100 is passed, the default or upper limit is used.</p>
                     * @param _limit <p>Page size. Default: 10. Upper limit: 100. If 0 or more than 100 is passed, the default or upper limit is used.</p>
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
                     * 获取<p>Pagination offset. Default value: 0.</p>
                     * @return Offset <p>Pagination offset. Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset. Default value: 0.</p>
                     * @param _offset <p>Pagination offset. Default value: 0.</p>
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
                     * 获取<p>Sorting order: ASC - ascending, DESC - descending (not case-sensitive). Default: DESC</p>
                     * @return Order <p>Sorting order: ASC - ascending, DESC - descending (not case-sensitive). Default: DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order: ASC - ascending, DESC - descending (not case-sensitive). Default: DESC</p>
                     * @param _order <p>Sorting order: ASC - ascending, DESC - descending (not case-sensitive). Default: DESC</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field: CreateTime-creation time, ModifyTime-last modified. Default: ModifyTime. If an illegal value is passed, InvalidParameter is returned.</p>
                     * @return By <p>Sorting field: CreateTime-creation time, ModifyTime-last modified. Default: ModifyTime. If an illegal value is passed, InvalidParameter is returned.</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field: CreateTime-creation time, ModifyTime-last modified. Default: ModifyTime. If an illegal value is passed, InvalidParameter is returned.</p>
                     * @param _by <p>Sorting field: CreateTime-creation time, ModifyTime-last modified. Default: ModifyTime. If an illegal value is passed, InvalidParameter is returned.</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter condition array (multiple Filters have an AND relationship). Supports Name: Keyword (SrcIp/UserName/Locations/Remark blurry), SrcIp, UserName, Location, Remark, ModifyBeginTime, ModifyEndTime (time format 2006-01-02 15:04:05); unknown Name is ignored with no error reported</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Page size. Default: 10. Upper limit: 100. If 0 or more than 100 is passed, the default or upper limit is used.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset. Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting order: ASC - ascending, DESC - descending (not case-sensitive). Default: DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field: CreateTime-creation time, ModifyTime-last modified. Default: ModifyTime. If an illegal value is passed, InvalidParameter is returned.</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECUSTOMLISTEDRREQUEST_H_
