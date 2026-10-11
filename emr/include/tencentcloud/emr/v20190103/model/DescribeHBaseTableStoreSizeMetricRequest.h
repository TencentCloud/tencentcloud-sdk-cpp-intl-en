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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHBaseTableStoreSizeMetric request structure.
                */
                class DescribeHBaseTableStoreSizeMetricRequest : public AbstractModel
                {
                public:
                    DescribeHBaseTableStoreSizeMetricRequest();
                    ~DescribeHBaseTableStoreSizeMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取HBase table name.
                     * @return TableName HBase table name.
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置HBase table name.
                     * @param _tableName HBase table name.
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
                     * 获取HBase RegionServer service.
                     * @return RegionServer HBase RegionServer service.
                     * 
                     */
                    std::string GetRegionServer() const;

                    /**
                     * 设置HBase RegionServer service.
                     * @param _regionServer HBase RegionServer service.
                     * 
                     */
                    void SetRegionServer(const std::string& _regionServer);

                    /**
                     * 判断参数 RegionServer 是否已赋值
                     * @return RegionServer 是否已赋值
                     * 
                     */
                    bool RegionServerHasBeenSet() const;

                    /**
                     * 获取Specifies the data monitoring granularity to be obtained.
                     * @return Downsample Specifies the data monitoring granularity to be obtained.
                     * 
                     */
                    std::string GetDownsample() const;

                    /**
                     * 设置Specifies the data monitoring granularity to be obtained.
                     * @param _downsample Specifies the data monitoring granularity to be obtained.
                     * 
                     */
                    void SetDownsample(const std::string& _downsample);

                    /**
                     * 判断参数 Downsample 是否已赋值
                     * @return Downsample 是否已赋值
                     * 
                     */
                    bool DownsampleHasBeenSet() const;

                    /**
                     * 获取Specifies the start timestamp of the monitoring data to be queried.
                     * @return StartTime Specifies the start timestamp of the monitoring data to be queried.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Specifies the start timestamp of the monitoring data to be queried.
                     * @param _startTime Specifies the start timestamp of the monitoring data to be queried.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the end timestamp of the monitoring data to be queried.
                     * @return EndTime Specifies the end timestamp of the monitoring data to be queried.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Specifies the end timestamp of the monitoring data to be queried.
                     * @param _endTime Specifies the end timestamp of the monitoring data to be queried.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * HBase table name.
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * HBase RegionServer service.
                     */
                    std::string m_regionServer;
                    bool m_regionServerHasBeenSet;

                    /**
                     * Specifies the data monitoring granularity to be obtained.
                     */
                    std::string m_downsample;
                    bool m_downsampleHasBeenSet;

                    /**
                     * Specifies the start timestamp of the monitoring data to be queried.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the end timestamp of the monitoring data to be queried.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLESTORESIZEMETRICREQUEST_H_
