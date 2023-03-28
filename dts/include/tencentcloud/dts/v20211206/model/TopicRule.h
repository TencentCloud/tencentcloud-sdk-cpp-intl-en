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
                * Topic description
                */
                class TopicRule : public AbstractModel
                {
                public:
                    TopicRule();
                    ~TopicRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param TopicName Topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic partitioning policy. If the topic sync policy is delivering data to multiple custom topics (`TopicType` = `Multi`), the value of this parameter is `Random` (deliver to a random partition). If the topic sync policy is delivering all data to a single topic (`TopicType` = `Single`), this parameter has three valid values: `AllInPartitionZero` (deliver all data to partition0), `PartitionByTable` (partition by table name), `PartitionByTableAndKey` (partition by table name and primary key).
                     * @return PartitionType Topic partitioning policy. If the topic sync policy is delivering data to multiple custom topics (`TopicType` = `Multi`), the value of this parameter is `Random` (deliver to a random partition). If the topic sync policy is delivering all data to a single topic (`TopicType` = `Single`), this parameter has three valid values: `AllInPartitionZero` (deliver all data to partition0), `PartitionByTable` (partition by table name), `PartitionByTableAndKey` (partition by table name and primary key).
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置Topic partitioning policy. If the topic sync policy is delivering data to multiple custom topics (`TopicType` = `Multi`), the value of this parameter is `Random` (deliver to a random partition). If the topic sync policy is delivering all data to a single topic (`TopicType` = `Single`), this parameter has three valid values: `AllInPartitionZero` (deliver all data to partition0), `PartitionByTable` (partition by table name), `PartitionByTableAndKey` (partition by table name and primary key).
                     * @param PartitionType Topic partitioning policy. If the topic sync policy is delivering data to multiple custom topics (`TopicType` = `Multi`), the value of this parameter is `Random` (deliver to a random partition). If the topic sync policy is delivering all data to a single topic (`TopicType` = `Single`), this parameter has three valid values: `AllInPartitionZero` (deliver all data to partition0), `PartitionByTable` (partition by table name), `PartitionByTableAndKey` (partition by table name and primary key).
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取Database name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     * @return DbMatchMode Database name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     */
                    std::string GetDbMatchMode() const;

                    /**
                     * 设置Database name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     * @param DbMatchMode Database name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     */
                    void SetDbMatchMode(const std::string& _dbMatchMode);

                    /**
                     * 判断参数 DbMatchMode 是否已赋值
                     * @return DbMatchMode 是否已赋值
                     */
                    bool DbMatchModeHasBeenSet() const;

                    /**
                     * 获取Database name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     * @return DbName Database name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     * @param DbName Database name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Table name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     * @return TableMatchMode Table name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     */
                    std::string GetTableMatchMode() const;

                    /**
                     * 设置Table name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     * @param TableMatchMode Table name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     */
                    void SetTableMatchMode(const std::string& _tableMatchMode);

                    /**
                     * 判断参数 TableMatchMode 是否已赋值
                     * @return TableMatchMode 是否已赋值
                     */
                    bool TableMatchModeHasBeenSet() const;

                    /**
                     * 获取Table name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     * @return TableName Table name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Table name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     * @param TableName Table name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic partitioning policy. If the topic sync policy is delivering data to multiple custom topics (`TopicType` = `Multi`), the value of this parameter is `Random` (deliver to a random partition). If the topic sync policy is delivering all data to a single topic (`TopicType` = `Single`), this parameter has three valid values: `AllInPartitionZero` (deliver all data to partition0), `PartitionByTable` (partition by table name), `PartitionByTableAndKey` (partition by table name and primary key).
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * Database name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     */
                    std::string m_dbMatchMode;
                    bool m_dbMatchModeHasBeenSet;

                    /**
                     * Database name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Table name matching rule. This parameter takes effect only when `TopicType` is `Multi`. Valid values: `Regular` (match by regex), `Default` (default rule for the remaining databases that cannot be matched by regex). The default rule must be included in the array of matching rules.
                     */
                    std::string m_tableMatchMode;
                    bool m_tableMatchModeHasBeenSet;

                    /**
                     * Table name, which can only be matched by regex when `TopicType` is `Multi` and `DbMatchMode` is `Regular`.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TOPICRULE_H_
