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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_

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
                * DescribeCostDetail request structure.
                */
                class DescribeCostDetailRequest : public AbstractModel
                {
                public:
                    DescribeCostDetailRequest();
                    ~DescribeCostDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of entries returned at a time. The maximum value is `100`.
                     * @return Limit The number of entries returned at a time. The maximum value is `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of entries returned at a time. The maximum value is `100`.
                     * @param _limit The number of entries returned at a time. The maximum value is `100`.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取Cycle start time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     * @return BeginTime Cycle start time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Cycle start time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     * @param _beginTime Cycle start time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
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
                     * 获取Cycle end time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     * @return EndTime Cycle end time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Cycle end time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     * @param _endTime Cycle end time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
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
                     * 获取Whether the total number of records in the list is needed, for frontend pagination1: needed, 0: not needed
                     * @return NeedRecordNum Whether the total number of records in the list is needed, for frontend pagination1: needed, 0: not needed
                     * 
                     */
                    uint64_t GetNeedRecordNum() const;

                    /**
                     * 设置Whether the total number of records in the list is needed, for frontend pagination1: needed, 0: not needed
                     * @param _needRecordNum Whether the total number of records in the list is needed, for frontend pagination1: needed, 0: not needed
                     * 
                     */
                    void SetNeedRecordNum(const uint64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     * 
                     */
                    bool NeedRecordNumHasBeenSet() const;

                    /**
                     * 获取Month, in the format of yyyy-mm. Either Month or BeginTime&EndTime must be entered, and if BeginTime&EndTime is entered, Month becomes invalid. It cannot be earlier than the month when cost analysis is activated. Data of up to 24 months can be retrieved.
                     * @return Month Month, in the format of yyyy-mm. Either Month or BeginTime&EndTime must be entered, and if BeginTime&EndTime is entered, Month becomes invalid. It cannot be earlier than the month when cost analysis is activated. Data of up to 24 months can be retrieved.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month, in the format of yyyy-mm. Either Month or BeginTime&EndTime must be entered, and if BeginTime&EndTime is entered, Month becomes invalid. It cannot be earlier than the month when cost analysis is activated. Data of up to 24 months can be retrieved.
                     * @param _month Month, in the format of yyyy-mm. Either Month or BeginTime&EndTime must be entered, and if BeginTime&EndTime is entered, Month becomes invalid. It cannot be earlier than the month when cost analysis is activated. Data of up to 24 months can be retrieved.
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
                     * 获取Used to query information of a specified product (currently not available)
                     * @return ProductCode Used to query information of a specified product (currently not available)
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Used to query information of a specified product (currently not available)
                     * @param _productCode Used to query information of a specified product (currently not available)
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
                     * 获取Payment mode. Options include prePay and postPay.
                     * @return PayMode Payment mode. Options include prePay and postPay.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode. Options include prePay and postPay.
                     * @param _payMode Payment mode. Options include prePay and postPay.
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
                     * 获取Used to query information of a specified resource
                     * @return ResourceId Used to query information of a specified resource
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Used to query information of a specified resource
                     * @param _resourceId Used to query information of a specified resource
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * The number of entries returned at a time. The maximum value is `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Cycle start time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Cycle end time in the format of yyyy-mm-dd hh:ii:ss. Either Month or BeginTime&EndTime must be entered, and if this field is present, Month becomes invalid. BeginTime and EndTime must be entered together, and must be in the same month. Cross-month retrieval is not currently supported. Data retrievable is the data after cost analysis is activated and within the past 24 months.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether the total number of records in the list is needed, for frontend pagination1: needed, 0: not needed
                     */
                    uint64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                    /**
                     * Month, in the format of yyyy-mm. Either Month or BeginTime&EndTime must be entered, and if BeginTime&EndTime is entered, Month becomes invalid. It cannot be earlier than the month when cost analysis is activated. Data of up to 24 months can be retrieved.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Used to query information of a specified product (currently not available)
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Payment mode. Options include prePay and postPay.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Used to query information of a specified resource
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILREQUEST_H_
