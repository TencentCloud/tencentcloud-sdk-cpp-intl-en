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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYDIRECTCUSTOMERSCREDITDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYDIRECTCUSTOMERSCREDITDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The credit information of direct customers
                */
                class QueryDirectCustomersCreditData : public AbstractModel
                {
                public:
                    QueryDirectCustomersCreditData();
                    ~QueryDirectCustomersCreditData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Total credit
                     * @return TotalCredit Total credit
                     * 
                     */
                    double GetTotalCredit() const;

                    /**
                     * 设置Total credit
                     * @param _totalCredit Total credit
                     * 
                     */
                    void SetTotalCredit(const double& _totalCredit);

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
                     * 设置Remaining credit
                     * @param _remainingCredit Remaining credit
                     * 
                     */
                    void SetRemainingCredit(const double& _remainingCredit);

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     * 
                     */
                    bool RemainingCreditHasBeenSet() const;

                private:

                    /**
                     * User UIN
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYDIRECTCUSTOMERSCREDITDATA_H_
