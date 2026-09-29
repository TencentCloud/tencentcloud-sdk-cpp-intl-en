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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSINSTANCEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSINSTANCEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyPrometheusInstanceAttributes request structure.
                */
                class ModifyPrometheusInstanceAttributesRequest : public AbstractModel
                {
                public:
                    ModifyPrometheusInstanceAttributesRequest();
                    ~ModifyPrometheusInstanceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Data retention period (in days). The limit value is one of 15, 30, 45, 90, 180, 365, 730</p>
                     * @return DataRetentionTime <p>Data retention period (in days). The limit value is one of 15, 30, 45, 90, 180, 365, 730</p>
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置<p>Data retention period (in days). The limit value is one of 15, 30, 45, 90, 180, 365, 730</p>
                     * @param _dataRetentionTime <p>Data retention period (in days). The limit value is one of 15, 30, 45, 90, 180, 365, 730</p>
                     * 
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     * 
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取<p>Flag for special attributes of a prom instance</p><p>Archive storage duration (days):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * @return InstanceAttributes <p>Flag for special attributes of a prom instance</p><p>Archive storage duration (days):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetInstanceAttributes() const;

                    /**
                     * 设置<p>Flag for special attributes of a prom instance</p><p>Archive storage duration (days):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * @param _instanceAttributes <p>Flag for special attributes of a prom instance</p><p>Archive storage duration (days):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * 
                     */
                    void SetInstanceAttributes(const std::vector<PrometheusRuleKV>& _instanceAttributes);

                    /**
                     * 判断参数 InstanceAttributes 是否已赋值
                     * @return InstanceAttributes 是否已赋值
                     * 
                     */
                    bool InstanceAttributesHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Data retention period (in days). The limit value is one of 15, 30, 45, 90, 180, 365, 730</p>
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * <p>Flag for special attributes of a prom instance</p><p>Archive storage duration (days):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     */
                    std::vector<PrometheusRuleKV> m_instanceAttributes;
                    bool m_instanceAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSINSTANCEATTRIBUTESREQUEST_H_
