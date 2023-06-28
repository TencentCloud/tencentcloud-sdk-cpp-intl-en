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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Quantity, maximum is 100
                     * @return Limit Quantity, maximum is 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity, maximum is 100
                     * @param _limit Quantity, maximum is 100
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
                     * 获取The period type. byUsedTime: By usage period; byPayTime: By payment period. Must be the same as the period of the current monthly bill of the Billing Center. You can check your bill statistics period type at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page. 
                     * @return PeriodType The period type. byUsedTime: By usage period; byPayTime: By payment period. Must be the same as the period of the current monthly bill of the Billing Center. You can check your bill statistics period type at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page. 
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置The period type. byUsedTime: By usage period; byPayTime: By payment period. Must be the same as the period of the current monthly bill of the Billing Center. You can check your bill statistics period type at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page. 
                     * @param _periodType The period type. byUsedTime: By usage period; byPayTime: By payment period. Must be the same as the period of the current monthly bill of the Billing Center. You can check your bill statistics period type at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page. 
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
                     * 获取Month; format: yyyy-mm. You only have to enter either Month or BeginTime and EndTime. When you enter values for BeginTime and EndTime, Month becomes invalid. This value must be no earlier than the month when Bill 2.0 is activated; last 24 months data are available.
                     * @return Month Month; format: yyyy-mm. You only have to enter either Month or BeginTime and EndTime. When you enter values for BeginTime and EndTime, Month becomes invalid. This value must be no earlier than the month when Bill 2.0 is activated; last 24 months data are available.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month; format: yyyy-mm. You only have to enter either Month or BeginTime and EndTime. When you enter values for BeginTime and EndTime, Month becomes invalid. This value must be no earlier than the month when Bill 2.0 is activated; last 24 months data are available.
                     * @param _month Month; format: yyyy-mm. You only have to enter either Month or BeginTime and EndTime. When you enter values for BeginTime and EndTime, Month becomes invalid. This value must be no earlier than the month when Bill 2.0 is activated; last 24 months data are available.
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
                     * 获取The start time of the query range, which should be in the format Y-m-d H:i:s . The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use Month to query the billing details of a month.
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     * @return BeginTime The start time of the query range, which should be in the format Y-m-d H:i:s . The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use Month to query the billing details of a month.
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time of the query range, which should be in the format Y-m-d H:i:s . The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use Month to query the billing details of a month.
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     * @param _beginTime The start time of the query range, which should be in the format Y-m-d H:i:s . The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use Month to query the billing details of a month.
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
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
                     * 获取The end time of the query range, which should be in the format `Y-m-d H:i:s `. The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use `Month` to query the billing details of a month. 
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     * @return EndTime The end time of the query range, which should be in the format `Y-m-d H:i:s `. The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use `Month` to query the billing details of a month. 
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the query range, which should be in the format `Y-m-d H:i:s `. The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use `Month` to query the billing details of a month. 
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     * @param _endTime The end time of the query range, which should be in the format `Y-m-d H:i:s `. The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use `Month` to query the billing details of a month. 
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
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
                     * 获取Indicates whether or not the total number of records of accessing the list is required, used for frontend pages.
1 = yes, 0 = no
                     * @return NeedRecordNum Indicates whether or not the total number of records of accessing the list is required, used for frontend pages.
1 = yes, 0 = no
                     * 
                     */
                    int64_t GetNeedRecordNum() const;

                    /**
                     * 设置Indicates whether or not the total number of records of accessing the list is required, used for frontend pages.
1 = yes, 0 = no
                     * @param _needRecordNum Indicates whether or not the total number of records of accessing the list is required, used for frontend pages.
1 = yes, 0 = no
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
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Queries information on a specified product
                     * @param _productCode Queries information on a specified product
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
                     * 获取Action type to query. Valid values:
Purchase
Renewal
Modify
Refund
Deduction
Hourly settlement
Daily settlement
Monthly settlement
Offline project deduction
Offline deduction
adjust-CR
adjust-DR
One-off RI Fee
Spot
Hourly RI fee
New monthly subscription
Monthly subscription renewal
Monthly subscription specification adjustment
Monthly subscription specification adjustment
Monthly subscription refund
                     * @return ActionType Action type to query. Valid values:
Purchase
Renewal
Modify
Refund
Deduction
Hourly settlement
Daily settlement
Monthly settlement
Offline project deduction
Offline deduction
adjust-CR
adjust-DR
One-off RI Fee
Spot
Hourly RI fee
New monthly subscription
Monthly subscription renewal
Monthly subscription specification adjustment
Monthly subscription specification adjustment
Monthly subscription refund
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action type to query. Valid values:
Purchase
Renewal
Modify
Refund
Deduction
Hourly settlement
Daily settlement
Monthly settlement
Offline project deduction
Offline deduction
adjust-CR
adjust-DR
One-off RI Fee
Spot
Hourly RI fee
New monthly subscription
Monthly subscription renewal
Monthly subscription specification adjustment
Monthly subscription specification adjustment
Monthly subscription refund
                     * @param _actionType Action type to query. Valid values:
Purchase
Renewal
Modify
Refund
Deduction
Hourly settlement
Daily settlement
Monthly settlement
Offline project deduction
Offline deduction
adjust-CR
adjust-DR
One-off RI Fee
Spot
Hourly RI fee
New monthly subscription
Monthly subscription renewal
Monthly subscription specification adjustment
Monthly subscription specification adjustment
Monthly subscription refund
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
                     * 获取Project ID: ID of the project to which the resource belongs
                     * @return ProjectId Project ID: ID of the project to which the resource belongs
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID: ID of the project to which the resource belongs
                     * @param _projectId Project ID: ID of the project to which the resource belongs
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
                     * 获取Product code
Note: To query the product codes used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     * @return BusinessCode Product code
Note: To query the product codes used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code
Note: To query the product codes used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     * @param _businessCode Product code
Note: To query the product codes used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
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
                     * 获取Context information returned by the last request. You can set `Month` to `2023-05` for query by page to accelerate queries. We recommend users whose data volume is over 100 thousand entries use the paginated query feature, which can help greatly speed up your queries.
                     * @return Context Context information returned by the last request. You can set `Month` to `2023-05` for query by page to accelerate queries. We recommend users whose data volume is over 100 thousand entries use the paginated query feature, which can help greatly speed up your queries.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Context information returned by the last request. You can set `Month` to `2023-05` for query by page to accelerate queries. We recommend users whose data volume is over 100 thousand entries use the paginated query feature, which can help greatly speed up your queries.
                     * @param _context Context information returned by the last request. You can set `Month` to `2023-05` for query by page to accelerate queries. We recommend users whose data volume is over 100 thousand entries use the paginated query feature, which can help greatly speed up your queries.
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
                     * 获取
                     * @return PayerUin 
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置
                     * @param _payerUin 
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
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Quantity, maximum is 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The period type. byUsedTime: By usage period; byPayTime: By payment period. Must be the same as the period of the current monthly bill of the Billing Center. You can check your bill statistics period type at the top of the [Bill Overview](https://console.cloud.tencent.com/expense/bill/overview) page. 
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * Month; format: yyyy-mm. You only have to enter either Month or BeginTime and EndTime. When you enter values for BeginTime and EndTime, Month becomes invalid. This value must be no earlier than the month when Bill 2.0 is activated; last 24 months data are available.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * The start time of the query range, which should be in the format Y-m-d H:i:s . The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use Month to query the billing details of a month.
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time of the query range, which should be in the format `Y-m-d H:i:s `. The query range must be in the last 18 months and cannot be earlier than May 2018 (when Bill 2.0 was introduced). The start time and end time must be in the same month.

Example: tccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --BeginTime '2023-04-01 12:05:15' --EndTime '2023-04-18 12:00:10' --ProjectId 1000000731  --version "2018-07-09"

Alternatively, you can use `Month` to query the billing details of a month. 
Example:
ccli billing DescribeBillDetail --cli-unfold-argument --Offset 1 --Limit 100 --Month 2023-04  --version "2018-07-09" --ResourceId "disk-oj9okstm"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Indicates whether or not the total number of records of accessing the list is required, used for frontend pages.
1 = yes, 0 = no
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
                     * Action type to query. Valid values:
Purchase
Renewal
Modify
Refund
Deduction
Hourly settlement
Daily settlement
Monthly settlement
Offline project deduction
Offline deduction
adjust-CR
adjust-DR
One-off RI Fee
Spot
Hourly RI fee
New monthly subscription
Monthly subscription renewal
Monthly subscription specification adjustment
Monthly subscription specification adjustment
Monthly subscription refund
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Project ID: ID of the project to which the resource belongs
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Product code
Note: To query the product codes used in the current month, call <a href="https://intl.cloud.tencent.com/document/product/555/35761?from_cn_redirect=1">DescribeBillSummaryByProduct</a>.
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Context information returned by the last request. You can set `Month` to `2023-05` for query by page to accelerate queries. We recommend users whose data volume is over 100 thousand entries use the paginated query feature, which can help greatly speed up your queries.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDETAILREQUEST_H_
