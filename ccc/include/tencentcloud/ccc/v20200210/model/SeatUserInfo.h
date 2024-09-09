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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Agent User Information
                */
                class SeatUserInfo : public AbstractModel
                {
                public:
                    SeatUserInfo();
                    ~SeatUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent name.
                     * @return Name Agent name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Agent name.
                     * @param _name Agent name.
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
                     * 获取Agent email.
                     * @return Mail Agent email.
                     * 
                     */
                    std::string GetMail() const;

                    /**
                     * 设置Agent email.
                     * @param _mail Agent email.
                     * 
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     * 
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取Worker number.
Note: This field may return null, indicating that no valid value could be obtained.
                     * @return StaffNumber Worker number.
Note: This field may return null, indicating that no valid value could be obtained.
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置Worker number.
Note: This field may return null, indicating that no valid value could be obtained.
                     * @param _staffNumber Worker number.
Note: This field may return null, indicating that no valid value could be obtained.
                     * 
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     * 
                     */
                    bool StaffNumberHasBeenSet() const;

                    /**
                     * 获取Agent's Telephone Number (With 0086 Prefix)
                     * @return Phone Agent's Telephone Number (With 0086 Prefix)
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent's Telephone Number (With 0086 Prefix)
                     * @param _phone Agent's Telephone Number (With 0086 Prefix)
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
                     * 获取Agent nickname.
                     * @return Nick Agent nickname.
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置Agent nickname.
                     * @param _nick Agent nickname.
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

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
                     * 获取List of skill groups associated with the seat
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SkillGroupNameList List of skill groups associated with the seat
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSkillGroupNameList() const;

                    /**
                     * 设置List of skill groups associated with the seat
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _skillGroupNameList List of skill groups associated with the seat
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSkillGroupNameList(const std::vector<std::string>& _skillGroupNameList);

                    /**
                     * 判断参数 SkillGroupNameList 是否已赋值
                     * @return SkillGroupNameList 是否已赋值
                     * 
                     */
                    bool SkillGroupNameListHasBeenSet() const;

                    /**
                     * 获取1: Admin.
2: Quality inspector.
3: Ordinary agent.
else: Custom Role ID.
Note: This field may return null, indicating that no valid value could be obtained.
                     * @return Role 1: Admin.
2: Quality inspector.
3: Ordinary agent.
else: Custom Role ID.
Note: This field may return null, indicating that no valid value could be obtained.
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置1: Admin.
2: Quality inspector.
3: Ordinary agent.
else: Custom Role ID.
Note: This field may return null, indicating that no valid value could be obtained.
                     * @param _role 1: Admin.
2: Quality inspector.
3: Ordinary agent.
else: Custom Role ID.
Note: This field may return null, indicating that no valid value could be obtained.
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * Agent name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent email.
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * Worker number.
Note: This field may return null, indicating that no valid value could be obtained.
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * Agent's Telephone Number (With 0086 Prefix)
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Agent nickname.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * List of skill groups associated with the seat
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_skillGroupNameList;
                    bool m_skillGroupNameListHasBeenSet;

                    /**
                     * 1: Admin.
2: Quality inspector.
3: Ordinary agent.
else: Custom Role ID.
Note: This field may return null, indicating that no valid value could be obtained.
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_
