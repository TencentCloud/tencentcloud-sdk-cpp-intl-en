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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTINEMAINTENANCETASKREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTINEMAINTENANCETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyRoutineMaintenanceTask request structure.
                */
                class ModifyRoutineMaintenanceTaskRequest : public AbstractModel
                {
                public:
                    ModifyRoutineMaintenanceTaskRequest();
                    ~ModifyRoutineMaintenanceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ckafka cluster instance id. can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId Specifies the ckafka cluster instance id. can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the ckafka cluster instance id. can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId Specifies the ckafka cluster instance id. can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
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
                     * 获取Automated operation and maintenance category. valid values: QUOTA, ANALYSIS, RE_BALANCE, ELASTIC_BANDWIDTH.
                     * @return MaintenanceType Automated operation and maintenance category. valid values: QUOTA, ANALYSIS, RE_BALANCE, ELASTIC_BANDWIDTH.
                     * 
                     */
                    std::string GetMaintenanceType() const;

                    /**
                     * 设置Automated operation and maintenance category. valid values: QUOTA, ANALYSIS, RE_BALANCE, ELASTIC_BANDWIDTH.
                     * @param _maintenanceType Automated operation and maintenance category. valid values: QUOTA, ANALYSIS, RE_BALANCE, ELASTIC_BANDWIDTH.
                     * 
                     */
                    void SetMaintenanceType(const std::string& _maintenanceType);

                    /**
                     * 判断参数 MaintenanceType 是否已赋值
                     * @return MaintenanceType 是否已赋值
                     * 
                     */
                    bool MaintenanceTypeHasBeenSet() const;

                    /**
                     * 获取INSTANCE_STORAGE_CAPACITY (automatic disk scale-out)/MESSAGE_RETENTION_PERIOD (dynamic MESSAGE RETENTION policy).
                     * @return MaintenanceSubtype INSTANCE_STORAGE_CAPACITY (automatic disk scale-out)/MESSAGE_RETENTION_PERIOD (dynamic MESSAGE RETENTION policy).
                     * 
                     */
                    std::string GetMaintenanceSubtype() const;

                    /**
                     * 设置INSTANCE_STORAGE_CAPACITY (automatic disk scale-out)/MESSAGE_RETENTION_PERIOD (dynamic MESSAGE RETENTION policy).
                     * @param _maintenanceSubtype INSTANCE_STORAGE_CAPACITY (automatic disk scale-out)/MESSAGE_RETENTION_PERIOD (dynamic MESSAGE RETENTION policy).
                     * 
                     */
                    void SetMaintenanceSubtype(const std::string& _maintenanceSubtype);

                    /**
                     * 判断参数 MaintenanceSubtype 是否已赋值
                     * @return MaintenanceSubtype 是否已赋值
                     * 
                     */
                    bool MaintenanceSubtypeHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
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
                     * 获取Task trigger threshold.
                     * @return ConfigureThreshold Task trigger threshold.
                     * 
                     */
                    int64_t GetConfigureThreshold() const;

                    /**
                     * 设置Task trigger threshold.
                     * @param _configureThreshold Task trigger threshold.
                     * 
                     */
                    void SetConfigureThreshold(const int64_t& _configureThreshold);

                    /**
                     * 判断参数 ConfigureThreshold 是否已赋值
                     * @return ConfigureThreshold 是否已赋值
                     * 
                     */
                    bool ConfigureThresholdHasBeenSet() const;

                    /**
                     * 获取Specifies the step length for task adjustment.
                     * @return ConfigureStepSize Specifies the step length for task adjustment.
                     * 
                     */
                    int64_t GetConfigureStepSize() const;

                    /**
                     * 设置Specifies the step length for task adjustment.
                     * @param _configureStepSize Specifies the step length for task adjustment.
                     * 
                     */
                    void SetConfigureStepSize(const int64_t& _configureStepSize);

                    /**
                     * 判断参数 ConfigureStepSize 是否已赋值
                     * @return ConfigureStepSize 是否已赋值
                     * 
                     */
                    bool ConfigureStepSizeHasBeenSet() const;

                    /**
                     * 获取Task adjustment upper limit.
                     * @return ConfigureLimit Task adjustment upper limit.
                     * 
                     */
                    int64_t GetConfigureLimit() const;

                    /**
                     * 设置Task adjustment upper limit.
                     * @param _configureLimit Task adjustment upper limit.
                     * 
                     */
                    void SetConfigureLimit(const int64_t& _configureLimit);

                    /**
                     * 判断参数 ConfigureLimit 是否已赋值
                     * @return ConfigureLimit 是否已赋值
                     * 
                     */
                    bool ConfigureLimitHasBeenSet() const;

                    /**
                     * 获取Specifies the expected trigger time of the task, storing the offset in seconds from 0 AM of the current day.
                     * @return PlannedTime Specifies the expected trigger time of the task, storing the offset in seconds from 0 AM of the current day.
                     * 
                     */
                    int64_t GetPlannedTime() const;

                    /**
                     * 设置Specifies the expected trigger time of the task, storing the offset in seconds from 0 AM of the current day.
                     * @param _plannedTime Specifies the expected trigger time of the task, storing the offset in seconds from 0 AM of the current day.
                     * 
                     */
                    void SetPlannedTime(const int64_t& _plannedTime);

                    /**
                     * 判断参数 PlannedTime 是否已赋值
                     * @return PlannedTime 是否已赋值
                     * 
                     */
                    bool PlannedTimeHasBeenSet() const;

                    /**
                     * 获取Additional task information.
                     * @return ExtraConfig Additional task information.
                     * 
                     */
                    std::string GetExtraConfig() const;

                    /**
                     * 设置Additional task information.
                     * @param _extraConfig Additional task information.
                     * 
                     */
                    void SetExtraConfig(const std::string& _extraConfig);

                    /**
                     * 判断参数 ExtraConfig 是否已赋值
                     * @return ExtraConfig 是否已赋值
                     * 
                     */
                    bool ExtraConfigHasBeenSet() const;

                    /**
                     * 获取Task status. 0: enabled, 1: disabled.
                     * @return Status Task status. 0: enabled, 1: disabled.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 0: enabled, 1: disabled.
                     * @param _status Task status. 0: enabled, 1: disabled.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies the day of the week.
                     * @return Week Specifies the day of the week.
                     * 
                     */
                    std::string GetWeek() const;

                    /**
                     * 设置Specifies the day of the week.
                     * @param _week Specifies the day of the week.
                     * 
                     */
                    void SetWeek(const std::string& _week);

                    /**
                     * 判断参数 Week 是否已赋值
                     * @return Week 是否已赋值
                     * 
                     */
                    bool WeekHasBeenSet() const;

                private:

                    /**
                     * Specifies the ckafka cluster instance id. can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Automated operation and maintenance category. valid values: QUOTA, ANALYSIS, RE_BALANCE, ELASTIC_BANDWIDTH.
                     */
                    std::string m_maintenanceType;
                    bool m_maintenanceTypeHasBeenSet;

                    /**
                     * INSTANCE_STORAGE_CAPACITY (automatic disk scale-out)/MESSAGE_RETENTION_PERIOD (dynamic MESSAGE RETENTION policy).
                     */
                    std::string m_maintenanceSubtype;
                    bool m_maintenanceSubtypeHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Task trigger threshold.
                     */
                    int64_t m_configureThreshold;
                    bool m_configureThresholdHasBeenSet;

                    /**
                     * Specifies the step length for task adjustment.
                     */
                    int64_t m_configureStepSize;
                    bool m_configureStepSizeHasBeenSet;

                    /**
                     * Task adjustment upper limit.
                     */
                    int64_t m_configureLimit;
                    bool m_configureLimitHasBeenSet;

                    /**
                     * Specifies the expected trigger time of the task, storing the offset in seconds from 0 AM of the current day.
                     */
                    int64_t m_plannedTime;
                    bool m_plannedTimeHasBeenSet;

                    /**
                     * Additional task information.
                     */
                    std::string m_extraConfig;
                    bool m_extraConfigHasBeenSet;

                    /**
                     * Task status. 0: enabled, 1: disabled.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the day of the week.
                     */
                    std::string m_week;
                    bool m_weekHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTINEMAINTENANCETASKREQUEST_H_
