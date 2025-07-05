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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETOFFLINEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETOFFLINEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SearchCondition.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetOfflineInstanceList request structure.
                */
                class GetOfflineInstanceListRequest : public AbstractModel
                {
                public:
                    GetOfflineInstanceListRequest();
                    ~GetOfflineInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Which Page
                     * @return PageIndex Which Page
                     * 
                     */
                    std::string GetPageIndex() const;

                    /**
                     * 设置Which Page
                     * @param _pageIndex Which Page
                     * 
                     */
                    void SetPageIndex(const std::string& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取Number of Items per Page
                     * @return PageSize Number of Items per Page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of Items per Page
                     * @param _pageSize Number of Items per Page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取No
                     * @return SearchCondition No
                     * 
                     */
                    SearchCondition GetSearchCondition() const;

                    /**
                     * 设置No
                     * @param _searchCondition No
                     * 
                     */
                    void SetSearchCondition(const SearchCondition& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                private:

                    /**
                     * Which Page
                     */
                    std::string m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * Number of Items per Page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * No
                     */
                    SearchCondition m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETOFFLINEINSTANCELISTREQUEST_H_
