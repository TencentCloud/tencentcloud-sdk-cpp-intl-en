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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/MemberMap.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * User information
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return UserId User ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param UserId User ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserName Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Mobile number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneNumber Mobile number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PhoneNumber Mobile number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Email address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email Email address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Email Email address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastSignOn Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetLastSignOn() const;

                    /**
                     * 设置Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastSignOn Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastSignOn(const int64_t& _lastSignOn);

                    /**
                     * 判断参数 LastSignOn 是否已赋值
                     * @return LastSignOn 是否已赋值
                     */
                    bool LastSignOnHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedDate Creation time
                     */
                    int64_t GetCreatedDate() const;

                    /**
                     * 设置Creation time
                     * @param CreatedDate Creation time
                     */
                    void SetCreatedDate(const int64_t& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param Status Status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取User source
                     * @return UserDataSourceEnum User source
                     */
                    std::string GetUserDataSourceEnum() const;

                    /**
                     * 设置User source
                     * @param UserDataSourceEnum User source
                     */
                    void SetUserDataSourceEnum(const std::string& _userDataSourceEnum);

                    /**
                     * 判断参数 UserDataSourceEnum 是否已赋值
                     * @return UserDataSourceEnum 是否已赋值
                     */
                    bool UserDataSourceEnumHasBeenSet() const;

                    /**
                     * 获取Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nickname Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Nickname Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Address Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Date of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Birthdate Date of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetBirthdate() const;

                    /**
                     * 设置Date of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Birthdate Date of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBirthdate(const int64_t& _birthdate);

                    /**
                     * 判断参数 Birthdate 是否已赋值
                     * @return Birthdate 是否已赋值
                     */
                    bool BirthdateHasBeenSet() const;

                    /**
                     * 获取User group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserGroups User group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetUserGroups() const;

                    /**
                     * 设置User group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserGroups User group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserGroups(const std::vector<std::string>& _userGroups);

                    /**
                     * 判断参数 UserGroups 是否已赋值
                     * @return UserGroups 是否已赋值
                     */
                    bool UserGroupsHasBeenSet() const;

                    /**
                     * 获取Last modified time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastModifiedDate Last modified time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetLastModifiedDate() const;

                    /**
                     * 设置Last modified time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastModifiedDate Last modified time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastModifiedDate(const int64_t& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取Custom attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomAttributes Custom attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MemberMap> GetCustomAttributes() const;

                    /**
                     * 设置Custom attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CustomAttributes Custom attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCustomAttributes(const std::vector<MemberMap>& _customAttributes);

                    /**
                     * 判断参数 CustomAttributes 是否已赋值
                     * @return CustomAttributes 是否已赋值
                     */
                    bool CustomAttributesHasBeenSet() const;

                    /**
                     * 获取ID card number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResidentIdentityCard ID card number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResidentIdentityCard() const;

                    /**
                     * 设置ID card number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ResidentIdentityCard ID card number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResidentIdentityCard(const std::string& _residentIdentityCard);

                    /**
                     * 判断参数 ResidentIdentityCard 是否已赋值
                     * @return ResidentIdentityCard 是否已赋值
                     */
                    bool ResidentIdentityCardHasBeenSet() const;

                    /**
                     * 获取`OpenId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QqOpenId `OpenId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetQqOpenId() const;

                    /**
                     * 设置`OpenId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param QqOpenId `OpenId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetQqOpenId(const std::string& _qqOpenId);

                    /**
                     * 判断参数 QqOpenId 是否已赋值
                     * @return QqOpenId 是否已赋值
                     */
                    bool QqOpenIdHasBeenSet() const;

                    /**
                     * 获取`UnionId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QqUnionId `UnionId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetQqUnionId() const;

                    /**
                     * 设置`UnionId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param QqUnionId `UnionId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetQqUnionId(const std::string& _qqUnionId);

                    /**
                     * 判断参数 QqUnionId 是否已赋值
                     * @return QqUnionId 是否已赋值
                     */
                    bool QqUnionIdHasBeenSet() const;

                    /**
                     * 获取`WechatOpenId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WechatOpenId `WechatOpenId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWechatOpenId() const;

                    /**
                     * 设置`WechatOpenId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WechatOpenId `WechatOpenId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWechatOpenId(const std::string& _wechatOpenId);

                    /**
                     * 判断参数 WechatOpenId 是否已赋值
                     * @return WechatOpenId 是否已赋值
                     */
                    bool WechatOpenIdHasBeenSet() const;

                    /**
                     * 获取`WechatUnionId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WechatUnionId `WechatUnionId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetWechatUnionId() const;

                    /**
                     * 设置`WechatUnionId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WechatUnionId `WechatUnionId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWechatUnionId(const std::string& _wechatUnionId);

                    /**
                     * 判断参数 WechatUnionId 是否已赋值
                     * @return WechatUnionId 是否已赋值
                     */
                    bool WechatUnionIdHasBeenSet() const;

                    /**
                     * 获取`AlipayUserId` on Alipay
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlipayUserId `AlipayUserId` on Alipay
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAlipayUserId() const;

                    /**
                     * 设置`AlipayUserId` on Alipay
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AlipayUserId `AlipayUserId` on Alipay
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAlipayUserId(const std::string& _alipayUserId);

                    /**
                     * 判断参数 AlipayUserId 是否已赋值
                     * @return AlipayUserId 是否已赋值
                     */
                    bool AlipayUserIdHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Name Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Locale Coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置Coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Locale Coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     */
                    bool LocaleHasBeenSet() const;

                    /**
                     * 获取Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Gender Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGender() const;

                    /**
                     * 设置Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Gender Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Identity verification method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityVerificationMethod Identity verification method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIdentityVerificationMethod() const;

                    /**
                     * 设置Identity verification method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IdentityVerificationMethod Identity verification method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIdentityVerificationMethod(const std::string& _identityVerificationMethod);

                    /**
                     * 判断参数 IdentityVerificationMethod 是否已赋值
                     * @return IdentityVerificationMethod 是否已赋值
                     */
                    bool IdentityVerificationMethodHasBeenSet() const;

                    /**
                     * 获取Whether the identity is verified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IdentityVerified Whether the identity is verified
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIdentityVerified() const;

                    /**
                     * 设置Whether the identity is verified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IdentityVerified Whether the identity is verified
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIdentityVerified(const bool& _identityVerified);

                    /**
                     * 判断参数 IdentityVerified 是否已赋值
                     * @return IdentityVerified 是否已赋值
                     */
                    bool IdentityVerifiedHasBeenSet() const;

                    /**
                     * 获取Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Job Job
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetJob() const;

                    /**
                     * 设置Job
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Job Job
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nationality Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Nationality Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Whether the account is the primary account (after account merge, this parameter is `true` for primary accounts and `false` for secondary account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Primary Whether the account is the primary account (after account merge, this parameter is `true` for primary accounts and `false` for secondary account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Whether the account is the primary account (after account merge, this parameter is `true` for primary accounts and `false` for secondary account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Primary Whether the account is the primary account (after account merge, this parameter is `true` for primary accounts and `false` for secondary account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Zone Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Whether the account has ever logged in.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlreadyFirstLogin Whether the account has ever logged in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetAlreadyFirstLogin() const;

                    /**
                     * 设置Whether the account has ever logged in.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AlreadyFirstLogin Whether the account has ever logged in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAlreadyFirstLogin(const bool& _alreadyFirstLogin);

                    /**
                     * 判断参数 AlreadyFirstLogin 是否已赋值
                     * @return AlreadyFirstLogin 是否已赋值
                     */
                    bool AlreadyFirstLoginHasBeenSet() const;

                    /**
                     * 获取Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TenantId Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TenantId Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取User directory ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserStoreId User directory ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserStoreId User directory ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Lock type (locked by admin or locked by login policy)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LockType Lock type (locked by admin or locked by login policy)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLockType() const;

                    /**
                     * 设置Lock type (locked by admin or locked by login policy)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LockType Lock type (locked by admin or locked by login policy)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLockType(const std::string& _lockType);

                    /**
                     * 判断参数 LockType 是否已赋值
                     * @return LockType 是否已赋值
                     */
                    bool LockTypeHasBeenSet() const;

                    /**
                     * 获取Lock time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LockTime Lock time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetLockTime() const;

                    /**
                     * 设置Lock time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LockTime Lock time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLockTime(const int64_t& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取Index field 1
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexedAttribute1 Index field 1
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIndexedAttribute1() const;

                    /**
                     * 设置Index field 1
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IndexedAttribute1 Index field 1
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIndexedAttribute1(const std::string& _indexedAttribute1);

                    /**
                     * 判断参数 IndexedAttribute1 是否已赋值
                     * @return IndexedAttribute1 是否已赋值
                     */
                    bool IndexedAttribute1HasBeenSet() const;

                    /**
                     * 获取Index field 2
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexedAttribute2 Index field 2
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIndexedAttribute2() const;

                    /**
                     * 设置Index field 2
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IndexedAttribute2 Index field 2
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIndexedAttribute2(const std::string& _indexedAttribute2);

                    /**
                     * 判断参数 IndexedAttribute2 是否已赋值
                     * @return IndexedAttribute2 是否已赋值
                     */
                    bool IndexedAttribute2HasBeenSet() const;

                    /**
                     * 获取Index field 3
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexedAttribute3 Index field 3
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIndexedAttribute3() const;

                    /**
                     * 设置Index field 3
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IndexedAttribute3 Index field 3
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIndexedAttribute3(const std::string& _indexedAttribute3);

                    /**
                     * 判断参数 IndexedAttribute3 是否已赋值
                     * @return IndexedAttribute3 是否已赋值
                     */
                    bool IndexedAttribute3HasBeenSet() const;

                    /**
                     * 获取Index field 4
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexedAttribute4 Index field 4
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIndexedAttribute4() const;

                    /**
                     * 设置Index field 4
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IndexedAttribute4 Index field 4
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIndexedAttribute4(const std::string& _indexedAttribute4);

                    /**
                     * 判断参数 IndexedAttribute4 是否已赋值
                     * @return IndexedAttribute4 是否已赋值
                     */
                    bool IndexedAttribute4HasBeenSet() const;

                    /**
                     * 获取Index field 5
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IndexedAttribute5 Index field 5
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIndexedAttribute5() const;

                    /**
                     * 设置Index field 5
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IndexedAttribute5 Index field 5
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIndexedAttribute5(const std::string& _indexedAttribute5);

                    /**
                     * 判断参数 IndexedAttribute5 是否已赋值
                     * @return IndexedAttribute5 是否已赋值
                     */
                    bool IndexedAttribute5HasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Mobile number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Email address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Last login time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastSignOn;
                    bool m_lastSignOnHasBeenSet;

                    /**
                     * Creation time
                     */
                    int64_t m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * User source
                     */
                    std::string m_userDataSourceEnum;
                    bool m_userDataSourceEnumHasBeenSet;

                    /**
                     * Nickname
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Date of birth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * User group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_userGroups;
                    bool m_userGroupsHasBeenSet;

                    /**
                     * Last modified time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * Custom attribute
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MemberMap> m_customAttributes;
                    bool m_customAttributesHasBeenSet;

                    /**
                     * ID card number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_residentIdentityCard;
                    bool m_residentIdentityCardHasBeenSet;

                    /**
                     * `OpenId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qqOpenId;
                    bool m_qqOpenIdHasBeenSet;

                    /**
                     * `UnionId` on QQ
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_qqUnionId;
                    bool m_qqUnionIdHasBeenSet;

                    /**
                     * `WechatOpenId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wechatOpenId;
                    bool m_wechatOpenIdHasBeenSet;

                    /**
                     * `WechatUnionId` on WeChat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wechatUnionId;
                    bool m_wechatUnionIdHasBeenSet;

                    /**
                     * `AlipayUserId` on Alipay
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alipayUserId;
                    bool m_alipayUserIdHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Coordinate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * Gender
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Identity verification method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_identityVerificationMethod;
                    bool m_identityVerificationMethodHasBeenSet;

                    /**
                     * Whether the identity is verified
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_identityVerified;
                    bool m_identityVerifiedHasBeenSet;

                    /**
                     * Job
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * Country/Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Whether the account is the primary account (after account merge, this parameter is `true` for primary accounts and `false` for secondary account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Whether the account has ever logged in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_alreadyFirstLogin;
                    bool m_alreadyFirstLoginHasBeenSet;

                    /**
                     * Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * User directory ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Lock type (locked by admin or locked by login policy)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lockType;
                    bool m_lockTypeHasBeenSet;

                    /**
                     * Lock time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Index field 1
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexedAttribute1;
                    bool m_indexedAttribute1HasBeenSet;

                    /**
                     * Index field 2
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexedAttribute2;
                    bool m_indexedAttribute2HasBeenSet;

                    /**
                     * Index field 3
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexedAttribute3;
                    bool m_indexedAttribute3HasBeenSet;

                    /**
                     * Index field 4
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexedAttribute4;
                    bool m_indexedAttribute4HasBeenSet;

                    /**
                     * Index field 5
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexedAttribute5;
                    bool m_indexedAttribute5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_USER_H_
