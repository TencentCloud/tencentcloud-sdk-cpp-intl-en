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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribePluginSummaryList request structure.
                */
                class DescribePluginSummaryListRequest : public AbstractModel
                {
                public:
                    DescribePluginSummaryListRequest();
                    ~DescribePluginSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Space ID, used when querying the plug-in list in the space</p>
                     * @return SpaceId <p>Space ID, used when querying the plug-in list in the space</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID, used when querying the plug-in list in the space</p>
                     * @param _spaceId <p>Space ID, used when querying the plug-in list in the space</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Filter criteria list, supporting PluginKind, CategoryKey, PluginSource, PluginId, PluginClass, BillingType, AuthType, IsShared, IsCreatedByMe</p>
                     * @return FilterList <p>Filter criteria list, supporting PluginKind, CategoryKey, PluginSource, PluginId, PluginClass, BillingType, AuthType, IsShared, IsCreatedByMe</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>Filter criteria list, supporting PluginKind, CategoryKey, PluginSource, PluginId, PluginClass, BillingType, AuthType, IsShared, IsCreatedByMe</p>
                     * @param _filterList <p>Filter criteria list, supporting PluginKind, CategoryKey, PluginSource, PluginId, PluginClass, BillingType, AuthType, IsShared, IsCreatedByMe</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>Whether to only return favorite plug-ins. If set to true, only plug-ins favorited by the current user are returned. If set to false or not specified, no filtering by favorite status is applied.</p>
                     * @return IsFavoriteOnly <p>Whether to only return favorite plug-ins. If set to true, only plug-ins favorited by the current user are returned. If set to false or not specified, no filtering by favorite status is applied.</p>
                     * 
                     */
                    bool GetIsFavoriteOnly() const;

                    /**
                     * 设置<p>Whether to only return favorite plug-ins. If set to true, only plug-ins favorited by the current user are returned. If set to false or not specified, no filtering by favorite status is applied.</p>
                     * @param _isFavoriteOnly <p>Whether to only return favorite plug-ins. If set to true, only plug-ins favorited by the current user are returned. If set to false or not specified, no filtering by favorite status is applied.</p>
                     * 
                     */
                    void SetIsFavoriteOnly(const bool& _isFavoriteOnly);

                    /**
                     * 判断参数 IsFavoriteOnly 是否已赋值
                     * @return IsFavoriteOnly 是否已赋值
                     * 
                     */
                    bool IsFavoriteOnlyHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * @return Module <p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * 
                     */
                    int64_t GetModule() const;

                    /**
                     * 设置<p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * @param _module <p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     * 
                     */
                    void SetModule(const int64_t& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>Page number. Starts from 0</p>
                     * @return PageNumber <p>Page number. Starts from 0</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Starts from 0</p>
                     * @param _pageNumber <p>Page number. Starts from 0</p>
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
                     * 获取<p>Size per page.</p>
                     * @return PageSize <p>Size per page.</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page.</p>
                     * @param _pageSize <p>Size per page.</p>
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
                     * 获取<p>Query content fuzzy matching: plugin name/plugin description/tool name/tool description</p>
                     * @return Query <p>Query content fuzzy matching: plugin name/plugin description/tool name/tool description</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Query content fuzzy matching: plugin name/plugin description/tool name/tool description</p>
                     * @param _query <p>Query content fuzzy matching: plugin name/plugin description/tool name/tool description</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method.</p><p>Enumeration values:</p><ul><li>0: not specified, default sorting</li><li>1: relevance ranking</li><li>2: sort by update time</li><li>3: default sorting</li><li>4: sort by popularity</li></ul>
                     * @return SortType <p>Sorting method.</p><p>Enumeration values:</p><ul><li>0: not specified, default sorting</li><li>1: relevance ranking</li><li>2: sort by update time</li><li>3: default sorting</li><li>4: sort by popularity</li></ul>
                     * 
                     */
                    int64_t GetSortType() const;

                    /**
                     * 设置<p>Sorting method.</p><p>Enumeration values:</p><ul><li>0: not specified, default sorting</li><li>1: relevance ranking</li><li>2: sort by update time</li><li>3: default sorting</li><li>4: sort by popularity</li></ul>
                     * @param _sortType <p>Sorting method.</p><p>Enumeration values:</p><ul><li>0: not specified, default sorting</li><li>1: relevance ranking</li><li>2: sort by update time</li><li>3: default sorting</li><li>4: sort by popularity</li></ul>
                     * 
                     */
                    void SetSortType(const int64_t& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取<p>Filter plug-ins shared by the current space/business</p><p>Value range: [0, 2]</p>
                     * @return PluginSpaceRelation <p>Filter plug-ins shared by the current space/business</p><p>Value range: [0, 2]</p>
                     * 
                     */
                    int64_t GetPluginSpaceRelation() const;

                    /**
                     * 设置<p>Filter plug-ins shared by the current space/business</p><p>Value range: [0, 2]</p>
                     * @param _pluginSpaceRelation <p>Filter plug-ins shared by the current space/business</p><p>Value range: [0, 2]</p>
                     * 
                     */
                    void SetPluginSpaceRelation(const int64_t& _pluginSpaceRelation);

                    /**
                     * 判断参数 PluginSpaceRelation 是否已赋值
                     * @return PluginSpaceRelation 是否已赋值
                     * 
                     */
                    bool PluginSpaceRelationHasBeenSet() const;

                private:

                    /**
                     * <p>Space ID, used when querying the plug-in list in the space</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Filter criteria list, supporting PluginKind, CategoryKey, PluginSource, PluginId, PluginClass, BillingType, AuthType, IsShared, IsCreatedByMe</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>Whether to only return favorite plug-ins. If set to true, only plug-ins favorited by the current user are returned. If set to false or not specified, no filtering by favorite status is applied.</p>
                     */
                    bool m_isFavoriteOnly;
                    bool m_isFavoriteOnlyHasBeenSet;

                    /**
                     * <p>Plug-in display scenario. If not passed or set to 0, the scenario is not limited.</p><p>Enumeration values:</p><ul><li>0: Not limited</li><li>1: Agent Mode</li><li>2: Workflow</li><li>3: Intelligent workbench</li></ul>
                     */
                    int64_t m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>Page number. Starts from 0</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page.</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Query content fuzzy matching: plugin name/plugin description/tool name/tool description</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>Sorting method.</p><p>Enumeration values:</p><ul><li>0: not specified, default sorting</li><li>1: relevance ranking</li><li>2: sort by update time</li><li>3: default sorting</li><li>4: sort by popularity</li></ul>
                     */
                    int64_t m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>Filter plug-ins shared by the current space/business</p><p>Value range: [0, 2]</p>
                     */
                    int64_t m_pluginSpaceRelation;
                    bool m_pluginSpaceRelationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEPLUGINSUMMARYLISTREQUEST_H_
