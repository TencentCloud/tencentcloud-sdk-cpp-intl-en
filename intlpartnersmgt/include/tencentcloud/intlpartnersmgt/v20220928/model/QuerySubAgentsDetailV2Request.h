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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYSUBAGENTSDETAILV2REQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYSUBAGENTSDETAILV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QuerySubAgentsDetailV2 request structure.
                */
                class QuerySubAgentsDetailV2Request : public AbstractModel
                {
                public:
                    QuerySubAgentsDetailV2Request();
                    ~QuerySubAgentsDetailV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number. starts from 1.
                     * @return Page Page number. starts from 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number. starts from 1.
                     * @param _page Page number. starts from 1.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of items per page. supports up to 100.
                     * @return PageSize Number of items per page. supports up to 100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. supports up to 100.
                     * @param _pageSize Number of items per page. supports up to 100.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Filter criteria, support the following filter parameters.
Note: Email, SubAgentUin, and ClientUin only support exact search. other conditions support fuzzy retrieval.The following are the definitions of filtering  items:

Name: specifies second-level reseller name.
SubAgentUin: specifies the uin of the second-level reseller.
Remark: specifies remark.
Mobile: specifies the mobile number.
Email: specifies email address.
ClientUin: specifies the Indirect customer uin.
                     * @return FilterType Filter criteria, support the following filter parameters.
Note: Email, SubAgentUin, and ClientUin only support exact search. other conditions support fuzzy retrieval.The following are the definitions of filtering  items:

Name: specifies second-level reseller name.
SubAgentUin: specifies the uin of the second-level reseller.
Remark: specifies remark.
Mobile: specifies the mobile number.
Email: specifies email address.
ClientUin: specifies the Indirect customer uin.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置Filter criteria, support the following filter parameters.
Note: Email, SubAgentUin, and ClientUin only support exact search. other conditions support fuzzy retrieval.The following are the definitions of filtering  items:

Name: specifies second-level reseller name.
SubAgentUin: specifies the uin of the second-level reseller.
Remark: specifies remark.
Mobile: specifies the mobile number.
Email: specifies email address.
ClientUin: specifies the Indirect customer uin.
                     * @param _filterType Filter criteria, support the following filter parameters.
Note: Email, SubAgentUin, and ClientUin only support exact search. other conditions support fuzzy retrieval.The following are the definitions of filtering  items:

Name: specifies second-level reseller name.
SubAgentUin: specifies the uin of the second-level reseller.
Remark: specifies remark.
Mobile: specifies the mobile number.
Email: specifies email address.
ClientUin: specifies the Indirect customer uin.
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Filter value
                     * @return Filter Filter value
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置Filter value
                     * @param _filter Filter value
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Sorting method. sorts by binding time in ascending or descending order. defaults to descending order if not specified.
Desc: descending order.
acs: ascending.
                     * @return Order Sorting method. sorts by binding time in ascending or descending order. defaults to descending order if not specified.
Desc: descending order.
acs: ascending.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method. sorts by binding time in ascending or descending order. defaults to descending order if not specified.
Desc: descending order.
acs: ascending.
                     * @param _order Sorting method. sorts by binding time in ascending or descending order. defaults to descending order if not specified.
Desc: descending order.
acs: ascending.
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
                     * Page number. starts from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of items per page. supports up to 100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Filter criteria, support the following filter parameters.
Note: Email, SubAgentUin, and ClientUin only support exact search. other conditions support fuzzy retrieval.The following are the definitions of filtering  items:

Name: specifies second-level reseller name.
SubAgentUin: specifies the uin of the second-level reseller.
Remark: specifies remark.
Mobile: specifies the mobile number.
Email: specifies email address.
ClientUin: specifies the Indirect customer uin.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Filter value
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Sorting method. sorts by binding time in ascending or descending order. defaults to descending order if not specified.
Desc: descending order.
acs: ascending.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYSUBAGENTSDETAILV2REQUEST_H_
