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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DATAFORBUDGETOPERATIONLOGPAGE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DATAFORBUDGETOPERATIONLOGPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BudgetOperationLogEntity.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Paginated data of budget modification records
                */
                class DataForBudgetOperationLogPage : public AbstractModel
                {
                public:
                    DataForBudgetOperationLogPage();
                    ~DataForBudgetOperationLogPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pagination
                     * @return Pages Pagination
                     * 
                     */
                    uint64_t GetPages() const;

                    /**
                     * 设置Pagination
                     * @param _pages Pagination
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
                     * 获取Pagination size.
                     * @return Size Pagination size.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Pagination size.
                     * @param _size Pagination size.
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
                     * 获取Total amount
                     * @return Total Total amount
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置Total amount
                     * @param _total Total amount
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
                     * 获取Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Records Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BudgetOperationLogEntity> GetRecords() const;

                    /**
                     * 设置Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _records Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecords(const std::vector<BudgetOperationLogEntity>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取Current Page
                     * @return Current Current Page
                     * 
                     */
                    uint64_t GetCurrent() const;

                    /**
                     * 设置Current Page
                     * @param _current Current Page
                     * 
                     */
                    void SetCurrent(const uint64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * Pagination
                     */
                    uint64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Total amount
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Querying the data list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BudgetOperationLogEntity> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * Current Page
                     */
                    uint64_t m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DATAFORBUDGETOPERATIONLOGPAGE_H_
