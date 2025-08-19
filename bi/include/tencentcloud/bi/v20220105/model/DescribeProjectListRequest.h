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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEPROJECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeProjectList request structure.
                */
                class DescribeProjectListRequest : public AbstractModel
                {
                public:
                    DescribeProjectListRequest();
                    ~DescribeProjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page capacity. The initial version defaults to 20 and may change dynamically based on screen width in the future.
                     * @return PageSize Page capacity. The initial version defaults to 20 and may change dynamically based on screen width in the future.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page capacity. The initial version defaults to 20 and may change dynamically based on screen width in the future.
                     * @param _pageSize Page capacity. The initial version defaults to 20 and may change dynamically based on screen width in the future.
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
                     * 获取Page marker.
                     * @return PageNo Page marker.
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置Page marker.
                     * @param _pageNo Page marker.
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Fuzzy search field.
                     * @return Keyword Fuzzy search field.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Fuzzy search field.
                     * @param _keyword Fuzzy search field.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Whether to display all. If true, ignore pagination.
                     * @return AllPage Whether to display all. If true, ignore pagination.
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置Whether to display all. If true, ignore pagination.
                     * @param _allPage Whether to display all. If true, ignore pagination.
                     * 
                     */
                    void SetAllPage(const bool& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取Role information.
                     * @return ModuleCollection Role information.
                     * 
                     */
                    std::string GetModuleCollection() const;

                    /**
                     * 设置Role information.
                     * @param _moduleCollection Role information.
                     * 
                     */
                    void SetModuleCollection(const std::string& _moduleCollection);

                    /**
                     * 判断参数 ModuleCollection 是否已赋值
                     * @return ModuleCollection 是否已赋值
                     * 
                     */
                    bool ModuleCollectionHasBeenSet() const;

                    /**
                     * 获取moduleId set.
                     * @return ModuleIdList moduleId set.
                     * 
                     */
                    std::vector<std::string> GetModuleIdList() const;

                    /**
                     * 设置moduleId set.
                     * @param _moduleIdList moduleId set.
                     * 
                     */
                    void SetModuleIdList(const std::vector<std::string>& _moduleIdList);

                    /**
                     * 判断参数 ModuleIdList 是否已赋值
                     * @return ModuleIdList 是否已赋值
                     * 
                     */
                    bool ModuleIdListHasBeenSet() const;

                private:

                    /**
                     * Page capacity. The initial version defaults to 20 and may change dynamically based on screen width in the future.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page marker.
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Fuzzy search field.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Whether to display all. If true, ignore pagination.
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * Role information.
                     */
                    std::string m_moduleCollection;
                    bool m_moduleCollectionHasBeenSet;

                    /**
                     * moduleId set.
                     */
                    std::vector<std::string> m_moduleIdList;
                    bool m_moduleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEPROJECTLISTREQUEST_H_
