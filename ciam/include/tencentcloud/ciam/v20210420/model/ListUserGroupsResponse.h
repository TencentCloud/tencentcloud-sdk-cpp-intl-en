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

#ifndef TENCENTCLOUD_CIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_
#define TENCENTCLOUD_CIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20210420/model/UserGroup.h>
#include <tencentcloud/ciam/v20210420/model/Pageable.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroups response structure.
                */
                class ListUserGroupsResponse : public AbstractModel
                {
                public:
                    ListUserGroupsResponse();
                    ~ListUserGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取User group list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Content User group list
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserGroup> GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Total number
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Total Total number
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Pagination
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Pageable Pagination
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                private:

                    /**
                     * User group list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserGroup> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Total number
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Pagination
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_
