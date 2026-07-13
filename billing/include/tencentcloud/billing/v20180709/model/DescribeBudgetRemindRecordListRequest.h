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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREMINDRECORDLISTREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREMINDRECORDLISTREQUEST_H_

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
                * DescribeBudgetRemindRecordList request structure.
                */
                class DescribeBudgetRemindRecordListRequest : public AbstractModel
                {
                public:
                    DescribeBudgetRemindRecordListRequest();
                    ~DescribeBudgetRemindRecordListRequest() = default;
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
                     * 获取Budget base information association id
                     * @return BudgetId Budget base information association id
                     * 
                     */
                    std::string GetBudgetId() const;

                    /**
                     * 设置Budget base information association id
                     * @param _budgetId Budget base information association id
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
                     * Budget base information association id
                     */
                    std::string m_budgetId;
                    bool m_budgetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBUDGETREMINDRECORDLISTREQUEST_H_
