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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * AddUser response structure.
                */
                class AddUserResponse : public AbstractModel
                {
                public:
                    AddUserResponse();
                    ~AddUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-user UIN
                     * @return Uin Sub-user UIN
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-user username
                     * @return Name Sub-user username
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取If the combination of input parameters indicates that a random password should be generated, the generated password is returned
                     * @return Password If the combination of input parameters indicates that a random password should be generated, the generated password is returned
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Sub-user's key ID
                     * @return SecretId Sub-user's key ID
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取Sub-user's secret key
                     * @return SecretKey Sub-user's secret key
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Sub-user UID
                     * @return Uid Sub-user UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * Sub-user UIN
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-user username
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * If the combination of input parameters indicates that a random password should be generated, the generated password is returned
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Sub-user's key ID
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Sub-user's secret key
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Sub-user UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ADDUSERRESPONSE_H_
