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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERRESPONSE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/User.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUser response structure.
                */
                class ListUserResponse : public AbstractModel
                {
                public:
                    ListUserResponse();
                    ~ListUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Total number
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Pagination object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pageable Pagination object
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取List of users
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content List of users
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<User> GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Total number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Pagination object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * List of users
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<User> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERRESPONSE_H_
