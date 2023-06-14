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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_USER_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Indicates the information of the business user's account
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field indicates the business user ID. After it is specified, the system can optimize the moderation result according to the violation history to facilitate determination when a suspicious violation risk exists.
                     * @return UserId This field indicates the business user ID. After it is specified, the system can optimize the moderation result according to the violation history to facilitate determination when a suspicious violation risk exists.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置This field indicates the business user ID. After it is specified, the system can optimize the moderation result according to the violation history to facilitate determination when a suspicious violation risk exists.
                     * @param _userId This field indicates the business user ID. After it is specified, the system can optimize the moderation result according to the violation history to facilitate determination when a suspicious violation risk exists.
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
                     * 获取This field indicates the nickname of the business user's account.
                     * @return Nickname This field indicates the nickname of the business user's account.
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置This field indicates the nickname of the business user's account.
                     * @param _nickname This field indicates the nickname of the business user's account.
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
                     * 获取This field indicates the account type of the business user ID.<br>
This field can be used together with the ID parameter (UserId) to uniquely identify the account.
                     * @return AccountType This field indicates the account type of the business user ID.<br>
This field can be used together with the ID parameter (UserId) to uniquely identify the account.
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置This field indicates the account type of the business user ID.<br>
This field can be used together with the ID parameter (UserId) to uniquely identify the account.
                     * @param _accountType This field indicates the account type of the business user ID.<br>
This field can be used together with the ID parameter (UserId) to uniquely identify the account.
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取This field indicates the gender of the business user's account.<br>
Valid values: **0** (default value): unknown; **1** (male); **2** (female).
                     * @return Gender This field indicates the gender of the business user's account.<br>
Valid values: **0** (default value): unknown; **1** (male); **2** (female).
                     * 
                     */
                    uint64_t GetGender() const;

                    /**
                     * 设置This field indicates the gender of the business user's account.<br>
Valid values: **0** (default value): unknown; **1** (male); **2** (female).
                     * @param _gender This field indicates the gender of the business user's account.<br>
Valid values: **0** (default value): unknown; **1** (male); **2** (female).
                     * 
                     */
                    void SetGender(const uint64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取This field indicates the age of the business user's account.<br>
Valid values: integers between **0** (default value, which indicates unknown) and **custom age limit**.
                     * @return Age This field indicates the age of the business user's account.<br>
Valid values: integers between **0** (default value, which indicates unknown) and **custom age limit**.
                     * 
                     */
                    uint64_t GetAge() const;

                    /**
                     * 设置This field indicates the age of the business user's account.<br>
Valid values: integers between **0** (default value, which indicates unknown) and **custom age limit**.
                     * @param _age This field indicates the age of the business user's account.<br>
Valid values: integers between **0** (default value, which indicates unknown) and **custom age limit**.
                     * 
                     */
                    void SetAge(const uint64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取This field indicates the level of the business user's account.<br>
Valid values: **0** (default value): unknown; **1**: low level; **2**: medium level; **3**: high level. Currently, **the level is not customizable**.
                     * @return Level This field indicates the level of the business user's account.<br>
Valid values: **0** (default value): unknown; **1**: low level; **2**: medium level; **3**: high level. Currently, **the level is not customizable**.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置This field indicates the level of the business user's account.<br>
Valid values: **0** (default value): unknown; **1**: low level; **2**: medium level; **3**: high level. Currently, **the level is not customizable**.
                     * @param _level This field indicates the level of the business user's account.<br>
Valid values: **0** (default value): unknown; **1**: low level; **2**: medium level; **3**: high level. Currently, **the level is not customizable**.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取This field indicates the mobile number of the business user's account. It supports recording mobile numbers across the world.<br>
Note: you need to use a consistent mobile number format, such as area code format (086/+86).
                     * @return Phone This field indicates the mobile number of the business user's account. It supports recording mobile numbers across the world.<br>
Note: you need to use a consistent mobile number format, such as area code format (086/+86).
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置This field indicates the mobile number of the business user's account. It supports recording mobile numbers across the world.<br>
Note: you need to use a consistent mobile number format, such as area code format (086/+86).
                     * @param _phone This field indicates the mobile number of the business user's account. It supports recording mobile numbers across the world.<br>
Note: you need to use a consistent mobile number format, such as area code format (086/+86).
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取This field indicates the profile of the business user. It can contain **up to 5,000 letters and special symbols**.
                     * @return Desc This field indicates the profile of the business user. It can contain **up to 5,000 letters and special symbols**.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置This field indicates the profile of the business user. It can contain **up to 5,000 letters and special symbols**.
                     * @param _desc This field indicates the profile of the business user. It can contain **up to 5,000 letters and special symbols**.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取This field indicates the access URL of the business user's profile photo in PNG, JPG, JPEG, BMP, GIF, or WEBP format.<br>Note: the profile photo **cannot exceed 5 MB in size**. **A resolution of 256x256 or higher** is recommended. The image download time should be limited to 3 seconds; otherwise, a download timeout will be returned.
                     * @return HeadUrl This field indicates the access URL of the business user's profile photo in PNG, JPG, JPEG, BMP, GIF, or WEBP format.<br>Note: the profile photo **cannot exceed 5 MB in size**. **A resolution of 256x256 or higher** is recommended. The image download time should be limited to 3 seconds; otherwise, a download timeout will be returned.
                     * 
                     */
                    std::string GetHeadUrl() const;

                    /**
                     * 设置This field indicates the access URL of the business user's profile photo in PNG, JPG, JPEG, BMP, GIF, or WEBP format.<br>Note: the profile photo **cannot exceed 5 MB in size**. **A resolution of 256x256 or higher** is recommended. The image download time should be limited to 3 seconds; otherwise, a download timeout will be returned.
                     * @param _headUrl This field indicates the access URL of the business user's profile photo in PNG, JPG, JPEG, BMP, GIF, or WEBP format.<br>Note: the profile photo **cannot exceed 5 MB in size**. **A resolution of 256x256 or higher** is recommended. The image download time should be limited to 3 seconds; otherwise, a download timeout will be returned.
                     * 
                     */
                    void SetHeadUrl(const std::string& _headUrl);

                    /**
                     * 判断参数 HeadUrl 是否已赋值
                     * @return HeadUrl 是否已赋值
                     * 
                     */
                    bool HeadUrlHasBeenSet() const;

                private:

                    /**
                     * This field indicates the business user ID. After it is specified, the system can optimize the moderation result according to the violation history to facilitate determination when a suspicious violation risk exists.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * This field indicates the nickname of the business user's account.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * This field indicates the account type of the business user ID.<br>
This field can be used together with the ID parameter (UserId) to uniquely identify the account.
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * This field indicates the gender of the business user's account.<br>
Valid values: **0** (default value): unknown; **1** (male); **2** (female).
                     */
                    uint64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * This field indicates the age of the business user's account.<br>
Valid values: integers between **0** (default value, which indicates unknown) and **custom age limit**.
                     */
                    uint64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * This field indicates the level of the business user's account.<br>
Valid values: **0** (default value): unknown; **1**: low level; **2**: medium level; **3**: high level. Currently, **the level is not customizable**.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * This field indicates the mobile number of the business user's account. It supports recording mobile numbers across the world.<br>
Note: you need to use a consistent mobile number format, such as area code format (086/+86).
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * This field indicates the profile of the business user. It can contain **up to 5,000 letters and special symbols**.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * This field indicates the access URL of the business user's profile photo in PNG, JPG, JPEG, BMP, GIF, or WEBP format.<br>Note: the profile photo **cannot exceed 5 MB in size**. **A resolution of 256x256 or higher** is recommended. The image download time should be limited to 3 seconds; otherwise, a download timeout will be returned.
                     */
                    std::string m_headUrl;
                    bool m_headUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_USER_H_
