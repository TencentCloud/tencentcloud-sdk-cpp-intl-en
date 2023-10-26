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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLRESPONSE_H_

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
                * ApplyWebVerificationBizTokenIntl response structure.
                */
                class ApplyWebVerificationBizTokenIntlResponse : public AbstractModel
                {
                public:
                    ApplyWebVerificationBizTokenIntlResponse();
                    ~ApplyWebVerificationBizTokenIntlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The token identifying this web-based verification process, valid for 7,200s after issuance. It is required for getting the result after the verification process is completed.
                     * @return VerificationUrl The token identifying this web-based verification process, valid for 7,200s after issuance. It is required for getting the result after the verification process is completed.
                     * @deprecated
                     */
                    std::string GetVerificationUrl() const;

                    /**
                     * 判断参数 VerificationUrl 是否已赋值
                     * @return VerificationUrl 是否已赋值
                     * @deprecated
                     */
                    bool VerificationUrlHasBeenSet() const;

                    /**
                     * 获取The token for the web-based verification, which is generated using the ApplyWebVerificationBizTokenIntl API.
                     * @return BizToken The token for the web-based verification, which is generated using the ApplyWebVerificationBizTokenIntl API.
                     * 
                     */
                    std::string GetBizToken() const;

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     * 
                     */
                    bool BizTokenHasBeenSet() const;

                    /**
                     * 获取The verification URL to be opened with a browser to start the verification process.
                     * @return VerificationURL The verification URL to be opened with a browser to start the verification process.
                     * 
                     */
                    std::string GetVerificationURL() const;

                    /**
                     * 判断参数 VerificationURL 是否已赋值
                     * @return VerificationURL 是否已赋值
                     * 
                     */
                    bool VerificationURLHasBeenSet() const;

                private:

                    /**
                     * The token identifying this web-based verification process, valid for 7,200s after issuance. It is required for getting the result after the verification process is completed.
                     */
                    std::string m_verificationUrl;
                    bool m_verificationUrlHasBeenSet;

                    /**
                     * The token for the web-based verification, which is generated using the ApplyWebVerificationBizTokenIntl API.
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                    /**
                     * The verification URL to be opened with a browser to start the verification process.
                     */
                    std::string m_verificationURL;
                    bool m_verificationURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONBIZTOKENINTLRESPONSE_H_
