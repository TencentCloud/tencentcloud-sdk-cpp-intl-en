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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexType Index type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Index type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexType Index type
Note: This field may return `null`, indicating that no valid value can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexName Index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexName Index name
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexStatus Index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置Index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexStatus Index status
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Index size (in byte)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexStorage Index size (in byte)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置Index size (in byte)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexStorage Index size (in byte)
Note: This field may return `null`, indicating that no valid value can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexCreateTime Index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置Index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexCreateTime Index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BackingIndices Backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<BackingIndexMetaField> GetBackingIndices() const;

                    /**
                     * 设置Backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _backingIndices Backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Cluster ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterId Cluster ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _clusterId Cluster ID
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Cluster name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterName Cluster name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _clusterName Cluster name
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Cluster version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClusterVersion Cluster version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _clusterVersion Cluster version
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Index lifecycle policy field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexPolicyField Index lifecycle policy field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    IndexPolicyField GetIndexPolicyField() const;

                    /**
                     * 设置Index lifecycle policy field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexPolicyField Index lifecycle policy field
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Index automation field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexOptionsField Index automation field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    IndexOptionsField GetIndexOptionsField() const;

                    /**
                     * 设置Index automation field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexOptionsField Index automation field
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Index setting field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexSettingsField Index setting field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    IndexSettingsField GetIndexSettingsField() const;

                    /**
                     * 设置Index setting field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexSettingsField Index setting field
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Cluster APP ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AppId Cluster APP ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Cluster APP ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _appId Cluster APP ID
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取The number of index docs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndexDocs The number of index docs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIndexDocs() const;

                    /**
                     * 设置The number of index docs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _indexDocs The number of index docs.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * Index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * Index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * Index size (in byte)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * Index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                    /**
                     * Backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<BackingIndexMetaField> m_backingIndices;
                    bool m_backingIndicesHasBeenSet;

                    /**
                     * Cluster ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster version
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Index lifecycle policy field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    IndexPolicyField m_indexPolicyField;
                    bool m_indexPolicyFieldHasBeenSet;

                    /**
                     * Index automation field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    IndexOptionsField m_indexOptionsField;
                    bool m_indexOptionsFieldHasBeenSet;

                    /**
                     * Index setting field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    IndexSettingsField m_indexSettingsField;
                    bool m_indexSettingsFieldHasBeenSet;

                    /**
                     * Cluster APP ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * The number of index docs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_indexDocs;
                    bool m_indexDocsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_
