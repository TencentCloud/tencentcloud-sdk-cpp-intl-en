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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYBYREGIONREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYBYREGIONREQUEST_H_

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
                * DescribeBillSummaryByRegion request structure.
                */
                class DescribeBillSummaryByRegionRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryByRegionRequest();
                    ~DescribeBillSummaryByRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Bill month in the format of "yyyy-MM"
                     * @return BillMonth Bill month in the format of "yyyy-MM"
                     * 
                     */
                    std::string GetBillMonth() const;

                    /**
                     * 设置Bill month in the format of "yyyy-MM"
                     * @param _billMonth Bill month in the format of "yyyy-MM"
                     * 
                     */
                    void SetBillMonth(const std::string& _billMonth);

                    /**
                     * 判断参数 BillMonth 是否已赋值
                     * @return BillMonth 是否已赋值
                     * 
                     */
                    bool BillMonthHasBeenSet() const;

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

                private:

                    /**
                     * Bill month in the format of "yyyy-MM"
                     */
                    std::string m_billMonth;
                    bool m_billMonthHasBeenSet;

                    /**
                     * Customer UIN
                     */
                    int64_t m_customerUin;
                    bool m_customerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_DESCRIBEBILLSUMMARYBYREGIONREQUEST_H_
