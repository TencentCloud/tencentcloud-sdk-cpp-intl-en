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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETESCHEMAREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETESCHEMAREQUEST_H_

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
                * DeleteSchema request structure.
                */
                class DeleteSchemaRequest : public AbstractModel
                {
                public:
                    DeleteSchemaRequest();
                    ~DeleteSchemaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data catalog name
                     * @return CatalogName Data catalog name
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Data catalog name
                     * @param _catalogName Data catalog name
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
                     * 获取Database name
                     * @return SchemaName Database name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Database name
                     * @param _schemaName Database name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Unique id of the workspace where the call is made
                     * @return WorkspaceId Unique id of the workspace where the call is made
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置Unique id of the workspace where the call is made
                     * @param _workspaceId Unique id of the workspace where the call is made
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
                     * 获取Data source connection ID. Selectable (additional field in Fusion Edition). Schemas in the analytics edition catalog cannot be deleted. If a non-empty value is imported, the server returns the ANA_catalog_NOT_SUPPORTED error.
                     * @return ConnectionId Data source connection ID. Selectable (additional field in Fusion Edition). Schemas in the analytics edition catalog cannot be deleted. If a non-empty value is imported, the server returns the ANA_catalog_NOT_SUPPORTED error.
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置Data source connection ID. Selectable (additional field in Fusion Edition). Schemas in the analytics edition catalog cannot be deleted. If a non-empty value is imported, the server returns the ANA_catalog_NOT_SUPPORTED error.
                     * @param _connectionId Data source connection ID. Selectable (additional field in Fusion Edition). Schemas in the analytics edition catalog cannot be deleted. If a non-empty value is imported, the server returns the ANA_catalog_NOT_SUPPORTED error.
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
                     * 获取Data catalog source. Optional (additional fields added by Setats fusion). Values: METALAKE (Pro Edition tclake) / CONNECTION (Analytics Edition Linked Catalog) / SETATS (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deemed as CONNECTION) > default METALAKE. ConnectionId will be ignored when CatalogSource is non-empty.
                     * @return CatalogSource Data catalog source. Optional (additional fields added by Setats fusion). Values: METALAKE (Pro Edition tclake) / CONNECTION (Analytics Edition Linked Catalog) / SETATS (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deemed as CONNECTION) > default METALAKE. ConnectionId will be ignored when CatalogSource is non-empty.
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置Data catalog source. Optional (additional fields added by Setats fusion). Values: METALAKE (Pro Edition tclake) / CONNECTION (Analytics Edition Linked Catalog) / SETATS (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deemed as CONNECTION) > default METALAKE. ConnectionId will be ignored when CatalogSource is non-empty.
                     * @param _catalogSource Data catalog source. Optional (additional fields added by Setats fusion). Values: METALAKE (Pro Edition tclake) / CONNECTION (Analytics Edition Linked Catalog) / SETATS (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deemed as CONNECTION) > default METALAKE. ConnectionId will be ignored when CatalogSource is non-empty.
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
                     * Data catalog name
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Unique id of the workspace where the call is made
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * Data source connection ID. Selectable (additional field in Fusion Edition). Schemas in the analytics edition catalog cannot be deleted. If a non-empty value is imported, the server returns the ANA_catalog_NOT_SUPPORTED error.
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * Data catalog source. Optional (additional fields added by Setats fusion). Values: METALAKE (Pro Edition tclake) / CONNECTION (Analytics Edition Linked Catalog) / SETATS (Setats metadata). Routing priority: explicit non-empty CatalogSource > non-empty ConnectionId (deemed as CONNECTION) > default METALAKE. ConnectionId will be ignored when CatalogSource is non-empty.
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETESCHEMAREQUEST_H_
