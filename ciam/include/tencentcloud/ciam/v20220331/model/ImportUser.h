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
                * Import user information.
1. At least one of the following nine attributes should be included during the import: UserName, PhoneNumber, Email, WeChatOpenId, WeChatUnionId, AlipayUserId, QQOpenId, QQUnionId, and WeComUserId. Each of these attributes should adhere to the regular expression rules for initial custom attributes. The regular expressions for UserName, PhoneNumber, and Email can be queried in Custom Attributes on the console.
2. For the import of passwords, plaintext import, MD5 ciphertext import, SHA1 ciphertext import, and BCRYPT ciphertext import are supported. The import method should be specified in the PasswordEncryptTypeEnum field.
3. IdentityVerified and IdentityVerificationMethod can be imported.
When IdentityVerified is true, IdentityVerificationMethod should be entered.
When IdentityVerificationMethod is nameAndIdCard, Name and ResidentIdentityCard should be entered.
When IdentityVerificationMethod is nameIdCardAndPhone, Name, PhoneNumber, and ResidentIdentityCard should be entered.
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
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Mobile number
                     * @return PhoneNumber Mobile number
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number
                     * @param _phoneNumber Mobile number
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

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
                     * 获取ID card number
                     * @return ResidentIdentityCard ID card number
                     * 
                     */
                    std::string GetResidentIdentityCard() const;

                    /**
                     * 设置ID card number
                     * @param _residentIdentityCard ID card number
                     * 
                     */
                    void SetResidentIdentityCard(const std::string& _residentIdentityCard);

                    /**
                     * 判断参数 ResidentIdentityCard 是否已赋值
                     * @return ResidentIdentityCard 是否已赋值
                     * 
                     */
                    bool ResidentIdentityCardHasBeenSet() const;

                    /**
                     * 获取Nickname
                     * @return Nickname Nickname
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname
                     * @param _nickname Nickname
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
                     * @param _address Address
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取User group ID
                     * @return UserGroup User group ID
                     * 
                     */
                    std::vector<std::string> GetUserGroup() const;

                    /**
                     * 设置User group ID
                     * @param _userGroup User group ID
                     * 
                     */
                    void SetUserGroup(const std::vector<std::string>& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取`qqOpenId` on QQ
                     * @return QqOpenId `qqOpenId` on QQ
                     * 
                     */
                    std::string GetQqOpenId() const;

                    /**
                     * 设置`qqOpenId` on QQ
                     * @param _qqOpenId `qqOpenId` on QQ
                     * 
                     */
                    void SetQqOpenId(const std::string& _qqOpenId);

                    /**
                     * 判断参数 QqOpenId 是否已赋值
                     * @return QqOpenId 是否已赋值
                     * 
                     */
                    bool QqOpenIdHasBeenSet() const;

                    /**
                     * 获取`qqUnionId` on QQ
                     * @return QqUnionId `qqUnionId` on QQ
                     * 
                     */
                    std::string GetQqUnionId() const;

                    /**
                     * 设置`qqUnionId` on QQ
                     * @param _qqUnionId `qqUnionId` on QQ
                     * 
                     */
                    void SetQqUnionId(const std::string& _qqUnionId);

                    /**
                     * 判断参数 QqUnionId 是否已赋值
                     * @return QqUnionId 是否已赋值
                     * 
                     */
                    bool QqUnionIdHasBeenSet() const;

                    /**
                     * 获取`wechatOpenId` on WeChat
                     * @return WechatOpenId `wechatOpenId` on WeChat
                     * 
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置`wechatOpenId` on WeChat
                     * @param _wechatOpenId `wechatOpenId` on WeChat
                     * 
                     */
                    void SetWechatOpenId(const std::string& _wechatOpenId);

                    /**
                     * 判断参数 WechatOpenId 是否已赋值
                     * @return WechatOpenId 是否已赋值
                     * 
                     */
                    bool WechatOpenIdHasBeenSet() const;

                    /**
                     * 获取`wechatUnionId` on WeChat
                     * @return WechatUnionId `wechatUnionId` on WeChat
                     * 
                     */
                    std::string GetWechatUnionId() const;

                    /**
                     * 设置`wechatUnionId` on WeChat
                     * @param _wechatUnionId `wechatUnionId` on WeChat
                     * 
                     */
                    void SetWechatUnionId(const std::string& _wechatUnionId);

                    /**
                     * 判断参数 WechatUnionId 是否已赋值
                     * @return WechatUnionId 是否已赋值
                     * 
                     */
                    bool WechatUnionIdHasBeenSet() const;

                    /**
                     * 获取`alipayUserId` on Alipay
                     * @return AlipayUserId `alipayUserId` on Alipay
                     * 
                     */
                    std::string GetAlipayUserId() const;

                    /**
                     * 设置`alipayUserId` on Alipay
                     * @param _alipayUserId `alipayUserId` on Alipay
                     * 
                     */
                    void SetAlipayUserId(const std::string& _alipayUserId);

                    /**
                     * 判断参数 AlipayUserId 是否已赋值
                     * @return AlipayUserId 是否已赋值
                     * 
                     */
                    bool AlipayUserIdHasBeenSet() const;

                    /**
                     * 获取WeCom user ID.
                     * @return WeComUserId WeCom user ID.
                     * 
                     */
                    std::string GetWeComUserId() const;

                    /**
                     * 设置WeCom user ID.
                     * @param _weComUserId WeCom user ID.
                     * 
                     */
                    void SetWeComUserId(const std::string& _weComUserId);

                    /**
                     * 判断参数 WeComUserId 是否已赋值
                     * @return WeComUserId 是否已赋值
                     * 
                     */
                    bool WeComUserIdHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Date of birth
                     * @return Birthdate Date of birth
                     * 
                     */
                    std::string GetBirthdate() const;

                    /**
                     * 设置Date of birth
                     * @param _birthdate Date of birth
                     * 
                     */
                    void SetBirthdate(const std::string& _birthdate);

                    /**
                     * 判断参数 Birthdate 是否已赋值
                     * @return Birthdate 是否已赋值
                     * 
                     */
                    bool BirthdateHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Coordinate
                     * @return Locale Coordinate
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置Coordinate
                     * @param _locale Coordinate
                     * 
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     * 
                     */
                    bool LocaleHasBeenSet() const;

                    /**
                     * 获取Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     * @return Gender Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     * @param _gender Gender. Valid values: `MALE`, `FEMALE`, `UNKNOWN`.
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Identity verification method
                     * @return IdentityVerificationMethod Identity verification method
                     * 
                     */
                    std::string GetIdentityVerificationMethod() const;

                    /**
                     * 设置Identity verification method
                     * @param _identityVerificationMethod Identity verification method
                     * 
                     */
                    void SetIdentityVerificationMethod(const std::string& _identityVerificationMethod);

                    /**
                     * 判断参数 IdentityVerificationMethod 是否已赋值
                     * @return IdentityVerificationMethod 是否已赋值
                     * 
                     */
                    bool IdentityVerificationMethodHasBeenSet() const;

                    /**
                     * 获取Whether the identity is verified
                     * @return IdentityVerified Whether the identity is verified
                     * 
                     */
                    bool GetIdentityVerified() const;

                    /**
                     * 设置Whether the identity is verified
                     * @param _identityVerified Whether the identity is verified
                     * 
                     */
                    void SetIdentityVerified(const bool& _identityVerified);

                    /**
                     * 判断参数 IdentityVerified 是否已赋值
                     * @return IdentityVerified 是否已赋值
                     * 
                     */
                    bool IdentityVerifiedHasBeenSet() const;

                    /**
                     * 获取Job
                     * @return Job Job
                     * 
                     */
                    std::string GetJob() const;

                    /**
                     * 设置Job
                     * @param _job Job
                     * 
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取Country/Region
                     * @return Nationality Country/Region
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Country/Region
                     * @param _nationality Country/Region
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Time zone
                     * @return Zone Time zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Time zone
                     * @param _zone Time zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Password ciphertext
                     * @return Password Password ciphertext
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password ciphertext
                     * @param _password Password ciphertext
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Custom attribute
                     * @return CustomizationAttributes Custom attribute
                     * 
                     */
                    std::vector<MemberMap> GetCustomizationAttributes() const;

                    /**
                     * 设置Custom attribute
                     * @param _customizationAttributes Custom attribute
                     * 
                     */
                    void SetCustomizationAttributes(const std::vector<MemberMap>& _customizationAttributes);

                    /**
                     * 判断参数 CustomizationAttributes 是否已赋值
                     * @return CustomizationAttributes 是否已赋值
                     * 
                     */
                    bool CustomizationAttributesHasBeenSet() const;

                    /**
                     * 获取Password salt
                     * @return Salt Password salt
                     * 
                     */
                    Salt GetSalt() const;

                    /**
                     * 设置Password salt
                     * @param _salt Password salt
                     * 
                     */
                    void SetSalt(const Salt& _salt);

                    /**
                     * 判断参数 Salt 是否已赋值
                     * @return Salt 是否已赋值
                     * 
                     */
                    bool SaltHasBeenSet() const;

                    /**
                     * 获取Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     * @return PasswordEncryptTypeEnum Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     * 
                     */
                    std::string GetPasswordEncryptTypeEnum() const;

                    /**
                     * 设置Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     * @param _passwordEncryptTypeEnum Password encryption method. Valid values: `SHA1`, `BCRYPT`.
                     * 
                     */
                    void SetPasswordEncryptTypeEnum(const std::string& _passwordEncryptTypeEnum);

                    /**
                     * 判断参数 PasswordEncryptTypeEnum 是否已赋值
                     * @return PasswordEncryptTypeEnum 是否已赋值
                     * 
                     */
                    bool PasswordEncryptTypeEnumHasBeenSet() const;

                    /**
                     * 获取Index field 1
                     * @return IndexedAttribute1 Index field 1
                     * 
                     */
                    std::string GetIndexedAttribute1() const;

                    /**
                     * 设置Index field 1
                     * @param _indexedAttribute1 Index field 1
                     * 
                     */
                    void SetIndexedAttribute1(const std::string& _indexedAttribute1);

                    /**
                     * 判断参数 IndexedAttribute1 是否已赋值
                     * @return IndexedAttribute1 是否已赋值
                     * 
                     */
                    bool IndexedAttribute1HasBeenSet() const;

                    /**
                     * 获取Index field 2
                     * @return IndexedAttribute2 Index field 2
                     * 
                     */
                    std::string GetIndexedAttribute2() const;

                    /**
                     * 设置Index field 2
                     * @param _indexedAttribute2 Index field 2
                     * 
                     */
                    void SetIndexedAttribute2(const std::string& _indexedAttribute2);

                    /**
                     * 判断参数 IndexedAttribute2 是否已赋值
                     * @return IndexedAttribute2 是否已赋值
                     * 
                     */
                    bool IndexedAttribute2HasBeenSet() const;

                    /**
                     * 获取Index field 3
                     * @return IndexedAttribute3 Index field 3
                     * 
                     */
                    std::string GetIndexedAttribute3() const;

                    /**
                     * 设置Index field 3
                     * @param _indexedAttribute3 Index field 3
                     * 
                     */
                    void SetIndexedAttribute3(const std::string& _indexedAttribute3);

                    /**
                     * 判断参数 IndexedAttribute3 是否已赋值
                     * @return IndexedAttribute3 是否已赋值
                     * 
                     */
                    bool IndexedAttribute3HasBeenSet() const;

                    /**
                     * 获取Index field 4
                     * @return IndexedAttribute4 Index field 4
                     * 
                     */
                    std::string GetIndexedAttribute4() const;

                    /**
                     * 设置Index field 4
                     * @param _indexedAttribute4 Index field 4
                     * 
                     */
                    void SetIndexedAttribute4(const std::string& _indexedAttribute4);

                    /**
                     * 判断参数 IndexedAttribute4 是否已赋值
                     * @return IndexedAttribute4 是否已赋值
                     * 
                     */
                    bool IndexedAttribute4HasBeenSet() const;

                    /**
                     * 获取Index field 5
                     * @return IndexedAttribute5 Index field 5
                     * 
                     */
                    std::string GetIndexedAttribute5() const;

                    /**
                     * 设置Index field 5
                     * @param _indexedAttribute5 Index field 5
                     * 
                     */
                    void SetIndexedAttribute5(const std::string& _indexedAttribute5);

                    /**
                     * 判断参数 IndexedAttribute5 是否已赋值
                     * @return IndexedAttribute5 是否已赋值
                     * 
                     */
                    bool IndexedAttribute5HasBeenSet() const;

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
                     * WeCom user ID.
                     */
                    std::string m_weComUserId;
                    bool m_weComUserIdHasBeenSet;

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

                    /**
                     * Index field 1
                     */
                    std::string m_indexedAttribute1;
                    bool m_indexedAttribute1HasBeenSet;

                    /**
                     * Index field 2
                     */
                    std::string m_indexedAttribute2;
                    bool m_indexedAttribute2HasBeenSet;

                    /**
                     * Index field 3
                     */
                    std::string m_indexedAttribute3;
                    bool m_indexedAttribute3HasBeenSet;

                    /**
                     * Index field 4
                     */
                    std::string m_indexedAttribute4;
                    bool m_indexedAttribute4HasBeenSet;

                    /**
                     * Index field 5
                     */
                    std::string m_indexedAttribute5;
                    bool m_indexedAttribute5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_IMPORTUSER_H_
