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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYREQUEST_H_

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
                * QueryCreditAllocationHistory request structure.
                */
                class QueryCreditAllocationHistoryRequest : public AbstractModel
                {
                public:
                    QueryCreditAllocationHistoryRequest();
                    ~QueryCreditAllocationHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Customer UIN
                     * @return ClientUin Customer UIN
                     * 
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置Customer UIN
                     * @param _clientUin Customer UIN
                     * 
                     */
                    void SetClientUin(const uint64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return Page Page number
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number
                     * @param _page Page number
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of data entries per page
                     * @return PageSize Number of data entries per page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of data entries per page
                     * @param _pageSize Number of data entries per page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Customer UIN
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Page number
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of data entries per page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYREQUEST_H_
