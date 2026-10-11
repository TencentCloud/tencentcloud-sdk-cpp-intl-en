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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_

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
                * CreateCatalog request structure.
                */
                class CreateCatalogRequest : public AbstractModel
                {
                public:
                    CreateCatalogRequest();
                    ~CreateCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取catalog name
                     * @return Name catalog name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置catalog name
                     * @param _name catalog name
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
                     * 获取catalog type. Available values: TABLE, MODEL, VOLUME
                     * @return Type catalog type. Available values: TABLE, MODEL, VOLUME
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置catalog type. Available values: TABLE, MODEL, VOLUME
                     * @param _type catalog type. Available values: TABLE, MODEL, VOLUME
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
                     * 获取Workspace unique id
                     * @return WorkspaceId Workspace unique id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置Workspace unique id
                     * @param _workspaceId Workspace unique id
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
                     * 获取Description
                     * @return Comment Description
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description
                     * @param _comment Description
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取ID of the connection
                     * @return ConnectionId ID of the connection
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置ID of the connection
                     * @param _connectionId ID of the connection
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
                     * 获取Data catalog source. Option (additional field in the fusion edition). For values, see CatalogSourceEnum: METALAKE (pro edition) / CONNECTION (analytics edition). If not specified, it is handled as METALAKE by default.
                     * @return CatalogSource Data catalog source. Option (additional field in the fusion edition). For values, see CatalogSourceEnum: METALAKE (pro edition) / CONNECTION (analytics edition). If not specified, it is handled as METALAKE by default.
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置Data catalog source. Option (additional field in the fusion edition). For values, see CatalogSourceEnum: METALAKE (pro edition) / CONNECTION (analytics edition). If not specified, it is handled as METALAKE by default.
                     * @param _catalogSource Data catalog source. Option (additional field in the fusion edition). For values, see CatalogSourceEnum: METALAKE (pro edition) / CONNECTION (analytics edition). If not specified, it is handled as METALAKE by default.
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                    /**
                     * 获取Catalog name or database name on the connection side. Required for three-segment data sources, not required for two-segment data sources such as MySQL. For three-segment data sources with MySQL kernels such as Doris, StarRocks, and TChouse-D, fill in the external catalog name. For three-segment data sources with PG kernels such as PostgreSQL, Tencent PG, GaussDB, and Hologres, fill in the databaseName. Not required for two-segment data sources such as MySQL.
                     * @return ConnectionCatalogName Catalog name or database name on the connection side. Required for three-segment data sources, not required for two-segment data sources such as MySQL. For three-segment data sources with MySQL kernels such as Doris, StarRocks, and TChouse-D, fill in the external catalog name. For three-segment data sources with PG kernels such as PostgreSQL, Tencent PG, GaussDB, and Hologres, fill in the databaseName. Not required for two-segment data sources such as MySQL.
                     * 
                     */
                    std::string GetConnectionCatalogName() const;

                    /**
                     * 设置Catalog name or database name on the connection side. Required for three-segment data sources, not required for two-segment data sources such as MySQL. For three-segment data sources with MySQL kernels such as Doris, StarRocks, and TChouse-D, fill in the external catalog name. For three-segment data sources with PG kernels such as PostgreSQL, Tencent PG, GaussDB, and Hologres, fill in the databaseName. Not required for two-segment data sources such as MySQL.
                     * @param _connectionCatalogName Catalog name or database name on the connection side. Required for three-segment data sources, not required for two-segment data sources such as MySQL. For three-segment data sources with MySQL kernels such as Doris, StarRocks, and TChouse-D, fill in the external catalog name. For three-segment data sources with PG kernels such as PostgreSQL, Tencent PG, GaussDB, and Hologres, fill in the databaseName. Not required for two-segment data sources such as MySQL.
                     * 
                     */
                    void SetConnectionCatalogName(const std::string& _connectionCatalogName);

                    /**
                     * 判断参数 ConnectionCatalogName 是否已赋值
                     * @return ConnectionCatalogName 是否已赋值
                     * 
                     */
                    bool ConnectionCatalogNameHasBeenSet() const;

                private:

                    /**
                     * catalog name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * catalog type. Available values: TABLE, MODEL, VOLUME
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Workspace unique id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * ID of the connection
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * Data catalog source. Option (additional field in the fusion edition). For values, see CatalogSourceEnum: METALAKE (pro edition) / CONNECTION (analytics edition). If not specified, it is handled as METALAKE by default.
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                    /**
                     * Catalog name or database name on the connection side. Required for three-segment data sources, not required for two-segment data sources such as MySQL. For three-segment data sources with MySQL kernels such as Doris, StarRocks, and TChouse-D, fill in the external catalog name. For three-segment data sources with PG kernels such as PostgreSQL, Tencent PG, GaussDB, and Hologres, fill in the databaseName. Not required for two-segment data sources such as MySQL.
                     */
                    std::string m_connectionCatalogName;
                    bool m_connectionCatalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_
