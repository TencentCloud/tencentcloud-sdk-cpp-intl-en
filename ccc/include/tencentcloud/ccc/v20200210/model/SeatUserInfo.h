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
                     * @return StaffNumber Worker number.
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置Worker number.
                     * @param _staffNumber Worker number.
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
                     * 获取Agent'S telephone number (with 0086 prefix).
                     * @return Phone Agent'S telephone number (with 0086 prefix).
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent'S telephone number (with 0086 prefix).
                     * @param _phone Agent'S telephone number (with 0086 prefix).
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
                     * 获取User id.
                     * @return UserId User id.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User id.
                     * @param _userId User id.
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
                     * 获取List of skill groups associated with the agent.
                     * @return SkillGroupNameList List of skill groups associated with the agent.
                     * 
                     */
                    std::vector<std::string> GetSkillGroupNameList() const;

                    /**
                     * 设置List of skill groups associated with the agent.
                     * @param _skillGroupNameList List of skill groups associated with the agent.
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
                     * 获取1: admin.
2: quality inspector.
3: ordinary agent.
Else: custom role id.
                     * @return Role 1: admin.
2: quality inspector.
3: ordinary agent.
Else: custom role id.
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置1: admin.
2: quality inspector.
3: ordinary agent.
Else: custom role id.
                     * @param _role 1: admin.
2: quality inspector.
3: ordinary agent.
Else: custom role id.
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * @return ExtensionNumber Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * 
                     */
                    std::string GetExtensionNumber() const;

                    /**
                     * 设置Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * @param _extensionNumber Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * 
                     */
                    void SetExtensionNumber(const std::string& _extensionNumber);

                    /**
                     * 判断参数 ExtensionNumber 是否已赋值
                     * @return ExtensionNumber 是否已赋值
                     * 
                     */
                    bool ExtensionNumberHasBeenSet() const;

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
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * Agent'S telephone number (with 0086 prefix).
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Agent nickname.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * User id.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * List of skill groups associated with the agent.
                     */
                    std::vector<std::string> m_skillGroupNameList;
                    bool m_skillGroupNameListHasBeenSet;

                    /**
                     * 1: admin.
2: quality inspector.
3: ordinary agent.
Else: custom role id.
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     */
                    std::string m_extensionNumber;
                    bool m_extensionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SEATUSERINFO_H_
