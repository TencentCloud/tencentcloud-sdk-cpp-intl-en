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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETCATALOGREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETCATALOGREQUEST_H_

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
                * GetCatalog request structure.
                */
                class GetCatalogRequest : public AbstractModel
                {
                public:
                    GetCatalogRequest();
                    ~GetCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Data catalog name.</p>
                     * @return CatalogName <p>Data catalog name.</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>Data catalog name.</p>
                     * @param _catalogName <p>Data catalog name.</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>Unique id of the workspace where the call is made.</p>
                     * @return WorkspaceId <p>Unique id of the workspace where the call is made.</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Unique id of the workspace where the call is made.</p>
                     * @param _workspaceId <p>Unique id of the workspace where the call is made.</p>
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
                     * 获取<p>Data directory id</p>
                     * @return CatalogId <p>Data directory id</p>
                     * 
                     */
                    std::string GetCatalogId() const;

                    /**
                     * 设置<p>Data directory id</p>
                     * @param _catalogId <p>Data directory id</p>
                     * 
                     */
                    void SetCatalogId(const std::string& _catalogId);

                    /**
                     * 判断参数 CatalogId 是否已赋值
                     * @return CatalogId 是否已赋值
                     * 
                     */
                    bool CatalogIdHasBeenSet() const;

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
                     * 获取<p>Data source connection ID, selectable (additional field in fusion edition). Non-empty → use the analytical path; empty/default → use the professional edition TcLake path</p>
                     * @return ConnectionId <p>Data source connection ID, selectable (additional field in fusion edition). Non-empty → use the analytical path; empty/default → use the professional edition TcLake path</p>
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置<p>Data source connection ID, selectable (additional field in fusion edition). Non-empty → use the analytical path; empty/default → use the professional edition TcLake path</p>
                     * @param _connectionId <p>Data source connection ID, selectable (additional field in fusion edition). Non-empty → use the analytical path; empty/default → use the professional edition TcLake path</p>
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

                    /**
                     * 获取<p>Data Catalog source, selectable (additional field for Setats fusion). Value: METALAKE (pro edition tclake) / CONNECTION (analytical edition Linked Catalog) / Setats (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deem as CONNECTION) > default METALAKE; ConnectionId will be ignored when CatalogSource is non-empty.</p>
                     * @return CatalogSource <p>Data Catalog source, selectable (additional field for Setats fusion). Value: METALAKE (pro edition tclake) / CONNECTION (analytical edition Linked Catalog) / Setats (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deem as CONNECTION) > default METALAKE; ConnectionId will be ignored when CatalogSource is non-empty.</p>
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>Data Catalog source, selectable (additional field for Setats fusion). Value: METALAKE (pro edition tclake) / CONNECTION (analytical edition Linked Catalog) / Setats (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deem as CONNECTION) > default METALAKE; ConnectionId will be ignored when CatalogSource is non-empty.</p>
                     * @param _catalogSource <p>Data Catalog source, selectable (additional field for Setats fusion). Value: METALAKE (pro edition tclake) / CONNECTION (analytical edition Linked Catalog) / Setats (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deem as CONNECTION) > default METALAKE; ConnectionId will be ignored when CatalogSource is non-empty.</p>
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Data catalog name.</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>Unique id of the workspace where the call is made.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Data directory id</p>
                     */
                    std::string m_catalogId;
                    bool m_catalogIdHasBeenSet;

                    /**
                     * <p>Data access option. Selectable. Controls whether to return permission information and filter by permission.</p>
                     */
                    FetchOption m_fetchOption;
                    bool m_fetchOptionHasBeenSet;

                    /**
                     * <p>Data source connection ID, selectable (additional field in fusion edition). Non-empty → use the analytical path; empty/default → use the professional edition TcLake path</p>
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * <p>Data Catalog source, selectable (additional field for Setats fusion). Value: METALAKE (pro edition tclake) / CONNECTION (analytical edition Linked Catalog) / Setats (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deem as CONNECTION) > default METALAKE; ConnectionId will be ignored when CatalogSource is non-empty.</p>
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETCATALOGREQUEST_H_
