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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_APPLYOCRTOKENRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_APPLYOCRTOKENRESPONSE_H_

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
                * ApplyOcrToken response structure.
                */
                class ApplyOcrTokenResponse : public AbstractModel
                {
                public:
                    ApplyOcrTokenResponse();
                    ~ApplyOcrTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token that identifies an SDK verification process. It is valid for 10 minutes. After the process completes, use this token to obtain the verification result information.
                     * @return SdkToken Token that identifies an SDK verification process. It is valid for 10 minutes. After the process completes, use this token to obtain the verification result information.
                     * 
                     */
                    std::string GetSdkToken() const;

                    /**
                     * 判断参数 SdkToken 是否已赋值
                     * @return SdkToken 是否已赋值
                     * 
                     */
                    bool SdkTokenHasBeenSet() const;

                    /**
                     * 获取Encryption configuration generated on the server side.
                     * @return EncryptedConfig Encryption configuration generated on the server side.
                     * 
                     */
                    std::string GetEncryptedConfig() const;

                    /**
                     * 判断参数 EncryptedConfig 是否已赋值
                     * @return EncryptedConfig 是否已赋值
                     * 
                     */
                    bool EncryptedConfigHasBeenSet() const;

                private:

                    /**
                     * Token that identifies an SDK verification process. It is valid for 10 minutes. After the process completes, use this token to obtain the verification result information.
                     */
                    std::string m_sdkToken;
                    bool m_sdkTokenHasBeenSet;

                    /**
                     * Encryption configuration generated on the server side.
                     */
                    std::string m_encryptedConfig;
                    bool m_encryptedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_APPLYOCRTOKENRESPONSE_H_
