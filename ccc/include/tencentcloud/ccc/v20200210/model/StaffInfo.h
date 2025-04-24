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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SkillGroupItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Agent Information with Skill Group Priority
                */
                class StaffInfo : public AbstractModel
                {
                public:
                    StaffInfo();
                    ~StaffInfo() = default;
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
                     * 获取Agent phone number.
                     * @return Phone Agent phone number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent phone number.
                     * @param _phone Agent phone number.
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
                     * 获取Agent id.
                     * @return StaffNumber Agent id.
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置Agent id.
                     * @param _staffNumber Agent id.
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
                     * 获取User role id.
                     * @return RoleId User role id.
                     * @deprecated
                     */
                    uint64_t GetRoleId() const;

                    /**
                     * 设置User role id.
                     * @param _roleId User role id.
                     * @deprecated
                     */
                    void SetRoleId(const uint64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * @deprecated
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Affiliated skill group list.
                     * @return SkillGroupList Affiliated skill group list.
                     * 
                     */
                    std::vector<SkillGroupItem> GetSkillGroupList() const;

                    /**
                     * 设置Affiliated skill group list.
                     * @param _skillGroupList Affiliated skill group list.
                     * 
                     */
                    void SetSkillGroupList(const std::vector<SkillGroupItem>& _skillGroupList);

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     * 
                     */
                    bool SkillGroupListHasBeenSet() const;

                    /**
                     * 获取Last modification time.
                     * @return LastModifyTimestamp Last modification time.
                     * 
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置Last modification time.
                     * @param _lastModifyTimestamp Last modification time.
                     * 
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     * 
                     */
                    bool LastModifyTimestampHasBeenSet() const;

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
                     * Agent phone number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Agent nickname.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * Agent id.
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * User role id.
                     */
                    uint64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Affiliated skill group list.
                     */
                    std::vector<SkillGroupItem> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                    /**
                     * Last modification time.
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

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

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
