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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/MemberMap.h>
#include <tencentcloud/ciam/v20220331/model/Salt.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Imported user information
1. One of the eight attributes of `UserName`, `PhoneNumber`, `Email`, `WechatOpenId`, `WechatUnionId`, `AlipayUserId`, `QqOpenId`, and `QqUnionId` must be included during import and comply with the regular expression rules for initializing custom attributes. The regular expressions for `UserName`, `PhoneNumber`, and `Email` can be queried in the custom attributes in the console.
2. For password import, the imported password supports plaintext import, MD5 ciphertext import, SHA1 ciphertext import, and BCRYPT ciphertext import. This needs to be specified in the `PasswordEncryptTypeEnum` field.
3. `IdentityVerified` and `IdentityVerificationMethod` can be imported.
If `IdentityVerified` is `true`, `IdentityVerificationMethod` is required.
If `IdentityVerificationMethod` is `nameAndIdCard`, `Name` and `ResidentIdentityCard` are required.
If `IdentityVerificationMethod` is `nameIdCardAndPhone`, `Name`, `PhoneNumber`, and `ResidentIdentityCard` are required.
                */
                class ImportUser : public AbstractModel
                {
                public:
                    ImportUser();
                    ~ImportUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username
                     * @return UserName Username
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param UserName Username
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Mobile number
                     * @return PhoneNumber Mobile number
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number
                     * @param PhoneNumber Mobile number
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Email address
                     * @return Email Email address
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address
                     * @param Email Email address
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取ID card number
                     * @return ResidentIdentityCard ID card number
                     */
                    std::string GetResidentIdentityCard() const;

                    /**
                     * 设置ID card number
                     * @param ResidentIdentityCard ID card number
                     */
                    void SetResidentIdentityCard(const std::string& _residentIdentityCard);

                    /**
                     * 判断参数 ResidentIdentityCard 是否已赋值
                     * @return ResidentIdentityCard 是否已赋值
                     */
                    bool ResidentIdentityCardHasBeenSet() const;

                    /**
                     * 获取Nickname
                     * @return Nickname Nickname
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname
                     * @param Nickname Nickname
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
                     * @param Address Address
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取User group ID
                     * @return UserGroup User group ID
                     */
                    std::vector<std::string> GetUserGroup() const;

                    /**
                     * 设置User group ID
                     * @param UserGroup User group ID
                     */
                    void SetUserGroup(const std::vector<std::string>& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取`qqOpenId` on QQ
                     * @return QqOpenId `qqOpenId` on QQ
                     */
                    std::string GetQqOpenId() const;

                    /**
                     * 设置`qqOpenId` on QQ
                     * @param QqOpenId `qqOpenId` on QQ
                     */
                    void SetQqOpenId(const std::string& _qqOpenId);

                    /**
                     * 判断参数 QqOpenId 是否已赋值
                     * @return QqOpenId 是否已赋值
                     */
                    bool QqOpenIdHasBeenSet() const;

                    /**
                     * 获取`qqUnionId` on QQ
                     * @return QqUnionId `qqUnionId` on QQ
                     */
                    std::string GetQqUnionId() const;

                    /**
                     * 设置`qqUnionId` on QQ
                     * @param QqUnionId `qqUnionId` on QQ
                     */
                    void SetQqUnionId(const std::string& _qqUnionId);

                    /**
                     * 判断参数 QqUnionId 是否已赋值
                     * @return QqUnionId 是否已赋值
                     */
                    bool QqUnionIdHasBeenSet() const;

                    /**
                     * 获取`wechatOpenId` on WeChat
                     * @return WechatOpenId `wechatOpenId` on WeChat
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置`wechatOpenId` on WeChat
                     * @param WechatOpenId `wechatOpenId` on WeChat
                     */
                    void SetWechatOpenId(const std::string& _wechatOpenId);

                    /**
                     * 判断参数 WechatOpenId 是否已赋值
                     * @return WechatOpenId 是否已赋值
                     */
                    bool WechatOpenIdHasBeenSet() const;

                    /**
                     * 获取`wechatUnionId` on WeChat
                     * @return WechatUnionId `wechatUnionId` on WeChat
                     */
                    std::string GetWechatUnionId() const;

                    /**
                     * 设置`wechatUnionId` on WeChat
                     * @param WechatUnionId `wechatUnionId` on WeChat
                     */
                    void SetWechatUnionId(const std::string& _wechatUnionId);

                    /**
                     * 判断参数 WechatUnionId 是否已赋值
                     * @return WechatUnionId 是否已赋值
                     */
                    bool WechatUnionIdHasBeenSet() const;

                    /**
                     * 获取`alipayUserId` on Alipay
                     * @return AlipayUserId `alipayUserId` on Alipay
                     */
                    std::string GetAlipayUserId() const;

                    /**
                     * 设置`alipayUserId` on Alipay
                     * @param AlipayUserId `alipayUserId` on Alipay
                     */
                    void SetAlipayUserId(const std::string& _alipayUserId);

                    /**
                     * 判断参数 AlipayUserId 是否已赋值
                     * @return AlipayUserId 是否已赋值
                     */
                    bool AlipayUserIdHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param Description Description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Date of birth
                     * @return Birthdate Date of birth
                     */
                    std::string GetBirthdate() const;

                    /**
                     * 设置Date of birth
                     * @param Birthdate Date of birth
                     */
                    void SetBirthdate(const std::string& _birthdate);

                    /**
                     * 判断参数 Birthdate 是否已赋值
                     * @return Birthdate 是否已赋值
                     */
                    bool BirthdateHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param Name Name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Coordinate
                     * @return Locale Coordinate
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置Coordinate
                     * @param Locale Coordinate
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     */
                    bool LocaleHasBeenSet() const;

                    /**
                     * 获取Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     * @return Gender Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     */
                    std::string GetGender() const;

                    /**
                     * 设置Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     * @param Gender Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Identity verification method
                     * @return IdentityVerificationMethod Identity verification method
                     */
                    std::string GetIdentityVerificationMethod() const;

                    /**
                     * 设置Identity verification method
                     * @param IdentityVerificationMethod Identity verification method
                     */
                    void SetIdentityVerificationMethod(const std::string& _identityVerificationMethod);

                    /**
                     * 判断参数 IdentityVerificationMethod 是否已赋值
                     * @return IdentityVerificationMethod 是否已赋值
                     */
                    bool IdentityVerificationMethodHasBeenSet() const;

                    /**
                     * 获取Whether the identity is verified
                     * @return IdentityVerified Whether the identity is verified
                     */
                    bool GetIdentityVerified() const;

                    /**
                     * 设置Whether the identity is verified
                     * @param IdentityVerified Whether the identity is verified
                     */
                    void SetIdentityVerified(const bool& _identityVerified);

                    /**
                     * 判断参数 IdentityVerified 是否已赋值
                     * @return IdentityVerified 是否已赋值
                     */
                    bool IdentityVerifiedHasBeenSet() const;

                    /**
                     * 获取Job
                     * @return Job Job
                     */
                    std::string GetJob() const;

                    /**
                     * 设置Job
                     * @param Job Job
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取Country/Region
                     * @return Nationality Country/Region
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Country/Region
                     * @param Nationality Country/Region
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Time zone
                     * @return Zone Time zone
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Time zone
                     * @param Zone Time zone
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Password ciphertext
                     * @return Password Password ciphertext
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password ciphertext
                     * @param Password Password ciphertext
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Custom attribute
                     * @return CustomizationAttributes Custom attribute
                     */
                    std::vector<MemberMap> GetCustomizationAttributes() const;

                    /**
                     * 设置Custom attribute
                     * @param CustomizationAttributes Custom attribute
                     */
                    void SetCustomizationAttributes(const std::vector<MemberMap>& _customizationAttributes);

                    /**
                     * 判断参数 CustomizationAttributes 是否已赋值
                     * @return CustomizationAttributes 是否已赋值
                     */
                    bool CustomizationAttributesHasBeenSet() const;

                    /**
                     * 获取Password salt
                     * @return Salt Password salt
                     */
                    Salt GetSalt() const;

                    /**
                     * 设置Password salt
                     * @param Salt Password salt
                     */
                    void SetSalt(const Salt& _salt);

                    /**
                     * 判断参数 Salt 是否已赋值
                     * @return Salt 是否已赋值
                     */
                    bool SaltHasBeenSet() const;

                    /**
                     * 获取Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     * @return PasswordEncryptTypeEnum Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     */
                    std::string GetPasswordEncryptTypeEnum() const;

                    /**
                     * 设置Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     * @param PasswordEncryptTypeEnum Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     */
                    void SetPasswordEncryptTypeEnum(const std::string& _passwordEncryptTypeEnum);

                    /**
                     * 判断参数 PasswordEncryptTypeEnum 是否已赋值
                     * @return PasswordEncryptTypeEnum 是否已赋值
                     */
                    bool PasswordEncryptTypeEnumHasBeenSet() const;

                private:

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Mobile number
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Email address
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * ID card number
                     */
                    std::string m_residentIdentityCard;
                    bool m_residentIdentityCardHasBeenSet;

                    /**
                     * Nickname
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * User group ID
                     */
                    std::vector<std::string> m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * `qqOpenId` on QQ
                     */
                    std::string m_qqOpenId;
                    bool m_qqOpenIdHasBeenSet;

                    /**
                     * `qqUnionId` on QQ
                     */
                    std::string m_qqUnionId;
                    bool m_qqUnionIdHasBeenSet;

                    /**
                     * `wechatOpenId` on WeChat
                     */
                    std::string m_wechatOpenId;
                    bool m_wechatOpenIdHasBeenSet;

                    /**
                     * `wechatUnionId` on WeChat
                     */
                    std::string m_wechatUnionId;
                    bool m_wechatUnionIdHasBeenSet;

                    /**
                     * `alipayUserId` on Alipay
                     */
                    std::string m_alipayUserId;
                    bool m_alipayUserIdHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Coordinate
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Identity verification method
                     */
                    std::string m_identityVerificationMethod;
                    bool m_identityVerificationMethodHasBeenSet;

                    /**
                     * Whether the identity is verified
                     */
                    bool m_identityVerified;
                    bool m_identityVerifiedHasBeenSet;

                    /**
                     * Job
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * Country/Region
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Time zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Password ciphertext
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Custom attribute
                     */
                    std::vector<MemberMap> m_customizationAttributes;
                    bool m_customizationAttributesHasBeenSet;

                    /**
                     * Password salt
                     */
                    Salt m_salt;
                    bool m_saltHasBeenSet;

                    /**
                     * Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     */
                    std::string m_passwordEncryptTypeEnum;
                    bool m_passwordEncryptTypeEnumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_
