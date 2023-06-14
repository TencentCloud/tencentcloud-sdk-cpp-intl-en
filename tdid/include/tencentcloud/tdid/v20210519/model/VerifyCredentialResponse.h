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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * VerifyCredential response structure.
                */
                class VerifyCredentialResponse : public AbstractModel
                {
                public:
                    VerifyCredentialResponse();
                    ~VerifyCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the verification is successful.
                     * @return Result Whether the verification is successful.
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取The verification code.
                     * @return VerifyCode The verification code.
                     * 
                     */
                    uint64_t GetVerifyCode() const;

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                    /**
                     * 获取The verification message.
                     * @return VerifyMessage The verification message.
                     * 
                     */
                    std::string GetVerifyMessage() const;

                    /**
                     * 判断参数 VerifyMessage 是否已赋值
                     * @return VerifyMessage 是否已赋值
                     * 
                     */
                    bool VerifyMessageHasBeenSet() const;

                private:

                    /**
                     * Whether the verification is successful.
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * The verification code.
                     */
                    uint64_t m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                    /**
                     * The verification message.
                     */
                    std::string m_verifyMessage;
                    bool m_verifyMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYCREDENTIALRESPONSE_H_
