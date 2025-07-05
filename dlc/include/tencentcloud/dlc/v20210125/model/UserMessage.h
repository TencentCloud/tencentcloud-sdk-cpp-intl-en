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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERMESSAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Partial information of the user
                */
                class UserMessage : public AbstractModel
                {
                public:
                    UserMessage();
                    ~UserMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User Id which matches the sub-user UIN on the CAM side
                     * @return UserId User Id which matches the sub-user UIN on the CAM side
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User Id which matches the sub-user UIN on the CAM side
                     * @param _userId User Id which matches the sub-user UIN on the CAM side
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
                     * 获取User description
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return UserDescription User description
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUserDescription() const;

                    /**
                     * 设置User description
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _userDescription User description
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUserDescription(const std::string& _userDescription);

                    /**
                     * 判断参数 UserDescription 是否已赋值
                     * @return UserDescription 是否已赋值
                     * 
                     */
                    bool UserDescriptionHasBeenSet() const;

                    /**
                     * 获取The creator of the current user
                     * @return Creator The creator of the current user
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置The creator of the current user
                     * @param _creator The creator of the current user
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取The creation time of the current user, e.g. 16:19:32, July 28, 2021
                     * @return CreateTime The creation time of the current user, e.g. 16:19:32, July 28, 2021
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time of the current user, e.g. 16:19:32, July 28, 2021
                     * @param _createTime The creation time of the current user, e.g. 16:19:32, July 28, 2021
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
                     * 获取User alias
                     * @return UserAlias User alias
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置User alias
                     * @param _userAlias User alias
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                private:

                    /**
                     * User Id which matches the sub-user UIN on the CAM side
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User description
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_userDescription;
                    bool m_userDescriptionHasBeenSet;

                    /**
                     * The creator of the current user
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * The creation time of the current user, e.g. 16:19:32, July 28, 2021
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * User alias
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERMESSAGE_H_
