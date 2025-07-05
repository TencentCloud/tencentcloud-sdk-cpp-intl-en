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
                     * 获取Globally unique CMK ID
                     * @return KeyId Globally unique CMK ID
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
                     * 获取Alias that makes a key more recognizable and understandable
                     * @return Alias Alias that makes a key more recognizable and understandable
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
                     * 获取Key creation time in UNIX timestamp format
                     * @return CreateTime Key creation time in UNIX timestamp format
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
                     * 获取Specifies the description of the CMK.
                     * @return Description Specifies the description of the CMK.
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
                     * 获取CMK status
                     * @return KeyState CMK status
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
                     * 获取CMK usage
                     * @return KeyUsage CMK usage
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
                     * 获取Return code of Tag operation. `0`: success; `1`: cls internal error; `2`: business processing error.
                     * @return TagCode Return code of Tag operation. `0`: success; `1`: cls internal error; `2`: business processing error.
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

                    /**
                     * 获取HSM cluster ID (valid only for exclusive or managed version KMS service instances).
                     * @return HsmClusterId HSM cluster ID (valid only for exclusive or managed version KMS service instances).
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
                     * Globally unique CMK ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Alias that makes a key more recognizable and understandable
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Key creation time in UNIX timestamp format
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the description of the CMK.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CMK status
                     */
                    std::string m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * CMK usage
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * Return code of Tag operation. `0`: success; `1`: cls internal error; `2`: business processing error.
                     */
                    uint64_t m_tagCode;
                    bool m_tagCodeHasBeenSet;

                    /**
                     * Response information of Tag operation.
                     */
                    std::string m_tagMsg;
                    bool m_tagMsgHasBeenSet;

                    /**
                     * HSM cluster ID (valid only for exclusive or managed version KMS service instances).
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_CREATEKEYRESPONSE_H_
