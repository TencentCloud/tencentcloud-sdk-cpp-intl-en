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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONREQUEST_H_

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
                * DescribeCostSummaryByRegion request structure.
                */
                class DescribeCostSummaryByRegionRequest : public AbstractModel
                {
                public:
                    DescribeCostSummaryByRegionRequest();
                    ~DescribeCostSummaryByRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The value must be of the same month as `EndTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     * @return BeginTime The value must be of the same month as `EndTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The value must be of the same month as `EndTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     * @param _beginTime The value must be of the same month as `EndTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
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
                     * 获取The value must be of the same month as `BeginTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     * @return EndTime The value must be of the same month as `BeginTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The value must be of the same month as `BeginTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     * @param _endTime The value must be of the same month as `BeginTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
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
                     * 获取Data quantity per fetch. The maximum value is `100`.
                     * @return Limit Data quantity per fetch. The maximum value is `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Data quantity per fetch. The maximum value is `100`.
                     * @param _limit Data quantity per fetch. The maximum value is `100`.
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
                     * 获取Offset, which starts from 0 by default
                     * @return Offset Offset, which starts from 0 by default
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which starts from 0 by default
                     * @param _offset Offset, which starts from 0 by default
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
                     * 获取UIN of the user querying the bill data
                     * @return PayerUin UIN of the user querying the bill data
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置UIN of the user querying the bill data
                     * @param _payerUin UIN of the user querying the bill data
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取Whether to return the record count. 0 for no, 1 for yes. Default is no.
                     * @return NeedRecordNum Whether to return the record count. 0 for no, 1 for yes. Default is no.
                     * 
                     */
                    uint64_t GetNeedRecordNum() const;

                    /**
                     * 设置Whether to return the record count. 0 for no, 1 for yes. Default is no.
                     * @param _needRecordNum Whether to return the record count. 0 for no, 1 for yes. Default is no.
                     * 
                     */
                    void SetNeedRecordNum(const uint64_t& _needRecordNum);

                    /**
                     * 判断参数 NeedRecordNum 是否已赋值
                     * @return NeedRecordNum 是否已赋值
                     * 
                     */
                    bool NeedRecordNumHasBeenSet() const;

                private:

                    /**
                     * The value must be of the same month as `EndTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The value must be of the same month as `BeginTime`. The query period must start and end on the same month and the query result returned will be of the entire month. For example, if both `BeginTime` and `EndTime` are `2018-09`, the data returned will be for the entire month of September 2018.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Data quantity per fetch. The maximum value is `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which starts from 0 by default
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * UIN of the user querying the bill data
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Whether to return the record count. 0 for no, 1 for yes. Default is no.
                     */
                    uint64_t m_needRecordNum;
                    bool m_needRecordNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONREQUEST_H_
