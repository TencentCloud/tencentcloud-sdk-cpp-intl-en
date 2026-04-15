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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKBANKCARDINFORMATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKBANKCARDINFORMATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckBankCardInformation response structure.
                */
                class CheckBankCardInformationResponse : public AbstractModel
                {
                public:
                    CheckBankCardInformationResponse();
                    ~CheckBankCardInformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code. Billing is as follows.
-Result code for charges
Query succeeded
-1: Not found
-5: Invalid card number

-Result code with no charge
-Verification Center Service is busy.
-3: Bank card not found.
-4: Authentication attempts exceeded the daily limit. Retry the next day.
-6: This bank card type is not currently supported

                     * @return Result Verification result code. Billing is as follows.
-Result code for charges
Query succeeded
-1: Not found
-5: Invalid card number

-Result code with no charge
-Verification Center Service is busy.
-3: Bank card not found.
-4: Authentication attempts exceeded the daily limit. Retry the next day.
-6: This bank card type is not currently supported

                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Business result description.
                     * @return Description Business result description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Account opening bank.
                     * @return AccountBank Account opening bank.
                     * 
                     */
                    std::string GetAccountBank() const;

                    /**
                     * 判断参数 AccountBank 是否已赋值
                     * @return AccountBank 是否已赋值
                     * 
                     */
                    bool AccountBankHasBeenSet() const;

                    /**
                     * 获取Card type.
-Value range:
1: Debit card.
2: Credit card.
3: Prepaid card.
4: Credit card
                     * @return AccountType Card type.
-Value range:
1: Debit card.
2: Credit card.
3: Prepaid card.
4: Credit card
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * Verification result code. Billing is as follows.
-Result code for charges
Query succeeded
-1: Not found
-5: Invalid card number

-Result code with no charge
-Verification Center Service is busy.
-3: Bank card not found.
-4: Authentication attempts exceeded the daily limit. Retry the next day.
-6: This bank card type is not currently supported

                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Business result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Account opening bank.
                     */
                    std::string m_accountBank;
                    bool m_accountBankHasBeenSet;

                    /**
                     * Card type.
-Value range:
1: Debit card.
2: Credit card.
3: Prepaid card.
4: Credit card
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKBANKCARDINFORMATIONRESPONSE_H_
