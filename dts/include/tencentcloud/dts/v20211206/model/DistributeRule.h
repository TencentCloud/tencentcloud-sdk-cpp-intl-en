/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DISTRIBUTERULE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DISTRIBUTERULE_H_

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
                * Kafka partition rules for subscription tasks. Data that matches the regex of the database name and table name will be delivered to the Kafka partition according to the RuleType . If multiple rules are configured, the first hit rule will take effect according to the configured order.
                */
                class DistributeRule : public AbstractModel
                {
                public:
                    DistributeRule();
                    ~DistributeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule type. Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key); cols (partitioned by column name). Valid values for mongo: collection (partitioned by collection name); collectionAndObjectId (partitioned by collection + primary key). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleType Rule type. Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key); cols (partitioned by column name). Valid values for mongo: collection (partitioned by collection name); collectionAndObjectId (partitioned by collection + primary key). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type. Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key); cols (partitioned by column name). Valid values for mongo: collection (partitioned by collection name); collectionAndObjectId (partitioned by collection + primary key). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleType Rule type. Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key); cols (partitioned by column name). Valid values for mongo: collection (partitioned by collection name); collectionAndObjectId (partitioned by collection + primary key). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Database name matching rule, please fill in the regular expression.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbPattern Database name matching rule, please fill in the regular expression.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbPattern() const;

                    /**
                     * 设置Database name matching rule, please fill in the regular expression.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbPattern Database name matching rule, please fill in the regular expression.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbPattern(const std::string& _dbPattern);

                    /**
                     * 判断参数 DbPattern 是否已赋值
                     * @return DbPattern 是否已赋值
                     * 
                     */
                    bool DbPatternHasBeenSet() const;

                    /**
                     * 获取Table name matching rule. If DatabaseType is mongodb, it matches the collection name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TablePattern Table name matching rule. If DatabaseType is mongodb, it matches the collection name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTablePattern() const;

                    /**
                     * 设置Table name matching rule. If DatabaseType is mongodb, it matches the collection name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tablePattern Table name matching rule. If DatabaseType is mongodb, it matches the collection name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTablePattern(const std::string& _tablePattern);

                    /**
                     * 判断参数 TablePattern 是否已赋值
                     * @return TablePattern 是否已赋值
                     * 
                     */
                    bool TablePatternHasBeenSet() const;

                    /**
                     * 获取Column name. This field is required if RuleType is cols. The subscription task will use the value of this column to calculate the partition. Mongo does not partition by column, so there is no need to pass this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Columns Column name. This field is required if RuleType is cols. The subscription task will use the value of this column to calculate the partition. Mongo does not partition by column, so there is no need to pass this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetColumns() const;

                    /**
                     * 设置Column name. This field is required if RuleType is cols. The subscription task will use the value of this column to calculate the partition. Mongo does not partition by column, so there is no need to pass this field.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _columns Column name. This field is required if RuleType is cols. The subscription task will use the value of this column to calculate the partition. Mongo does not partition by column, so there is no need to pass this field.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Rule type. Valid values for non-mongo products: table (partitioned by table name); pk (partitioned by table name + primary key); cols (partitioned by column name). Valid values for mongo: collection (partitioned by collection name); collectionAndObjectId (partitioned by collection + primary key). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Database name matching rule, please fill in the regular expression.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbPattern;
                    bool m_dbPatternHasBeenSet;

                    /**
                     * Table name matching rule. If DatabaseType is mongodb, it matches the collection name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tablePattern;
                    bool m_tablePatternHasBeenSet;

                    /**
                     * Column name. This field is required if RuleType is cols. The subscription task will use the value of this column to calculate the partition. Mongo does not partition by column, so there is no need to pass this field.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DISTRIBUTERULE_H_
