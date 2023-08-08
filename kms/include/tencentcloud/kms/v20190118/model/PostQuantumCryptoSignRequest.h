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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOSIGNREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOSIGNREQUEST_H_

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
                * PostQuantumCryptoSign request structure.
                */
                class PostQuantumCryptoSignRequest : public AbstractModel
                {
                public:
                    PostQuantumCryptoSignRequest();
                    ~PostQuantumCryptoSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Original message text before Base64 encoding. It cannot exceed 4096 bytes. 
                     * @return Message Original message text before Base64 encoding. It cannot exceed 4096 bytes. 
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Original message text before Base64 encoding. It cannot exceed 4096 bytes. 
                     * @param _message Original message text before Base64 encoding. It cannot exceed 4096 bytes. 
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Unique ID of a key
                     * @return KeyId Unique ID of a key
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Unique ID of a key
                     * @param _keyId Unique ID of a key
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * Original message text before Base64 encoding. It cannot exceed 4096 bytes. 
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Unique ID of a key
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOSIGNREQUEST_H_
