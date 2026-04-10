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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERUSAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERUSAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/UsageDetail.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerVoucherUsageDetails response structure.
                */
                class DescribeCustomerVoucherUsageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeCustomerVoucherUsageDetailsResponse();
                    ~DescribeCustomerVoucherUsageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Voucher information details
                     * @return Data Voucher information details
                     * 
                     */
                    std::vector<UsageDetail> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Customer UIN
                     * @return CustomerUin Customer UIN
                     * 
                     */
                    int64_t GetCustomerUin() const;

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取Voucher ID.
                     * @return VoucherId Voucher ID.
                     * 
                     */
                    int64_t GetVoucherId() const;

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取Total voucher amount
                     * @return TotalAmount Total voucher amount
                     * 
                     */
                    double GetTotalAmount() const;

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取Voucher balance
                     * @return RemainAmount Voucher balance
                     * 
                     */
                    double GetRemainAmount() const;

                    /**
                     * 判断参数 RemainAmount 是否已赋值
                     * @return RemainAmount 是否已赋值
                     * 
                     */
                    bool RemainAmountHasBeenSet() const;

                    /**
                     * 获取Total number of records
                     * @return TotalRecordsCount Total number of records
                     * 
                     */
                    int64_t GetTotalRecordsCount() const;

                    /**
                     * 判断参数 TotalRecordsCount 是否已赋值
                     * @return TotalRecordsCount 是否已赋值
                     * 
                     */
                    bool TotalRecordsCountHasBeenSet() const;

                    /**
                     * 获取Voucher Usage Month
                     * @return Month Voucher Usage Month
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Number of records in the current month
                     * @return RecordsCountByMonth Number of records in the current month
                     * 
                     */
                    int64_t GetRecordsCountByMonth() const;

                    /**
                     * 判断参数 RecordsCountByMonth 是否已赋值
                     * @return RecordsCountByMonth 是否已赋值
                     * 
                     */
                    bool RecordsCountByMonthHasBeenSet() const;

                private:

                    /**
                     * Voucher information details
                     */
                    std::vector<UsageDetail> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Customer UIN
                     */
                    int64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Voucher ID.
                     */
                    int64_t m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * Total voucher amount
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Voucher balance
                     */
                    double m_remainAmount;
                    bool m_remainAmountHasBeenSet;

                    /**
                     * Total number of records
                     */
                    int64_t m_totalRecordsCount;
                    bool m_totalRecordsCountHasBeenSet;

                    /**
                     * Voucher Usage Month
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Number of records in the current month
                     */
                    int64_t m_recordsCountByMonth;
                    bool m_recordsCountByMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERUSAGEDETAILSRESPONSE_H_
