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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYFORORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYFORORGANIZATIONREQUEST_H_

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
                * DescribeBillResourceSummaryForOrganization request structure.
                */
                class DescribeBillResourceSummaryForOrganizationRequest : public AbstractModel
                {
                public:
                    DescribeBillResourceSummaryForOrganizationRequest();
                    ~DescribeBillResourceSummaryForOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * @return Offset Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * @param _offset Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
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
                     * 获取The number of entries returned at a time. The maximum value is `1000`.
                     * @return Limit The number of entries returned at a time. The maximum value is `1000`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of entries returned at a time. The maximum value is `1000`.
                     * @param _limit The number of entries returned at a time. The maximum value is `1000`.
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
                     * 获取Bill month in the format of "yyyy-mm". This value must be no earlier than the month when Bill 2.0 is activated.
                     * @return Month Bill month in the format of "yyyy-mm". This value must be no earlier than the month when Bill 2.0 is activated.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month in the format of "yyyy-mm". This value must be no earlier than the month when Bill 2.0 is activated.
                     * @param _month Bill month in the format of "yyyy-mm". This value must be no earlier than the month when Bill 2.0 is activated.
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
                     * 获取Cycle type, which can be `byUsedTime` (by billing cycle) or `byPayTime` (by deduction time). This value must be the same as the billing period type in Billing Center for that particular month. You can check your billing cycle at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page.
                     * @return PeriodType Cycle type, which can be `byUsedTime` (by billing cycle) or `byPayTime` (by deduction time). This value must be the same as the billing period type in Billing Center for that particular month. You can check your billing cycle at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page.
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置Cycle type, which can be `byUsedTime` (by billing cycle) or `byPayTime` (by deduction time). This value must be the same as the billing period type in Billing Center for that particular month. You can check your billing cycle at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page.
                     * @param _periodType Cycle type, which can be `byUsedTime` (by billing cycle) or `byPayTime` (by deduction time). This value must be the same as the billing period type in Billing Center for that particular month. You can check your billing cycle at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page.
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
                     * 获取Indicates whether the total number of records is required, used for pagination.
Valid values: `1` (required), `0` (not required).
                     * @return NeedRecordNum Indicates whether the total number of records is required, used for pagination.
Valid values: `1` (required), `0` (not required).
                     * 
                     */
                    int64_t GetNeedRecordNum() const;

                    /**
                     * 设置Indicates whether the total number of records is required, used for pagination.
Valid values: `1` (required), `0` (not required).
                     * @param _needRecordNum Indicates whether the total number of records is required, used for pagination.
Valid values: `1` (required), `0` (not required).
                     * 
                     */
                    void SetNeedRecordNum(const int64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     * 
                     */
                    bool NeedRecordNumHasBeenSet() const;

                    /**
                     * 获取Transaction type. This parameter needs to be input using the `ActionTypeName` value. Valid values:
Monthly subscription purchase
Monthly subscription renewal
Monthly subscription upgrade/downgrade
Monthly subscription refund 
Pay-as-you-go deduction 
Offline project deduction 
Offline product deduction 
Adjustment deduction 
Adjustment compensation 
Hourly pay-as-you-go 
Daily pay-as-you-go 
Monthly pay-as-you-go 
Hourly spot instance 
Offline project adjustment compensation 
Offline product adjustment compensation 
Offer deduction 
Offer compensation 
Pay-as-you-go resource migration in 
Pay-as-you-go resource migration out 
Monthly subscription resource migration in 
Monthly subscription resource migration out 
Prepaid 
Hourly 
RI refund 
Pay-as-you-go reversal 
Monthly subscription to pay-as-you-go 
Minimum spend deduction 
Hourly savings plan fee
                     * @return ActionType Transaction type. This parameter needs to be input using the `ActionTypeName` value. Valid values:
Monthly subscription purchase
Monthly subscription renewal
Monthly subscription upgrade/downgrade
Monthly subscription refund 
Pay-as-you-go deduction 
Offline project deduction 
Offline product deduction 
Adjustment deduction 
Adjustment compensation 
Hourly pay-as-you-go 
Daily pay-as-you-go 
Monthly pay-as-you-go 
Hourly spot instance 
Offline project adjustment compensation 
Offline product adjustment compensation 
Offer deduction 
Offer compensation 
Pay-as-you-go resource migration in 
Pay-as-you-go resource migration out 
Monthly subscription resource migration in 
Monthly subscription resource migration out 
Prepaid 
Hourly 
RI refund 
Pay-as-you-go reversal 
Monthly subscription to pay-as-you-go 
Minimum spend deduction 
Hourly savings plan fee
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Transaction type. This parameter needs to be input using the `ActionTypeName` value. Valid values:
Monthly subscription purchase
Monthly subscription renewal
Monthly subscription upgrade/downgrade
Monthly subscription refund 
Pay-as-you-go deduction 
Offline project deduction 
Offline product deduction 
Adjustment deduction 
Adjustment compensation 
Hourly pay-as-you-go 
Daily pay-as-you-go 
Monthly pay-as-you-go 
Hourly spot instance 
Offline project adjustment compensation 
Offline product adjustment compensation 
Offer deduction 
Offer compensation 
Pay-as-you-go resource migration in 
Pay-as-you-go resource migration out 
Monthly subscription resource migration in 
Monthly subscription resource migration out 
Prepaid 
Hourly 
RI refund 
Pay-as-you-go reversal 
Monthly subscription to pay-as-you-go 
Minimum spend deduction 
Hourly savings plan fee
                     * @param _actionType Transaction type. This parameter needs to be input using the `ActionTypeName` value. Valid values:
Monthly subscription purchase
Monthly subscription renewal
Monthly subscription upgrade/downgrade
Monthly subscription refund 
Pay-as-you-go deduction 
Offline project deduction 
Offline product deduction 
Adjustment deduction 
Adjustment compensation 
Hourly pay-as-you-go 
Daily pay-as-you-go 
Monthly pay-as-you-go 
Hourly spot instance 
Offline project adjustment compensation 
Offline product adjustment compensation 
Offer deduction 
Offer compensation 
Pay-as-you-go resource migration in 
Pay-as-you-go resource migration out 
Monthly subscription resource migration in 
Monthly subscription resource migration out 
Prepaid 
Hourly 
RI refund 
Pay-as-you-go reversal 
Monthly subscription to pay-as-you-go 
Minimum spend deduction 
Hourly savings plan fee
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取ID of the instance to be queried.
                     * @return ResourceId ID of the instance to be queried.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置ID of the instance to be queried.
                     * @param _resourceId ID of the instance to be queried.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: `prePay`, `postPay`.
                     * @return PayMode Billing mode. Valid values: `prePay`, `postPay`.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. Valid values: `prePay`, `postPay`.
                     * @param _payMode Billing mode. Valid values: `prePay`, `postPay`.
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
                     * 获取Product code
Note: To query the product codes (`BusinessCode`) used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     * @return BusinessCode Product code
Note: To query the product codes (`BusinessCode`) used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code
Note: To query the product codes (`BusinessCode`) used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     * @param _businessCode Product code
Note: To query the product codes (`BusinessCode`) used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
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
                     * 获取Cost allocation tag key, which can be customized. This parameter can be used for querying bills after January 2021.
                     * @return TagKey Cost allocation tag key, which can be customized. This parameter can be used for querying bills after January 2021.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Cost allocation tag key, which can be customized. This parameter can be used for querying bills after January 2021.
                     * @param _tagKey Cost allocation tag key, which can be customized. This parameter can be used for querying bills after January 2021.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Resource tag value. If it is left empty, there are no records with tag values set under this tag key.
This parameter can be used for querying bills after January 2021.
                     * @return TagValue Resource tag value. If it is left empty, there are no records with tag values set under this tag key.
This parameter can be used for querying bills after January 2021.
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Resource tag value. If it is left empty, there are no records with tag values set under this tag key.
This parameter can be used for querying bills after January 2021.
                     * @param _tagValue Resource tag value. If it is left empty, there are no records with tag values set under this tag key.
This parameter can be used for querying bills after January 2021.
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of entries returned at a time. The maximum value is `1000`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Bill month in the format of "yyyy-mm". This value must be no earlier than the month when Bill 2.0 is activated.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Cycle type, which can be `byUsedTime` (by billing cycle) or `byPayTime` (by deduction time). This value must be the same as the billing period type in Billing Center for that particular month. You can check your billing cycle at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page.
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * Indicates whether the total number of records is required, used for pagination.
Valid values: `1` (required), `0` (not required).
                     */
                    int64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * Transaction type. This parameter needs to be input using the `ActionTypeName` value. Valid values:
Monthly subscription purchase
Monthly subscription renewal
Monthly subscription upgrade/downgrade
Monthly subscription refund 
Pay-as-you-go deduction 
Offline project deduction 
Offline product deduction 
Adjustment deduction 
Adjustment compensation 
Hourly pay-as-you-go 
Daily pay-as-you-go 
Monthly pay-as-you-go 
Hourly spot instance 
Offline project adjustment compensation 
Offline product adjustment compensation 
Offer deduction 
Offer compensation 
Pay-as-you-go resource migration in 
Pay-as-you-go resource migration out 
Monthly subscription resource migration in 
Monthly subscription resource migration out 
Prepaid 
Hourly 
RI refund 
Pay-as-you-go reversal 
Monthly subscription to pay-as-you-go 
Minimum spend deduction 
Hourly savings plan fee
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * ID of the instance to be queried.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Billing mode. Valid values: `prePay`, `postPay`.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Product code
Note: To query the product codes (`BusinessCode`) used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Cost allocation tag key, which can be customized. This parameter can be used for querying bills after January 2021.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Resource tag value. If it is left empty, there are no records with tag values set under this tag key.
This parameter can be used for querying bills after January 2021.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYFORORGANIZATIONREQUEST_H_
