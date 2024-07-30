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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETCARDVERIFICATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETCARDVERIFICATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/CardInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetCardVerificationResult response structure.
                */
                class GetCardVerificationResultResponse : public AbstractModel
                {
                public:
                    GetCardVerificationResultResponse();
                    ~GetCardVerificationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Pass status. When Warning and Rejected are returned, please check the specific reasons in the WarnInfo structure return. Example values are as follows:
PASSED
WARNING
REJECTED
PROCESSING
                     * @return Status Pass status. When Warning and Rejected are returned, please check the specific reasons in the WarnInfo structure return. Example values are as follows:
PASSED
WARNING
REJECTED
PROCESSING
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Warning information returned by document verification.
                     * @return WarnInfo Warning information returned by document verification.
                     * 
                     */
                    std::vector<std::string> GetWarnInfo() const;

                    /**
                     * 判断参数 WarnInfo 是否已赋值
                     * @return WarnInfo 是否已赋值
                     * 
                     */
                    bool WarnInfoHasBeenSet() const;

                    /**
                     * 获取Nationality code. Complies with standard ISO 3166-1 alpha-3. 

Example value: IDN
                     * @return Nationality Nationality code. Complies with standard ISO 3166-1 alpha-3. 

Example value: IDN
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Card Type. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO

Example value: ID_CARD
                     * @return CardType Card Type. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO

Example value: ID_CARD
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取Subtype of the ID document.

                     * @return CardSubType Subtype of the ID document.

                     * 
                     */
                    std::string GetCardSubType() const;

                    /**
                     * 判断参数 CardSubType 是否已赋值
                     * @return CardSubType 是否已赋值
                     * 
                     */
                    bool CardSubTypeHasBeenSet() const;

                    /**
                     * 获取Recognition results of the ID document.
                     * @return CardInfo Recognition results of the ID document.
                     * 
                     */
                    CardInfo GetCardInfo() const;

                    /**
                     * 判断参数 CardInfo 是否已赋值
                     * @return CardInfo 是否已赋值
                     * 
                     */
                    bool CardInfoHasBeenSet() const;

                    /**
                     * 获取The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * @return IDVerificationToken The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * 
                     */
                    std::string GetIDVerificationToken() const;

                    /**
                     * 判断参数 IDVerificationToken 是否已赋值
                     * @return IDVerificationToken 是否已赋值
                     * 
                     */
                    bool IDVerificationTokenHasBeenSet() const;

                private:

                    /**
                     * Pass status. When Warning and Rejected are returned, please check the specific reasons in the WarnInfo structure return. Example values are as follows:
PASSED
WARNING
REJECTED
PROCESSING
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Warning information returned by document verification.
                     */
                    std::vector<std::string> m_warnInfo;
                    bool m_warnInfoHasBeenSet;

                    /**
                     * Nationality code. Complies with standard ISO 3166-1 alpha-3. 

Example value: IDN
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Card Type. The supported options are:
ID_CARD
PASSPORT
DRIVING_LICENSE
AUTO

Example value: ID_CARD
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * Subtype of the ID document.

                     */
                    std::string m_cardSubType;
                    bool m_cardSubTypeHasBeenSet;

                    /**
                     * Recognition results of the ID document.
                     */
                    CardInfo m_cardInfo;
                    bool m_cardInfoHasBeenSet;

                    /**
                     * The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     */
                    std::string m_iDVerificationToken;
                    bool m_iDVerificationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETCARDVERIFICATIONRESULTRESPONSE_H_
