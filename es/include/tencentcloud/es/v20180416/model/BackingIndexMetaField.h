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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Backup index metadata field
                */
                class BackingIndexMetaField : public AbstractModel
                {
                public:
                    BackingIndexMetaField();
                    ~BackingIndexMetaField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Backing index name</p>
                     * @return IndexName <p>Backing index name</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>Backing index name</p>
                     * @param _indexName <p>Backing index name</p>
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
                     * 获取<p>Backup index status</p>
                     * @return IndexStatus <p>Backup index status</p>
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置<p>Backup index status</p>
                     * @param _indexStatus <p>Backup index status</p>
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
                     * 获取<p>Backup index storage size</p>
                     * @return IndexStorage <p>Backup index storage size</p>
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置<p>Backup index storage size</p>
                     * @param _indexStorage <p>Backup index storage size</p>
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
                     * 获取<p>Backup index current lifecycle</p>
                     * @return IndexPhrase <p>Backup index current lifecycle</p>
                     * 
                     */
                    std::string GetIndexPhrase() const;

                    /**
                     * 设置<p>Backup index current lifecycle</p>
                     * @param _indexPhrase <p>Backup index current lifecycle</p>
                     * 
                     */
                    void SetIndexPhrase(const std::string& _indexPhrase);

                    /**
                     * 判断参数 IndexPhrase 是否已赋值
                     * @return IndexPhrase 是否已赋值
                     * 
                     */
                    bool IndexPhraseHasBeenSet() const;

                    /**
                     * 获取<p>Backup index creation time</p>
                     * @return IndexCreateTime <p>Backup index creation time</p>
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置<p>Backup index creation time</p>
                     * @param _indexCreateTime <p>Backup index creation time</p>
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
                     * 获取<p>Index Uuid</p>
                     * @return IndexUuid <p>Index Uuid</p>
                     * 
                     */
                    std::string GetIndexUuid() const;

                    /**
                     * 设置<p>Index Uuid</p>
                     * @param _indexUuid <p>Index Uuid</p>
                     * 
                     */
                    void SetIndexUuid(const std::string& _indexUuid);

                    /**
                     * 判断参数 IndexUuid 是否已赋值
                     * @return IndexUuid 是否已赋值
                     * 
                     */
                    bool IndexUuidHasBeenSet() const;

                private:

                    /**
                     * <p>Backing index name</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>Backup index status</p>
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * <p>Backup index storage size</p>
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * <p>Backup index current lifecycle</p>
                     */
                    std::string m_indexPhrase;
                    bool m_indexPhraseHasBeenSet;

                    /**
                     * <p>Backup index creation time</p>
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                    /**
                     * <p>Index Uuid</p>
                     */
                    std::string m_indexUuid;
                    bool m_indexUuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_
