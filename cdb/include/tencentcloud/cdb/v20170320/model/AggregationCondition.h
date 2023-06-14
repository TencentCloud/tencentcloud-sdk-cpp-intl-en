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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AGGREGATIONCONDITION_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AGGREGATIONCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Aggregation condition for an audit log
                */
                class AggregationCondition : public AbstractModel
                {
                public:
                    AggregationCondition();
                    ~AggregationCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Aggregation field. Valid values: `host` (source IP), `user` （username), `dbName` (database name), `sqlType` (SQL type).
                     * @return AggregationField Aggregation field. Valid values: `host` (source IP), `user` （username), `dbName` (database name), `sqlType` (SQL type).
                     * 
                     */
                    std::string GetAggregationField() const;

                    /**
                     * 设置Aggregation field. Valid values: `host` (source IP), `user` （username), `dbName` (database name), `sqlType` (SQL type).
                     * @param _aggregationField Aggregation field. Valid values: `host` (source IP), `user` （username), `dbName` (database name), `sqlType` (SQL type).
                     * 
                     */
                    void SetAggregationField(const std::string& _aggregationField);

                    /**
                     * 判断参数 AggregationField 是否已赋值
                     * @return AggregationField 是否已赋值
                     * 
                     */
                    bool AggregationFieldHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of buckets returned under this field. Maximum value: `100`.
                     * @return Limit Number of buckets returned under this field. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of buckets returned under this field. Maximum value: `100`.
                     * @param _limit Number of buckets returned under this field. Maximum value: `100`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Aggregation field. Valid values: `host` (source IP), `user` （username), `dbName` (database name), `sqlType` (SQL type).
                     */
                    std::string m_aggregationField;
                    bool m_aggregationFieldHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of buckets returned under this field. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AGGREGATIONCONDITION_H_
