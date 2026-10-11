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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FetchOption.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListCatalogs request structure.
                */
                class ListCatalogsRequest : public AbstractModel
                {
                public:
                    ListCatalogsRequest();
                    ~ListCatalogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace unique id</p>
                     * @return WorkspaceId <p>Workspace unique id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace unique id</p>
                     * @param _workspaceId <p>Workspace unique id</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of result entries</p>
                     * @return MaxResults <p>Maximum number of result entries</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>Maximum number of result entries</p>
                     * @param _maxResults <p>Maximum number of result entries</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>Pagination token</p>
                     * @return PageToken <p>Pagination token</p>
                     * 
                     */
                    std::string GetPageToken() const;

                    /**
                     * 设置<p>Pagination token</p>
                     * @param _pageToken <p>Pagination token</p>
                     * 
                     */
                    void SetPageToken(const std::string& _pageToken);

                    /**
                     * 判断参数 PageToken 是否已赋值
                     * @return PageToken 是否已赋值
                     * 
                     */
                    bool PageTokenHasBeenSet() const;

                    /**
                     * 获取<p>catalog type. Valid values: TABLE, MODEL, VOLUME</p>
                     * @return Types <p>catalog type. Valid values: TABLE, MODEL, VOLUME</p>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>catalog type. Valid values: TABLE, MODEL, VOLUME</p>
                     * @param _types <p>catalog type. Valid values: TABLE, MODEL, VOLUME</p>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return only those in the current workspace that are authorized. If false, it additionally returns the catalogs that the current user has permission to manage.</p>
                     * @return CurrentWorkspaceOnly <p>Whether to return only those in the current workspace that are authorized. If false, it additionally returns the catalogs that the current user has permission to manage.</p>
                     * 
                     */
                    bool GetCurrentWorkspaceOnly() const;

                    /**
                     * 设置<p>Whether to return only those in the current workspace that are authorized. If false, it additionally returns the catalogs that the current user has permission to manage.</p>
                     * @param _currentWorkspaceOnly <p>Whether to return only those in the current workspace that are authorized. If false, it additionally returns the catalogs that the current user has permission to manage.</p>
                     * 
                     */
                    void SetCurrentWorkspaceOnly(const bool& _currentWorkspaceOnly);

                    /**
                     * 判断参数 CurrentWorkspaceOnly 是否已赋值
                     * @return CurrentWorkspaceOnly 是否已赋值
                     * 
                     */
                    bool CurrentWorkspaceOnlyHasBeenSet() const;

                    /**
                     * 获取<p>Data access option. Selectable. Controls whether to return permission information and filter by permission.</p>
                     * @return FetchOption <p>Data access option. Selectable. Controls whether to return permission information and filter by permission.</p>
                     * 
                     */
                    FetchOption GetFetchOption() const;

                    /**
                     * 设置<p>Data access option. Selectable. Controls whether to return permission information and filter by permission.</p>
                     * @param _fetchOption <p>Data access option. Selectable. Controls whether to return permission information and filter by permission.</p>
                     * 
                     */
                    void SetFetchOption(const FetchOption& _fetchOption);

                    /**
                     * 判断参数 FetchOption 是否已赋值
                     * @return FetchOption 是否已赋值
                     * 
                     */
                    bool FetchOptionHasBeenSet() const;

                    /**
                     * 获取Data catalog source filter criteria (additional field in Fusion Edition). For values, see CatalogSourceEnum. Empty array or not passed: only tclake is queried. ["METALAKE"]: only tclake is queried. ["CONNECTION"]: only the analytics edition ana_catalog is queried. ["METALAKE","CONNECTION"]: merged and returned.
                     * @return CatalogSources Data catalog source filter criteria (additional field in Fusion Edition). For values, see CatalogSourceEnum. Empty array or not passed: only tclake is queried. ["METALAKE"]: only tclake is queried. ["CONNECTION"]: only the analytics edition ana_catalog is queried. ["METALAKE","CONNECTION"]: merged and returned.
                     * 
                     */
                    std::vector<std::string> GetCatalogSources() const;

                    /**
                     * 设置Data catalog source filter criteria (additional field in Fusion Edition). For values, see CatalogSourceEnum. Empty array or not passed: only tclake is queried. ["METALAKE"]: only tclake is queried. ["CONNECTION"]: only the analytics edition ana_catalog is queried. ["METALAKE","CONNECTION"]: merged and returned.
                     * @param _catalogSources Data catalog source filter criteria (additional field in Fusion Edition). For values, see CatalogSourceEnum. Empty array or not passed: only tclake is queried. ["METALAKE"]: only tclake is queried. ["CONNECTION"]: only the analytics edition ana_catalog is queried. ["METALAKE","CONNECTION"]: merged and returned.
                     * 
                     */
                    void SetCatalogSources(const std::vector<std::string>& _catalogSources);

                    /**
                     * 判断参数 CatalogSources 是否已赋值
                     * @return CatalogSources 是否已赋值
                     * 
                     */
                    bool CatalogSourcesHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace unique id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Maximum number of result entries</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>Pagination token</p>
                     */
                    std::string m_pageToken;
                    bool m_pageTokenHasBeenSet;

                    /**
                     * <p>catalog type. Valid values: TABLE, MODEL, VOLUME</p>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>Whether to return only those in the current workspace that are authorized. If false, it additionally returns the catalogs that the current user has permission to manage.</p>
                     */
                    bool m_currentWorkspaceOnly;
                    bool m_currentWorkspaceOnlyHasBeenSet;

                    /**
                     * <p>Data access option. Selectable. Controls whether to return permission information and filter by permission.</p>
                     */
                    FetchOption m_fetchOption;
                    bool m_fetchOptionHasBeenSet;

                    /**
                     * Data catalog source filter criteria (additional field in Fusion Edition). For values, see CatalogSourceEnum. Empty array or not passed: only tclake is queried. ["METALAKE"]: only tclake is queried. ["CONNECTION"]: only the analytics edition ana_catalog is queried. ["METALAKE","CONNECTION"]: merged and returned.
                     */
                    std::vector<std::string> m_catalogSources;
                    bool m_catalogSourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSREQUEST_H_
