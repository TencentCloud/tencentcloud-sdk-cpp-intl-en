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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/BackingIndexMetaField.h>
#include <tencentcloud/es/v20180416/model/IndexPolicyField.h>
#include <tencentcloud/es/v20180416/model/IndexOptionsField.h>
#include <tencentcloud/es/v20180416/model/IndexSettingsField.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Index metadata field
                */
                class IndexMetaField : public AbstractModel
                {
                public:
                    IndexMetaField();
                    ~IndexMetaField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Index type
                     * @return IndexType Index type
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Index type
                     * @param _indexType Index type
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取Index name
                     * @return IndexName Index name
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Index name
                     * @param _indexName Index name
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取JSON-formatted index metadata
                     * @return IndexMetaJson JSON-formatted index metadata
                     * 
                     */
                    std::string GetIndexMetaJson() const;

                    /**
                     * 设置JSON-formatted index metadata
                     * @param _indexMetaJson JSON-formatted index metadata
                     * 
                     */
                    void SetIndexMetaJson(const std::string& _indexMetaJson);

                    /**
                     * 判断参数 IndexMetaJson 是否已赋值
                     * @return IndexMetaJson 是否已赋值
                     * 
                     */
                    bool IndexMetaJsonHasBeenSet() const;

                    /**
                     * 获取Index status
                     * @return IndexStatus Index status
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置Index status
                     * @param _indexStatus Index status
                     * 
                     */
                    void SetIndexStatus(const std::string& _indexStatus);

                    /**
                     * 判断参数 IndexStatus 是否已赋值
                     * @return IndexStatus 是否已赋值
                     * 
                     */
                    bool IndexStatusHasBeenSet() const;

                    /**
                     * 获取Index storage size in bytes
                     * @return IndexStorage Index storage size in bytes
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置Index storage size in bytes
                     * @param _indexStorage Index storage size in bytes
                     * 
                     */
                    void SetIndexStorage(const int64_t& _indexStorage);

                    /**
                     * 判断参数 IndexStorage 是否已赋值
                     * @return IndexStorage 是否已赋值
                     * 
                     */
                    bool IndexStorageHasBeenSet() const;

                    /**
                     * 获取Index creation time
                     * @return IndexCreateTime Index creation time
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置Index creation time
                     * @param _indexCreateTime Index creation time
                     * 
                     */
                    void SetIndexCreateTime(const std::string& _indexCreateTime);

                    /**
                     * 判断参数 IndexCreateTime 是否已赋值
                     * @return IndexCreateTime 是否已赋值
                     * 
                     */
                    bool IndexCreateTimeHasBeenSet() const;

                    /**
                     * 获取Backup index
                     * @return BackingIndices Backup index
                     * 
                     */
                    std::vector<BackingIndexMetaField> GetBackingIndices() const;

                    /**
                     * 设置Backup index
                     * @param _backingIndices Backup index
                     * 
                     */
                    void SetBackingIndices(const std::vector<BackingIndexMetaField>& _backingIndices);

                    /**
                     * 判断参数 BackingIndices 是否已赋值
                     * @return BackingIndices 是否已赋值
                     * 
                     */
                    bool BackingIndicesHasBeenSet() const;

                    /**
                     * 获取Cluster ID of the index
                     * @return ClusterId Cluster ID of the index
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID of the index
                     * @param _clusterId Cluster ID of the index
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name of the index
                     * @return ClusterName Cluster name of the index
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name of the index
                     * @param _clusterName Cluster name of the index
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Version number of the cluster to which the index belongs
                     * @return ClusterVersion Version number of the cluster to which the index belongs
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Version number of the cluster to which the index belongs
                     * @param _clusterVersion Version number of the cluster to which the index belongs
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Index lifecycle field
                     * @return IndexPolicyField Index lifecycle field
                     * 
                     */
                    IndexPolicyField GetIndexPolicyField() const;

                    /**
                     * 设置Index lifecycle field
                     * @param _indexPolicyField Index lifecycle field
                     * 
                     */
                    void SetIndexPolicyField(const IndexPolicyField& _indexPolicyField);

                    /**
                     * 判断参数 IndexPolicyField 是否已赋值
                     * @return IndexPolicyField 是否已赋值
                     * 
                     */
                    bool IndexPolicyFieldHasBeenSet() const;

                    /**
                     * 获取Index autonomous field
                     * @return IndexOptionsField Index autonomous field
                     * 
                     */
                    IndexOptionsField GetIndexOptionsField() const;

                    /**
                     * 设置Index autonomous field
                     * @param _indexOptionsField Index autonomous field
                     * 
                     */
                    void SetIndexOptionsField(const IndexOptionsField& _indexOptionsField);

                    /**
                     * 判断参数 IndexOptionsField 是否已赋值
                     * @return IndexOptionsField 是否已赋值
                     * 
                     */
                    bool IndexOptionsFieldHasBeenSet() const;

                    /**
                     * 获取Index configuration field
                     * @return IndexSettingsField Index configuration field
                     * 
                     */
                    IndexSettingsField GetIndexSettingsField() const;

                    /**
                     * 设置Index configuration field
                     * @param _indexSettingsField Index configuration field
                     * 
                     */
                    void SetIndexSettingsField(const IndexSettingsField& _indexSettingsField);

                    /**
                     * 判断参数 IndexSettingsField 是否已赋值
                     * @return IndexSettingsField 是否已赋值
                     * 
                     */
                    bool IndexSettingsFieldHasBeenSet() const;

                    /**
                     * 获取Index alias field
                     * @return IndexAliasesField Index alias field
                     * 
                     */
                    std::vector<std::string> GetIndexAliasesField() const;

                    /**
                     * 设置Index alias field
                     * @param _indexAliasesField Index alias field
                     * 
                     */
                    void SetIndexAliasesField(const std::vector<std::string>& _indexAliasesField);

                    /**
                     * 判断参数 IndexAliasesField 是否已赋值
                     * @return IndexAliasesField 是否已赋值
                     * 
                     */
                    bool IndexAliasesFieldHasBeenSet() const;

                    /**
                     * 获取APP ID of the cluster to which the index belongs
                     * @return AppId APP ID of the cluster to which the index belongs
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置APP ID of the cluster to which the index belongs
                     * @param _appId APP ID of the cluster to which the index belongs
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Number of indexed documents
                     * @return IndexDocs Number of indexed documents
                     * 
                     */
                    uint64_t GetIndexDocs() const;

                    /**
                     * 设置Number of indexed documents
                     * @param _indexDocs Number of indexed documents
                     * 
                     */
                    void SetIndexDocs(const uint64_t& _indexDocs);

                    /**
                     * 判断参数 IndexDocs 是否已赋值
                     * @return IndexDocs 是否已赋值
                     * 
                     */
                    bool IndexDocsHasBeenSet() const;

                private:

                    /**
                     * Index type
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * Index name
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * JSON-formatted index metadata
                     */
                    std::string m_indexMetaJson;
                    bool m_indexMetaJsonHasBeenSet;

                    /**
                     * Index status
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * Index storage size in bytes
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * Index creation time
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                    /**
                     * Backup index
                     */
                    std::vector<BackingIndexMetaField> m_backingIndices;
                    bool m_backingIndicesHasBeenSet;

                    /**
                     * Cluster ID of the index
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name of the index
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Version number of the cluster to which the index belongs
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Index lifecycle field
                     */
                    IndexPolicyField m_indexPolicyField;
                    bool m_indexPolicyFieldHasBeenSet;

                    /**
                     * Index autonomous field
                     */
                    IndexOptionsField m_indexOptionsField;
                    bool m_indexOptionsFieldHasBeenSet;

                    /**
                     * Index configuration field
                     */
                    IndexSettingsField m_indexSettingsField;
                    bool m_indexSettingsFieldHasBeenSet;

                    /**
                     * Index alias field
                     */
                    std::vector<std::string> m_indexAliasesField;
                    bool m_indexAliasesFieldHasBeenSet;

                    /**
                     * APP ID of the cluster to which the index belongs
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Number of indexed documents
                     */
                    uint64_t m_indexDocs;
                    bool m_indexDocsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_
