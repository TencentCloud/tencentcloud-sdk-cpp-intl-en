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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SUBACCOUNTINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SUBACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Sub-user information
                */
                class SubAccountInfo : public AbstractModel
                {
                public:
                    SubAccountInfo();
                    ~SubAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-user user ID
                     * @return Uin Sub-user user ID
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Sub-user user ID
                     * @param Uin Sub-user user ID
                     */
                    void SetUin(const uint64_t& _uin);

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
                     * 设置Sub-user username
                     * @param Name Sub-user username
                     */
                    void SetName(const std::string& _name);

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
                     * 设置Sub-user UID
                     * @param Uid Sub-user UID
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Sub-user remarks
                     * @return Remark Sub-user remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sub-user remarks
                     * @param Remark Sub-user remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取If sub-user can log in to the console
                     * @return ConsoleLogin If sub-user can log in to the console
                     */
                    uint64_t GetConsoleLogin() const;

                    /**
                     * 设置If sub-user can log in to the console
                     * @param ConsoleLogin If sub-user can log in to the console
                     */
                    void SetConsoleLogin(const uint64_t& _consoleLogin);

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
                     * 设置Mobile number
                     * @param PhoneNum Mobile number
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

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
                     * 设置Country/Area code
                     * @param CountryCode Country/Area code
                     */
                    void SetCountryCode(const std::string& _countryCode);

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
                     * 设置Email
                     * @param Email Email
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * Sub-user user ID
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
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * If sub-user can log in to the console
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SUBACCOUNTINFO_H_
