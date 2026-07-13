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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETOPERATIONLOGREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETOPERATIONLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBudgetOperationLog request structure.
                */
                class DescribeBudgetOperationLogRequest : public AbstractModel
                {
                public:
                    DescribeBudgetOperationLogRequest();
                    ~DescribeBudgetOperationLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number
                     * @return PageNo Page number
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Page number
                     * @param _pageNo Page number
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Number of Items per Page
                     * @return PageSize Number of Items per Page
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of Items per Page
                     * @param _pageSize Number of Items per Page
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
                     * 获取Budget project id
                     * @return BudgetId Budget project id
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置Budget project id
                     * @param _budgetId Budget project id
                     * 
                     */
                    void SetBudgetId(const std::string& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                private:

                    /**
                     * Page number
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Number of Items per Page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Budget project id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETOPERATIONLOGREQUEST_H_
