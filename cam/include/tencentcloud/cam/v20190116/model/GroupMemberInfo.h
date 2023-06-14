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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GROUPMEMBERINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GROUPMEMBERINFO_H_

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
                * User Group user information
                */
                class GroupMemberInfo : public AbstractModel
                {
                public:
                    GroupMemberInfo();
                    ~GroupMemberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-user UID
                     * @return Uid Sub-user UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置Sub-user UID
                     * @param _uid Sub-user UID
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Sub-user UIN
                     * @return Uin Sub-user UIN
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Sub-user UIN
                     * @param _uin Sub-user UIN
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-user name
                     * @return Name Sub-user name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sub-user name
                     * @param _name Sub-user name
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
                     * 获取Mobile number
                     * @return PhoneNum Mobile number
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Mobile number
                     * @param _phoneNum Mobile number
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
                     * 获取Mobile number country/area code
                     * @return CountryCode Mobile number country/area code
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置Mobile number country/area code
                     * @param _countryCode Mobile number country/area code
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
                     * 获取Whether the mobile phone has been verified. `0`: No; `1`: Yes.
                     * @return PhoneFlag Whether the mobile phone has been verified. `0`: No; `1`: Yes.
                     * 
                     */
                    uint64_t GetPhoneFlag() const;

                    /**
                     * 设置Whether the mobile phone has been verified. `0`: No; `1`: Yes.
                     * @param _phoneFlag Whether the mobile phone has been verified. `0`: No; `1`: Yes.
                     * 
                     */
                    void SetPhoneFlag(const uint64_t& _phoneFlag);

                    /**
                     * 判断参数 PhoneFlag 是否已赋值
                     * @return PhoneFlag 是否已赋值
                     * 
                     */
                    bool PhoneFlagHasBeenSet() const;

                    /**
                     * 获取Email address
                     * @return Email Email address
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address
                     * @param _email Email address
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
                     * 获取Whether the email has been verified. `0`: No; `1`: Yes.
                     * @return EmailFlag Whether the email has been verified. `0`: No; `1`: Yes.
                     * 
                     */
                    uint64_t GetEmailFlag() const;

                    /**
                     * 设置Whether the email has been verified. `0`: No; `1`: Yes.
                     * @param _emailFlag Whether the email has been verified. `0`: No; `1`: Yes.
                     * 
                     */
                    void SetEmailFlag(const uint64_t& _emailFlag);

                    /**
                     * 判断参数 EmailFlag 是否已赋值
                     * @return EmailFlag 是否已赋值
                     * 
                     */
                    bool EmailFlagHasBeenSet() const;

                    /**
                     * 获取User type. `1`: Global collaborator; `2`: Project collaborator; `3`: Message recipient.
                     * @return UserType User type. `1`: Global collaborator; `2`: Project collaborator; `3`: Message recipient.
                     * 
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置User type. `1`: Global collaborator; `2`: Project collaborator; `3`: Message recipient.
                     * @param _userType User type. `1`: Global collaborator; `2`: Project collaborator; `3`: Message recipient.
                     * 
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Time policy created
                     * @return CreateTime Time policy created
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time policy created
                     * @param _createTime Time policy created
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
                     * 获取Whether the user is the primary message recipient. `0`: No; `1`: Yes.
                     * @return IsReceiverOwner Whether the user is the primary message recipient. `0`: No; `1`: Yes.
                     * 
                     */
                    uint64_t GetIsReceiverOwner() const;

                    /**
                     * 设置Whether the user is the primary message recipient. `0`: No; `1`: Yes.
                     * @param _isReceiverOwner Whether the user is the primary message recipient. `0`: No; `1`: Yes.
                     * 
                     */
                    void SetIsReceiverOwner(const uint64_t& _isReceiverOwner);

                    /**
                     * 判断参数 IsReceiverOwner 是否已赋值
                     * @return IsReceiverOwner 是否已赋值
                     * 
                     */
                    bool IsReceiverOwnerHasBeenSet() const;

                private:

                    /**
                     * Sub-user UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Sub-user UIN
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-user name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Mobile number
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Mobile number country/area code
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * Whether the mobile phone has been verified. `0`: No; `1`: Yes.
                     */
                    uint64_t m_phoneFlag;
                    bool m_phoneFlagHasBeenSet;

                    /**
                     * Email address
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Whether the email has been verified. `0`: No; `1`: Yes.
                     */
                    uint64_t m_emailFlag;
                    bool m_emailFlagHasBeenSet;

                    /**
                     * User type. `1`: Global collaborator; `2`: Project collaborator; `3`: Message recipient.
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Time policy created
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the user is the primary message recipient. `0`: No; `1`: Yes.
                     */
                    uint64_t m_isReceiverOwner;
                    bool m_isReceiverOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GROUPMEMBERINFO_H_
