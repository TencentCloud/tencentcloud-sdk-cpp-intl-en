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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDETAILBYDAYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDETAILBYDAYREQUEST_H_

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
                * DescribeCustomerBillDetailByDay request structure.
                */
                class DescribeCustomerBillDetailByDayRequest : public AbstractModel
                {
                public:
                    DescribeCustomerBillDetailByDayRequest();
                    ~DescribeCustomerBillDetailByDayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-account UIN.
Such as "10000000001"
                     * @return CustomerUin Sub-account UIN.
Such as "10000000001"
                     * 
                     */
                    int64_t GetCustomerUin() const;

                    /**
                     * 设置Sub-account UIN.
Such as "10000000001"
                     * @param _customerUin Sub-account UIN.
Such as "10000000001"
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
                     * 获取Date.
Such as" 2025-06-25"
                     * @return Date Date.
Such as" 2025-06-25"
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date.
Such as" 2025-06-25"
                     * @param _date Date.
Such as" 2025-06-25"
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * Sub-account UIN.
Such as "10000000001"
                     */
                    int64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * Date.
Such as" 2025-06-25"
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBECUSTOMERBILLDETAILBYDAYREQUEST_H_
