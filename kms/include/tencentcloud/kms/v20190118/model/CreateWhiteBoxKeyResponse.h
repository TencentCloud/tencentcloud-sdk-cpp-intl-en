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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * CreateWhiteBoxKey response structure.
                */
                class CreateWhiteBoxKeyResponse : public AbstractModel
                {
                public:
                    CreateWhiteBoxKeyResponse();
                    ~CreateWhiteBoxKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded encryption key
                     * @return EncryptKey Base64-encoded encryption key
                     * 
                     */
                    std::string GetEncryptKey() const;

                    /**
                     * 判断参数 EncryptKey 是否已赋值
                     * @return EncryptKey 是否已赋值
                     * 
                     */
                    bool EncryptKeyHasBeenSet() const;

                    /**
                     * 获取Base64-encoded decryption key
                     * @return DecryptKey Base64-encoded decryption key
                     * 
                     */
                    std::string GetDecryptKey() const;

                    /**
                     * 判断参数 DecryptKey 是否已赋值
                     * @return DecryptKey 是否已赋值
                     * 
                     */
                    bool DecryptKeyHasBeenSet() const;

                    /**
                     * 获取Globally unique white-box key ID
                     * @return KeyId Globally unique white-box key ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Return code of Tag operation. `0`: success; `1`: internal error; `2`: business processing error.
                     * @return TagCode Return code of Tag operation. `0`: success; `1`: internal error; `2`: business processing error.
                     * 
                     */
                    uint64_t GetTagCode() const;

                    /**
                     * 判断参数 TagCode 是否已赋值
                     * @return TagCode 是否已赋值
                     * 
                     */
                    bool TagCodeHasBeenSet() const;

                    /**
                     * 获取Response information of Tag operation.
                     * @return TagMsg Response information of Tag operation.
                     * 
                     */
                    std::string GetTagMsg() const;

                    /**
                     * 判断参数 TagMsg 是否已赋值
                     * @return TagMsg 是否已赋值
                     * 
                     */
                    bool TagMsgHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded encryption key
                     */
                    std::string m_encryptKey;
                    bool m_encryptKeyHasBeenSet;

                    /**
                     * Base64-encoded decryption key
                     */
                    std::string m_decryptKey;
                    bool m_decryptKeyHasBeenSet;

                    /**
                     * Globally unique white-box key ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Return code of Tag operation. `0`: success; `1`: internal error; `2`: business processing error.
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * Response information of Tag operation.
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEWHITEBOXKEYRESPONSE_H_
