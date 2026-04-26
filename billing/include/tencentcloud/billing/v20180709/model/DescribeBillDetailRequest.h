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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILREQUEST_H_

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
                * DescribeBillDetail request structure.
                */
                class DescribeBillDetailRequest : public AbstractModel
                {
                public:
                    DescribeBillDetailRequest();
                    ~DescribeBillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     * @return Offset Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     * @param _offset Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
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
                     * 获取The number of entries returned at a time. The maximum value is `300`.
                     * @return Limit The number of entries returned at a time. The maximum value is `300`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of entries returned at a time. The maximum value is `300`.
                     * @param _limit The number of entries returned at a time. The maximum value is `300`.
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
                     * 获取Period type, byUsedTime by billing period/byPayTime by fee deduction cycle. It should be consistent with the billing cycle for the month in the expense center. You can go to the top of the [bill overview](https://console.cloud.tencent.com/expense/bill/overview) page to view and confirm your billing cycle type.
                     * @return PeriodType Period type, byUsedTime by billing period/byPayTime by fee deduction cycle. It should be consistent with the billing cycle for the month in the expense center. You can go to the top of the [bill overview](https://console.cloud.tencent.com/expense/bill/overview) page to view and confirm your billing cycle type.
                     * @deprecated
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置Period type, byUsedTime by billing period/byPayTime by fee deduction cycle. It should be consistent with the billing cycle for the month in the expense center. You can go to the top of the [bill overview](https://console.cloud.tencent.com/expense/bill/overview) page to view and confirm your billing cycle type.
                     * @param _periodType Period type, byUsedTime by billing period/byPayTime by fee deduction cycle. It should be consistent with the billing cycle for the month in the expense center. You can go to the top of the [bill overview](https://console.cloud.tencent.com/expense/bill/overview) page to view and confirm your billing cycle type.
                     * @deprecated
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * @deprecated
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取The month is in the format of yyyy-mm. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. Data within the last 18 months can be pulled at most.
                     * @return Month The month is in the format of yyyy-mm. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. Data within the last 18 months can be pulled at most.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置The month is in the format of yyyy-mm. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. Data within the last 18 months can be pulled at most.
                     * @param _month The month is in the format of yyyy-mm. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. Data within the last 18 months can be pulled at most.
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
                     * 获取The start time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * @return BeginTime The start time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * @param _beginTime The start time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * @return EndTime The end time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * @param _endTime The end time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Total number of records for access list needed for frontend pagination
1: needed, 0: not needed
                     * @return NeedRecordNum Total number of records for access list needed for frontend pagination
1: needed, 0: not needed
                     * 
                     */
                    int64_t GetNeedRecordNum() const;

                    /**
                     * 设置Total number of records for access list needed for frontend pagination
1: needed, 0: not needed
                     * @param _needRecordNum Total number of records for access list needed for frontend pagination
1: needed, 0: not needed
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
                     * 获取Queries information on a specified product
                     * @return ProductCode Queries information on a specified product
                     * @deprecated
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Queries information on a specified product
                     * @param _productCode Queries information on a specified product
                     * @deprecated
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * @deprecated
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取Billing mode: prePay/postPay
                     * @return PayMode Billing mode: prePay/postPay
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode: prePay/postPay
                     * @param _payMode Billing mode: prePay/postPay
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
                     * 获取Queries information on a specified resource
                     * @return ResourceId Queries information on a specified resource
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Queries information on a specified resource
                     * @param _resourceId Queries information on a specified resource
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
                     * 获取Hourly settlement
Daily settlement
Yearly/monthly subscription
Spot
New yearly/monthly subscription
Yearly/monthly subscription renewal
Yearly/monthly subscription specification adjustment
Yearly/monthly subscription refund
Adjustment - deduction
Adjustment - refund
Hourly RI fee
One-off RI Fee
Hourly Savings Plan fee
Offline project deduction
Offline product deduction
                     * @return ActionType Hourly settlement
Daily settlement
Yearly/monthly subscription
Spot
New yearly/monthly subscription
Yearly/monthly subscription renewal
Yearly/monthly subscription specification adjustment
Yearly/monthly subscription refund
Adjustment - deduction
Adjustment - refund
Hourly RI fee
One-off RI Fee
Hourly Savings Plan fee
Offline project deduction
Offline product deduction
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Hourly settlement
Daily settlement
Yearly/monthly subscription
Spot
New yearly/monthly subscription
Yearly/monthly subscription renewal
Yearly/monthly subscription specification adjustment
Yearly/monthly subscription refund
Adjustment - deduction
Adjustment - refund
Hourly RI fee
One-off RI Fee
Hourly Savings Plan fee
Offline project deduction
Offline product deduction
                     * @param _actionType Hourly settlement
Daily settlement
Yearly/monthly subscription
Spot
New yearly/monthly subscription
Yearly/monthly subscription renewal
Yearly/monthly subscription specification adjustment
Yearly/monthly subscription refund
Adjustment - deduction
Adjustment - refund
Hourly RI fee
One-off RI Fee
Hourly Savings Plan fee
Offline project deduction
Offline product deduction
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
                     * 获取Project ID: Project ID of the resource
                     * @return ProjectId Project ID: Project ID of the resource
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID: Project ID of the resource
                     * @param _projectId Project ID: Project ID of the resource
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
                     * 获取Product name code
Remark: If needed to obtain BusinessCode used in current month, invoke API: <a href="https://www.tencentcloud.com/document/product/555/35761?from_cn_redirect=1">Get fee distribution by product</a>
                     * @return BusinessCode Product name code
Remark: If needed to obtain BusinessCode used in current month, invoke API: <a href="https://www.tencentcloud.com/document/product/555/35761?from_cn_redirect=1">Get fee distribution by product</a>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product name code
Remark: If needed to obtain BusinessCode used in current month, invoke API: <a href="https://www.tencentcloud.com/document/product/555/35761?from_cn_redirect=1">Get fee distribution by product</a>
                     * @param _businessCode Product name code
Remark: If needed to obtain BusinessCode used in current month, invoke API: <a href="https://www.tencentcloud.com/document/product/555/35761?from_cn_redirect=1">Get fee distribution by product</a>
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
                     * 获取Context information returned from the last request. Paginated query of data for months with Month>=2023-05 can speed up query speed. Recommended for users with data volume at tens of thousands level. Query speed can be improved by 2-10x.
                     * @return Context Context information returned from the last request. Paginated query of data for months with Month>=2023-05 can speed up query speed. Recommended for users with data volume at tens of thousands level. Query speed can be improved by 2-10x.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Context information returned from the last request. Paginated query of data for months with Month>=2023-05 can speed up query speed. Recommended for users with data volume at tens of thousands level. Query speed can be improved by 2-10x.
                     * @param _context Context information returned from the last request. Paginated query of data for months with Month>=2023-05 can speed up query speed. Recommended for users with data volume at tens of thousands level. Query speed can be improved by 2-10x.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.
                     * @return PayerUin Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.
                     * @param _payerUin Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                private:

                    /**
                     * Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of entries returned at a time. The maximum value is `300`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Period type, byUsedTime by billing period/byPayTime by fee deduction cycle. It should be consistent with the billing cycle for the month in the expense center. You can go to the top of the [bill overview](https://console.cloud.tencent.com/expense/bill/overview) page to view and confirm your billing cycle type.
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * The month is in the format of yyyy-mm. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. Data within the last 18 months can be pulled at most.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * The start time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time of the period in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be specified. If BeginTime&EndTime is specified, the Month field is invalid. BeginTime and EndTime must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month. Data within the last 18 months can be pulled at most.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Total number of records for access list needed for frontend pagination
1: needed, 0: not needed
                     */
                    int64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * Queries information on a specified product
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Billing mode: prePay/postPay
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Queries information on a specified resource
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Hourly settlement
Daily settlement
Yearly/monthly subscription
Spot
New yearly/monthly subscription
Yearly/monthly subscription renewal
Yearly/monthly subscription specification adjustment
Yearly/monthly subscription refund
Adjustment - deduction
Adjustment - refund
Hourly RI fee
One-off RI Fee
Hourly Savings Plan fee
Offline project deduction
Offline product deduction
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Project ID: Project ID of the resource
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Product name code
Remark: If needed to obtain BusinessCode used in current month, invoke API: <a href="https://www.tencentcloud.com/document/product/555/35761?from_cn_redirect=1">Get fee distribution by product</a>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Context information returned from the last request. Paginated query of data for months with Month>=2023-05 can speed up query speed. Recommended for users with data volume at tens of thousands level. Query speed can be improved by 2-10x.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILREQUEST_H_
