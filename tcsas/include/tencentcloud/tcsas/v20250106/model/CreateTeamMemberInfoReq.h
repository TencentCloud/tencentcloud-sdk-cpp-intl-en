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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMMEMBERINFOREQ_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMMEMBERINFOREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * New team member - Member information
                */
                class CreateTeamMemberInfoReq : public AbstractModel
                {
                public:
                    CreateTeamMemberInfoReq();
                    ~CreateTeamMemberInfoReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取User role ID
                     * @return UserRoleId User role ID
                     * 
                     */
                    int64_t GetUserRoleId() const;

                    /**
                     * 设置User role ID
                     * @param _userRoleId User role ID
                     * 
                     */
                    void SetUserRoleId(const int64_t& _userRoleId);

                    /**
                     * 判断参数 UserRoleId 是否已赋值
                     * @return UserRoleId 是否已赋值
                     * 
                     */
                    bool UserRoleIdHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User role ID
                     */
                    int64_t m_userRoleId;
                    bool m_userRoleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATETEAMMEMBERINFOREQ_H_
