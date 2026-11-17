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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_

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
                * Description of single and custom topics. During shipping to a single topic, the last item in this array will be treated as the default partition strategy. All unmatched data will be shipped according to this strategy. The default strategy only supports three options: shipping to partition 0, by table name, or by table name+primary key.
                */
                class TopicRule : public AbstractModel
                {
                public:
                    TopicRule();
                    ~TopicRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name. For single-topic scenarios, all TopicNames should be the same.
                     * @return TopicName Topic name. For single-topic scenarios, all TopicNames should be the same.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name. For single-topic scenarios, all TopicNames should be the same.
                     * @param _topicName Topic name. For single-topic scenarios, all TopicNames should be the same.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic partition policy. When a topic is customized, the valid value is Random (random shipping); when centralizing shipping to a single topic is adopted, the valid values are AllInPartitionZero (ship all to partition 0), PartitionByTable (partition by table name), PartitionByTableAndKey (partition by table name and primary key), and PartitionByCols (partition by column).
                     * @return PartitionType Topic partition policy. When a topic is customized, the valid value is Random (random shipping); when centralizing shipping to a single topic is adopted, the valid values are AllInPartitionZero (ship all to partition 0), PartitionByTable (partition by table name), PartitionByTableAndKey (partition by table name and primary key), and PartitionByCols (partition by column).
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置Topic partition policy. When a topic is customized, the valid value is Random (random shipping); when centralizing shipping to a single topic is adopted, the valid values are AllInPartitionZero (ship all to partition 0), PartitionByTable (partition by table name), PartitionByTableAndKey (partition by table name and primary key), and PartitionByCols (partition by column).
                     * @param _partitionType Topic partition policy. When a topic is customized, the valid value is Random (random shipping); when centralizing shipping to a single topic is adopted, the valid values are AllInPartitionZero (ship all to partition 0), PartitionByTable (partition by table name), PartitionByTableAndKey (partition by table name and primary key), and PartitionByCols (partition by column).
                     * 
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取Database name matching rule. For example: Regular (regular expression matching) and Default (remaining databases that do not meet any rule). The last item in the array should be Default.
                     * @return DbMatchMode Database name matching rule. For example: Regular (regular expression matching) and Default (remaining databases that do not meet any rule). The last item in the array should be Default.
                     * 
                     */
                    std::string GetDbMatchMode() const;

                    /**
                     * 设置Database name matching rule. For example: Regular (regular expression matching) and Default (remaining databases that do not meet any rule). The last item in the array should be Default.
                     * @param _dbMatchMode Database name matching rule. For example: Regular (regular expression matching) and Default (remaining databases that do not meet any rule). The last item in the array should be Default.
                     * 
                     */
                    void SetDbMatchMode(const std::string& _dbMatchMode);

                    /**
                     * 判断参数 DbMatchMode 是否已赋值
                     * @return DbMatchMode 是否已赋值
                     * 
                     */
                    bool DbMatchModeHasBeenSet() const;

                    /**
                     * 获取Database name. It is valid when DbMatchMode=Regular.
                     * @return DbName Database name. It is valid when DbMatchMode=Regular.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name. It is valid when DbMatchMode=Regular.
                     * @param _dbName Database name. It is valid when DbMatchMode=Regular.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Table name matching rule. For example: Regular (regular expression matching) and Default (remaining tables that do not meet any rule). The last item in the array should be Default.
                     * @return TableMatchMode Table name matching rule. For example: Regular (regular expression matching) and Default (remaining tables that do not meet any rule). The last item in the array should be Default.
                     * 
                     */
                    std::string GetTableMatchMode() const;

                    /**
                     * 设置Table name matching rule. For example: Regular (regular expression matching) and Default (remaining tables that do not meet any rule). The last item in the array should be Default.
                     * @param _tableMatchMode Table name matching rule. For example: Regular (regular expression matching) and Default (remaining tables that do not meet any rule). The last item in the array should be Default.
                     * 
                     */
                    void SetTableMatchMode(const std::string& _tableMatchMode);

                    /**
                     * 判断参数 TableMatchMode 是否已赋值
                     * @return TableMatchMode 是否已赋值
                     * 
                     */
                    bool TableMatchModeHasBeenSet() const;

                    /**
                     * 获取Table name. It is valid when TableMatchMode is Regular.
                     * @return TableName Table name. It is valid when TableMatchMode is Regular.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name. It is valid when TableMatchMode is Regular.
                     * @param _tableName Table name. It is valid when TableMatchMode is Regular.
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取When partitioning by column, you need to select and configure column names. Multi-column selection is supported.
                     * @return Columns When partitioning by column, you need to select and configure column names. Multi-column selection is supported.
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置When partitioning by column, you need to select and configure column names. Multi-column selection is supported.
                     * @param _columns When partitioning by column, you need to select and configure column names. Multi-column selection is supported.
                     * 
                     */
                    void SetColumns(const std::vector<std::string>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * Topic name. For single-topic scenarios, all TopicNames should be the same.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic partition policy. When a topic is customized, the valid value is Random (random shipping); when centralizing shipping to a single topic is adopted, the valid values are AllInPartitionZero (ship all to partition 0), PartitionByTable (partition by table name), PartitionByTableAndKey (partition by table name and primary key), and PartitionByCols (partition by column).
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * Database name matching rule. For example: Regular (regular expression matching) and Default (remaining databases that do not meet any rule). The last item in the array should be Default.
                     */
                    std::string m_dbMatchMode;
                    bool m_dbMatchModeHasBeenSet;

                    /**
                     * Database name. It is valid when DbMatchMode=Regular.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Table name matching rule. For example: Regular (regular expression matching) and Default (remaining tables that do not meet any rule). The last item in the array should be Default.
                     */
                    std::string m_tableMatchMode;
                    bool m_tableMatchModeHasBeenSet;

                    /**
                     * Table name. It is valid when TableMatchMode is Regular.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * When partitioning by column, you need to select and configure column names. Multi-column selection is supported.
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_
