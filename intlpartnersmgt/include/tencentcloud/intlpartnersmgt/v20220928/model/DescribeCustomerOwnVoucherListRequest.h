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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNVOUCHERLISTREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNVOUCHERLISTREQUEST_H_

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
                * DescribeCustomerOwnVoucherList request structure.
                */
                class DescribeCustomerOwnVoucherListRequest : public AbstractModel
                {
                public:
                    DescribeCustomerOwnVoucherListRequest();
                    ~DescribeCustomerOwnVoucherListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number, starts from 1.
                     * @return Page Page number, starts from 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number, starts from 1.
                     * @param _page Page number, starts from 1.
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
                     * 获取Number of items per page. value range: 1-100.
                     * @return PageSize Number of items per page. value range: 1-100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. value range: 1-100.
                     * @param _pageSize Number of items per page. value range: 1-100.
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
                     * 获取Voucher status. valid values: Issued, Used, Expired, Invalidated.
                     * @return VoucherStatus Voucher status. valid values: Issued, Used, Expired, Invalidated.
                     * 
                     */
                    std::string GetVoucherStatus() const;

                    /**
                     * 设置Voucher status. valid values: Issued, Used, Expired, Invalidated.
                     * @param _voucherStatus Voucher status. valid values: Issued, Used, Expired, Invalidated.
                     * 
                     */
                    void SetVoucherStatus(const std::string& _voucherStatus);

                    /**
                     * 判断参数 VoucherStatus 是否已赋值
                     * @return VoucherStatus 是否已赋值
                     * 
                     */
                    bool VoucherStatusHasBeenSet() const;

                    /**
                     * 获取Payment mode. valid values: AllPayment, Prepaid, Postpaid.
                     * @return PaymentMode Payment mode. valid values: AllPayment, Prepaid, Postpaid.
                     * 
                     */
                    std::string GetPaymentMode() const;

                    /**
                     * 设置Payment mode. valid values: AllPayment, Prepaid, Postpaid.
                     * @param _paymentMode Payment mode. valid values: AllPayment, Prepaid, Postpaid.
                     * 
                     */
                    void SetPaymentMode(const std::string& _paymentMode);

                    /**
                     * 判断参数 PaymentMode 是否已赋值
                     * @return PaymentMode 是否已赋值
                     * 
                     */
                    bool PaymentModeHasBeenSet() const;

                    /**
                     * 获取Applicable product. valid values: AllProducts, SpecifyProducts, SpecifyProductsBlacklist.
                     * @return ProductScope Applicable product. valid values: AllProducts, SpecifyProducts, SpecifyProductsBlacklist.
                     * 
                     */
                    std::string GetProductScope() const;

                    /**
                     * 设置Applicable product. valid values: AllProducts, SpecifyProducts, SpecifyProductsBlacklist.
                     * @param _productScope Applicable product. valid values: AllProducts, SpecifyProducts, SpecifyProductsBlacklist.
                     * 
                     */
                    void SetProductScope(const std::string& _productScope);

                    /**
                     * 判断参数 ProductScope 是否已赋值
                     * @return ProductScope 是否已赋值
                     * 
                     */
                    bool ProductScopeHasBeenSet() const;

                    /**
                     * 获取Voucher ID.
                     * @return VoucherId Voucher ID.
                     * 
                     */
                    int64_t GetVoucherId() const;

                    /**
                     * 设置Voucher ID.
                     * @param _voucherId Voucher ID.
                     * 
                     */
                    void SetVoucherId(const int64_t& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                private:

                    /**
                     * Page number, starts from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of items per page. value range: 1-100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Voucher status. valid values: Issued, Used, Expired, Invalidated.
                     */
                    std::string m_voucherStatus;
                    bool m_voucherStatusHasBeenSet;

                    /**
                     * Payment mode. valid values: AllPayment, Prepaid, Postpaid.
                     */
                    std::string m_paymentMode;
                    bool m_paymentModeHasBeenSet;

                    /**
                     * Applicable product. valid values: AllProducts, SpecifyProducts, SpecifyProductsBlacklist.
                     */
                    std::string m_productScope;
                    bool m_productScopeHasBeenSet;

                    /**
                     * Voucher ID.
                     */
                    int64_t m_voucherId;
                    bool m_voucherIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMEROWNVOUCHERLISTREQUEST_H_
