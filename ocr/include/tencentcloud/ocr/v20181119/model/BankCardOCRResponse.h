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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * BankCardOCR response structure.
                */
                class BankCardOCRResponse : public AbstractModel
                {
                public:
                    BankCardOCRResponse();
                    ~BankCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Card number
                     * @return CardNo Card number
                     */
                    std::string GetCardNo() const;

                    /**
                     * 判断参数 CardNo 是否已赋值
                     * @return CardNo 是否已赋值
                     */
                    bool CardNoHasBeenSet() const;

                    /**
                     * 获取Bank information
                     * @return BankInfo Bank information
                     */
                    std::string GetBankInfo() const;

                    /**
                     * 判断参数 BankInfo 是否已赋值
                     * @return BankInfo 是否已赋值
                     */
                    bool BankInfoHasBeenSet() const;

                    /**
                     * 获取Expiration date
                     * @return ValidDate Expiration date
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     */
                    bool ValidDateHasBeenSet() const;

                private:

                    /**
                     * Card number
                     */
                    std::string m_cardNo;
                    bool m_cardNoHasBeenSet;

                    /**
                     * Bank information
                     */
                    std::string m_bankInfo;
                    bool m_bankInfoHasBeenSet;

                    /**
                     * Expiration date
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
