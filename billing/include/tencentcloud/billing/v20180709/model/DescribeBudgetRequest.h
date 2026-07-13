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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREQUEST_H_

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
                * DescribeBudget request structure.
                */
                class DescribeBudgetRequest : public AbstractModel
                {
                public:
                    DescribeBudgetRequest();
                    ~DescribeBudgetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, int
                     * @return PageNo Page number, int
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Page number, int
                     * @param _pageNo Page number, int
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
                     * 获取Number of items per page, integer
                     * @return PageSize Number of items per page, integer
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page, integer
                     * @param _pageSize Number of items per page, integer
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

                    /**
                     * 获取Budget Name
                     * @return BudgetName Budget Name
                     * 
                     */
                    std::string GetBudgetName() const;

                    /**
                     * 设置Budget Name
                     * @param _budgetName Budget Name
                     * 
                     */
                    void SetBudgetName(const std::string& _budgetName);

                    /**
                     * 判断参数 BudgetName 是否已赋值
                     * @return BudgetName 是否已赋值
                     * 
                     */
                    bool BudgetNameHasBeenSet() const;

                    /**
                     * 获取EXPIRED, ACTIVE, ACTIVATED pending activation
                     * @return BudgetStatus EXPIRED, ACTIVE, ACTIVATED pending activation
                     * 
                     */
                    std::string GetBudgetStatus() const;

                    /**
                     * 设置EXPIRED, ACTIVE, ACTIVATED pending activation
                     * @param _budgetStatus EXPIRED, ACTIVE, ACTIVATED pending activation
                     * 
                     */
                    void SetBudgetStatus(const std::string& _budgetStatus);

                    /**
                     * 判断参数 BudgetStatus 是否已赋值
                     * @return BudgetStatus 是否已赋值
                     * 
                     */
                    bool BudgetStatusHasBeenSet() const;

                    /**
                     * 获取DAY day MONTH monthly QUARTER quarter YEAR annual
                     * @return CycleTypes DAY day MONTH monthly QUARTER quarter YEAR annual
                     * 
                     */
                    std::vector<std::string> GetCycleTypes() const;

                    /**
                     * 设置DAY day MONTH monthly QUARTER quarter YEAR annual
                     * @param _cycleTypes DAY day MONTH monthly QUARTER quarter YEAR annual
                     * 
                     */
                    void SetCycleTypes(const std::vector<std::string>& _cycleTypes);

                    /**
                     * 判断参数 CycleTypes 是否已赋值
                     * @return CycleTypes 是否已赋值
                     * 
                     */
                    bool CycleTypesHasBeenSet() const;

                private:

                    /**
                     * Page number, int
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Number of items per page, integer
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Budget project id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * Budget Name
                     */
                    std::string m_budgetName;
                    bool m_budgetNameHasBeenSet;

                    /**
                     * EXPIRED, ACTIVE, ACTIVATED pending activation
                     */
                    std::string m_budgetStatus;
                    bool m_budgetStatusHasBeenSet;

                    /**
                     * DAY day MONTH monthly QUARTER quarter YEAR annual
                     */
                    std::vector<std::string> m_cycleTypes;
                    bool m_cycleTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREQUEST_H_
