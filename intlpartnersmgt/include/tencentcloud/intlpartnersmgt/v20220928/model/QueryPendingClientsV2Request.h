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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGCLIENTSV2REQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGCLIENTSV2REQUEST_H_

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
                * QueryPendingClientsV2 request structure.
                */
                class QueryPendingClientsV2Request : public AbstractModel
                {
                public:
                    QueryPendingClientsV2Request();
                    ~QueryPendingClientsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, starting from 1.
                     * @return Page Page number, starting from 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number, starting from 1.
                     * @param _page Page number, starting from 1.
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
                     * 获取Quantity. page size [1-100].
                     * @return PageSize Quantity. page size [1-100].
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Quantity. page size [1-100].
                     * @param _pageSize Quantity. page size [1-100].
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
                     * Page number, starting from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Quantity. page size [1-100].
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPENDINGCLIENTSV2REQUEST_H_
