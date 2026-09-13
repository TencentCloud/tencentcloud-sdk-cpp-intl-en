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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_USER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_USER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/CreditPoint.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The detail information of the user
                */
                class User : public AbstractModel
                {
                public:
                    User();
                    ~User() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The level of the user in your system</p>
                     * @return UserLevel <p>The level of the user in your system</p>
                     * 
                     */
                    std::string GetUserLevel() const;

                    /**
                     * 设置<p>The level of the user in your system</p>
                     * @param _userLevel <p>The level of the user in your system</p>
                     * 
                     */
                    void SetUserLevel(const std::string& _userLevel);

                    /**
                     * 判断参数 UserLevel 是否已赋值
                     * @return UserLevel 是否已赋值
                     * 
                     */
                    bool UserLevelHasBeenSet() const;

                    /**
                     * 获取<p>The point of the user in your system</p>
                     * @return UserPoint <p>The point of the user in your system</p>
                     * 
                     */
                    CreditPoint GetUserPoint() const;

                    /**
                     * 设置<p>The point of the user in your system</p>
                     * @param _userPoint <p>The point of the user in your system</p>
                     * 
                     */
                    void SetUserPoint(const CreditPoint& _userPoint);

                    /**
                     * 判断参数 UserPoint 是否已赋值
                     * @return UserPoint 是否已赋值
                     * 
                     */
                    bool UserPointHasBeenSet() const;

                    /**
                     * 获取<p>The type of the user in your system</p>
                     * @return UserType <p>The type of the user in your system</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>The type of the user in your system</p>
                     * @param _userType <p>The type of the user in your system</p>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * <p>The level of the user in your system</p>
                     */
                    std::string m_userLevel;
                    bool m_userLevelHasBeenSet;

                    /**
                     * <p>The point of the user in your system</p>
                     */
                    CreditPoint m_userPoint;
                    bool m_userPointHasBeenSet;

                    /**
                     * <p>The type of the user in your system</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_USER_H_
