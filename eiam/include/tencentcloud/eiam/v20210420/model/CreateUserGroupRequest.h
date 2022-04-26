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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * CreateUserGroup request structure.
                */
                class CreateUserGroupRequest : public AbstractModel
                {
                public:
                    CreateUserGroupRequest();
                    ~CreateUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User group nickname, which is unique and can contain up to 64 characters.
                     * @return DisplayName User group nickname, which is unique and can contain up to 64 characters.
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置User group nickname, which is unique and can contain up to 64 characters.
                     * @param DisplayName User group nickname, which is unique and can contain up to 64 characters.
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取User group remarks, which can contain up to 512 characters.
                     * @return Description User group remarks, which can contain up to 512 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User group remarks, which can contain up to 512 characters.
                     * @param Description User group remarks, which can contain up to 512 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * User group nickname, which is unique and can contain up to 64 characters.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User group remarks, which can contain up to 512 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEUSERGROUPREQUEST_H_
