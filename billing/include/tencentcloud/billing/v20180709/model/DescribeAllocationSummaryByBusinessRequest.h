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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_

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
                * DescribeAllocationSummaryByBusiness request structure.
                */
                class DescribeAllocationSummaryByBusinessRequest : public AbstractModel
                {
                public:
                    DescribeAllocationSummaryByBusinessRequest();
                    ~DescribeAllocationSummaryByBusinessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity, with the maximum value of 1,000
                     * @return Limit Quantity, with the maximum value of 1,000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity, with the maximum value of 1,000
                     * @param _limit Quantity, with the maximum value of 1,000
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * @return Offset Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * @param _offset Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Bill month, in the format of 2024-02, which is the current month by default if not provided


                     * @return Month Bill month, in the format of 2024-02, which is the current month by default if not provided


                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month, in the format of 2024-02, which is the current month by default if not provided


                     * @param _month Bill month, in the format of 2024-02, which is the current month by default if not provided


                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Statistical period, with the enumerated values as follows:
month - Month
day - Day
                     * @return PeriodType Statistical period, with the enumerated values as follows:
month - Month
day - Day
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置Statistical period, with the enumerated values as follows:
month - Month
day - Day
                     * @param _periodType Statistical period, with the enumerated values as follows:
month - Month
day - Day
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取Unique identifier of a billing unit, used for filtering


                     * @return TreeNodeUniqKeys Unique identifier of a billing unit, used for filtering


                     * 
                     */
                    std::vector<std::string> GetTreeNodeUniqKeys() const;

                    /**
                     * 设置Unique identifier of a billing unit, used for filtering


                     * @param _treeNodeUniqKeys Unique identifier of a billing unit, used for filtering


                     * 
                     */
                    void SetTreeNodeUniqKeys(const std::vector<std::string>& _treeNodeUniqKeys);

                    /**
                     * 判断参数 TreeNodeUniqKeys 是否已赋值
                     * @return TreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeysHasBeenSet() const;

                    /**
                     * 获取Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * @return SortType Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * @param _sortType Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取Sorting field, with the enumerated values as follows:
GatherCashPayAmount - Collected fees (cash)
GatherVoucherPayAmount - Collected fees (voucher)
GatherIncentivePayAmount - Collected fees (free credit)
GatherTransferPayAmount - Collected fees (royalty amount)
AllocateCashPayAmount - Allocated fees (cash)
AllocateVoucherPayAmount - Allocated fees (voucher)
AllocateIncentivePayAmount - Allocated fees (free credit)
AllocateTransferPayAmount - Allocated fees (royalty amount)
TotalCashPayAmount - Total fees (cash)
TotalVoucherPayAmount - Total fees (voucher)
TotalIncentivePayAmount - Total fees (free credit)
TotalTransferPayAmount - Total fees (royalty amount)
GatherRealCost - Collected fees (discounted total)
AllocateRealCost - Allocated fees (discounted total)
RealTotalCost - Total fees (discounted total)
BusinessCode - Product code
Ratio - Proportion (discounted total)
Trend - Month-on-month ratio (discounted total)
                     * @return Sort Sorting field, with the enumerated values as follows:
GatherCashPayAmount - Collected fees (cash)
GatherVoucherPayAmount - Collected fees (voucher)
GatherIncentivePayAmount - Collected fees (free credit)
GatherTransferPayAmount - Collected fees (royalty amount)
AllocateCashPayAmount - Allocated fees (cash)
AllocateVoucherPayAmount - Allocated fees (voucher)
AllocateIncentivePayAmount - Allocated fees (free credit)
AllocateTransferPayAmount - Allocated fees (royalty amount)
TotalCashPayAmount - Total fees (cash)
TotalVoucherPayAmount - Total fees (voucher)
TotalIncentivePayAmount - Total fees (free credit)
TotalTransferPayAmount - Total fees (royalty amount)
GatherRealCost - Collected fees (discounted total)
AllocateRealCost - Allocated fees (discounted total)
RealTotalCost - Total fees (discounted total)
BusinessCode - Product code
Ratio - Proportion (discounted total)
Trend - Month-on-month ratio (discounted total)
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting field, with the enumerated values as follows:
GatherCashPayAmount - Collected fees (cash)
GatherVoucherPayAmount - Collected fees (voucher)
GatherIncentivePayAmount - Collected fees (free credit)
GatherTransferPayAmount - Collected fees (royalty amount)
AllocateCashPayAmount - Allocated fees (cash)
AllocateVoucherPayAmount - Allocated fees (voucher)
AllocateIncentivePayAmount - Allocated fees (free credit)
AllocateTransferPayAmount - Allocated fees (royalty amount)
TotalCashPayAmount - Total fees (cash)
TotalVoucherPayAmount - Total fees (voucher)
TotalIncentivePayAmount - Total fees (free credit)
TotalTransferPayAmount - Total fees (royalty amount)
GatherRealCost - Collected fees (discounted total)
AllocateRealCost - Allocated fees (discounted total)
RealTotalCost - Total fees (discounted total)
BusinessCode - Product code
Ratio - Proportion (discounted total)
Trend - Month-on-month ratio (discounted total)
                     * @param _sort Sorting field, with the enumerated values as follows:
GatherCashPayAmount - Collected fees (cash)
GatherVoucherPayAmount - Collected fees (voucher)
GatherIncentivePayAmount - Collected fees (free credit)
GatherTransferPayAmount - Collected fees (royalty amount)
AllocateCashPayAmount - Allocated fees (cash)
AllocateVoucherPayAmount - Allocated fees (voucher)
AllocateIncentivePayAmount - Allocated fees (free credit)
AllocateTransferPayAmount - Allocated fees (royalty amount)
TotalCashPayAmount - Total fees (cash)
TotalVoucherPayAmount - Total fees (voucher)
TotalIncentivePayAmount - Total fees (free credit)
TotalTransferPayAmount - Total fees (royalty amount)
GatherRealCost - Collected fees (discounted total)
AllocateRealCost - Allocated fees (discounted total)
RealTotalCost - Total fees (discounted total)
BusinessCode - Product code
Ratio - Proportion (discounted total)
Trend - Month-on-month ratio (discounted total)
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Date, used for filtering and provided when PeriodType is set to day

                     * @return BillDates Date, used for filtering and provided when PeriodType is set to day

                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置Date, used for filtering and provided when PeriodType is set to day

                     * @param _billDates Date, used for filtering and provided when PeriodType is set to day

                     * 
                     */
                    void SetBillDates(const std::vector<std::string>& _billDates);

                    /**
                     * 判断参数 BillDates 是否已赋值
                     * @return BillDates 是否已赋值
                     * 
                     */
                    bool BillDatesHasBeenSet() const;

                    /**
                     * 获取Product code, used for filtering
                     * @return BusinessCodes Product code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置Product code, used for filtering
                     * @param _businessCodes Product code, used for filtering
                     * 
                     */
                    void SetBusinessCodes(const std::vector<std::string>& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取Fuzzy search criteria
                     * @return SearchKey Fuzzy search criteria
                     * @deprecated
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Fuzzy search criteria
                     * @param _searchKey Fuzzy search criteria
                     * @deprecated
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * @deprecated
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Quantity, with the maximum value of 1,000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Bill month, in the format of 2024-02, which is the current month by default if not provided


                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Statistical period, with the enumerated values as follows:
month - Month
day - Day
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * Unique identifier of a billing unit, used for filtering


                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                    /**
                     * Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Sorting field, with the enumerated values as follows:
GatherCashPayAmount - Collected fees (cash)
GatherVoucherPayAmount - Collected fees (voucher)
GatherIncentivePayAmount - Collected fees (free credit)
GatherTransferPayAmount - Collected fees (royalty amount)
AllocateCashPayAmount - Allocated fees (cash)
AllocateVoucherPayAmount - Allocated fees (voucher)
AllocateIncentivePayAmount - Allocated fees (free credit)
AllocateTransferPayAmount - Allocated fees (royalty amount)
TotalCashPayAmount - Total fees (cash)
TotalVoucherPayAmount - Total fees (voucher)
TotalIncentivePayAmount - Total fees (free credit)
TotalTransferPayAmount - Total fees (royalty amount)
GatherRealCost - Collected fees (discounted total)
AllocateRealCost - Allocated fees (discounted total)
RealTotalCost - Total fees (discounted total)
BusinessCode - Product code
Ratio - Proportion (discounted total)
Trend - Month-on-month ratio (discounted total)
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Date, used for filtering and provided when PeriodType is set to day

                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * Product code, used for filtering
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * Fuzzy search criteria
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_
