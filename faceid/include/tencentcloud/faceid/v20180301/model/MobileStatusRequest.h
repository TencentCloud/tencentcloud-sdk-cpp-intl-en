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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILESTATUSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * MobileStatus request structure.
                */
                class MobileStatusRequest : public AbstractModel
                {
                public:
                    MobileStatusRequest();
                    ~MobileStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mobile number.
                     * @return Mobile Mobile number.
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置Mobile number.
                     * @param _mobile Mobile number.
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取Sensitive data encryption info.
-Users with encryption requirements for incoming information (mobile number) can use this parameter. For details, please click the left-side link.
                     * @return Encryption Sensitive data encryption info.
-Users with encryption requirements for incoming information (mobile number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置Sensitive data encryption info.
-Users with encryption requirements for incoming information (mobile number) can use this parameter. For details, please click the left-side link.
                     * @param _encryption Sensitive data encryption info.
-Users with encryption requirements for incoming information (mobile number) can use this parameter. For details, please click the left-side link.
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * Mobile number.
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * Sensitive data encryption info.
-Users with encryption requirements for incoming information (mobile number) can use this parameter. For details, please click the left-side link.
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILESTATUSREQUEST_H_
