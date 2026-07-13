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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDLIST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/OrderDto.h>
#include <tencentcloud/billing/v20180709/model/BudgetRemindRecords.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Paginated data of budget management
                */
                class BudgetRemindRecordList : public AbstractModel
                {
                public:
                    BudgetRemindRecordList();
                    ~BudgetRemindRecordList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Optimize COUNT SQL automatically if encounter unresolved jSqlParser case, set the parameter to false
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OptimizeCountSql Optimize COUNT SQL automatically if encounter unresolved jSqlParser case, set the parameter to false
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetOptimizeCountSql() const;

                    /**
                     * 设置Optimize COUNT SQL automatically if encounter unresolved jSqlParser case, set the parameter to false
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _optimizeCountSql Optimize COUNT SQL automatically if encounter unresolved jSqlParser case, set the parameter to false
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOptimizeCountSql(const bool& _optimizeCountSql);

                    /**
                     * 判断参数 OptimizeCountSql 是否已赋值
                     * @return OptimizeCountSql 是否已赋值
                     * 
                     */
                    bool OptimizeCountSqlHasBeenSet() const;

                    /**
                     * 获取Pagination
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pages Pagination
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPages() const;

                    /**
                     * 设置Pagination
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pages Pagination
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPages(const uint64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取Sorting field information. When allowing frontend input, be aware of SQL injection issue. Use SqlInjectionUtils.check(...) to check the text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Orders Sorting field information. When allowing frontend input, be aware of SQL injection issue. Use SqlInjectionUtils.check(...) to check the text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OrderDto> GetOrders() const;

                    /**
                     * 设置Sorting field information. When allowing frontend input, be aware of SQL injection issue. Use SqlInjectionUtils.check(...) to check the text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _orders Sorting field information. When allowing frontend input, be aware of SQL injection issue. Use SqlInjectionUtils.check(...) to check the text.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrders(const std::vector<OrderDto>& _orders);

                    /**
                     * 判断参数 Orders 是否已赋值
                     * @return Orders 是否已赋值
                     * 
                     */
                    bool OrdersHasBeenSet() const;

                    /**
                     * 获取The statementId for a custom count query in xml can also be set without specifying it. Just add _mpCount after the pagination statementId. For example, for the pagination selectPageById, set the count query statementId to selectPageById_mpCount. The SQL execution can then be found by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CountId The statementId for a custom count query in xml can also be set without specifying it. Just add _mpCount after the pagination statementId. For example, for the pagination selectPageById, set the count query statementId to selectPageById_mpCount. The SQL execution can then be found by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCountId() const;

                    /**
                     * 设置The statementId for a custom count query in xml can also be set without specifying it. Just add _mpCount after the pagination statementId. For example, for the pagination selectPageById, set the count query statementId to selectPageById_mpCount. The SQL execution can then be found by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _countId The statementId for a custom count query in xml can also be set without specifying it. Just add _mpCount after the pagination statementId. For example, for the pagination selectPageById, set the count query statementId to selectPageById_mpCount. The SQL execution can then be found by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCountId(const std::string& _countId);

                    /**
                     * 判断参数 CountId 是否已赋值
                     * @return CountId 是否已赋值
                     * 
                     */
                    bool CountIdHasBeenSet() const;

                    /**
                     * 获取Pagination size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size Pagination size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Pagination size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _size Pagination size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _total total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of items per page limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxLimit Number of items per page limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMaxLimit() const;

                    /**
                     * 设置Number of items per page limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxLimit Number of items per page limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxLimit(const std::string& _maxLimit);

                    /**
                     * 判断参数 MaxLimit 是否已赋值
                     * @return MaxLimit 是否已赋值
                     * 
                     */
                    bool MaxLimitHasBeenSet() const;

                    /**
                     * 获取Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Records Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BudgetRemindRecords> GetRecords() const;

                    /**
                     * 设置Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _records Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecords(const std::vector<BudgetRemindRecords>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Current Page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Current Current Page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCurrent() const;

                    /**
                     * 设置Current Page
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _current Current Page
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrent(const uint64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取Whether to perform a count query. If you only want to query the list and do not query the total record count, set the parameter to false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SearchCount Whether to perform a count query. If you only want to query the list and do not query the total record count, set the parameter to false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSearchCount() const;

                    /**
                     * 设置Whether to perform a count query. If you only want to query the list and do not query the total record count, set the parameter to false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _searchCount Whether to perform a count query. If you only want to query the list and do not query the total record count, set the parameter to false.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSearchCount(const bool& _searchCount);

                    /**
                     * 判断参数 SearchCount 是否已赋值
                     * @return SearchCount 是否已赋值
                     * 
                     */
                    bool SearchCountHasBeenSet() const;

                private:

                    /**
                     * Optimize COUNT SQL automatically if encounter unresolved jSqlParser case, set the parameter to false
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_optimizeCountSql;
                    bool m_optimizeCountSqlHasBeenSet;

                    /**
                     * Pagination
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Sorting field information. When allowing frontend input, be aware of SQL injection issue. Use SqlInjectionUtils.check(...) to check the text.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrderDto> m_orders;
                    bool m_ordersHasBeenSet;

                    /**
                     * The statementId for a custom count query in xml can also be set without specifying it. Just add _mpCount after the pagination statementId. For example, for the pagination selectPageById, set the count query statementId to selectPageById_mpCount. The SQL execution can then be found by default.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_countId;
                    bool m_countIdHasBeenSet;

                    /**
                     * Pagination size.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of items per page limit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_maxLimit;
                    bool m_maxLimitHasBeenSet;

                    /**
                     * Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BudgetRemindRecords> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Current Page
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * Whether to perform a count query. If you only want to query the list and do not query the total record count, set the parameter to false.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_searchCount;
                    bool m_searchCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDLIST_H_
