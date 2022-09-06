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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENRESPONSE_H_

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
                * ApplyWebVerificationToken response structure.
                */
                class ApplyWebVerificationTokenResponse : public AbstractModel
                {
                public:
                    ApplyWebVerificationTokenResponse();
                    ~ApplyWebVerificationTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The verification URL to be opened with a browser to start the verification process.
                     * @return VerificationUrl The verification URL to be opened with a browser to start the verification process.
                     */
                    std::string GetVerificationUrl() const;

                    /**
                     * 判断参数 VerificationUrl 是否已赋值
                     * @return VerificationUrl 是否已赋值
                     */
                    bool VerificationUrlHasBeenSet() const;

                    /**
                     * 获取The token used to identify a web-based verification process. It is valid for 7,200s and can be used to get the verification result after the process is completed.
                     * @return BizToken The token used to identify a web-based verification process. It is valid for 7,200s and can be used to get the verification result after the process is completed.
                     */
                    std::string GetBizToken() const;

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     */
                    bool BizTokenHasBeenSet() const;

                private:

                    /**
                     * The verification URL to be opened with a browser to start the verification process.
                     */
                    std::string m_verificationUrl;
                    bool m_verificationUrlHasBeenSet;

                    /**
                     * The token used to identify a web-based verification process. It is valid for 7,200s and can be used to get the verification result after the process is completed.
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENRESPONSE_H_
