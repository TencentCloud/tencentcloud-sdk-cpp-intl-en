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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEQUERYANALYSERESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEQUERYANALYSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/QueryDetails.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeQueryAnalyse response structure.
                */
                class DescribeQueryAnalyseResponse : public AbstractModel
                {
                public:
                    DescribeQueryAnalyseResponse();
                    ~DescribeQueryAnalyseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Query details
                     * @return QueryDetails Query details
                     * 
                     */
                    std::vector<QueryDetails> GetQueryDetails() const;

                    /**
                     * 判断参数 QueryDetails 是否已赋值
                     * @return QueryDetails 是否已赋值
                     * 
                     */
                    bool QueryDetailsHasBeenSet() const;

                    /**
                     * 获取Total number of records
                     * @return TotalCount Total number of records
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Current page
                     * @return CurrentPage Current page
                     * 
                     */
                    uint64_t GetCurrentPage() const;

                    /**
                     * 判断参数 CurrentPage 是否已赋值
                     * @return CurrentPage 是否已赋值
                     * 
                     */
                    bool CurrentPageHasBeenSet() const;

                    /**
                     * 获取Number of records per page
                     * @return PageSize Number of records per page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Total pages
                     * @return TotalPages Total pages
                     * 
                     */
                    uint64_t GetTotalPages() const;

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return Message Error message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Query details
                     */
                    std::vector<QueryDetails> m_queryDetails;
                    bool m_queryDetailsHasBeenSet;

                    /**
                     * Total number of records
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Current page
                     */
                    uint64_t m_currentPage;
                    bool m_currentPageHasBeenSet;

                    /**
                     * Number of records per page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total pages
                     */
                    uint64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEQUERYANALYSERESPONSE_H_
