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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_USER_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * This field indicates the account-related information of the service subscriber
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field indicates the service subscriber ID. This ID can be used to optimize the moderation result judgment based on the account's violation records, which is helpful for auxiliary judgment when there is a risk of suspected violations.
                     * @return UserId This field indicates the service subscriber ID. This ID can be used to optimize the moderation result judgment based on the account's violation records, which is helpful for auxiliary judgment when there is a risk of suspected violations.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置This field indicates the service subscriber ID. This ID can be used to optimize the moderation result judgment based on the account's violation records, which is helpful for auxiliary judgment when there is a risk of suspected violations.
                     * @param UserId This field indicates the service subscriber ID. This ID can be used to optimize the moderation result judgment based on the account's violation records, which is helpful for auxiliary judgment when there is a risk of suspected violations.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取This field indicates the account nickname information of the service subscriber.
                     * @return Nickname This field indicates the account nickname information of the service subscriber.
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置This field indicates the account nickname information of the service subscriber.
                     * @param Nickname This field indicates the account nickname information of the service subscriber.
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取This field indicates the account type corresponding to the service subscriber ID.<br>
Use this field and the account ID (UserId) together to determine a unique account.
                     * @return AccountType This field indicates the account type corresponding to the service subscriber ID.<br>
Use this field and the account ID (UserId) together to determine a unique account.
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置This field indicates the account type corresponding to the service subscriber ID.<br>
Use this field and the account ID (UserId) together to determine a unique account.
                     * @param AccountType This field indicates the account type corresponding to the service subscriber ID.<br>
Use this field and the account ID (UserId) together to determine a unique account.
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取This field indicates the gender information of the service subscriber's account.<br>
Values: **0** (default value, indicating the gender is unknown), **1** (male) and **2** (female).
                     * @return Gender This field indicates the gender information of the service subscriber's account.<br>
Values: **0** (default value, indicating the gender is unknown), **1** (male) and **2** (female).
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置This field indicates the gender information of the service subscriber's account.<br>
Values: **0** (default value, indicating the gender is unknown), **1** (male) and **2** (female).
                     * @param Gender This field indicates the gender information of the service subscriber's account.<br>
Values: **0** (default value, indicating the gender is unknown), **1** (male) and **2** (female).
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取This field indicates the age information of the service subscriber's account.<br>
Values: Integers between **0** (default value, indicating that the age is unknown) and the number of (**custom maximum age**).
                     * @return Age This field indicates the age information of the service subscriber's account.<br>
Values: Integers between **0** (default value, indicating that the age is unknown) and the number of (**custom maximum age**).
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置This field indicates the age information of the service subscriber's account.<br>
Values: Integers between **0** (default value, indicating that the age is unknown) and the number of (**custom maximum age**).
                     * @param Age This field indicates the age information of the service subscriber's account.<br>
Values: Integers between **0** (default value, indicating that the age is unknown) and the number of (**custom maximum age**).
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取This field indicates the level information of the service subscriber's account.<br>
Values: **0** (default value, indicating that the level is unknown), **1** (lower level), **2** (medium level) and **3** (higher level). Currently, **custom levels are not supported**.
                     * @return Level This field indicates the level information of the service subscriber's account.<br>
Values: **0** (default value, indicating that the level is unknown), **1** (lower level), **2** (medium level) and **3** (higher level). Currently, **custom levels are not supported**.
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置This field indicates the level information of the service subscriber's account.<br>
Values: **0** (default value, indicating that the level is unknown), **1** (lower level), **2** (medium level) and **3** (higher level). Currently, **custom levels are not supported**.
                     * @param Level This field indicates the level information of the service subscriber's account.<br>
Values: **0** (default value, indicating that the level is unknown), **1** (lower level), **2** (medium level) and **3** (higher level). Currently, **custom levels are not supported**.
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取This field indicates the mobile phone number information of the service subscriber's account. The mobile phone numbers in various regions of the world can be recorded.<br>
Note: Please keep the format of mobile phone number uniform. For example, uniformly use the area code format (086/+86), etc.
                     * @return Phone This field indicates the mobile phone number information of the service subscriber's account. The mobile phone numbers in various regions of the world can be recorded.<br>
Note: Please keep the format of mobile phone number uniform. For example, uniformly use the area code format (086/+86), etc.
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置This field indicates the mobile phone number information of the service subscriber's account. The mobile phone numbers in various regions of the world can be recorded.<br>
Note: Please keep the format of mobile phone number uniform. For example, uniformly use the area code format (086/+86), etc.
                     * @param Phone This field indicates the mobile phone number information of the service subscriber's account. The mobile phone numbers in various regions of the world can be recorded.<br>
Note: Please keep the format of mobile phone number uniform. For example, uniformly use the area code format (086/+86), etc.
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取This field indicates the URL of the service subscriber's profile photos formatted with .png, .jpg, .jpeg, .bmp, .gif and .webp.
Note: Up to 5 MB is supported, and the minimum resolution is 256 x 256. When it takes more than 3 seconds to download, the "download timeout" is returned.
                     * @return HeadUrl This field indicates the URL of the service subscriber's profile photos formatted with .png, .jpg, .jpeg, .bmp, .gif and .webp.
Note: Up to 5 MB is supported, and the minimum resolution is 256 x 256. When it takes more than 3 seconds to download, the "download timeout" is returned.
                     */
                    std::string GetHeadUrl() const;

                    /**
                     * 设置This field indicates the URL of the service subscriber's profile photos formatted with .png, .jpg, .jpeg, .bmp, .gif and .webp.
Note: Up to 5 MB is supported, and the minimum resolution is 256 x 256. When it takes more than 3 seconds to download, the "download timeout" is returned.
                     * @param HeadUrl This field indicates the URL of the service subscriber's profile photos formatted with .png, .jpg, .jpeg, .bmp, .gif and .webp.
Note: Up to 5 MB is supported, and the minimum resolution is 256 x 256. When it takes more than 3 seconds to download, the "download timeout" is returned.
                     */
                    void SetHeadUrl(const std::string& _headUrl);

                    /**
                     * 判断参数 HeadUrl 是否已赋值
                     * @return HeadUrl 是否已赋值
                     */
                    bool HeadUrlHasBeenSet() const;

                    /**
                     * 获取This field indicates the profile information of service subscribers. It can contain up to 5,000 characters, including Chinese characters, letters and special symbols.
                     * @return Desc This field indicates the profile information of service subscribers. It can contain up to 5,000 characters, including Chinese characters, letters and special symbols.
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置This field indicates the profile information of service subscribers. It can contain up to 5,000 characters, including Chinese characters, letters and special symbols.
                     * @param Desc This field indicates the profile information of service subscribers. It can contain up to 5,000 characters, including Chinese characters, letters and special symbols.
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * This field indicates the service subscriber ID. This ID can be used to optimize the moderation result judgment based on the account's violation records, which is helpful for auxiliary judgment when there is a risk of suspected violations.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * This field indicates the account nickname information of the service subscriber.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * This field indicates the account type corresponding to the service subscriber ID.<br>
Use this field and the account ID (UserId) together to determine a unique account.
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * This field indicates the gender information of the service subscriber's account.<br>
Values: **0** (default value, indicating the gender is unknown), **1** (male) and **2** (female).
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * This field indicates the age information of the service subscriber's account.<br>
Values: Integers between **0** (default value, indicating that the age is unknown) and the number of (**custom maximum age**).
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * This field indicates the level information of the service subscriber's account.<br>
Values: **0** (default value, indicating that the level is unknown), **1** (lower level), **2** (medium level) and **3** (higher level). Currently, **custom levels are not supported**.
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * This field indicates the mobile phone number information of the service subscriber's account. The mobile phone numbers in various regions of the world can be recorded.<br>
Note: Please keep the format of mobile phone number uniform. For example, uniformly use the area code format (086/+86), etc.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * This field indicates the URL of the service subscriber's profile photos formatted with .png, .jpg, .jpeg, .bmp, .gif and .webp.
Note: Up to 5 MB is supported, and the minimum resolution is 256 x 256. When it takes more than 3 seconds to download, the "download timeout" is returned.
                     */
                    std::string m_headUrl;
                    bool m_headUrlHasBeenSet;

                    /**
                     * This field indicates the profile information of service subscribers. It can contain up to 5,000 characters, including Chinese characters, letters and special symbols.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_USER_H_
