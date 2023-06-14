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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateUser request structure.
                */
                class UpdateUserRequest : public AbstractModel
                {
                public:
                    UpdateUserRequest();
                    ~UpdateUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User ID
                     * @return UserId User ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param _userId User ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

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
                     * 获取User group
                     * @return UserGroup User group
                     * 
                     */
                    std::vector<std::string> GetUserGroup() const;

                    /**
                     * 设置User group
                     * @param _userGroup User group
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
                     * 获取Date of birth
                     * @return Birthdate Date of birth
                     * 
                     */
                    int64_t GetBirthdate() const;

                    /**
                     * 设置Date of birth
                     * @param _birthdate Date of birth
                     * 
                     */
                    void SetBirthdate(const int64_t& _birthdate);

                    /**
                     * 判断参数 Birthdate 是否已赋值
                     * @return Birthdate 是否已赋值
                     * 
                     */
                    bool BirthdateHasBeenSet() const;

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
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

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
                     * User group
                     */
                    std::vector<std::string> m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * Date of birth
                     */
                    int64_t m_birthdate;
                    bool m_birthdateHasBeenSet;

                    /**
                     * Custom attribute
                     */
                    std::vector<MemberMap> m_customizationAttributes;
                    bool m_customizationAttributesHasBeenSet;

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

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERREQUEST_H_
