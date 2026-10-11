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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEROLESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListConsoleRoles request structure.
                */
                class ListConsoleRolesRequest : public AbstractModel
                {
                public:
                    ListConsoleRolesRequest();
                    ~ListConsoleRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * @return PageSize <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * @param _pageSize <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Fuzzy matching by role name or description</p>
                     * @return RoleKeyword <p>Fuzzy matching by role name or description</p>
                     * 
                     */
                    std::string GetRoleKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching by role name or description</p>
                     * @param _roleKeyword <p>Fuzzy matching by role name or description</p>
                     * 
                     */
                    void SetRoleKeyword(const std::string& _roleKeyword);

                    /**
                     * 判断参数 RoleKeyword 是否已赋值
                     * @return RoleKeyword 是否已赋值
                     * 
                     */
                    bool RoleKeywordHasBeenSet() const;

                private:

                    /**
                     * <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Fuzzy matching by role name or description</p>
                     */
                    std::string m_roleKeyword;
                    bool m_roleKeywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEROLESREQUEST_H_
