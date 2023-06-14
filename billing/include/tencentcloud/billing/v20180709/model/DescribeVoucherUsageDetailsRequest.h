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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSREQUEST_H_

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
                * DescribeVoucherUsageDetails request structure.
                */
                class DescribeVoucherUsageDetailsRequest : public AbstractModel
                {
                public:
                    DescribeVoucherUsageDetailsRequest();
                    ~DescribeVoucherUsageDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of records per page. The default is 20, and the maximum is 1,000.
                     * @return Limit The number of records per page. The default is 20, and the maximum is 1,000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of records per page. The default is 20, and the maximum is 1,000.
                     * @param _limit The number of records per page. The default is 20, and the maximum is 1,000.
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
                     * 获取The page number the records start from. The default is 1.
                     * @return Offset The page number the records start from. The default is 1.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page number the records start from. The default is 1.
                     * @param _offset The page number the records start from. The default is 1.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The voucher ID.
                     * @return VoucherId The voucher ID.
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置The voucher ID.
                     * @param _voucherId The voucher ID.
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取The operator. The default is the UIN of the current.
                     * @return Operator The operator. The default is the UIN of the current.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置The operator. The default is the UIN of the current.
                     * @param _operator The operator. The default is the UIN of the current.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * The number of records per page. The default is 20, and the maximum is 1,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page number the records start from. The default is 1.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The voucher ID.
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * The operator. The default is the UIN of the current.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSREQUEST_H_
