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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETCARDVERIFICATIONRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETCARDVERIFICATIONRESULTREQUEST_H_

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
                * GetCardVerificationResult request structure.
                */
                class GetCardVerificationResultRequest : public AbstractModel
                {
                public:
                    GetCardVerificationResultRequest();
                    ~GetCardVerificationResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * @return CardVerificationToken The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * 
                     */
                    std::string GetCardVerificationToken() const;

                    /**
                     * 设置The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * @param _cardVerificationToken The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     * 
                     */
                    void SetCardVerificationToken(const std::string& _cardVerificationToken);

                    /**
                     * 判断参数 CardVerificationToken 是否已赋值
                     * @return CardVerificationToken 是否已赋值
                     * 
                     */
                    bool CardVerificationTokenHasBeenSet() const;

                private:

                    /**
                     * The token used to identify an verification process. It can be used to get the verification result after the process is completed.
                     */
                    std::string m_cardVerificationToken;
                    bool m_cardVerificationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETCARDVERIFICATIONRESULTREQUEST_H_
