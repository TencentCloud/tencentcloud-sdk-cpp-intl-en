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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Dimension.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeJobMonitorData request structure.
                */
                class DescribeJobMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeJobMonitorDataRequest();
                    ~DescribeJobMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID; see JobId in the job list (https://www.tencentcloud.com/document/product/599/15909?from_cn_redirect=1).
                     * @return JobId Job ID; see JobId in the job list (https://www.tencentcloud.com/document/product/599/15909?from_cn_redirect=1).
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID; see JobId in the job list (https://www.tencentcloud.com/document/product/599/15909?from_cn_redirect=1).
                     * @param _jobId Job ID; see JobId in the job list (https://www.tencentcloud.com/document/product/599/15909?from_cn_redirect=1).
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Name of the job Task. See [job details](https://www.tencentcloud.com/document/product/599/15904?from_cn_redirect=1).
                     * @return TaskName Name of the job Task. See [job details](https://www.tencentcloud.com/document/product/599/15904?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Name of the job Task. See [job details](https://www.tencentcloud.com/document/product/599/15904?from_cn_redirect=1).
                     * @param _taskName Name of the job Task. See [job details](https://www.tencentcloud.com/document/product/599/15904?from_cn_redirect=1).
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Serial number of the task instance. For details, see [Task Detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1).
                     * @return TaskInstanceIndex Serial number of the task instance. For details, see [Task Detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置Serial number of the task instance. For details, see [Task Detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1).
                     * @param _taskInstanceIndex Serial number of the task instance. For details, see [Task Detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1).
                     * 
                     */
                    void SetTaskInstanceIndex(const int64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                    /**
                     * 获取Supported metrics; Metrics to be queried for the task currently supported.

-CpuUsage: cpu usage, unit: %
-MemUsage: Memory usage, measurement unit: %
-LanOuttraffic: Private network outbound bandwidth, measurement unit: Bytes/s
-LanIntraffic: Private network inbound bandwidth, unit: Bytes/s
-MaxDiskUsage: Highest disk utilization among all disks. Measurement unit: %
-TargetDiskUsage: Specify disk utilization, unit: %; use in conjunction with the Dimensions parameter.
                     * @return MetricName Supported metrics; Metrics to be queried for the task currently supported.

-CpuUsage: cpu usage, unit: %
-MemUsage: Memory usage, measurement unit: %
-LanOuttraffic: Private network outbound bandwidth, measurement unit: Bytes/s
-LanIntraffic: Private network inbound bandwidth, unit: Bytes/s
-MaxDiskUsage: Highest disk utilization among all disks. Measurement unit: %
-TargetDiskUsage: Specify disk utilization, unit: %; use in conjunction with the Dimensions parameter.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Supported metrics; Metrics to be queried for the task currently supported.

-CpuUsage: cpu usage, unit: %
-MemUsage: Memory usage, measurement unit: %
-LanOuttraffic: Private network outbound bandwidth, measurement unit: Bytes/s
-LanIntraffic: Private network inbound bandwidth, unit: Bytes/s
-MaxDiskUsage: Highest disk utilization among all disks. Measurement unit: %
-TargetDiskUsage: Specify disk utilization, unit: %; use in conjunction with the Dimensions parameter.
                     * @param _metricName Supported metrics; Metrics to be queried for the task currently supported.

-CpuUsage: cpu usage, unit: %
-MemUsage: Memory usage, measurement unit: %
-LanOuttraffic: Private network outbound bandwidth, measurement unit: Bytes/s
-LanIntraffic: Private network inbound bandwidth, unit: Bytes/s
-MaxDiskUsage: Highest disk utilization among all disks. Measurement unit: %
-TargetDiskUsage: Specify disk utilization, unit: %; use in conjunction with the Dimensions parameter.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Query start time of the task instance. If the query start time is not passed in or the incoming time is less than the instance creation time (see task detail (https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for instance creation time), the query time will automatically be adjusted to the instance creation time. The passed-in time format supports only the zero time zone format.
                     * @return StartTime Query start time of the task instance. If the query start time is not passed in or the incoming time is less than the instance creation time (see task detail (https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for instance creation time), the query time will automatically be adjusted to the instance creation time. The passed-in time format supports only the zero time zone format.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time of the task instance. If the query start time is not passed in or the incoming time is less than the instance creation time (see task detail (https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for instance creation time), the query time will automatically be adjusted to the instance creation time. The passed-in time format supports only the zero time zone format.
                     * @param _startTime Query start time of the task instance. If the query start time is not passed in or the incoming time is less than the instance creation time (see task detail (https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for instance creation time), the query time will automatically be adjusted to the instance creation time. The passed-in time format supports only the zero time zone format.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query the termination time of the task instance. If the query end time is not passed in or the passed-in time is larger than the termination time of the task instance (see [task detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for the termination time of the task instance), and the task instance has already ended, the query end time will be automatically adjusted to the termination time of the task instance. If the task instance has not ended, the query end time will be automatically adjusted to the current time. The input time format supports only the zero time zone format.
                     * @return EndTime Query the termination time of the task instance. If the query end time is not passed in or the passed-in time is larger than the termination time of the task instance (see [task detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for the termination time of the task instance), and the task instance has already ended, the query end time will be automatically adjusted to the termination time of the task instance. If the task instance has not ended, the query end time will be automatically adjusted to the current time. The input time format supports only the zero time zone format.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query the termination time of the task instance. If the query end time is not passed in or the passed-in time is larger than the termination time of the task instance (see [task detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for the termination time of the task instance), and the task instance has already ended, the query end time will be automatically adjusted to the termination time of the task instance. If the task instance has not ended, the query end time will be automatically adjusted to the current time. The input time format supports only the zero time zone format.
                     * @param _endTime Query the termination time of the task instance. If the query end time is not passed in or the passed-in time is larger than the termination time of the task instance (see [task detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for the termination time of the task instance), and the task instance has already ended, the query end time will be automatically adjusted to the termination time of the task instance. If the task instance has not ended, the query end time will be automatically adjusted to the current time. The input time format supports only the zero time zone format.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Query metrics extension parameter; currently only support TargetDiskUsage.

- TargetDiskUsage
-Supported query dimensions include diskname. The dimension value is the disk mount name, such as vdb. If this parameter is not provided, the default query is disk utilization of vdb.
Sample: [{"Name":"diskname", "Value":"vdb"}]
                     * @return Dimensions Query metrics extension parameter; currently only support TargetDiskUsage.

- TargetDiskUsage
-Supported query dimensions include diskname. The dimension value is the disk mount name, such as vdb. If this parameter is not provided, the default query is disk utilization of vdb.
Sample: [{"Name":"diskname", "Value":"vdb"}]
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置Query metrics extension parameter; currently only support TargetDiskUsage.

- TargetDiskUsage
-Supported query dimensions include diskname. The dimension value is the disk mount name, such as vdb. If this parameter is not provided, the default query is disk utilization of vdb.
Sample: [{"Name":"diskname", "Value":"vdb"}]
                     * @param _dimensions Query metrics extension parameter; currently only support TargetDiskUsage.

- TargetDiskUsage
-Supported query dimensions include diskname. The dimension value is the disk mount name, such as vdb. If this parameter is not provided, the default query is disk utilization of vdb.
Sample: [{"Name":"diskname", "Value":"vdb"}]
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * Job ID; see JobId in the job list (https://www.tencentcloud.com/document/product/599/15909?from_cn_redirect=1).
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Name of the job Task. See [job details](https://www.tencentcloud.com/document/product/599/15904?from_cn_redirect=1).
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Serial number of the task instance. For details, see [Task Detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1).
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * Supported metrics; Metrics to be queried for the task currently supported.

-CpuUsage: cpu usage, unit: %
-MemUsage: Memory usage, measurement unit: %
-LanOuttraffic: Private network outbound bandwidth, measurement unit: Bytes/s
-LanIntraffic: Private network inbound bandwidth, unit: Bytes/s
-MaxDiskUsage: Highest disk utilization among all disks. Measurement unit: %
-TargetDiskUsage: Specify disk utilization, unit: %; use in conjunction with the Dimensions parameter.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Query start time of the task instance. If the query start time is not passed in or the incoming time is less than the instance creation time (see task detail (https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for instance creation time), the query time will automatically be adjusted to the instance creation time. The passed-in time format supports only the zero time zone format.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query the termination time of the task instance. If the query end time is not passed in or the passed-in time is larger than the termination time of the task instance (see [task detail](https://www.tencentcloud.com/document/product/599/15905?from_cn_redirect=1) for the termination time of the task instance), and the task instance has already ended, the query end time will be automatically adjusted to the termination time of the task instance. If the task instance has not ended, the query end time will be automatically adjusted to the current time. The input time format supports only the zero time zone format.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Query metrics extension parameter; currently only support TargetDiskUsage.

- TargetDiskUsage
-Supported query dimensions include diskname. The dimension value is the disk mount name, such as vdb. If this parameter is not provided, the default query is disk utilization of vdb.
Sample: [{"Name":"diskname", "Value":"vdb"}]
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_
