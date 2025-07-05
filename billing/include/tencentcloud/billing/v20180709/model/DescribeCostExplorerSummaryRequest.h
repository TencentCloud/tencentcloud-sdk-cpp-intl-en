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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseConditions.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostExplorerSummary request structure.
                */
                class DescribeCostExplorerSummaryRequest : public AbstractModel
                {
                public:
                    DescribeCostExplorerSummaryRequest();
                    ~DescribeCostExplorerSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     * @return BeginTime The start time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     * @param _beginTime The start time of the period in the format of yyyy-mm-dd hh:ii:ss.
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
                     * 获取The end time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     * @return EndTime The end time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     * @param _endTime The end time of the period in the format of yyyy-mm-dd hh:ii:ss.
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
                     * 获取Bill type: 1-cost bill, 2-consumption bill
                     * @return BillType Bill type: 1-cost bill, 2-consumption bill
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置Bill type: 1-cost bill, 2-consumption bill
                     * @param _billType Bill type: 1-cost bill, 2-consumption bill
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取Statistical period: day-day, month-month;
                     * @return PeriodType Statistical period: day-day, month-month;
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置Statistical period: day-day, month-month;
                     * @param _periodType Statistical period: day-day, month-month;
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
                     * 获取Classification dimension (data aggregation dimension). Query classification dimension. (Use classification dimension code input parameter.) Input parameter enumeration value:default = Total only
feeType = Fee typebillType = Bill typebusiness = Product
product = Sub-productregion=Region
zone = Availability zoneactionType = Transaction typepayMode = Billing modetags = Tagproject = ProjectpayerUin = Payer accountownerUin = User account
                     * @return Dimensions Classification dimension (data aggregation dimension). Query classification dimension. (Use classification dimension code input parameter.) Input parameter enumeration value:default = Total only
feeType = Fee typebillType = Bill typebusiness = Product
product = Sub-productregion=Region
zone = Availability zoneactionType = Transaction typepayMode = Billing modetags = Tagproject = ProjectpayerUin = Payer accountownerUin = User account
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置Classification dimension (data aggregation dimension). Query classification dimension. (Use classification dimension code input parameter.) Input parameter enumeration value:default = Total only
feeType = Fee typebillType = Bill typebusiness = Product
product = Sub-productregion=Region
zone = Availability zoneactionType = Transaction typepayMode = Billing modetags = Tagproject = ProjectpayerUin = Payer accountownerUin = User account
                     * @param _dimensions Classification dimension (data aggregation dimension). Query classification dimension. (Use classification dimension code input parameter.) Input parameter enumeration value:default = Total only
feeType = Fee typebillType = Bill typebusiness = Product
product = Sub-productregion=Region
zone = Availability zoneactionType = Transaction typepayMode = Billing modetags = Tagproject = ProjectpayerUin = Payer accountownerUin = User account
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Fee type: cost-total cost, totalCost-original price cost
                     * @return FeeType Fee type: cost-total cost, totalCost-original price cost
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置Fee type: cost-total cost, totalCost-original price cost
                     * @param _feeType Fee type: cost-total cost, totalCost-original price cost
                     * 
                     */
                    void SetFeeType(const std::string& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取Quantity. The maximum value per page is 100.
                     * @return PageSize Quantity. The maximum value per page is 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Quantity. The maximum value per page is 100.
                     * @param _pageSize Quantity. The maximum value per page is 100.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Starting page, where PageNo=1 indicates the first page, PageNo=2 indicates the second page, and so on.
                     * @return PageNo Starting page, where PageNo=1 indicates the first page, PageNo=2 indicates the second page, and so on.
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置Starting page, where PageNo=1 indicates the first page, PageNo=2 indicates the second page, and so on.
                     * @param _pageNo Starting page, where PageNo=1 indicates the first page, PageNo=2 indicates the second page, and so on.
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Cost allocation tag value
                     * @return TagKeyStr Cost allocation tag value
                     * 
                     */
                    std::string GetTagKeyStr() const;

                    /**
                     * 设置Cost allocation tag value
                     * @param _tagKeyStr Cost allocation tag value
                     * 
                     */
                    void SetTagKeyStr(const std::string& _tagKeyStr);

                    /**
                     * 判断参数 TagKeyStr 是否已赋值
                     * @return TagKeyStr 是否已赋值
                     * 
                     */
                    bool TagKeyStrHasBeenSet() const;

                    /**
                     * 获取Whether the filter box is needed: 1- indicates it is needed, 0- indicates it is not needed. If it is not specified, it is not required by default.
                     * @return NeedConditionValue Whether the filter box is needed: 1- indicates it is needed, 0- indicates it is not needed. If it is not specified, it is not required by default.
                     * 
                     */
                    std::string GetNeedConditionValue() const;

                    /**
                     * 设置Whether the filter box is needed: 1- indicates it is needed, 0- indicates it is not needed. If it is not specified, it is not required by default.
                     * @param _needConditionValue Whether the filter box is needed: 1- indicates it is needed, 0- indicates it is not needed. If it is not specified, it is not required by default.
                     * 
                     */
                    void SetNeedConditionValue(const std::string& _needConditionValue);

                    /**
                     * 判断参数 NeedConditionValue 是否已赋值
                     * @return NeedConditionValue 是否已赋值
                     * 
                     */
                    bool NeedConditionValueHasBeenSet() const;

                    /**
                     * 获取Filter parameters
                     * @return Conditions Filter parameters
                     * 
                     */
                    AnalyseConditions GetConditions() const;

                    /**
                     * 设置Filter parameters
                     * @param _conditions Filter parameters
                     * 
                     */
                    void SetConditions(const AnalyseConditions& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * The start time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time of the period in the format of yyyy-mm-dd hh:ii:ss.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Bill type: 1-cost bill, 2-consumption bill
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * Statistical period: day-day, month-month;
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * Classification dimension (data aggregation dimension). Query classification dimension. (Use classification dimension code input parameter.) Input parameter enumeration value:default = Total only
feeType = Fee typebillType = Bill typebusiness = Product
product = Sub-productregion=Region
zone = Availability zoneactionType = Transaction typepayMode = Billing modetags = Tagproject = ProjectpayerUin = Payer accountownerUin = User account
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Fee type: cost-total cost, totalCost-original price cost
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * Quantity. The maximum value per page is 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Starting page, where PageNo=1 indicates the first page, PageNo=2 indicates the second page, and so on.
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Cost allocation tag value
                     */
                    std::string m_tagKeyStr;
                    bool m_tagKeyStrHasBeenSet;

                    /**
                     * Whether the filter box is needed: 1- indicates it is needed, 0- indicates it is not needed. If it is not specified, it is not required by default.
                     */
                    std::string m_needConditionValue;
                    bool m_needConditionValueHasBeenSet;

                    /**
                     * Filter parameters
                     */
                    AnalyseConditions m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYREQUEST_H_
