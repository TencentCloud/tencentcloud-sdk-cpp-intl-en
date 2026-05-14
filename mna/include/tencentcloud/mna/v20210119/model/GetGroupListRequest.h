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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPLISTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetGroupList request structure.
                */
                class GetGroupListRequest : public AbstractModel
                {
                public:
                    GetGroupListRequest();
                    ~GetGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of records displayed per page. When both PageSize and PageNumber are -1, match all devices with no limit on a single page.
Example value: 10.
                     * @return PageSize Number of records displayed per page. When both PageSize and PageNumber are -1, match all devices with no limit on a single page.
Example value: 10.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of records displayed per page. When both PageSize and PageNumber are -1, match all devices with no limit on a single page.
Example value: 10.
                     * @param _pageSize Number of records displayed per page. When both PageSize and PageNumber are -1, match all devices with no limit on a single page.
Example value: 10.
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
                     * 获取Currently viewed page number. When both PageSize and PageNumber are -1, match all devices as one page with no limit on entries.
Example value: 1.
                     * @return PageNumber Currently viewed page number. When both PageSize and PageNumber are -1, match all devices as one page with no limit on entries.
Example value: 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Currently viewed page number. When both PageSize and PageNumber are -1, match all devices as one page with no limit on entries.
Example value: 1.
                     * @param _pageNumber Currently viewed page number. When both PageSize and PageNumber are -1, match all devices as one page with no limit on entries.
Example value: 1.
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
                     * 获取Search for groups by keyword. Match all groups when empty.
                     * @return Keyword Search for groups by keyword. Match all groups when empty.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search for groups by keyword. Match all groups when empty.
                     * @param _keyword Search for groups by keyword. Match all groups when empty.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Number of records displayed per page. When both PageSize and PageNumber are -1, match all devices with no limit on a single page.
Example value: 10.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Currently viewed page number. When both PageSize and PageNumber are -1, match all devices as one page with no limit on entries.
Example value: 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Search for groups by keyword. Match all groups when empty.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPLISTREQUEST_H_
