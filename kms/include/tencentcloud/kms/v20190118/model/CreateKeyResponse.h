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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYRESPONSE_H_

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
                * CreateKey response structure.
                */
                class CreateKeyResponse : public AbstractModel
                {
                public:
                    CreateKeyResponse();
                    ~CreateKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Globally unique identifier of the CMK</p>
                     * @return KeyId <p>Globally unique identifier of the CMK</p>
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
                     * 获取<p>Alias that makes the key easier to identify and understand</p>
                     * @return Alias <p>Alias that makes the key easier to identify and understand</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>Key creation time, unix timestamp</p>
                     * @return CreateTime <p>Key creation time, unix timestamp</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Description of the CMK</p>
                     * @return Description <p>Description of the CMK</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Status of the CMK</p>
                     * @return KeyState <p>Status of the CMK</p>
                     * 
                     */
                    std::string GetKeyState() const;

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     * 
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取<p>Purpose of the CMK</p>
                     * @return KeyUsage <p>Purpose of the CMK</p>
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取<p>Return code of the tag operation. 0: Success; 1: Internal error; 2: Business processing error</p>
                     * @return TagCode <p>Return code of the tag operation. 0: Success; 1: Internal error; 2: Business processing error</p>
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
                     * 获取<p>Return message of the tag operation</p>
                     * @return TagMsg <p>Return message of the tag operation</p>
                     * 
                     */
                    std::string GetTagMsg() const;

                    /**
                     * 判断参数 TagMsg 是否已赋值
                     * @return TagMsg 是否已赋值
                     * 
                     */
                    bool TagMsgHasBeenSet() const;

                    /**
                     * 获取<p>HSM cluster ID (valid only for KMS exclusive/managed service instances)</p>
                     * @return HsmClusterId <p>HSM cluster ID (valid only for KMS exclusive/managed service instances)</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>Globally unique identifier of the CMK</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>Alias that makes the key easier to identify and understand</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>Key creation time, unix timestamp</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Description of the CMK</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Status of the CMK</p>
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * <p>Purpose of the CMK</p>
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * <p>Return code of the tag operation. 0: Success; 1: Internal error; 2: Business processing error</p>
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * <p>Return message of the tag operation</p>
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                    /**
                     * <p>HSM cluster ID (valid only for KMS exclusive/managed service instances)</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYRESPONSE_H_
