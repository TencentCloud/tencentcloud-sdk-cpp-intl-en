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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/AuditLogInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Operation log
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log type
                     * @return Resource Log type
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Log type
                     * @param _resource Log type
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Log table name
                     * @return Metric Log table name
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Log table name
                     * @param _metric Log table name
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Total number of logs
                     * @return TotalCount Total number of logs
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of logs
                     * @param _totalCount Total number of logs
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of logs
                     * @return DataSet List of logs
                     * 
                     */
                    std::vector<AuditLogInfo> GetDataSet() const;

                    /**
                     * 设置List of logs
                     * @param _dataSet List of logs
                     * 
                     */
                    void SetDataSet(const std::vector<AuditLogInfo>& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                private:

                    /**
                     * Log type
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Log table name
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Total number of logs
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of logs
                     */
                    std::vector<AuditLogInfo> m_dataSet;
                    bool m_dataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOG_H_
