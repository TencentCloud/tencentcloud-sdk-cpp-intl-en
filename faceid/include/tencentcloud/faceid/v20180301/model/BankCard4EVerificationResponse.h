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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONRESPONSE_H_

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
                * BankCard4EVerification response structure.
                */
                class BankCard4EVerificationResponse : public AbstractModel
                {
                public:
                    BankCard4EVerificationResponse();
                    ~BankCard4EVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification result code.
-Result code for charges
'0': 'Authentication passed'.
'-1': 'Authentication failed'.
'-6': 'Cardholder information is incorrect'.
'-7': 'Cardless payment not enabled'.
'-8': 'Card confiscated'.
'-9': 'Invalid card number'.
'-10': 'No corresponding issuing bank for this card'.
'-11': 'The card is uninitialized or a Sleep Card'.
'-12': 'Cheat card, card confiscation'.
'-13': 'Reported lost'.
'-14': 'The card has expired.'
'-15': 'Restricted card'.
'-16': 'Exceeded the number of password errors'.
'-17': 'Issuer does not support this transaction'.
'-21': 'Card status exception or card number error'.

-Result code with no charge
'-2': 'Name verification failed'.
'-3': 'Identity number error'.
'-4': 'Incorrect bank card number format'.
'-5': 'Invalid phone number'.
'-18': 'Verification Center Service busy'.
'-19': 'Exceeded maximum verification attempts. Please retry the next day.'
'-20': 'The ID number is not currently supported for verification. Currently only support second-generation resident identity card.'
                     * @return Result Verification result code.
-Result code for charges
'0': 'Authentication passed'.
'-1': 'Authentication failed'.
'-6': 'Cardholder information is incorrect'.
'-7': 'Cardless payment not enabled'.
'-8': 'Card confiscated'.
'-9': 'Invalid card number'.
'-10': 'No corresponding issuing bank for this card'.
'-11': 'The card is uninitialized or a Sleep Card'.
'-12': 'Cheat card, card confiscation'.
'-13': 'Reported lost'.
'-14': 'The card has expired.'
'-15': 'Restricted card'.
'-16': 'Exceeded the number of password errors'.
'-17': 'Issuer does not support this transaction'.
'-21': 'Card status exception or card number error'.

-Result code with no charge
'-2': 'Name verification failed'.
'-3': 'Identity number error'.
'-4': 'Incorrect bank card number format'.
'-5': 'Invalid phone number'.
'-18': 'Verification Center Service busy'.
'-19': 'Exceeded maximum verification attempts. Please retry the next day.'
'-20': 'The ID number is not currently supported for verification. Currently only support second-generation resident identity card.'
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
-Result code for charges
'0': 'Authentication passed'.
'-1': 'Authentication failed'.
'-6': 'Cardholder information is incorrect'.
'-7': 'Cardless payment not enabled'.
'-8': 'Card confiscated'.
'-9': 'Invalid card number'.
'-10': 'No corresponding issuing bank for this card'.
'-11': 'The card is uninitialized or a Sleep Card'.
'-12': 'Cheat card, card confiscation'.
'-13': 'Reported lost'.
'-14': 'The card has expired.'
'-15': 'Restricted card'.
'-16': 'Exceeded the number of password errors'.
'-17': 'Issuer does not support this transaction'.
'-21': 'Card status exception or card number error'.

-Result code with no charge
'-2': 'Name verification failed'.
'-3': 'Identity number error'.
'-4': 'Incorrect bank card number format'.
'-5': 'Invalid phone number'.
'-18': 'Verification Center Service busy'.
'-19': 'Exceeded maximum verification attempts. Please retry the next day.'
'-20': 'The ID number is not currently supported for verification. Currently only support second-generation resident identity card.'
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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONRESPONSE_H_
