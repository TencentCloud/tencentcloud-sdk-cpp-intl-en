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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LINKACCOUNTREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LINKACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * LinkAccount request structure.
                */
                class LinkAccountRequest : public AbstractModel
                {
                public:
                    LinkAccountRequest();
                    ~LinkAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param UserStoreId User directory ID
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Primary user ID
                     * @return PrimaryUserId Primary user ID
                     */
                    std::string GetPrimaryUserId() const;

                    /**
                     * 设置Primary user ID
                     * @param PrimaryUserId Primary user ID
                     */
                    void SetPrimaryUserId(const std::string& _primaryUserId);

                    /**
                     * 判断参数 PrimaryUserId 是否已赋值
                     * @return PrimaryUserId 是否已赋值
                     */
                    bool PrimaryUserIdHasBeenSet() const;

                    /**
                     * 获取Secondary user ID
                     * @return SecondaryUserId Secondary user ID
                     */
                    std::string GetSecondaryUserId() const;

                    /**
                     * 设置Secondary user ID
                     * @param SecondaryUserId Secondary user ID
                     */
                    void SetSecondaryUserId(const std::string& _secondaryUserId);

                    /**
                     * 判断参数 SecondaryUserId 是否已赋值
                     * @return SecondaryUserId 是否已赋值
                     */
                    bool SecondaryUserIdHasBeenSet() const;

                    /**
                     * 获取Fusion attribute

<li> **PHONENUMBER** </li>	  Mobile number
<li> **EMAIL** </li>  Email
                     * @return UserLinkedOnAttribute Fusion attribute

<li> **PHONENUMBER** </li>	  Mobile number
<li> **EMAIL** </li>  Email
                     */
                    std::string GetUserLinkedOnAttribute() const;

                    /**
                     * 设置Fusion attribute

<li> **PHONENUMBER** </li>	  Mobile number
<li> **EMAIL** </li>  Email
                     * @param UserLinkedOnAttribute Fusion attribute

<li> **PHONENUMBER** </li>	  Mobile number
<li> **EMAIL** </li>  Email
                     */
                    void SetUserLinkedOnAttribute(const std::string& _userLinkedOnAttribute);

                    /**
                     * 判断参数 UserLinkedOnAttribute 是否已赋值
                     * @return UserLinkedOnAttribute 是否已赋值
                     */
                    bool UserLinkedOnAttributeHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Primary user ID
                     */
                    std::string m_primaryUserId;
                    bool m_primaryUserIdHasBeenSet;

                    /**
                     * Secondary user ID
                     */
                    std::string m_secondaryUserId;
                    bool m_secondaryUserIdHasBeenSet;

                    /**
                     * Fusion attribute

<li> **PHONENUMBER** </li>	  Mobile number
<li> **EMAIL** </li>  Email
                     */
                    std::string m_userLinkedOnAttribute;
                    bool m_userLinkedOnAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LINKACCOUNTREQUEST_H_
