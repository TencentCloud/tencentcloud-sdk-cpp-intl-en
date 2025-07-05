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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_SUBACCOUNTUSER_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_SUBACCOUNTUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * Sub-user information
                */
                class SubAccountUser : public AbstractModel
                {
                public:
                    SubAccountUser();
                    ~SubAccountUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-user ID
                     * @return Uin Sub-user ID
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Sub-user ID
                     * @param _uin Sub-user ID
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub-user name
                     * @return Name Sub-user name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sub-user name
                     * @param _name Sub-user name
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
                     * 获取Sub-user UID. UID is the unique identifier of a user who is a message recipient, while UIN is a unique identifier of a user.
                     * @return Uid Sub-user UID. UID is the unique identifier of a user who is a message recipient, while UIN is a unique identifier of a user.
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置Sub-user UID. UID is the unique identifier of a user who is a message recipient, while UIN is a unique identifier of a user.
                     * @param _uid Sub-user UID. UID is the unique identifier of a user who is a message recipient, while UIN is a unique identifier of a user.
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取Sub-user remarks
                     * @return Remark Sub-user remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sub-user remarks
                     * @param _remark Sub-user remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取User type (1: root account; 2: sub-user; 3: WeCom sub-user; 4: collaborator; 5: message recipient)
                     * @return UserType User type (1: root account; 2: sub-user; 3: WeCom sub-user; 4: collaborator; 5: message recipient)
                     * 
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置User type (1: root account; 2: sub-user; 3: WeCom sub-user; 4: collaborator; 5: message recipient)
                     * @param _userType User type (1: root account; 2: sub-user; 3: WeCom sub-user; 4: collaborator; 5: message recipient)
                     * 
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return LastLoginIp 
                     * 
                     */
                    std::string GetLastLoginIp() const;

                    /**
                     * 设置
                     * @param _lastLoginIp 
                     * 
                     */
                    void SetLastLoginIp(const std::string& _lastLoginIp);

                    /**
                     * 判断参数 LastLoginIp 是否已赋值
                     * @return LastLoginIp 是否已赋值
                     * 
                     */
                    bool LastLoginIpHasBeenSet() const;

                    /**
                     * 获取
                     * @return LastLoginTime 
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置
                     * @param _lastLoginTime 
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                private:

                    /**
                     * Sub-user ID
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub-user name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sub-user UID. UID is the unique identifier of a user who is a message recipient, while UIN is a unique identifier of a user.
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Sub-user remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * User type (1: root account; 2: sub-user; 3: WeCom sub-user; 4: collaborator; 5: message recipient)
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastLoginIp;
                    bool m_lastLoginIpHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_SUBACCOUNTUSER_H_
