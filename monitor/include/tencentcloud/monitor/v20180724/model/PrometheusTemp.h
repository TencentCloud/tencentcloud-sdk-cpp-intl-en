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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusConfigItem.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertPolicyItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Template instance
                */
                class PrometheusTemp : public AbstractModel
                {
                public:
                    PrometheusTemp();
                    ~PrometheusTemp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template name
                     * @return Name Template name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name
                     * @param _name Template name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Template dimension. Valid values:
`instance`
`cluster`
                     * @return Level Template dimension. Valid values:
`instance`
`cluster`
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Template dimension. Valid values:
`instance`
`cluster`
                     * @param _level Template dimension. Valid values:
`instance`
`cluster`
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Describe Template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _describe Template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取This parameter is valid if `Level` is `instance`.
List of recording rules in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordRules This parameter is valid if `Level` is `instance`.
List of recording rules in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRecordRules() const;

                    /**
                     * 设置This parameter is valid if `Level` is `instance`.
List of recording rules in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordRules This parameter is valid if `Level` is `instance`.
List of recording rules in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecordRules(const std::vector<PrometheusConfigItem>& _recordRules);

                    /**
                     * 判断参数 RecordRules 是否已赋值
                     * @return RecordRules 是否已赋值
                     * 
                     */
                    bool RecordRulesHasBeenSet() const;

                    /**
                     * 获取This parameter is valid if `Level` is `cluster`.
List of ServiceMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceMonitors This parameter is valid if `Level` is `cluster`.
List of ServiceMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetServiceMonitors() const;

                    /**
                     * 设置This parameter is valid if `Level` is `cluster`.
List of ServiceMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceMonitors This parameter is valid if `Level` is `cluster`.
List of ServiceMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceMonitors(const std::vector<PrometheusConfigItem>& _serviceMonitors);

                    /**
                     * 判断参数 ServiceMonitors 是否已赋值
                     * @return ServiceMonitors 是否已赋值
                     * 
                     */
                    bool ServiceMonitorsHasBeenSet() const;

                    /**
                     * 获取This parameter is valid if `Level` is `cluster`.
List of PodMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodMonitors This parameter is valid if `Level` is `cluster`.
List of PodMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetPodMonitors() const;

                    /**
                     * 设置This parameter is valid if `Level` is `cluster`.
List of PodMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podMonitors This parameter is valid if `Level` is `cluster`.
List of PodMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodMonitors(const std::vector<PrometheusConfigItem>& _podMonitors);

                    /**
                     * 判断参数 PodMonitors 是否已赋值
                     * @return PodMonitors 是否已赋值
                     * 
                     */
                    bool PodMonitorsHasBeenSet() const;

                    /**
                     * 获取This parameter is valid if `Level` is `cluster`.
List of RawJob rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RawJobs This parameter is valid if `Level` is `cluster`.
List of RawJob rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusConfigItem> GetRawJobs() const;

                    /**
                     * 设置This parameter is valid if `Level` is `cluster`.
List of RawJob rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rawJobs This parameter is valid if `Level` is `cluster`.
List of RawJob rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRawJobs(const std::vector<PrometheusConfigItem>& _rawJobs);

                    /**
                     * 判断参数 RawJobs 是否已赋值
                     * @return RawJobs 是否已赋值
                     * 
                     */
                    bool RawJobsHasBeenSet() const;

                    /**
                     * 获取Template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateId Template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateId Template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Last update time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Last update time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Last update time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The current version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version The current version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置The current version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version The current version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Whether it is the default template provided by the system, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDefault Whether it is the default template provided by the system, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default template provided by the system, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDefault Whether it is the default template provided by the system, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取This parameter is valid if `Level` is `instance`.
List of alert configurations in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlertDetailRules This parameter is valid if `Level` is `instance`.
List of alert configurations in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusAlertPolicyItem> GetAlertDetailRules() const;

                    /**
                     * 设置This parameter is valid if `Level` is `instance`.
List of alert configurations in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alertDetailRules This parameter is valid if `Level` is `instance`.
List of alert configurations in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlertDetailRules(const std::vector<PrometheusAlertPolicyItem>& _alertDetailRules);

                    /**
                     * 判断参数 AlertDetailRules 是否已赋值
                     * @return AlertDetailRules 是否已赋值
                     * 
                     */
                    bool AlertDetailRulesHasBeenSet() const;

                    /**
                     * 获取Number of associated instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetsTotal Number of associated instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTargetsTotal() const;

                    /**
                     * 设置Number of associated instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetsTotal Number of associated instances
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetsTotal(const int64_t& _targetsTotal);

                    /**
                     * 判断参数 TargetsTotal 是否已赋值
                     * @return TargetsTotal 是否已赋值
                     * 
                     */
                    bool TargetsTotalHasBeenSet() const;

                private:

                    /**
                     * Template name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template dimension. Valid values:
`instance`
`cluster`
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Template description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * This parameter is valid if `Level` is `instance`.
List of recording rules in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_recordRules;
                    bool m_recordRulesHasBeenSet;

                    /**
                     * This parameter is valid if `Level` is `cluster`.
List of ServiceMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_serviceMonitors;
                    bool m_serviceMonitorsHasBeenSet;

                    /**
                     * This parameter is valid if `Level` is `cluster`.
List of PodMonitor rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_podMonitors;
                    bool m_podMonitorsHasBeenSet;

                    /**
                     * This parameter is valid if `Level` is `cluster`.
List of RawJob rules in the template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusConfigItem> m_rawJobs;
                    bool m_rawJobsHasBeenSet;

                    /**
                     * Template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Last update time, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The current version, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Whether it is the default template provided by the system, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * This parameter is valid if `Level` is `instance`.
List of alert configurations in the template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusAlertPolicyItem> m_alertDetailRules;
                    bool m_alertDetailRulesHasBeenSet;

                    /**
                     * Number of associated instances
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_targetsTotal;
                    bool m_targetsTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMP_H_
