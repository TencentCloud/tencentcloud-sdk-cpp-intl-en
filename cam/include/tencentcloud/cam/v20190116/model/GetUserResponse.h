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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETUSERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETUSERRESPONSE_H_

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
                * GetUser response structure.
                */
                class GetUserResponse : public AbstractModel
                {
                public:
                    GetUserResponse();
                    ~GetUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-user UIN
                     * @return Uin Sub-user UIN
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-user username
                     * @return Name Sub-user username
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Sub-user UID
                     * @return Uid Sub-user UID
                     */
                    uint64_t GetUid() const;

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Sub-user remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Remark Sub-user remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether the sub-user can log in to the console. `0`: No; `1`: Yes.
                     * @return ConsoleLogin Whether the sub-user can log in to the console. `0`: No; `1`: Yes.
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取Mobile number
                     * @return PhoneNum Mobile number
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取Country/Area code
                     * @return CountryCode Country/Area code
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取Email
                     * @return Email Email
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Last login IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecentlyLoginIP Last login IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRecentlyLoginIP() const;

                    /**
                     * 判断参数 RecentlyLoginIP 是否已赋值
                     * @return RecentlyLoginIP 是否已赋值
                     */
                    bool RecentlyLoginIPHasBeenSet() const;

                    /**
                     * 获取Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecentlyLoginTime Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRecentlyLoginTime() const;

                    /**
                     * 判断参数 RecentlyLoginTime 是否已赋值
                     * @return RecentlyLoginTime 是否已赋值
                     */
                    bool RecentlyLoginTimeHasBeenSet() const;

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
                     * Sub-user UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Sub-user remarks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether the sub-user can log in to the console. `0`: No; `1`: Yes.
                     */
                    uint64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * Mobile number
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Country/Area code
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Email
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Last login IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recentlyLoginIP;
                    bool m_recentlyLoginIPHasBeenSet;

                    /**
                     * Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recentlyLoginTime;
                    bool m_recentlyLoginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETUSERRESPONSE_H_
