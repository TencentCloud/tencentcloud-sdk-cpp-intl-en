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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYREGIONREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYREGIONREQUEST_H_

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
                * DescribeBillSummaryByRegion request structure.
                */
                class DescribeBillSummaryByRegionRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryByRegionRequest();
                    ~DescribeBillSummaryByRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries bill data user’s UIN
                     * @return PayerUin Queries bill data user’s UIN
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Queries bill data user’s UIN
                     * @param PayerUin Queries bill data user’s UIN
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取Only beginning in the current month is supported, and it must be the same month as the EndTime. For example, 2018-09-01 00:00:00.
                     * @return BeginTime Only beginning in the current month is supported, and it must be the same month as the EndTime. For example, 2018-09-01 00:00:00.
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Only beginning in the current month is supported, and it must be the same month as the EndTime. For example, 2018-09-01 00:00:00.
                     * @param BeginTime Only beginning in the current month is supported, and it must be the same month as the EndTime. For example, 2018-09-01 00:00:00.
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Only ending in the current month is supported, and it must be the same month as the BeginTime. For example, 2018-09-30 23:59:59.
                     * @return EndTime Only ending in the current month is supported, and it must be the same month as the BeginTime. For example, 2018-09-30 23:59:59.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Only ending in the current month is supported, and it must be the same month as the BeginTime. For example, 2018-09-30 23:59:59.
                     * @param EndTime Only ending in the current month is supported, and it must be the same month as the BeginTime. For example, 2018-09-30 23:59:59.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Queries bill data user’s UIN
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Only beginning in the current month is supported, and it must be the same month as the EndTime. For example, 2018-09-01 00:00:00.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Only ending in the current month is supported, and it must be the same month as the BeginTime. For example, 2018-09-30 23:59:59.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYREGIONREQUEST_H_
