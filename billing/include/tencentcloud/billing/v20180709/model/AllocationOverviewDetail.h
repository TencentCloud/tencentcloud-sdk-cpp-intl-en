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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of the cost allocation overview
                */
                class AllocationOverviewDetail : public AbstractModel
                {
                public:
                    AllocationOverviewDetail();
                    ~AllocationOverviewDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of a cost allocation unit
                     * @return TreeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置Unique identifier of a cost allocation unit
                     * @param _treeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取Name of a cost allocation unit
                     * @return TreeNodeUniqKeyName Name of a cost allocation unit
                     * 
                     */
                    std::string GetTreeNodeUniqKeyName() const;

                    /**
                     * 设置Name of a cost allocation unit
                     * @param _treeNodeUniqKeyName Name of a cost allocation unit
                     * 
                     */
                    void SetTreeNodeUniqKeyName(const std::string& _treeNodeUniqKeyName);

                    /**
                     * 判断参数 TreeNodeUniqKeyName 是否已赋值
                     * @return TreeNodeUniqKeyName 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyNameHasBeenSet() const;

                    /**
                     * 获取Date: Settlement date
                     * @return BillDate Date: Settlement date
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置Date: Settlement date
                     * @param _billDate Date: Settlement date
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取Collected fees (cash): Cash directly collected to the cost allocation unit based on the collection rules
                     * @return GatherCashPayAmount Collected fees (cash): Cash directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    std::string GetGatherCashPayAmount() const;

                    /**
                     * 设置Collected fees (cash): Cash directly collected to the cost allocation unit based on the collection rules
                     * @param _gatherCashPayAmount Collected fees (cash): Cash directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    void SetGatherCashPayAmount(const std::string& _gatherCashPayAmount);

                    /**
                     * 判断参数 GatherCashPayAmount 是否已赋值
                     * @return GatherCashPayAmount 是否已赋值
                     * 
                     */
                    bool GatherCashPayAmountHasBeenSet() const;

                    /**
                     * 获取Collected fees (voucher): Resource vouchers directly collected to the cost allocation unit based on the collection rules
                     * @return GatherVoucherPayAmount Collected fees (voucher): Resource vouchers directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    std::string GetGatherVoucherPayAmount() const;

                    /**
                     * 设置Collected fees (voucher): Resource vouchers directly collected to the cost allocation unit based on the collection rules
                     * @param _gatherVoucherPayAmount Collected fees (voucher): Resource vouchers directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    void SetGatherVoucherPayAmount(const std::string& _gatherVoucherPayAmount);

                    /**
                     * 判断参数 GatherVoucherPayAmount 是否已赋值
                     * @return GatherVoucherPayAmount 是否已赋值
                     * 
                     */
                    bool GatherVoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Collected fees (free credit): Resource free credit directly collected to the cost allocation unit based on the collection rules
                     * @return GatherIncentivePayAmount Collected fees (free credit): Resource free credit directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    std::string GetGatherIncentivePayAmount() const;

                    /**
                     * 设置Collected fees (free credit): Resource free credit directly collected to the cost allocation unit based on the collection rules
                     * @param _gatherIncentivePayAmount Collected fees (free credit): Resource free credit directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    void SetGatherIncentivePayAmount(const std::string& _gatherIncentivePayAmount);

                    /**
                     * 判断参数 GatherIncentivePayAmount 是否已赋值
                     * @return GatherIncentivePayAmount 是否已赋值
                     * 
                     */
                    bool GatherIncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Collected fees (royalty amount): Resource royalty amount directly collected to the cost allocation unit based on the collection rules
                     * @return GatherTransferPayAmount Collected fees (royalty amount): Resource royalty amount directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    std::string GetGatherTransferPayAmount() const;

                    /**
                     * 设置Collected fees (royalty amount): Resource royalty amount directly collected to the cost allocation unit based on the collection rules
                     * @param _gatherTransferPayAmount Collected fees (royalty amount): Resource royalty amount directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    void SetGatherTransferPayAmount(const std::string& _gatherTransferPayAmount);

                    /**
                     * 判断参数 GatherTransferPayAmount 是否已赋值
                     * @return GatherTransferPayAmount 是否已赋值
                     * 
                     */
                    bool GatherTransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Allocated fees (cash): Resource cash allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateCashPayAmount Allocated fees (cash): Resource cash allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateCashPayAmount() const;

                    /**
                     * 设置Allocated fees (cash): Resource cash allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateCashPayAmount Allocated fees (cash): Resource cash allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    void SetAllocateCashPayAmount(const std::string& _allocateCashPayAmount);

                    /**
                     * 判断参数 AllocateCashPayAmount 是否已赋值
                     * @return AllocateCashPayAmount 是否已赋值
                     * 
                     */
                    bool AllocateCashPayAmountHasBeenSet() const;

                    /**
                     * 获取Allocated fees (voucher): Resource vouchers allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateVoucherPayAmount Allocated fees (voucher): Resource vouchers allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateVoucherPayAmount() const;

                    /**
                     * 设置Allocated fees (voucher): Resource vouchers allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateVoucherPayAmount Allocated fees (voucher): Resource vouchers allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    void SetAllocateVoucherPayAmount(const std::string& _allocateVoucherPayAmount);

                    /**
                     * 判断参数 AllocateVoucherPayAmount 是否已赋值
                     * @return AllocateVoucherPayAmount 是否已赋值
                     * 
                     */
                    bool AllocateVoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Allocated fees (free credit): Resource free credit allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateIncentivePayAmount Allocated fees (free credit): Resource free credit allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateIncentivePayAmount() const;

                    /**
                     * 设置Allocated fees (free credit): Resource free credit allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateIncentivePayAmount Allocated fees (free credit): Resource free credit allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    void SetAllocateIncentivePayAmount(const std::string& _allocateIncentivePayAmount);

                    /**
                     * 判断参数 AllocateIncentivePayAmount 是否已赋值
                     * @return AllocateIncentivePayAmount 是否已赋值
                     * 
                     */
                    bool AllocateIncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Allocated fees (royalty amount): Resource royalty amount allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateTransferPayAmount Allocated fees (royalty amount): Resource royalty amount allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateTransferPayAmount() const;

                    /**
                     * 设置Allocated fees (royalty amount): Resource royalty amount allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateTransferPayAmount Allocated fees (royalty amount): Resource royalty amount allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    void SetAllocateTransferPayAmount(const std::string& _allocateTransferPayAmount);

                    /**
                     * 判断参数 AllocateTransferPayAmount 是否已赋值
                     * @return AllocateTransferPayAmount 是否已赋值
                     * 
                     */
                    bool AllocateTransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated Fees (Cash)
                     * @return TotalCashPayAmount Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated Fees (Cash)
                     * 
                     */
                    std::string GetTotalCashPayAmount() const;

                    /**
                     * 设置Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated Fees (Cash)
                     * @param _totalCashPayAmount Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated Fees (Cash)
                     * 
                     */
                    void SetTotalCashPayAmount(const std::string& _totalCashPayAmount);

                    /**
                     * 判断参数 TotalCashPayAmount 是否已赋值
                     * @return TotalCashPayAmount 是否已赋值
                     * 
                     */
                    bool TotalCashPayAmountHasBeenSet() const;

                    /**
                     * 获取Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Voucher) + Allocated Fees (Voucher)
                     * @return TotalVoucherPayAmount Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Voucher) + Allocated Fees (Voucher)
                     * 
                     */
                    std::string GetTotalVoucherPayAmount() const;

                    /**
                     * 设置Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Voucher) + Allocated Fees (Voucher)
                     * @param _totalVoucherPayAmount Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Voucher) + Allocated Fees (Voucher)
                     * 
                     */
                    void SetTotalVoucherPayAmount(const std::string& _totalVoucherPayAmount);

                    /**
                     * 判断参数 TotalVoucherPayAmount 是否已赋值
                     * @return TotalVoucherPayAmount 是否已赋值
                     * 
                     */
                    bool TotalVoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated Fees (Free Credit)
                     * @return TotalIncentivePayAmount Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated Fees (Free Credit)
                     * 
                     */
                    std::string GetTotalIncentivePayAmount() const;

                    /**
                     * 设置Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated Fees (Free Credit)
                     * @param _totalIncentivePayAmount Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated Fees (Free Credit)
                     * 
                     */
                    void SetTotalIncentivePayAmount(const std::string& _totalIncentivePayAmount);

                    /**
                     * 判断参数 TotalIncentivePayAmount 是否已赋值
                     * @return TotalIncentivePayAmount 是否已赋值
                     * 
                     */
                    bool TotalIncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated Fees (Royalty Amount)
                     * @return TotalTransferPayAmount Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated Fees (Royalty Amount)
                     * 
                     */
                    std::string GetTotalTransferPayAmount() const;

                    /**
                     * 设置Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated Fees (Royalty Amount)
                     * @param _totalTransferPayAmount Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated Fees (Royalty Amount)
                     * 
                     */
                    void SetTotalTransferPayAmount(const std::string& _totalTransferPayAmount);

                    /**
                     * 判断参数 TotalTransferPayAmount 是否已赋值
                     * @return TotalTransferPayAmount 是否已赋值
                     * 
                     */
                    bool TotalTransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Collected fees (discounted total): Total resource amount after discount directly collected to the cost allocation unit based on the collection rules
                     * @return GatherRealCost Collected fees (discounted total): Total resource amount after discount directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    std::string GetGatherRealCost() const;

                    /**
                     * 设置Collected fees (discounted total): Total resource amount after discount directly collected to the cost allocation unit based on the collection rules
                     * @param _gatherRealCost Collected fees (discounted total): Total resource amount after discount directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    void SetGatherRealCost(const std::string& _gatherRealCost);

                    /**
                     * 判断参数 GatherRealCost 是否已赋值
                     * @return GatherRealCost 是否已赋值
                     * 
                     */
                    bool GatherRealCostHasBeenSet() const;

                    /**
                     * 获取Allocated fees (discounted total): Total resource amount after discount directly allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateRealCost Allocated fees (discounted total): Total resource amount after discount directly allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateRealCost() const;

                    /**
                     * 设置Allocated fees (discounted total): Total resource amount after discount directly allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateRealCost Allocated fees (discounted total): Total resource amount after discount directly allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    void SetAllocateRealCost(const std::string& _allocateRealCost);

                    /**
                     * 判断参数 AllocateRealCost 是否已赋值
                     * @return AllocateRealCost 是否已赋值
                     * 
                     */
                    bool AllocateRealCostHasBeenSet() const;

                    /**
                     * 获取Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated Fees (discounted total)
                     * @return RealTotalCost Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated Fees (discounted total)
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated Fees (discounted total)
                     * @param _realTotalCost Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated Fees (discounted total)
                     * 
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Proportion (discounted total): Total fees (discounted total) of the Cost Allocation Unit/Total Fees (discounted total) * 100%
                     * @return Ratio Proportion (discounted total): Total fees (discounted total) of the Cost Allocation Unit/Total Fees (discounted total) * 100%
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置Proportion (discounted total): Total fees (discounted total) of the Cost Allocation Unit/Total Fees (discounted total) * 100%
                     * @param _ratio Proportion (discounted total): Total fees (discounted total) of the Cost Allocation Unit/Total Fees (discounted total) * 100%
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取Month-on-month ratio (discounted total): [Total fees (discounted total) of the cost allocation unit in this month - Total fees (discounted total) of the cost allocation unit in the previous month]/Total fees (discounted total) of the cost allocation unit in the previous month * 100%
                     * @return Trend Month-on-month ratio (discounted total): [Total fees (discounted total) of the cost allocation unit in this month - Total fees (discounted total) of the cost allocation unit in the previous month]/Total fees (discounted total) of the cost allocation unit in the previous month * 100%
                     * 
                     */
                    std::string GetTrend() const;

                    /**
                     * 设置Month-on-month ratio (discounted total): [Total fees (discounted total) of the cost allocation unit in this month - Total fees (discounted total) of the cost allocation unit in the previous month]/Total fees (discounted total) of the cost allocation unit in the previous month * 100%
                     * @param _trend Month-on-month ratio (discounted total): [Total fees (discounted total) of the cost allocation unit in this month - Total fees (discounted total) of the cost allocation unit in the previous month]/Total fees (discounted total) of the cost allocation unit in the previous month * 100%
                     * 
                     */
                    void SetTrend(const std::string& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     * 
                     */
                    bool TrendHasBeenSet() const;

                    /**
                     * 获取Sequential Comparison Arrow
upward - Upward
downward - Downward
none - Stable
                     * @return TrendType Sequential Comparison Arrow
upward - Upward
downward - Downward
none - Stable
                     * 
                     */
                    std::string GetTrendType() const;

                    /**
                     * 设置Sequential Comparison Arrow
upward - Upward
downward - Downward
none - Stable
                     * @param _trendType Sequential Comparison Arrow
upward - Upward
downward - Downward
none - Stable
                     * 
                     */
                    void SetTrendType(const std::string& _trendType);

                    /**
                     * 判断参数 TrendType 是否已赋值
                     * @return TrendType 是否已赋值
                     * 
                     */
                    bool TrendTypeHasBeenSet() const;

                    /**
                     * 获取GatherCostBeforeTax
                     * @return GatherCostBeforeTax GatherCostBeforeTax
                     * 
                     */
                    std::string GetGatherCostBeforeTax() const;

                    /**
                     * 设置GatherCostBeforeTax
                     * @param _gatherCostBeforeTax GatherCostBeforeTax
                     * 
                     */
                    void SetGatherCostBeforeTax(const std::string& _gatherCostBeforeTax);

                    /**
                     * 判断参数 GatherCostBeforeTax 是否已赋值
                     * @return GatherCostBeforeTax 是否已赋值
                     * 
                     */
                    bool GatherCostBeforeTaxHasBeenSet() const;

                    /**
                     * 获取AllocateCostBeforeTax
                     * @return AllocateCostBeforeTax AllocateCostBeforeTax
                     * 
                     */
                    std::string GetAllocateCostBeforeTax() const;

                    /**
                     * 设置AllocateCostBeforeTax
                     * @param _allocateCostBeforeTax AllocateCostBeforeTax
                     * 
                     */
                    void SetAllocateCostBeforeTax(const std::string& _allocateCostBeforeTax);

                    /**
                     * 判断参数 AllocateCostBeforeTax 是否已赋值
                     * @return AllocateCostBeforeTax 是否已赋值
                     * 
                     */
                    bool AllocateCostBeforeTaxHasBeenSet() const;

                    /**
                     * 获取TotalCostBeforeTax
                     * @return TotalCostBeforeTax TotalCostBeforeTax
                     * 
                     */
                    std::string GetTotalCostBeforeTax() const;

                    /**
                     * 设置TotalCostBeforeTax
                     * @param _totalCostBeforeTax TotalCostBeforeTax
                     * 
                     */
                    void SetTotalCostBeforeTax(const std::string& _totalCostBeforeTax);

                    /**
                     * 判断参数 TotalCostBeforeTax 是否已赋值
                     * @return TotalCostBeforeTax 是否已赋值
                     * 
                     */
                    bool TotalCostBeforeTaxHasBeenSet() const;

                    /**
                     * 获取GatherTax
                     * @return GatherTax GatherTax
                     * 
                     */
                    std::string GetGatherTax() const;

                    /**
                     * 设置GatherTax
                     * @param _gatherTax GatherTax
                     * 
                     */
                    void SetGatherTax(const std::string& _gatherTax);

                    /**
                     * 判断参数 GatherTax 是否已赋值
                     * @return GatherTax 是否已赋值
                     * 
                     */
                    bool GatherTaxHasBeenSet() const;

                    /**
                     * 获取AllocateTax
                     * @return AllocateTax AllocateTax
                     * 
                     */
                    std::string GetAllocateTax() const;

                    /**
                     * 设置AllocateTax
                     * @param _allocateTax AllocateTax
                     * 
                     */
                    void SetAllocateTax(const std::string& _allocateTax);

                    /**
                     * 判断参数 AllocateTax 是否已赋值
                     * @return AllocateTax 是否已赋值
                     * 
                     */
                    bool AllocateTaxHasBeenSet() const;

                    /**
                     * 获取TotalTax
                     * @return TotalTax TotalTax
                     * 
                     */
                    std::string GetTotalTax() const;

                    /**
                     * 设置TotalTax
                     * @param _totalTax TotalTax
                     * 
                     */
                    void SetTotalTax(const std::string& _totalTax);

                    /**
                     * 判断参数 TotalTax 是否已赋值
                     * @return TotalTax 是否已赋值
                     * 
                     */
                    bool TotalTaxHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of a cost allocation unit
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * Name of a cost allocation unit
                     */
                    std::string m_treeNodeUniqKeyName;
                    bool m_treeNodeUniqKeyNameHasBeenSet;

                    /**
                     * Date: Settlement date
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * Collected fees (cash): Cash directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherCashPayAmount;
                    bool m_gatherCashPayAmountHasBeenSet;

                    /**
                     * Collected fees (voucher): Resource vouchers directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherVoucherPayAmount;
                    bool m_gatherVoucherPayAmountHasBeenSet;

                    /**
                     * Collected fees (free credit): Resource free credit directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherIncentivePayAmount;
                    bool m_gatherIncentivePayAmountHasBeenSet;

                    /**
                     * Collected fees (royalty amount): Resource royalty amount directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherTransferPayAmount;
                    bool m_gatherTransferPayAmountHasBeenSet;

                    /**
                     * Allocated fees (cash): Resource cash allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateCashPayAmount;
                    bool m_allocateCashPayAmountHasBeenSet;

                    /**
                     * Allocated fees (voucher): Resource vouchers allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateVoucherPayAmount;
                    bool m_allocateVoucherPayAmountHasBeenSet;

                    /**
                     * Allocated fees (free credit): Resource free credit allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateIncentivePayAmount;
                    bool m_allocateIncentivePayAmountHasBeenSet;

                    /**
                     * Allocated fees (royalty amount): Resource royalty amount allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateTransferPayAmount;
                    bool m_allocateTransferPayAmountHasBeenSet;

                    /**
                     * Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated Fees (Cash)
                     */
                    std::string m_totalCashPayAmount;
                    bool m_totalCashPayAmountHasBeenSet;

                    /**
                     * Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Voucher) + Allocated Fees (Voucher)
                     */
                    std::string m_totalVoucherPayAmount;
                    bool m_totalVoucherPayAmountHasBeenSet;

                    /**
                     * Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated Fees (Free Credit)
                     */
                    std::string m_totalIncentivePayAmount;
                    bool m_totalIncentivePayAmountHasBeenSet;

                    /**
                     * Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated Fees (Royalty Amount)
                     */
                    std::string m_totalTransferPayAmount;
                    bool m_totalTransferPayAmountHasBeenSet;

                    /**
                     * Collected fees (discounted total): Total resource amount after discount directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherRealCost;
                    bool m_gatherRealCostHasBeenSet;

                    /**
                     * Allocated fees (discounted total): Total resource amount after discount directly allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateRealCost;
                    bool m_allocateRealCostHasBeenSet;

                    /**
                     * Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated Fees (discounted total)
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Proportion (discounted total): Total fees (discounted total) of the Cost Allocation Unit/Total Fees (discounted total) * 100%
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * Month-on-month ratio (discounted total): [Total fees (discounted total) of the cost allocation unit in this month - Total fees (discounted total) of the cost allocation unit in the previous month]/Total fees (discounted total) of the cost allocation unit in the previous month * 100%
                     */
                    std::string m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * Sequential Comparison Arrow
upward - Upward
downward - Downward
none - Stable
                     */
                    std::string m_trendType;
                    bool m_trendTypeHasBeenSet;

                    /**
                     * GatherCostBeforeTax
                     */
                    std::string m_gatherCostBeforeTax;
                    bool m_gatherCostBeforeTaxHasBeenSet;

                    /**
                     * AllocateCostBeforeTax
                     */
                    std::string m_allocateCostBeforeTax;
                    bool m_allocateCostBeforeTaxHasBeenSet;

                    /**
                     * TotalCostBeforeTax
                     */
                    std::string m_totalCostBeforeTax;
                    bool m_totalCostBeforeTaxHasBeenSet;

                    /**
                     * GatherTax
                     */
                    std::string m_gatherTax;
                    bool m_gatherTaxHasBeenSet;

                    /**
                     * AllocateTax
                     */
                    std::string m_allocateTax;
                    bool m_allocateTaxHasBeenSet;

                    /**
                     * TotalTax
                     */
                    std::string m_totalTax;
                    bool m_totalTaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWDETAIL_H_
