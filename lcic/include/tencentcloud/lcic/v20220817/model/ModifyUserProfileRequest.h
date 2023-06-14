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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYUSERPROFILEREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYUSERPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * ModifyUserProfile request structure.
                */
                class ModifyUserProfileRequest : public AbstractModel
                {
                public:
                    ModifyUserProfileRequest();
                    ~ModifyUserProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the user whose profile will be modified.
                     * @return UserId The ID of the user whose profile will be modified.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The ID of the user whose profile will be modified.
                     * @param _userId The ID of the user whose profile will be modified.
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
                     * 获取The new username to use.
                     * @return Nickname The new username to use.
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置The new username to use.
                     * @param _nickname The new username to use.
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
                     * 获取The URL of the new profile photo.
                     * @return Avatar The URL of the new profile photo.
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置The URL of the new profile photo.
                     * @param _avatar The URL of the new profile photo.
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                private:

                    /**
                     * The ID of the user whose profile will be modified.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The new username to use.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * The URL of the new profile photo.
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYUSERPROFILEREQUEST_H_
