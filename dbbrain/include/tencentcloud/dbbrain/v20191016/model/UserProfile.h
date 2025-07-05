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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_USERPROFILE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_USERPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/ProfileInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Information configured by user, including email configuration.
                */
                class UserProfile : public AbstractModel
                {
                public:
                    UserProfile();
                    ~UserProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configured ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProfileId Configured ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProfileId() const;

                    /**
                     * 设置Configured ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _profileId Configured ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProfileId(const std::string& _profileId);

                    /**
                     * 判断参数 ProfileId 是否已赋值
                     * @return ProfileId 是否已赋值
                     * 
                     */
                    bool ProfileIdHasBeenSet() const;

                    /**
                     * 获取Configuration type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProfileType Configuration type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProfileType() const;

                    /**
                     * 设置Configuration type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _profileType Configuration type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProfileType(const std::string& _profileType);

                    /**
                     * 判断参数 ProfileType 是否已赋值
                     * @return ProfileType 是否已赋值
                     * 
                     */
                    bool ProfileTypeHasBeenSet() const;

                    /**
                     * 获取Configuration level. Valid values: “User” or “Instance”
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProfileLevel Configuration level. Valid values: “User” or “Instance”
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProfileLevel() const;

                    /**
                     * 设置Configuration level. Valid values: “User” or “Instance”
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _profileLevel Configuration level. Valid values: “User” or “Instance”
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProfileLevel(const std::string& _profileLevel);

                    /**
                     * 判断参数 ProfileLevel 是否已赋值
                     * @return ProfileLevel 是否已赋值
                     * 
                     */
                    bool ProfileLevelHasBeenSet() const;

                    /**
                     * 获取Configuration name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ProfileName Configuration name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置Configuration name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _profileName Configuration name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                    /**
                     * 获取Configuration details
                     * @return ProfileInfo Configuration details
                     * 
                     */
                    ProfileInfo GetProfileInfo() const;

                    /**
                     * 设置Configuration details
                     * @param _profileInfo Configuration details
                     * 
                     */
                    void SetProfileInfo(const ProfileInfo& _profileInfo);

                    /**
                     * 判断参数 ProfileInfo 是否已赋值
                     * @return ProfileInfo 是否已赋值
                     * 
                     */
                    bool ProfileInfoHasBeenSet() const;

                private:

                    /**
                     * Configured ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_profileId;
                    bool m_profileIdHasBeenSet;

                    /**
                     * Configuration type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * Configuration level. Valid values: “User” or “Instance”
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_profileLevel;
                    bool m_profileLevelHasBeenSet;

                    /**
                     * Configuration name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                    /**
                     * Configuration details
                     */
                    ProfileInfo m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_USERPROFILE_H_
