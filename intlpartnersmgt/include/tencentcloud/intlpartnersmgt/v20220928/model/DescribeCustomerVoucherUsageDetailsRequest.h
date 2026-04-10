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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERUSAGEDETAILSREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERUSAGEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * DescribeCustomerVoucherUsageDetails request structure.
                */
                class DescribeCustomerVoucherUsageDetailsRequest : public AbstractModel
                {
                public:
                    DescribeCustomerVoucherUsageDetailsRequest();
                    ~DescribeCustomerVoucherUsageDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, starting from 1
                     * @return Page Page number, starting from 1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number, starting from 1
                     * @param _page Page number, starting from 1
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of items per page, range 1-100
                     * @return PageSize Number of items per page, range 1-100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page, range 1-100
                     * @param _pageSize Number of items per page, range 1-100
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Customer UIN
                     * @return CustomerUin Customer UIN
                     * 
                     */
                    int64_t GetCustomerUin() const;

                    /**
                     * 设置Customer UIN
                     * @param _customerUin Customer UIN
                     * 
                     */
                    void SetCustomerUin(const int64_t& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取Voucher ID
                     * @return VoucherId Voucher ID
                     * 
                     */
                    int64_t GetVoucherId() const;

                    /**
                     * 设置Voucher ID
                     * @param _voucherId Voucher ID
                     * 
                     */
                    void SetVoucherId(const int64_t& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取Voucher Usage Month
                     * @return Month Voucher Usage Month
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Voucher Usage Month
                     * @param _month Voucher Usage Month
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * Page number, starting from 1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of items per page, range 1-100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Customer UIN
                     */
                    int64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Voucher ID
                     */
                    int64_t m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * Voucher Usage Month
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERVOUCHERUSAGEDETAILSREQUEST_H_
