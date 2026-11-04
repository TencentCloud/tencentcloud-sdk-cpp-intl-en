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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMETADATA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Application metadata - basic identification and description information
                */
                class AppMetadata : public AbstractModel
                {
                public:
                    AppMetadata();
                    ~AppMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode
                     * @return AppMode Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode
                     * @param _appMode Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                    /**
                     * 获取App avatar
                     * @return Avatar App avatar
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置App avatar
                     * @param _avatar App avatar
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取Creation time (Unix timestamp in seconds).
                     * @return CreateTime Creation time (Unix timestamp in seconds).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time (Unix timestamp in seconds).
                     * @param _createTime Creation time (Unix timestamp in seconds).
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
                     * 获取Application description
                     * @return Description Application description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Application description
                     * @param _description Application description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Superapp name
                     * @return Name Superapp name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Superapp name
                     * @param _name Superapp name
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
                     * 获取Space ID.
                     * @return SpaceId Space ID.
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Space ID.
                     * @param _spaceId Space ID.
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取Update time (Unix timestamp in seconds).
                     * @return UpdateTime Update time (Unix timestamp in seconds).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time (Unix timestamp in seconds).
                     * @param _updateTime Update time (Unix timestamp in seconds).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                    /**
                     * App avatar
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * Creation time (Unix timestamp in seconds).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Application description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Superapp name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Space ID.
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * Update time (Unix timestamp in seconds).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMETADATA_H_
