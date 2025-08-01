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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPARTNERCREDITRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPARTNERCREDITRESPONSE_H_

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
                * QueryPartnerCredit response structure.
                */
                class QueryPartnerCreditResponse : public AbstractModel
                {
                public:
                    QueryPartnerCreditResponse();
                    ~QueryPartnerCreditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Allocated credit
                     * @return AllocatedCredit Allocated credit
                     * 
                     */
                    double GetAllocatedCredit() const;

                    /**
                     * 判断参数 AllocatedCredit 是否已赋值
                     * @return AllocatedCredit 是否已赋值
                     * 
                     */
                    bool AllocatedCreditHasBeenSet() const;

                    /**
                     * 获取Total credit
                     * @return TotalCredit Total credit
                     * 
                     */
                    double GetTotalCredit() const;

                    /**
                     * 判断参数 TotalCredit 是否已赋值
                     * @return TotalCredit 是否已赋值
                     * 
                     */
                    bool TotalCreditHasBeenSet() const;

                    /**
                     * 获取Remaining credit
                     * @return RemainingCredit Remaining credit
                     * 
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     * 
                     */
                    bool RemainingCreditHasBeenSet() const;

                    /**
                     * 获取Allocated quota for the client
                     * @return CustomerTotalCredit Allocated quota for the client
                     * 
                     */
                    double GetCustomerTotalCredit() const;

                    /**
                     * 判断参数 CustomerTotalCredit 是否已赋值
                     * @return CustomerTotalCredit 是否已赋值
                     * 
                     */
                    bool CustomerTotalCreditHasBeenSet() const;

                    /**
                     * 获取Remaining quota for the client
                     * @return CustomerRemainingCredit Remaining quota for the client
                     * 
                     */
                    double GetCustomerRemainingCredit() const;

                    /**
                     * 判断参数 CustomerRemainingCredit 是否已赋值
                     * @return CustomerRemainingCredit 是否已赋值
                     * 
                     */
                    bool CustomerRemainingCreditHasBeenSet() const;

                private:

                    /**
                     * Allocated credit
                     */
                    double m_allocatedCredit;
                    bool m_allocatedCreditHasBeenSet;

                    /**
                     * Total credit
                     */
                    double m_totalCredit;
                    bool m_totalCreditHasBeenSet;

                    /**
                     * Remaining credit
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                    /**
                     * Allocated quota for the client
                     */
                    double m_customerTotalCredit;
                    bool m_customerTotalCreditHasBeenSet;

                    /**
                     * Remaining quota for the client
                     */
                    double m_customerRemainingCredit;
                    bool m_customerRemainingCreditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPARTNERCREDITRESPONSE_H_
