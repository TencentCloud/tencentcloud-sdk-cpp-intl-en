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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILREQUEST_H_

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
                * QueryT1IndirectCustomersDetail request structure.
                */
                class QueryT1IndirectCustomersDetailRequest : public AbstractModel
                {
                public:
                    QueryT1IndirectCustomersDetailRequest();
                    ~QueryT1IndirectCustomersDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Second-level reseller UIN.
                     * @return SubAgentUin Second-level reseller UIN.
                     * 
                     */
                    int64_t GetSubAgentUin() const;

                    /**
                     * 设置Second-level reseller UIN.
                     * @param _subAgentUin Second-level reseller UIN.
                     * 
                     */
                    void SetSubAgentUin(const int64_t& _subAgentUin);

                    /**
                     * 判断参数 SubAgentUin 是否已赋值
                     * @return SubAgentUin 是否已赋值
                     * 
                     */
                    bool SubAgentUinHasBeenSet() const;

                    /**
                     * 获取Pagination parameter: current page number. it starts from 1.
                     * @return Page Pagination parameter: current page number. it starts from 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Pagination parameter: current page number. it starts from 1.
                     * @param _page Pagination parameter: current page number. it starts from 1.
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
                     * 获取Pagination parameter, indicates the number of entries per page. supports [1, 100] data entries per request.
                     * @return PageSize Pagination parameter, indicates the number of entries per page. supports [1, 100] data entries per request.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination parameter, indicates the number of entries per page. supports [1, 100] data entries per request.
                     * @param _pageSize Pagination parameter, indicates the number of entries per page. supports [1, 100] data entries per request.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Second-level reseller UIN.
                     */
                    int64_t m_subAgentUin;
                    bool m_subAgentUinHasBeenSet;

                    /**
                     * Pagination parameter: current page number. it starts from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Pagination parameter, indicates the number of entries per page. supports [1, 100] data entries per request.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILREQUEST_H_
