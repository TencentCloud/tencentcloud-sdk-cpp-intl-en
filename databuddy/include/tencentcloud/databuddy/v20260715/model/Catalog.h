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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CATALOG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CATALOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
#include <tencentcloud/databuddy/v20260715/model/PermissionDetail.h>
#include <tencentcloud/databuddy/v20260715/model/CommonTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Data catalog entity structure
                */
                class Catalog : public AbstractModel
                {
                public:
                    Catalog();
                    ~Catalog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique id of the data catalog.</p>
                     * @return Id <p>Unique id of the data catalog.</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Unique id of the data catalog.</p>
                     * @param _id <p>Unique id of the data catalog.</p>
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
                     * 获取<p>Data catalog name.</p>
                     * @return Name <p>Data catalog name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Data catalog name.</p>
                     * @param _name <p>Data catalog name.</p>
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
                     * 获取<p>Data catalog type</p>
                     * @return Type <p>Data catalog type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Data catalog type</p>
                     * @param _type <p>Data catalog type</p>
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
                     * 获取<p>Data catalog description</p>
                     * @return Comment <p>Data catalog description</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Data catalog description</p>
                     * @param _comment <p>Data catalog description</p>
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
                     * 获取<p>Status info: being registered 0, trial 1, connected successfully 2, connection failure 3, deleting 4, deleted 5</p>
                     * @return Status <p>Status info: being registered 0, trial 1, connected successfully 2, connection failure 3, deleting 4, deleted 5</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status info: being registered 0, trial 1, connected successfully 2, connection failure 3, deleting 4, deleted 5</p>
                     * @param _status <p>Status info: being registered 0, trial 1, connected successfully 2, connection failure 3, deleting 4, deleted 5</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Data catalog properties</p>
                     * @return Properties <p>Data catalog properties</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>Data catalog properties</p>
                     * @param _properties <p>Data catalog properties</p>
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取<p>Operator</p>
                     * @return Operator <p>Operator</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>Operator</p>
                     * @param _operator <p>Operator</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>Responsible person information.</p>
                     * @return MetaOwner <p>Responsible person information.</p>
                     * 
                     */
                    MetaOwner GetMetaOwner() const;

                    /**
                     * 设置<p>Responsible person information.</p>
                     * @param _metaOwner <p>Responsible person information.</p>
                     * 
                     */
                    void SetMetaOwner(const MetaOwner& _metaOwner);

                    /**
                     * 判断参数 MetaOwner 是否已赋值
                     * @return MetaOwner 是否已赋值
                     * 
                     */
                    bool MetaOwnerHasBeenSet() const;

                    /**
                     * 获取<p>Audit information</p>
                     * @return Audit <p>Audit information</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>Audit information</p>
                     * @param _audit <p>Audit information</p>
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取<p>Globally unique ID of the asset</p>
                     * @return AssetGuid <p>Globally unique ID of the asset</p>
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置<p>Globally unique ID of the asset</p>
                     * @param _assetGuid <p>Globally unique ID of the asset</p>
                     * 
                     */
                    void SetAssetGuid(const std::string& _assetGuid);

                    /**
                     * 判断参数 AssetGuid 是否已赋值
                     * @return AssetGuid 是否已赋值
                     * 
                     */
                    bool AssetGuidHasBeenSet() const;

                    /**
                     * 获取<p>Current workspace permission level. The value corresponds to PermissionLevel: 0 - no permission, 1 - read-only, 2 - read-write</p>
                     * @return CurrentWorkspacePermissionLevel <p>Current workspace permission level. The value corresponds to PermissionLevel: 0 - no permission, 1 - read-only, 2 - read-write</p>
                     * 
                     */
                    int64_t GetCurrentWorkspacePermissionLevel() const;

                    /**
                     * 设置<p>Current workspace permission level. The value corresponds to PermissionLevel: 0 - no permission, 1 - read-only, 2 - read-write</p>
                     * @param _currentWorkspacePermissionLevel <p>Current workspace permission level. The value corresponds to PermissionLevel: 0 - no permission, 1 - read-only, 2 - read-write</p>
                     * 
                     */
                    void SetCurrentWorkspacePermissionLevel(const int64_t& _currentWorkspacePermissionLevel);

                    /**
                     * 判断参数 CurrentWorkspacePermissionLevel 是否已赋值
                     * @return CurrentWorkspacePermissionLevel 是否已赋值
                     * 
                     */
                    bool CurrentWorkspacePermissionLevelHasBeenSet() const;

                    /**
                     * 获取<p>tccatalog.identifier in tccatalog properties</p>
                     * @return Identifier <p>tccatalog.identifier in tccatalog properties</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>tccatalog.identifier in tccatalog properties</p>
                     * @param _identifier <p>tccatalog.identifier in tccatalog properties</p>
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取<p>Permission information of the current user for this entity.</p>
                     * @return PermissionDetail <p>Permission information of the current user for this entity.</p>
                     * 
                     */
                    PermissionDetail GetPermissionDetail() const;

                    /**
                     * 设置<p>Permission information of the current user for this entity.</p>
                     * @param _permissionDetail <p>Permission information of the current user for this entity.</p>
                     * 
                     */
                    void SetPermissionDetail(const PermissionDetail& _permissionDetail);

                    /**
                     * 判断参数 PermissionDetail 是否已赋值
                     * @return PermissionDetail 是否已赋值
                     * 
                     */
                    bool PermissionDetailHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an external data Catalog (a Catalog created based on a data source connection, such as MYSQL, EMR_HIVE, TCHOUSE_D, POSTGRESQL, DLC). true: external Catalog, false: built-in Catalog (TABLE/MODEL/VOLUME)</p>
                     * @return IsExternal <p>Whether it is an external data Catalog (a Catalog created based on a data source connection, such as MYSQL, EMR_HIVE, TCHOUSE_D, POSTGRESQL, DLC). true: external Catalog, false: built-in Catalog (TABLE/MODEL/VOLUME)</p>
                     * 
                     */
                    bool GetIsExternal() const;

                    /**
                     * 设置<p>Whether it is an external data Catalog (a Catalog created based on a data source connection, such as MYSQL, EMR_HIVE, TCHOUSE_D, POSTGRESQL, DLC). true: external Catalog, false: built-in Catalog (TABLE/MODEL/VOLUME)</p>
                     * @param _isExternal <p>Whether it is an external data Catalog (a Catalog created based on a data source connection, such as MYSQL, EMR_HIVE, TCHOUSE_D, POSTGRESQL, DLC). true: external Catalog, false: built-in Catalog (TABLE/MODEL/VOLUME)</p>
                     * 
                     */
                    void SetIsExternal(const bool& _isExternal);

                    /**
                     * 判断参数 IsExternal 是否已赋值
                     * @return IsExternal 是否已赋值
                     * 
                     */
                    bool IsExternalHasBeenSet() const;

                    /**
                     * 获取<p>Tag information list. Note: It is returned only when FetchTags=true in the request. By default, it is not returned.</p>
                     * @return Tags <p>Tag information list. Note: It is returned only when FetchTags=true in the request. By default, it is not returned.</p>
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置<p>Tag information list. Note: It is returned only when FetchTags=true in the request. By default, it is not returned.</p>
                     * @param _tags <p>Tag information list. Note: It is returned only when FetchTags=true in the request. By default, it is not returned.</p>
                     * 
                     */
                    void SetTags(const std::vector<CommonTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Data catalog source</p>
                     * @return CatalogSource <p>Data catalog source</p>
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>Data catalog source</p>
                     * @param _catalogSource <p>Data catalog source</p>
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
                     * 获取<p>The data catalog name or database name on the connection side (only available for three-segment data sources in the analytics edition; empty string for two-segment data sources). For MySQL-kernel three-segment data sources such as Doris/StarRocks/TChouse-D: external catalog name; for PG-kernel three-segment data sources such as PostgreSQL/Tencent PG/GaussDB/Hologres: databaseName; for two-segment data sources such as MySQL: empty string. Note: This field is only valid for the analytics edition (CatalogSource=CONNECTION) and is not filled for the pro edition (METALAKE).</p>
                     * @return ConnectionCatalogName <p>The data catalog name or database name on the connection side (only available for three-segment data sources in the analytics edition; empty string for two-segment data sources). For MySQL-kernel three-segment data sources such as Doris/StarRocks/TChouse-D: external catalog name; for PG-kernel three-segment data sources such as PostgreSQL/Tencent PG/GaussDB/Hologres: databaseName; for two-segment data sources such as MySQL: empty string. Note: This field is only valid for the analytics edition (CatalogSource=CONNECTION) and is not filled for the pro edition (METALAKE).</p>
                     * 
                     */
                    std::string GetConnectionCatalogName() const;

                    /**
                     * 设置<p>The data catalog name or database name on the connection side (only available for three-segment data sources in the analytics edition; empty string for two-segment data sources). For MySQL-kernel three-segment data sources such as Doris/StarRocks/TChouse-D: external catalog name; for PG-kernel three-segment data sources such as PostgreSQL/Tencent PG/GaussDB/Hologres: databaseName; for two-segment data sources such as MySQL: empty string. Note: This field is only valid for the analytics edition (CatalogSource=CONNECTION) and is not filled for the pro edition (METALAKE).</p>
                     * @param _connectionCatalogName <p>The data catalog name or database name on the connection side (only available for three-segment data sources in the analytics edition; empty string for two-segment data sources). For MySQL-kernel three-segment data sources such as Doris/StarRocks/TChouse-D: external catalog name; for PG-kernel three-segment data sources such as PostgreSQL/Tencent PG/GaussDB/Hologres: databaseName; for two-segment data sources such as MySQL: empty string. Note: This field is only valid for the analytics edition (CatalogSource=CONNECTION) and is not filled for the pro edition (METALAKE).</p>
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
                     * <p>Unique id of the data catalog.</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Data catalog name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Data catalog type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Data catalog description</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Status info: being registered 0, trial 1, connected successfully 2, connection failure 3, deleting 4, deleted 5</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Data catalog properties</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>Operator</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>Responsible person information.</p>
                     */
                    MetaOwner m_metaOwner;
                    bool m_metaOwnerHasBeenSet;

                    /**
                     * <p>Audit information</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * <p>Globally unique ID of the asset</p>
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * <p>Current workspace permission level. The value corresponds to PermissionLevel: 0 - no permission, 1 - read-only, 2 - read-write</p>
                     */
                    int64_t m_currentWorkspacePermissionLevel;
                    bool m_currentWorkspacePermissionLevelHasBeenSet;

                    /**
                     * <p>tccatalog.identifier in tccatalog properties</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>Permission information of the current user for this entity.</p>
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * <p>Whether it is an external data Catalog (a Catalog created based on a data source connection, such as MYSQL, EMR_HIVE, TCHOUSE_D, POSTGRESQL, DLC). true: external Catalog, false: built-in Catalog (TABLE/MODEL/VOLUME)</p>
                     */
                    bool m_isExternal;
                    bool m_isExternalHasBeenSet;

                    /**
                     * <p>Tag information list. Note: It is returned only when FetchTags=true in the request. By default, it is not returned.</p>
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Data catalog source</p>
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                    /**
                     * <p>The data catalog name or database name on the connection side (only available for three-segment data sources in the analytics edition; empty string for two-segment data sources). For MySQL-kernel three-segment data sources such as Doris/StarRocks/TChouse-D: external catalog name; for PG-kernel three-segment data sources such as PostgreSQL/Tencent PG/GaussDB/Hologres: databaseName; for two-segment data sources such as MySQL: empty string. Note: This field is only valid for the analytics edition (CatalogSource=CONNECTION) and is not filled for the pro edition (METALAKE).</p>
                     */
                    std::string m_connectionCatalogName;
                    bool m_connectionCatalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CATALOG_H_
