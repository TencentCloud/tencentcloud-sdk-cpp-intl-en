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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulScanTaskDetail request structure.
                */
                class DescribeVulScanTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeVulScanTaskDetailRequest();
                    ~DescribeVulScanTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>Filter criteria, support the following Name:</p><li>InstanceId - Asset Instance ID, exact match</li><li>InstanceName - Asset instance name, fuzzy matching (exact matching when ExactMatch=1)</li><li>Ip - Asset IP, exact match</li><li>Status - Scan status, exact match</li>
                     * @return Filters <p>Filter criteria, support the following Name:</p><li>InstanceId - Asset Instance ID, exact match</li><li>InstanceName - Asset instance name, fuzzy matching (exact matching when ExactMatch=1)</li><li>Ip - Asset IP, exact match</li><li>Status - Scan status, exact match</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria, support the following Name:</p><li>InstanceId - Asset Instance ID, exact match</li><li>InstanceName - Asset instance name, fuzzy matching (exact matching when ExactMatch=1)</li><li>Ip - Asset IP, exact match</li><li>Status - Scan status, exact match</li>
                     * @param _filters <p>Filter criteria, support the following Name:</p><li>InstanceId - Asset Instance ID, exact match</li><li>InstanceName - Asset instance name, fuzzy matching (exact matching when ExactMatch=1)</li><li>Ip - Asset IP, exact match</li><li>Status - Scan status, exact match</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Page size. Default: 10. Maximum: 100</p>
                     * @return Limit <p>Page size. Default: 10. Maximum: 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Page size. Default: 10. Maximum: 100</p>
                     * @param _limit <p>Page size. Default: 10. Maximum: 100</p>
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
                     * 获取<p>Pagination offset, starting from 0</p>
                     * @return Offset <p>Pagination offset, starting from 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset, starting from 0</p>
                     * @param _offset <p>Pagination offset, starting from 0</p>
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
                     * 获取<p>Sorting order: asc (ascending)/ desc (descending). Default is desc.</p>
                     * @return Order <p>Sorting order: asc (ascending)/ desc (descending). Default is desc.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order: asc (ascending)/ desc (descending). Default is desc.</p>
                     * @param _order <p>Sorting order: asc (ascending)/ desc (descending). Default is desc.</p>
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
                     * 获取<p>Sorting field, default sorting order is creation time (CreateTime)</p>
                     * @return By <p>Sorting field, default sorting order is creation time (CreateTime)</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field, default sorting order is creation time (CreateTime)</p>
                     * @param _by <p>Sorting field, default sorting order is creation time (CreateTime)</p>
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
                     * <p>Task ID.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Filter criteria, support the following Name:</p><li>InstanceId - Asset Instance ID, exact match</li><li>InstanceName - Asset instance name, fuzzy matching (exact matching when ExactMatch=1)</li><li>Ip - Asset IP, exact match</li><li>Status - Scan status, exact match</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Page size. Default: 10. Maximum: 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset, starting from 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting order: asc (ascending)/ desc (descending). Default is desc.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sorting field, default sorting order is creation time (CreateTime)</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULSCANTASKDETAILREQUEST_H_
