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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTALLUSER_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTALLUSER_H_

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
                * Account details
                */
                class ListAllUser : public AbstractModel
                {
                public:
                    ListAllUser();
                    ~ListAllUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sub-account account ID.</p>
                     * @return Uin <p>Sub-account account ID.</p>
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置<p>Sub-account account ID.</p>
                     * @param _uin <p>Sub-account account ID.</p>
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Username of sub-account.</p>
                     * @return Name <p>Username of sub-account.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Username of sub-account.</p>
                     * @param _name <p>Username of sub-account.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Sub-account UID.</p>
                     * @return Uid <p>Sub-account UID.</p>
                     * 
                     */
                    int64_t GetUid() const;

                    /**
                     * 设置<p>Sub-account UID.</p>
                     * @param _uid <p>Sub-account UID.</p>
                     * 
                     */
                    void SetUid(const int64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>Sub-account remark.</p>
                     * @return Remark <p>Sub-account remark.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Sub-account remark.</p>
                     * @param _remark <p>Sub-account remark.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Whether or not the sub-account can log in to the console.</p>
                     * @return ConsoleLogin <p>Whether or not the sub-account can log in to the console.</p>
                     * 
                     */
                    int64_t GetConsoleLogin() const;

                    /**
                     * 设置<p>Whether or not the sub-account can log in to the console.</p>
                     * @param _consoleLogin <p>Whether or not the sub-account can log in to the console.</p>
                     * 
                     */
                    void SetConsoleLogin(const int64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     * 
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取<p>Phone number.</p>
                     * @return PhoneNum <p>Phone number.</p>
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置<p>Phone number.</p>
                     * @param _phoneNum <p>Phone number.</p>
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取<p>Area code.</p>
                     * @return CountryCode <p>Area code.</p>
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置<p>Area code.</p>
                     * @param _countryCode <p>Area code.</p>
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取<p>Mailbox.</p>
                     * @return Email <p>Mailbox.</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>Mailbox.</p>
                     * @param _email <p>Mailbox.</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>Creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>Creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Account type</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: sub-user</li><li>CICUser: CIC user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li><li>Unknown: unknown</li></ul>
                     * @return UserType <p>Account type</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: sub-user</li><li>CICUser: CIC user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li><li>Unknown: unknown</li></ul>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>Account type</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: sub-user</li><li>CICUser: CIC user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li><li>Unknown: unknown</li></ul>
                     * @param _userType <p>Account type</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: sub-user</li><li>CICUser: CIC user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li><li>Unknown: unknown</li></ul>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Sub-account account ID.</p>
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Username of sub-account.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Sub-account UID.</p>
                     */
                    int64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>Sub-account remark.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Whether or not the sub-account can log in to the console.</p>
                     */
                    int64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * <p>Phone number.</p>
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * <p>Area code.</p>
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * <p>Mailbox.</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>Creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Account type</p><p>Enumeration values:</p><ul><li>Owner: root account</li><li>SubUser: sub-user</li><li>CICUser: CIC user</li><li>WechatCorpUser: WeCom sub-user</li><li>AgentIdentity: AgentIdentity user</li><li>Collaborator: collaborator</li><li>MessageReceiver: message recipient</li><li>Unknown: unknown</li></ul>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTALLUSER_H_
