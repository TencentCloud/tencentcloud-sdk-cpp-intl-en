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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_MNPDETAIL_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_MNPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/ApplicationSimpleInfo.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Mini program details
                */
                class MNPDetail : public AbstractModel
                {
                public:
                    MNPDetail();
                    ~MNPDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPType Mini program type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPType() const;

                    /**
                     * 设置Mini program type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPType Mini program type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPType(const std::string& _mNPType);

                    /**
                     * 判断参数 MNPType 是否已赋值
                     * @return MNPType 是否已赋值
                     * 
                     */
                    bool MNPTypeHasBeenSet() const;

                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIcon Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIcon Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

                    /**
                     * 获取Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPIntro() const;

                    /**
                     * 设置Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPIntro Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPIntro(const std::string& _mNPIntro);

                    /**
                     * 判断参数 MNPIntro 是否已赋值
                     * @return MNPIntro 是否已赋值
                     * 
                     */
                    bool MNPIntroHasBeenSet() const;

                    /**
                     * 获取Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPDesc() const;

                    /**
                     * 设置Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPDesc Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPDesc(const std::string& _mNPDesc);

                    /**
                     * 判断参数 MNPDesc 是否已赋值
                     * @return MNPDesc 是否已赋值
                     * 
                     */
                    bool MNPDescHasBeenSet() const;

                    /**
                     * 获取Creator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Creator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Creator account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Creation time, timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time, timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time, timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time, timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Online Status 0 Not Online, 1 Online
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OnlineStatus Online Status 0 Not Online, 1 Online
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置Online Status 0 Not Online, 1 Online
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _onlineStatus Online Status 0 Not Online, 1 Online
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Applications Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApplicationSimpleInfo> GetApplications() const;

                    /**
                     * 设置Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applications Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplications(const std::vector<ApplicationSimpleInfo>& _applications);

                    /**
                     * 判断参数 Applications 是否已赋值
                     * @return Applications 是否已赋值
                     * 
                     */
                    bool ApplicationsHasBeenSet() const;

                    /**
                     * 获取Mini program tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Mini program tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Mini program tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Mini program tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Mini program status 1-Released 2-Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Mini program status 1-Released 2-Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Mini program status 1-Released 2-Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Mini program status 1-Released 2-Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Mini program type 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPType;
                    bool m_mNPTypeHasBeenSet;

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Mini program icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

                    /**
                     * Mini program introduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPIntro;
                    bool m_mNPIntroHasBeenSet;

                    /**
                     * Mini program description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPDesc;
                    bool m_mNPDescHasBeenSet;

                    /**
                     * Creator account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time, timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Online Status 0 Not Online, 1 Online
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * Application information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApplicationSimpleInfo> m_applications;
                    bool m_applicationsHasBeenSet;

                    /**
                     * Mini program tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Mini program status 1-Released 2-Removed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_MNPDETAIL_H_
