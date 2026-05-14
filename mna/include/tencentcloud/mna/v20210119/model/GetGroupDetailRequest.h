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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPDETAILREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPDETAILREQUEST_H_

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
                * GetGroupDetail request structure.
                */
                class GetGroupDetailRequest : public AbstractModel
                {
                public:
                    GetGroupDetailRequest();
                    ~GetGroupDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取group ID
                     * @return GroupId group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置group ID
                     * @param _groupId group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Display per page number of records. When PageSize and PageNumber are -1, match all devices by 1 page with no limit entries.	
Example value: 1.

                     * @return PageSize Display per page number of records. When PageSize and PageNumber are -1, match all devices by 1 page with no limit entries.	
Example value: 1.

                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Display per page number of records. When PageSize and PageNumber are -1, match all devices by 1 page with no limit entries.	
Example value: 1.

                     * @param _pageSize Display per page number of records. When PageSize and PageNumber are -1, match all devices by 1 page with no limit entries.	
Example value: 1.

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
                     * 获取Number of records displayed per page. When PageSize and PageNumber are both -1, match all devices by 1 page with no limit entries.	
Example value: 10.

                     * @return PageNumber Number of records displayed per page. When PageSize and PageNumber are both -1, match all devices by 1 page with no limit entries.	
Example value: 10.

                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Number of records displayed per page. When PageSize and PageNumber are both -1, match all devices by 1 page with no limit entries.	
Example value: 10.

                     * @param _pageNumber Number of records displayed per page. When PageSize and PageNumber are both -1, match all devices by 1 page with no limit entries.	
Example value: 10.

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
                     * 获取Search Keywords
                     * @return KeyWord Search Keywords
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置Search Keywords
                     * @param _keyWord Search Keywords
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Display per page number of records. When PageSize and PageNumber are -1, match all devices by 1 page with no limit entries.	
Example value: 1.

                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Number of records displayed per page. When PageSize and PageNumber are both -1, match all devices by 1 page with no limit entries.	
Example value: 10.

                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Search Keywords
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPDETAILREQUEST_H_
