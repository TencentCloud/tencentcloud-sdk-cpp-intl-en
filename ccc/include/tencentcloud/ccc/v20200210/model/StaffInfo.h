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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Agent name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Agent name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Agent name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Agent's Telephone Number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Phone Agent's Telephone Number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent's Telephone Number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phone Agent's Telephone Number
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Nick Agent nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置Agent nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nick Agent nickname.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Agent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StaffNumber Agent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置Agent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _staffNumber Agent ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取User Role ID
                     * @return RoleId User Role ID
                     * 
                     */
                    uint64_t GetRoleId() const;

                    /**
                     * 设置User Role ID
                     * @param _roleId User Role ID
                     * 
                     */
                    void SetRoleId(const uint64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Affiliated Skill Group List.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SkillGroupList Affiliated Skill Group List.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SkillGroupItem> GetSkillGroupList() const;

                    /**
                     * 设置Affiliated Skill Group List.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _skillGroupList Affiliated Skill Group List.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTimestamp Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifyTimestamp Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     * 
                     */
                    bool LastModifyTimestampHasBeenSet() const;

                private:

                    /**
                     * Agent name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent email.
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * Agent's Telephone Number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Agent nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * Agent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * User Role ID
                     */
                    uint64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Affiliated Skill Group List.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SkillGroupItem> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                    /**
                     * Last modification time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
