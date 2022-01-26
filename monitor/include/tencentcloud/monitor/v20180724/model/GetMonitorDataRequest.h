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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Instance.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * GetMonitorData request structure.
                */
                class GetMonitorDataRequest : public AbstractModel
                {
                public:
                    GetMonitorDataRequest();
                    ~GetMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Namespace, such as QCE/CVM. For more information on the namespaces of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1)
                     * @return Namespace Namespace, such as QCE/CVM. For more information on the namespaces of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1)
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace, such as QCE/CVM. For more information on the namespaces of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1)
                     * @param Namespace Namespace, such as QCE/CVM. For more information on the namespaces of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1)
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Metric name, such as `CPUUsage`. Only one monitoring metric can be pulled at a time. For more information on the metrics of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The corresponding metric name is `MetricName`.
                     * @return MetricName Metric name, such as `CPUUsage`. Only one monitoring metric can be pulled at a time. For more information on the metrics of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The corresponding metric name is `MetricName`.
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name, such as `CPUUsage`. Only one monitoring metric can be pulled at a time. For more information on the metrics of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The corresponding metric name is `MetricName`.
                     * @param MetricName Metric name, such as `CPUUsage`. Only one monitoring metric can be pulled at a time. For more information on the metrics of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The corresponding metric name is `MetricName`.
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取The dimension combination for instance objects, which is in the form of a set of key-value pairs. The dimension fields for instances of different Tencent Cloud services are completely different. For example, the field is [{"Name":"InstanceId","Value":"ins-j0hk02zo"}] for CVM instances, [{"Name":"instanceId","Value":"ckafka-l49k54dd"}] for CKafka instances, and [{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}] for COS instances. For more information on the dimensions of various Tencent Cloud services, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). In each document, the dimension column displays a dimension combination’s key, which has a corresponding value. A single request can get the data of up to 10 instances.
                     * @return Instances The dimension combination for instance objects, which is in the form of a set of key-value pairs. The dimension fields for instances of different Tencent Cloud services are completely different. For example, the field is [{"Name":"InstanceId","Value":"ins-j0hk02zo"}] for CVM instances, [{"Name":"instanceId","Value":"ckafka-l49k54dd"}] for CKafka instances, and [{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}] for COS instances. For more information on the dimensions of various Tencent Cloud services, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). In each document, the dimension column displays a dimension combination’s key, which has a corresponding value. A single request can get the data of up to 10 instances.
                     */
                    std::vector<Instance> GetInstances() const;

                    /**
                     * 设置The dimension combination for instance objects, which is in the form of a set of key-value pairs. The dimension fields for instances of different Tencent Cloud services are completely different. For example, the field is [{"Name":"InstanceId","Value":"ins-j0hk02zo"}] for CVM instances, [{"Name":"instanceId","Value":"ckafka-l49k54dd"}] for CKafka instances, and [{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}] for COS instances. For more information on the dimensions of various Tencent Cloud services, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). In each document, the dimension column displays a dimension combination’s key, which has a corresponding value. A single request can get the data of up to 10 instances.
                     * @param Instances The dimension combination for instance objects, which is in the form of a set of key-value pairs. The dimension fields for instances of different Tencent Cloud services are completely different. For example, the field is [{"Name":"InstanceId","Value":"ins-j0hk02zo"}] for CVM instances, [{"Name":"instanceId","Value":"ckafka-l49k54dd"}] for CKafka instances, and [{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}] for COS instances. For more information on the dimensions of various Tencent Cloud services, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). In each document, the dimension column displays a dimension combination’s key, which has a corresponding value. A single request can get the data of up to 10 instances.
                     */
                    void SetInstances(const std::vector<Instance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取Monitoring statistical period in seconds, such as 60. Default value: 300. The statistical period varies by metric. For more information on the statistical periods supported by each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The values in the statistical period column are the supported statistical periods. A single request can get up to 1,440 data points.
                     * @return Period Monitoring statistical period in seconds, such as 60. Default value: 300. The statistical period varies by metric. For more information on the statistical periods supported by each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The values in the statistical period column are the supported statistical periods. A single request can get up to 1,440 data points.
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Monitoring statistical period in seconds, such as 60. Default value: 300. The statistical period varies by metric. For more information on the statistical periods supported by each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The values in the statistical period column are the supported statistical periods. A single request can get up to 1,440 data points.
                     * @param Period Monitoring statistical period in seconds, such as 60. Default value: 300. The statistical period varies by metric. For more information on the statistical periods supported by each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The values in the statistical period column are the supported statistical periods. A single request can get up to 1,440 data points.
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time such as 2018-09-22T19:51:23+08:00
                     * @return StartTime Start time such as 2018-09-22T19:51:23+08:00
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time such as 2018-09-22T19:51:23+08:00
                     * @param StartTime Start time such as 2018-09-22T19:51:23+08:00
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, which is the current time by default, such as 2018-09-22T20:51:23+08:00. `EndTime` cannot be earlier than `StartTime`
                     * @return EndTime End time, which is the current time by default, such as 2018-09-22T20:51:23+08:00. `EndTime` cannot be earlier than `StartTime`
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, which is the current time by default, such as 2018-09-22T20:51:23+08:00. `EndTime` cannot be earlier than `StartTime`
                     * @param EndTime End time, which is the current time by default, such as 2018-09-22T20:51:23+08:00. `EndTime` cannot be earlier than `StartTime`
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Namespace, such as QCE/CVM. For more information on the namespaces of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1)
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric name, such as `CPUUsage`. Only one monitoring metric can be pulled at a time. For more information on the metrics of each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The corresponding metric name is `MetricName`.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * The dimension combination for instance objects, which is in the form of a set of key-value pairs. The dimension fields for instances of different Tencent Cloud services are completely different. For example, the field is [{"Name":"InstanceId","Value":"ins-j0hk02zo"}] for CVM instances, [{"Name":"instanceId","Value":"ckafka-l49k54dd"}] for CKafka instances, and [{"Name":"appid","Value":"1258344699"},{"Name":"bucket","Value":"rig-1258344699"}] for COS instances. For more information on the dimensions of various Tencent Cloud services, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). In each document, the dimension column displays a dimension combination’s key, which has a corresponding value. A single request can get the data of up to 10 instances.
                     */
                    std::vector<Instance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * Monitoring statistical period in seconds, such as 60. Default value: 300. The statistical period varies by metric. For more information on the statistical periods supported by each Tencent Cloud service, please see [Tencent Cloud Service Metrics](https://intl.cloud.tencent.com/document/product/248/6140?from_cn_redirect=1). The values in the statistical period column are the supported statistical periods. A single request can get up to 1,440 data points.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time such as 2018-09-22T19:51:23+08:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, which is the current time by default, such as 2018-09-22T20:51:23+08:00. `EndTime` cannot be earlier than `StartTime`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETMONITORDATAREQUEST_H_
