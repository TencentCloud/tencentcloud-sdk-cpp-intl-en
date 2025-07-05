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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Details of inconsistent tables
                */
                class DifferenceItem : public AbstractModel
                {
                public:
                    DifferenceItem();
                    ~DifferenceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Db Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _db Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _table Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Chunk ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Chunk Chunk ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetChunk() const;

                    /**
                     * 设置Chunk ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chunk Chunk ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChunk(const int64_t& _chunk);

                    /**
                     * 判断参数 Chunk 是否已赋值
                     * @return Chunk 是否已赋值
                     * 
                     */
                    bool ChunkHasBeenSet() const;

                    /**
                     * 获取Source database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcItem Source database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置Source database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcItem Source database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcItem(const std::string& _srcItem);

                    /**
                     * 判断参数 SrcItem 是否已赋值
                     * @return SrcItem 是否已赋值
                     * 
                     */
                    bool SrcItemHasBeenSet() const;

                    /**
                     * 获取Target database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstItem Target database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置Target database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstItem Target database value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstItem(const std::string& _dstItem);

                    /**
                     * 判断参数 DstItem 是否已赋值
                     * @return DstItem 是否已赋值
                     * 
                     */
                    bool DstItemHasBeenSet() const;

                    /**
                     * 获取Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndexName Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _indexName Index name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取First index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LowerBoundary First index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLowerBoundary() const;

                    /**
                     * 设置First index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lowerBoundary First index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLowerBoundary(const std::string& _lowerBoundary);

                    /**
                     * 判断参数 LowerBoundary 是否已赋值
                     * @return LowerBoundary 是否已赋值
                     * 
                     */
                    bool LowerBoundaryHasBeenSet() const;

                    /**
                     * 获取Last index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpperBoundary Last index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpperBoundary() const;

                    /**
                     * 设置Last index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upperBoundary Last index key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpperBoundary(const std::string& _upperBoundary);

                    /**
                     * 判断参数 UpperBoundary 是否已赋值
                     * @return UpperBoundary 是否已赋值
                     * 
                     */
                    bool UpperBoundaryHasBeenSet() const;

                    /**
                     * 获取Comparison time in ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CostTime Comparison time in ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置Comparison time in ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _costTime Comparison time in ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCostTime(const double& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Completion time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinishedAt Completion time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置Completion time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _finishedAt Completion time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                private:

                    /**
                     * Database name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Table name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Chunk ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chunk;
                    bool m_chunkHasBeenSet;

                    /**
                     * Source database value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * Target database value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                    /**
                     * Index name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * First index key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lowerBoundary;
                    bool m_lowerBoundaryHasBeenSet;

                    /**
                     * Last index key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_upperBoundary;
                    bool m_upperBoundaryHasBeenSet;

                    /**
                     * Comparison time in ms
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Completion time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_
