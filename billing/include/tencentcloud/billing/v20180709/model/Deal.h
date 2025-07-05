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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ProductInfo.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Order data object
                */
                class Deal : public AbstractModel
                {
                public:
                    Deal();
                    ~Deal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order ID.
                     * @return OrderId Order ID.
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Order ID.
                     * @param _orderId Order ID.
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取The status of the order. 1: unpaid; 2: paid; 3: shipping; 4: shipped; 5: shipment failed; 6: refunded; 7: closed case; 8: order expired; 9: order invalidated; 10: product invalidated; 11: third-party payment refused; 12: payment in process
                     * @return Status The status of the order. 1: unpaid; 2: paid; 3: shipping; 4: shipped; 5: shipment failed; 6: refunded; 7: closed case; 8: order expired; 9: order invalidated; 10: product invalidated; 11: third-party payment refused; 12: payment in process
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置The status of the order. 1: unpaid; 2: paid; 3: shipping; 4: shipped; 5: shipment failed; 6: refunded; 7: closed case; 8: order expired; 9: order invalidated; 10: product invalidated; 11: third-party payment refused; 12: payment in process
                     * @param _status The status of the order. 1: unpaid; 2: paid; 3: shipping; 4: shipped; 5: shipment failed; 6: refunded; 7: closed case; 8: order expired; 9: order invalidated; 10: product invalidated; 11: third-party payment refused; 12: payment in process
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Payer
                     * @return Payer Payer
                     * 
                     */
                    std::string GetPayer() const;

                    /**
                     * 设置Payer
                     * @param _payer Payer
                     * 
                     */
                    void SetPayer(const std::string& _payer);

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     * 
                     */
                    bool PayerHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creator
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Actual payment amount (pent)
                     * @return RealTotalCost Actual payment amount (pent)
                     * 
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 设置Actual payment amount (pent)
                     * @param _realTotalCost Actual payment amount (pent)
                     * 
                     */
                    void SetRealTotalCost(const int64_t& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取Voucher offset amount (pent)
                     * @return VoucherDecline Voucher offset amount (pent)
                     * 
                     */
                    int64_t GetVoucherDecline() const;

                    /**
                     * 设置Voucher offset amount (pent)
                     * @param _voucherDecline Voucher offset amount (pent)
                     * 
                     */
                    void SetVoucherDecline(const int64_t& _voucherDecline);

                    /**
                     * 判断参数 VoucherDecline 是否已赋值
                     * @return VoucherDecline 是否已赋值
                     * 
                     */
                    bool VoucherDeclineHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Product category ID
                     * @return GoodsCategoryId Product category ID
                     * 
                     */
                    int64_t GetGoodsCategoryId() const;

                    /**
                     * 设置Product category ID
                     * @param _goodsCategoryId Product category ID
                     * 
                     */
                    void SetGoodsCategoryId(const int64_t& _goodsCategoryId);

                    /**
                     * 判断参数 GoodsCategoryId 是否已赋值
                     * @return GoodsCategoryId 是否已赋值
                     * 
                     */
                    bool GoodsCategoryIdHasBeenSet() const;

                    /**
                     * 获取Product details
                     * @return ProductInfo Product details
                     * 
                     */
                    std::vector<ProductInfo> GetProductInfo() const;

                    /**
                     * 设置Product details
                     * @param _productInfo Product details
                     * 
                     */
                    void SetProductInfo(const std::vector<ProductInfo>& _productInfo);

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     * 
                     */
                    bool ProductInfoHasBeenSet() const;

                    /**
                     * 获取Duration
                     * @return TimeSpan Duration
                     * 
                     */
                    double GetTimeSpan() const;

                    /**
                     * 设置Duration
                     * @param _timeSpan Duration
                     * 
                     */
                    void SetTimeSpan(const double& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit
                     * @return TimeUnit Time unit
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit
                     * @param _timeUnit Time unit
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Currency unit
                     * @return Currency Currency unit
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency unit
                     * @param _currency Currency unit
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Discount rate
                     * @return Policy Discount rate
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 设置Discount rate
                     * @param _policy Discount rate
                     * 
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Unit price (cents)
                     * @return Price Unit price (cents)
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置Unit price (cents)
                     * @param _price Unit price (cents)
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Original price (cents)
                     * @return TotalCost Original price (cents)
                     * 
                     */
                    double GetTotalCost() const;

                    /**
                     * 设置Original price (cents)
                     * @param _totalCost Original price (cents)
                     * 
                     */
                    void SetTotalCost(const double& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Product code
                     * @return ProductCode Product code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Product code
                     * @param _productCode Product code
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取Subproduct code
                     * @return SubProductCode Subproduct code
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置Subproduct code
                     * @param _subProductCode Subproduct code
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取Large order number.
                     * @return BigDealId Large order number.
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置Large order number.
                     * @param _bigDealId Large order number.
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取Refund formula.
                     * @return Formula Refund formula.
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 设置Refund formula.
                     * @param _formula Refund formula.
                     * 
                     */
                    void SetFormula(const std::string& _formula);

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     * 
                     */
                    bool FormulaHasBeenSet() const;

                    /**
                     * 获取Refund involves order information.
                     * @return RefReturnDeals Refund involves order information.
                     * 
                     */
                    std::string GetRefReturnDeals() const;

                    /**
                     * 设置Refund involves order information.
                     * @param _refReturnDeals Refund involves order information.
                     * 
                     */
                    void SetRefReturnDeals(const std::string& _refReturnDeals);

                    /**
                     * 判断参数 RefReturnDeals 是否已赋值
                     * @return RefReturnDeals 是否已赋值
                     * 
                     */
                    bool RefReturnDealsHasBeenSet() const;

                    /**
                     * 获取Billing mode: `prePay` (prepaid), `postPay` (pay-as-you-go), `riPay` (reserved instance)
                     * @return PayMode Billing mode: `prePay` (prepaid), `postPay` (pay-as-you-go), `riPay` (reserved instance)
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode: `prePay` (prepaid), `postPay` (pay-as-you-go), `riPay` (reserved instance)
                     * @param _payMode Billing mode: `prePay` (prepaid), `postPay` (pay-as-you-go), `riPay` (reserved instance)
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Transaction type

Modify network mode adjust bandwidth mode.
Adjust bandwidth size.
`Refund`: refund.
downgrade.
upgrade configuration.
renew.
purchase.
preMoveOut monthly subscription resource migration out.
preMoveIn specifies the monthly subscription resources to migrate.
preToPost specifies the prepaid to postpaid conversion.
postMoveOut specifies the pay-as-you-go resources to be migrated out.
postMoveIn specifies the pay-as-you-go resources for inbound migration.
                     * @return Action Transaction type

Modify network mode adjust bandwidth mode.
Adjust bandwidth size.
`Refund`: refund.
downgrade.
upgrade configuration.
renew.
purchase.
preMoveOut monthly subscription resource migration out.
preMoveIn specifies the monthly subscription resources to migrate.
preToPost specifies the prepaid to postpaid conversion.
postMoveOut specifies the pay-as-you-go resources to be migrated out.
postMoveIn specifies the pay-as-you-go resources for inbound migration.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Transaction type

Modify network mode adjust bandwidth mode.
Adjust bandwidth size.
`Refund`: refund.
downgrade.
upgrade configuration.
renew.
purchase.
preMoveOut monthly subscription resource migration out.
preMoveIn specifies the monthly subscription resources to migrate.
preToPost specifies the prepaid to postpaid conversion.
postMoveOut specifies the pay-as-you-go resources to be migrated out.
postMoveIn specifies the pay-as-you-go resources for inbound migration.
                     * @param _action Transaction type

Modify network mode adjust bandwidth mode.
Adjust bandwidth size.
`Refund`: refund.
downgrade.
upgrade configuration.
renew.
purchase.
preMoveOut monthly subscription resource migration out.
preMoveIn specifies the monthly subscription resources to migrate.
preToPost specifies the prepaid to postpaid conversion.
postMoveOut specifies the pay-as-you-go resources to be migrated out.
postMoveIn specifies the pay-as-you-go resources for inbound migration.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Product code chinese name.
                     * @return ProductName Product code chinese name.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product code chinese name.
                     * @param _productName Product code chinese name.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Sub-Product code chinese name.
                     * @return SubProductName Sub-Product code chinese name.
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置Sub-Product code chinese name.
                     * @param _subProductName Sub-Product code chinese name.
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取The resource ID corresponding to the order. If the query parameter `Limit` exceeds 200, null will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId The resource ID corresponding to the order. If the query parameter `Limit` exceeds 200, null will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetResourceId() const;

                    /**
                     * 设置The resource ID corresponding to the order. If the query parameter `Limit` exceeds 200, null will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId The resource ID corresponding to the order. If the query parameter `Limit` exceeds 200, null will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceId(const std::vector<std::string>& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Order ID.
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * The status of the order. 1: unpaid; 2: paid; 3: shipping; 4: shipped; 5: shipment failed; 6: refunded; 7: closed case; 8: order expired; 9: order invalidated; 10: product invalidated; 11: third-party payment refused; 12: payment in process
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Payer
                     */
                    std::string m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Actual payment amount (pent)
                     */
                    int64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * Voucher offset amount (pent)
                     */
                    int64_t m_voucherDecline;
                    bool m_voucherDeclineHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Product category ID
                     */
                    int64_t m_goodsCategoryId;
                    bool m_goodsCategoryIdHasBeenSet;

                    /**
                     * Product details
                     */
                    std::vector<ProductInfo> m_productInfo;
                    bool m_productInfoHasBeenSet;

                    /**
                     * Duration
                     */
                    double m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Currency unit
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Discount rate
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Unit price (cents)
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Original price (cents)
                     */
                    double m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Product code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Subproduct code
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * Large order number.
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * Refund formula.
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                    /**
                     * Refund involves order information.
                     */
                    std::string m_refReturnDeals;
                    bool m_refReturnDealsHasBeenSet;

                    /**
                     * Billing mode: `prePay` (prepaid), `postPay` (pay-as-you-go), `riPay` (reserved instance)
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Transaction type

Modify network mode adjust bandwidth mode.
Adjust bandwidth size.
`Refund`: refund.
downgrade.
upgrade configuration.
renew.
purchase.
preMoveOut monthly subscription resource migration out.
preMoveIn specifies the monthly subscription resources to migrate.
preToPost specifies the prepaid to postpaid conversion.
postMoveOut specifies the pay-as-you-go resources to be migrated out.
postMoveIn specifies the pay-as-you-go resources for inbound migration.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Product code chinese name.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Sub-Product code chinese name.
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * The resource ID corresponding to the order. If the query parameter `Limit` exceeds 200, null will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DEAL_H_
