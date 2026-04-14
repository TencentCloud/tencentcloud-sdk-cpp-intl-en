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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD2EVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD2EVERIFICATIONRESPONSE_H_

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
                * BankCard2EVerification response structure.
                */
                class BankCard2EVerificationResponse : public AbstractModel
                {
                public:
                    BankCard2EVerificationResponse();
                    ~BankCard2EVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code.
-Billing result code:
'0': 'Authentication passed'.
'-1': 'Authentication failed'.
'-4': 'Cardholder information is incorrect'.
'-5': 'Cardless payment not enabled'.
'-6': 'Card confiscated'.
'-7': 'Invalid card number'.
'-8': 'No corresponding issuing bank for this card'.
'-9': 'The card is uninitialized or a Sleep Card'.
'-10': 'Cheat card, card confiscation'.
'-11': 'Reported lost'.
'-12': 'The card has expired'.
'-13': 'Restricted card'.
'-14': 'Number of password errors exceeds the limit'.
'-15': 'Issuer does not support this transaction'.
'-18': 'Card status exception or card number error'.

-Non-billing Result Code:
'-2': 'Name verification failed'.
'-3': 'Incorrect bank card number format'.
'-16': 'Verification Center Service busy'.
'-17': 'Verification attempts exceeded. Please retry the next day.'

                     * @return Result Verification result code.
-Billing result code:
'0': 'Authentication passed'.
'-1': 'Authentication failed'.
'-4': 'Cardholder information is incorrect'.
'-5': 'Cardless payment not enabled'.
'-6': 'Card confiscated'.
'-7': 'Invalid card number'.
'-8': 'No corresponding issuing bank for this card'.
'-9': 'The card is uninitialized or a Sleep Card'.
'-10': 'Cheat card, card confiscation'.
'-11': 'Reported lost'.
'-12': 'The card has expired'.
'-13': 'Restricted card'.
'-14': 'Number of password errors exceeds the limit'.
'-15': 'Issuer does not support this transaction'.
'-18': 'Card status exception or card number error'.

-Non-billing Result Code:
'-2': 'Name verification failed'.
'-3': 'Incorrect bank card number format'.
'-16': 'Verification Center Service busy'.
'-17': 'Verification attempts exceeded. Please retry the next day.'

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

                private:

                    /**
                     * Verification result code.
-Billing result code:
'0': 'Authentication passed'.
'-1': 'Authentication failed'.
'-4': 'Cardholder information is incorrect'.
'-5': 'Cardless payment not enabled'.
'-6': 'Card confiscated'.
'-7': 'Invalid card number'.
'-8': 'No corresponding issuing bank for this card'.
'-9': 'The card is uninitialized or a Sleep Card'.
'-10': 'Cheat card, card confiscation'.
'-11': 'Reported lost'.
'-12': 'The card has expired'.
'-13': 'Restricted card'.
'-14': 'Number of password errors exceeds the limit'.
'-15': 'Issuer does not support this transaction'.
'-18': 'Card status exception or card number error'.

-Non-billing Result Code:
'-2': 'Name verification failed'.
'-3': 'Incorrect bank card number format'.
'-16': 'Verification Center Service busy'.
'-17': 'Verification attempts exceeded. Please retry the next day.'

                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Business result description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD2EVERIFICATIONRESPONSE_H_
