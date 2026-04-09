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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/VoucherInfos.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherInfo response structure.
                */
                class DescribeVoucherInfoResponse : public AbstractModel
                {
                public:
                    DescribeVoucherInfoResponse();
                    ~DescribeVoucherInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total count</p>
                     * @return TotalCount <p>Total count</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Total balance (differential)</p>
                     * @return TotalBalance <p>Total balance (differential)</p>
                     * 
                     */
                    int64_t GetTotalBalance() const;

                    /**
                     * 判断参数 TotalBalance 是否已赋值
                     * @return TotalBalance 是否已赋值
                     * 
                     */
                    bool TotalBalanceHasBeenSet() const;

                    /**
                     * 获取<p>Voucher information related to</p>
                     * @return VoucherInfos <p>Voucher information related to</p>
                     * 
                     */
                    std::vector<VoucherInfos> GetVoucherInfos() const;

                    /**
                     * 判断参数 VoucherInfos 是否已赋值
                     * @return VoucherInfos 是否已赋值
                     * 
                     */
                    bool VoucherInfosHasBeenSet() const;

                    /**
                     * 获取<p>Unit of the amount field in the API response</p><p>Default value: micro</p><p>Currency unit: micro (microcent)<br>Voucher issuance and use are processed with 8-digit high-precision, so the currency unit defaults to micro (microcent). If CNY or USD is needed, convert using the following formula:<br>CNY: 1 micro = 0.00000001  yuan<br>USD: 1 micro = 0.00000001  USD</p>
                     * @return Unit <p>Unit of the amount field in the API response</p><p>Default value: micro</p><p>Currency unit: micro (microcent)<br>Voucher issuance and use are processed with 8-digit high-precision, so the currency unit defaults to micro (microcent). If CNY or USD is needed, convert using the following formula:<br>CNY: 1 micro = 0.00000001  yuan<br>USD: 1 micro = 0.00000001  USD</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * <p>Total count</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Total balance (differential)</p>
                     */
                    int64_t m_totalBalance;
                    bool m_totalBalanceHasBeenSet;

                    /**
                     * <p>Voucher information related to</p>
                     */
                    std::vector<VoucherInfos> m_voucherInfos;
                    bool m_voucherInfosHasBeenSet;

                    /**
                     * <p>Unit of the amount field in the API response</p><p>Default value: micro</p><p>Currency unit: micro (microcent)<br>Voucher issuance and use are processed with 8-digit high-precision, so the currency unit defaults to micro (microcent). If CNY or USD is needed, convert using the following formula:<br>CNY: 1 micro = 0.00000001  yuan<br>USD: 1 micro = 0.00000001  USD</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_
