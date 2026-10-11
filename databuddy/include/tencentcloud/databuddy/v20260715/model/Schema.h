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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEMA_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>
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
                * Schema information
                */
                class Schema : public AbstractModel
                {
                public:
                    Schema();
                    ~Schema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>schema name</p>
                     * @return Name <p>schema name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>schema name</p>
                     * @param _name <p>schema name</p>
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
                     * 获取<p>Description. Note: This field may return null, indicating that no valid values can be obtained.</p>
                     * @return Comment <p>Description. Note: This field may return null, indicating that no valid values can be obtained.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Description. Note: This field may return null, indicating that no valid values can be obtained.</p>
                     * @param _comment <p>Description. Note: This field may return null, indicating that no valid values can be obtained.</p>
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
                     * 获取<p>Property. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * @return Properties <p>Property. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>Property. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * @param _properties <p>Property. Note: This field may return null, indicating that no valid value can be obtained.</p>
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
                     * 获取<p>Audit information. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * @return Audit <p>Audit information. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>Audit information. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     * @param _audit <p>Audit information. Note: This field may return null, indicating that no valid value can be obtained.</p>
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
                     * 获取<p>owner information.</p>
                     * @return MetaOwner <p>owner information.</p>
                     * 
                     */
                    MetaOwner GetMetaOwner() const;

                    /**
                     * 设置<p>owner information.</p>
                     * @param _metaOwner <p>owner information.</p>
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
                     * 获取<p>Globally unique asset ID, generated by WedataAssetUIDUtils.generateUID</p>
                     * @return AssetGuid <p>Globally unique asset ID, generated by WedataAssetUIDUtils.generateUID</p>
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置<p>Globally unique asset ID, generated by WedataAssetUIDUtils.generateUID</p>
                     * @param _assetGuid <p>Globally unique asset ID, generated by WedataAssetUIDUtils.generateUID</p>
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
                     * 获取<p>Permission information of the current user on this schema. Note: This field may return null. It is not returned if FetchPermissions is not enabled in the request.</p>
                     * @return PermissionDetail <p>Permission information of the current user on this schema. Note: This field may return null. It is not returned if FetchPermissions is not enabled in the request.</p>
                     * 
                     */
                    PermissionDetail GetPermissionDetail() const;

                    /**
                     * 设置<p>Permission information of the current user on this schema. Note: This field may return null. It is not returned if FetchPermissions is not enabled in the request.</p>
                     * @param _permissionDetail <p>Permission information of the current user on this schema. Note: This field may return null. It is not returned if FetchPermissions is not enabled in the request.</p>
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
                     * 获取<p>Tag information list. Note: This field may return null and is not returned if FetchTags is not enabled in the request.</p>
                     * @return Tags <p>Tag information list. Note: This field may return null and is not returned if FetchTags is not enabled in the request.</p>
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置<p>Tag information list. Note: This field may return null and is not returned if FetchTags is not enabled in the request.</p>
                     * @param _tags <p>Tag information list. Note: This field may return null and is not returned if FetchTags is not enabled in the request.</p>
                     * 
                     */
                    void SetTags(const std::vector<CommonTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>schema name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Description. Note: This field may return null, indicating that no valid values can be obtained.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Property. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>Audit information. Note: This field may return null, indicating that no valid value can be obtained.</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * <p>owner information.</p>
                     */
                    MetaOwner m_metaOwner;
                    bool m_metaOwnerHasBeenSet;

                    /**
                     * <p>Globally unique asset ID, generated by WedataAssetUIDUtils.generateUID</p>
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * <p>Permission information of the current user on this schema. Note: This field may return null. It is not returned if FetchPermissions is not enabled in the request.</p>
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * <p>Tag information list. Note: This field may return null and is not returned if FetchTags is not enabled in the request.</p>
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEMA_H_
