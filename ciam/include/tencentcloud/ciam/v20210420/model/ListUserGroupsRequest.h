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

#ifndef TENCENTCLOUD_CIAM_V20210420_MODEL_LISTUSERGROUPSREQUEST_H_
#define TENCENTCLOUD_CIAM_V20210420_MODEL_LISTUSERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroups request structure.
                */
                class ListUserGroupsRequest : public AbstractModel
                {
                public:
                    ListUserGroupsRequest();
                    ~ListUserGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Number of queried pages
                     * @return Page Number of queried pages
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Number of queried pages
                     * @param _page Number of queried pages
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of entries per page
                     * @return Size Number of entries per page
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Number of entries per page
                     * @param _size Number of entries per page
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Query conditions (user group ID or user group name)
                     * @return Condition Query conditions (user group ID or user group name)
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Query conditions (user group ID or user group name)
                     * @param _condition Query conditions (user group ID or user group name)
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Number of queried pages
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of entries per page
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Query conditions (user group ID or user group name)
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20210420_MODEL_LISTUSERGROUPSREQUEST_H_
