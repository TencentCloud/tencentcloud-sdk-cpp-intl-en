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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCESPASSWORDREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCESPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ResetInstancesPassword request structure.
                */
                class ResetInstancesPasswordRequest : public AbstractModel
                {
                public:
                    ResetInstancesPasswordRequest();
                    ~ResetInstancesPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list. Each request can contain up to 100 instances at a time.
                     * @return InstanceIds Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. Each request can contain up to 100 instances at a time.
                     * @param InstanceIds Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Login password of the instance(s). The password requirements vary among different operating systems:
The password of a `LINUX_UNIX` instance must contain 8–30 characters (above 12 characters preferably) in at least three of the following types and cannot begin with "/": <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;'<>,.?/</li>
The password of a `WINDOWS` instance must contain 12–30 characters in at least three of the following types and cannot begin with "/" or include the username: <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/<br><li>If both `LINUX_UNIX` and `WINDOWS` instances exist, the requirements for password complexity of `WINDOWS` instances shall prevail.
                     * @return Password Login password of the instance(s). The password requirements vary among different operating systems:
The password of a `LINUX_UNIX` instance must contain 8–30 characters (above 12 characters preferably) in at least three of the following types and cannot begin with "/": <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;'<>,.?/</li>
The password of a `WINDOWS` instance must contain 12–30 characters in at least three of the following types and cannot begin with "/" or include the username: <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/<br><li>If both `LINUX_UNIX` and `WINDOWS` instances exist, the requirements for password complexity of `WINDOWS` instances shall prevail.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Login password of the instance(s). The password requirements vary among different operating systems:
The password of a `LINUX_UNIX` instance must contain 8–30 characters (above 12 characters preferably) in at least three of the following types and cannot begin with "/": <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;'<>,.?/</li>
The password of a `WINDOWS` instance must contain 12–30 characters in at least three of the following types and cannot begin with "/" or include the username: <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/<br><li>If both `LINUX_UNIX` and `WINDOWS` instances exist, the requirements for password complexity of `WINDOWS` instances shall prevail.
                     * @param Password Login password of the instance(s). The password requirements vary among different operating systems:
The password of a `LINUX_UNIX` instance must contain 8–30 characters (above 12 characters preferably) in at least three of the following types and cannot begin with "/": <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;'<>,.?/</li>
The password of a `WINDOWS` instance must contain 12–30 characters in at least three of the following types and cannot begin with "/" or include the username: <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/<br><li>If both `LINUX_UNIX` and `WINDOWS` instances exist, the requirements for password complexity of `WINDOWS` instances shall prevail.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取OS username of the instance for which you want to reset the password, which can contain up to 64 characters.
                     * @return UserName OS username of the instance for which you want to reset the password, which can contain up to 64 characters.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置OS username of the instance for which you want to reset the password, which can contain up to 64 characters.
                     * @param UserName OS username of the instance for which you want to reset the password, which can contain up to 64 characters.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Login password of the instance(s). The password requirements vary among different operating systems:
The password of a `LINUX_UNIX` instance must contain 8–30 characters (above 12 characters preferably) in at least three of the following types and cannot begin with "/": <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;'<>,.?/</li>
The password of a `WINDOWS` instance must contain 12–30 characters in at least three of the following types and cannot begin with "/" or include the username: <br><li>Lowercase letters: [a–z]<br><li>Uppercase letters: [A–Z]<br><li>Digits: 0–9<br><li>Special symbols: ()\`~!@#$%^&\*-+=\_|{}[]:;' <>,.?/<br><li>If both `LINUX_UNIX` and `WINDOWS` instances exist, the requirements for password complexity of `WINDOWS` instances shall prevail.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * OS username of the instance for which you want to reset the password, which can contain up to 64 characters.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETINSTANCESPASSWORDREQUEST_H_
