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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEGROUPSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListResourceGroups request structure.
                */
                class ListResourceGroupsRequest : public AbstractModel
                {
                public:
                    ListResourceGroupsRequest();
                    ~ListResourceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Execution resource group type.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * @return Type Execution resource group type.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Execution resource group type.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * @param _type Execution resource group type.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Resource group ID
                     * @return Id Resource group ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource group ID
                     * @param _id Resource group ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Execution resource group name to search.
                     * @return Name Execution resource group name to search.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Execution resource group name to search.
                     * @param _name Execution resource group name to search.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Project space id query list.
                     * @return ProjectIds Project space id query list.
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置Project space id query list.
                     * @param _projectIds Project space id query list.
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Number of pages.
                     * @return PageNumber Number of pages.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Number of pages.
                     * @param _pageNumber Number of pages.
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
                     * 获取Page size.
                     * @return PageSize Page size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size.
                     * @param _pageSize Page size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Execution resource group type.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Resource group ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Execution resource group name to search.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project space id query list.
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Number of pages.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTRESOURCEGROUPSREQUEST_H_
