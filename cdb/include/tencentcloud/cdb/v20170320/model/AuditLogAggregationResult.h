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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGAGGREGATIONRESULT_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGAGGREGATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Bucket.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Analysis result of an audit log
                */
                class AuditLogAggregationResult : public AbstractModel
                {
                public:
                    AuditLogAggregationResult();
                    ~AuditLogAggregationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Aggregation dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AggregationField Aggregation dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAggregationField() const;

                    /**
                     * 设置Aggregation dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aggregationField Aggregation dimension
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Result set of an aggregation bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Buckets Result set of an aggregation bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Bucket> GetBuckets() const;

                    /**
                     * 设置Result set of an aggregation bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _buckets Result set of an aggregation bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBuckets(const std::vector<Bucket>& _buckets);

                    /**
                     * 判断参数 Buckets 是否已赋值
                     * @return Buckets 是否已赋值
                     * 
                     */
                    bool BucketsHasBeenSet() const;

                private:

                    /**
                     * Aggregation dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aggregationField;
                    bool m_aggregationFieldHasBeenSet;

                    /**
                     * Result set of an aggregation bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Bucket> m_buckets;
                    bool m_bucketsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGAGGREGATIONRESULT_H_
