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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYBUSINESS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYBUSINESS_H_

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
                * Detailed summary of the cost allocation bill by business
                */
                class AllocationSummaryByBusiness : public AbstractModel
                {
                public:
                    AllocationSummaryByBusiness();
                    ~AllocationSummaryByBusiness() = default;
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
                     * 获取Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated fees (Cash)
                     * @return TotalCashPayAmount Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated fees (Cash)
                     * 
                     */
                    std::string GetTotalCashPayAmount() const;

                    /**
                     * 设置Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated fees (Cash)
                     * @param _totalCashPayAmount Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated fees (Cash)
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
                     * 获取Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Vouchers) + Allocated fees (Vouchers)
                     * @return TotalVoucherPayAmount Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Vouchers) + Allocated fees (Vouchers)
                     * 
                     */
                    std::string GetTotalVoucherPayAmount() const;

                    /**
                     * 设置Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Vouchers) + Allocated fees (Vouchers)
                     * @param _totalVoucherPayAmount Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Vouchers) + Allocated fees (Vouchers)
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
                     * 获取Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated fees (Free Credit)
                     * @return TotalIncentivePayAmount Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated fees (Free Credit)
                     * 
                     */
                    std::string GetTotalIncentivePayAmount() const;

                    /**
                     * 设置Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated fees (Free Credit)
                     * @param _totalIncentivePayAmount Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated fees (Free Credit)
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
                     * 获取Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated fees (Royalty Amount)
                     * @return TotalTransferPayAmount Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated fees (Royalty Amount)
                     * 
                     */
                    std::string GetTotalTransferPayAmount() const;

                    /**
                     * 设置Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated fees (Royalty Amount)
                     * @param _totalTransferPayAmount Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated fees (Royalty Amount)
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
                     * 获取Allocated fees (discounted total): Total resource amount after discount allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateRealCost Allocated fees (discounted total): Total resource amount after discount allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateRealCost() const;

                    /**
                     * 设置Allocated fees (discounted total): Total resource amount after discount allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateRealCost Allocated fees (discounted total): Total resource amount after discount allocated to the cost allocation unit based on the allocation rules
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
                     * 获取Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated fees (discounted total)
                     * @return RealTotalCost Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated fees (discounted total)
                     * 
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated fees (discounted total)
                     * @param _realTotalCost Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated fees (discounted total)
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
                     * 获取Product code
                     * @return BusinessCode Product code
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code
                     * @param _businessCode Product code
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Product name: Various cloud products purchased by users
                     * @return BusinessCodeName Product name: Various cloud products purchased by users
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name: Various cloud products purchased by users
                     * @param _businessCodeName Product name: Various cloud products purchased by users
                     * 
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     * 
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * @return TotalCost Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * @param _totalCost Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * @return RICost Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * 
                     */
                    std::string GetRICost() const;

                    /**
                     * 设置Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * @param _rICost Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     * 
                     */
                    void SetRICost(const std::string& _rICost);

                    /**
                     * 判断参数 RICost 是否已赋值
                     * @return RICost 是否已赋值
                     * 
                     */
                    bool RICostHasBeenSet() const;

                    /**
                     * 获取Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * @return SPCost Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * 
                     */
                    std::string GetSPCost() const;

                    /**
                     * 设置Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * @param _sPCost Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     * 
                     */
                    void SetSPCost(const std::string& _sPCost);

                    /**
                     * 判断参数 SPCost 是否已赋值
                     * @return SPCost 是否已赋值
                     * 
                     */
                    bool SPCostHasBeenSet() const;

                    /**
                     * 获取Cash account expenditure (CNY): The amount paid through the cash account
                     * @return CashPayAmount Cash account expenditure (CNY): The amount paid through the cash account
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置Cash account expenditure (CNY): The amount paid through the cash account
                     * @param _cashPayAmount Cash account expenditure (CNY): The amount paid through the cash account
                     * 
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     * 
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)

                     * @return VoucherPayAmount Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)

                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)

                     * @param _voucherPayAmount Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)

                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Gift account expenditure (CNY): The amount paid using free credits
                     * @return IncentivePayAmount Gift account expenditure (CNY): The amount paid using free credits
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置Gift account expenditure (CNY): The amount paid using free credits
                     * @param _incentivePayAmount Gift account expenditure (CNY): The amount paid using free credits
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取Royalty account expenditure (CNY): The amount paid through the royalty account
                     * @return TransferPayAmount Royalty account expenditure (CNY): The amount paid through the royalty account
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置Royalty account expenditure (CNY): The amount paid through the royalty account
                     * @param _transferPayAmount Royalty account expenditure (CNY): The amount paid through the royalty account
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * @return AllocationRealTotalCost Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * 
                     */
                    std::string GetAllocationRealTotalCost() const;

                    /**
                     * 设置Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * @param _allocationRealTotalCost Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     * 
                     */
                    void SetAllocationRealTotalCost(const std::string& _allocationRealTotalCost);

                    /**
                     * 判断参数 AllocationRealTotalCost 是否已赋值
                     * @return AllocationRealTotalCost 是否已赋值
                     * 
                     */
                    bool AllocationRealTotalCostHasBeenSet() const;

                    /**
                     * 获取Collected fees (tax): Tax directly collected to the cost allocation unit based on the collection rules
                     * @return GatherTax Collected fees (tax): Tax directly collected to the cost allocation unit based on the collection rules
                     * 
                     */
                    std::string GetGatherTax() const;

                    /**
                     * 设置Collected fees (tax): Tax directly collected to the cost allocation unit based on the collection rules
                     * @param _gatherTax Collected fees (tax): Tax directly collected to the cost allocation unit based on the collection rules
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
                     * 获取Allocated fees (tax): Resource tax allocated to the cost allocation unit based on the allocation rules
                     * @return AllocateTax Allocated fees (tax): Resource tax allocated to the cost allocation unit based on the allocation rules
                     * 
                     */
                    std::string GetAllocateTax() const;

                    /**
                     * 设置Allocated fees (tax): Resource tax allocated to the cost allocation unit based on the allocation rules
                     * @param _allocateTax Allocated fees (tax): Resource tax allocated to the cost allocation unit based on the allocation rules
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
                     * 获取Total fees (tax): Total fees of the cost allocation unit, Collected Fees (Tax) + Allocated fees (Tax)
                     * @return TotalTax Total fees (tax): Total fees of the cost allocation unit, Collected Fees (Tax) + Allocated fees (Tax)
                     * 
                     */
                    std::string GetTotalTax() const;

                    /**
                     * 设置Total fees (tax): Total fees of the cost allocation unit, Collected Fees (Tax) + Allocated fees (Tax)
                     * @param _totalTax Total fees (tax): Total fees of the cost allocation unit, Collected Fees (Tax) + Allocated fees (Tax)
                     * 
                     */
                    void SetTotalTax(const std::string& _totalTax);

                    /**
                     * 判断参数 TotalTax 是否已赋值
                     * @return TotalTax 是否已赋值
                     * 
                     */
                    bool TotalTaxHasBeenSet() const;

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
                     * 获取Tax
                     * @return Tax Tax
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置Tax
                     * @param _tax Tax
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                    /**
                     * 获取CostBeforeTax
                     * @return CostBeforeTax CostBeforeTax
                     * 
                     */
                    std::string GetCostBeforeTax() const;

                    /**
                     * 设置CostBeforeTax
                     * @param _costBeforeTax CostBeforeTax
                     * 
                     */
                    void SetCostBeforeTax(const std::string& _costBeforeTax);

                    /**
                     * 判断参数 CostBeforeTax 是否已赋值
                     * @return CostBeforeTax 是否已赋值
                     * 
                     */
                    bool CostBeforeTaxHasBeenSet() const;

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
                     * Total fees (cash): Total fees of the cost allocation unit, Collected Fees (Cash) + Allocated fees (Cash)
                     */
                    std::string m_totalCashPayAmount;
                    bool m_totalCashPayAmountHasBeenSet;

                    /**
                     * Total fees (voucher): Total fees of the cost allocation unit, Collected Fees (Vouchers) + Allocated fees (Vouchers)
                     */
                    std::string m_totalVoucherPayAmount;
                    bool m_totalVoucherPayAmountHasBeenSet;

                    /**
                     * Total fees (free credit): Total fees of the cost allocation unit, Collected Fees (Free Credit) + Allocated fees (Free Credit)
                     */
                    std::string m_totalIncentivePayAmount;
                    bool m_totalIncentivePayAmountHasBeenSet;

                    /**
                     * Total fees (royalty amount): Total fees of the cost allocation unit, Collected Fees (Royalty Amount) + Allocated fees (Royalty Amount)
                     */
                    std::string m_totalTransferPayAmount;
                    bool m_totalTransferPayAmountHasBeenSet;

                    /**
                     * Collected fees (discounted total): Total resource amount after discount directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherRealCost;
                    bool m_gatherRealCostHasBeenSet;

                    /**
                     * Allocated fees (discounted total): Total resource amount after discount allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateRealCost;
                    bool m_allocateRealCostHasBeenSet;

                    /**
                     * Total fees (discounted total): Total fees of the cost allocation unit, Collected Fees (discounted total) + Allocated fees (discounted total)
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
                     * Product code
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Product name: Various cloud products purchased by users
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Original price of a component: Original Price = Component List Price * Component Usage * Duration of Use (not displayed if the customer enjoys a fixed price/contract price, and not displayed by default in refund scenarios), specified price mode
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Original price deducted by a reserved instance: The original price of a component deducted by reserved instances for this product or service
                     */
                    std::string m_rICost;
                    bool m_rICostHasBeenSet;

                    /**
                     * Savings plan deduction from original price: Savings Plan Deduction from Original Price = Monetary Value of Savings Plan Deduction/ Savings Plan Deduction Rate
                     */
                    std::string m_sPCost;
                    bool m_sPCostHasBeenSet;

                    /**
                     * Cash account expenditure (CNY): The amount paid through the cash account
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * Promo voucher expenditure (CNY): The amount paid using various vouchers (such as promo vouchers and cash vouchers)

                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Gift account expenditure (CNY): The amount paid using free credits
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * Royalty account expenditure (CNY): The amount paid through the royalty account
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * Discounted total: discounted total = (Original Price - Original Price Deducted by a Reserved Instance - Savings Plan Deduction from Original Price) * Discount Rate
                     */
                    std::string m_allocationRealTotalCost;
                    bool m_allocationRealTotalCostHasBeenSet;

                    /**
                     * Collected fees (tax): Tax directly collected to the cost allocation unit based on the collection rules
                     */
                    std::string m_gatherTax;
                    bool m_gatherTaxHasBeenSet;

                    /**
                     * Allocated fees (tax): Resource tax allocated to the cost allocation unit based on the allocation rules
                     */
                    std::string m_allocateTax;
                    bool m_allocateTaxHasBeenSet;

                    /**
                     * Total fees (tax): Total fees of the cost allocation unit, Collected Fees (Tax) + Allocated fees (Tax)
                     */
                    std::string m_totalTax;
                    bool m_totalTaxHasBeenSet;

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
                     * Tax
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                    /**
                     * CostBeforeTax
                     */
                    std::string m_costBeforeTax;
                    bool m_costBeforeTaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONSUMMARYBYBUSINESS_H_
