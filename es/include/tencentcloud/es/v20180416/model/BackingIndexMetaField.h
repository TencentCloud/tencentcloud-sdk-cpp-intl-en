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
                * Backing index metadata fields
                */
                class BackingIndexMetaField : public AbstractModel
                {
                public:
                    BackingIndexMetaField();
                    ~BackingIndexMetaField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backing index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexName Backing index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Backing index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexName Backing index name
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
                     * 获取Backing index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexStatus Backing index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置Backing index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexStatus Backing index status
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
                     * 获取Backing index size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexStorage Backing index size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置Backing index size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexStorage Backing index size
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
                     * 获取Current lifecycle phase of backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexPhrase Current lifecycle phase of backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexPhrase() const;

                    /**
                     * 设置Current lifecycle phase of backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexPhrase Current lifecycle phase of backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Backing index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexCreateTime Backing index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置Backing index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _indexCreateTime Backing index creation time
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

                private:

                    /**
                     * Backing index name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * Backing index status
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * Backing index size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * Current lifecycle phase of backing index
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexPhrase;
                    bool m_indexPhraseHasBeenSet;

                    /**
                     * Backing index creation time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_
