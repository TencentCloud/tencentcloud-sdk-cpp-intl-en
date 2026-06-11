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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICCOLLECTCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICCOLLECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricSpec.h>
#include <tencentcloud/cls/v20201016/model/Relabeling.h>
#include <tencentcloud/cls/v20201016/model/MetricConfigLabel.h>
#include <tencentcloud/cls/v20201016/model/MetricYamlSpec.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Metric collection configuration.
                */
                class MetricCollectConfig : public AbstractModel
                {
                public:
                    MetricCollectConfig();
                    ~MetricCollectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Collection configuration ID.
                     * @return ConfigId Collection configuration ID.
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Collection configuration ID.
                     * @param _configId Collection configuration ID.
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID.
                     * @return TopicIds Log topic ID.
                     * 
                     */
                    std::vector<std::string> GetTopicIds() const;

                    /**
                     * 设置Log topic ID.
                     * @param _topicIds Log topic ID.
                     * 
                     */
                    void SetTopicIds(const std::vector<std::string>& _topicIds);

                    /**
                     * 判断参数 TopicIds 是否已赋值
                     * @return TopicIds 是否已赋值
                     * 
                     */
                    bool TopicIdsHasBeenSet() const;

                    /**
                     * 获取Collection configuration source. Support: `0`, `1`.
-0: Self-build k8s
- 1:TKE
                     * @return Source Collection configuration source. Support: `0`, `1`.
-0: Self-build k8s
- 1:TKE
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置Collection configuration source. Support: `0`, `1`.
-0: Self-build k8s
- 1:TKE
                     * @param _source Collection configuration source. Support: `0`, `1`.
-0: Self-build k8s
- 1:TKE
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Machine group ID.
                     * @return GroupIds Machine group ID.
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置Machine group ID.
                     * @param _groupIds Machine group ID.
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取Monitoring type. Supported values: `0`, `1`. Cannot be modified.

-0: Basic monitoring
-Custom monitoring
                     * @return Type Monitoring type. Supported values: `0`, `1`. Cannot be modified.

-0: Basic monitoring
-Custom monitoring
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Monitoring type. Supported values: `0`, `1`. Cannot be modified.

-0: Basic monitoring
-Custom monitoring
                     * @param _type Monitoring type. Supported values: `0`, `1`. Cannot be modified.

-0: Basic monitoring
-Custom monitoring
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Collection configuration method. Supports `0` and `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for: `1`
-YAML import method, Type can be `0` or `1`.
                     * @return Flag Collection configuration method. Supports `0` and `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for: `1`
-YAML import method, Type can be `0` or `1`.
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置Collection configuration method. Supports `0` and `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for: `1`
-YAML import method, Type can be `0` or `1`.
                     * @param _flag Collection configuration method. Supports `0` and `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for: `1`
-YAML import method, Type can be `0` or `1`.
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Collection object. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Spec Collection object. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MetricSpec GetSpec() const;

                    /**
                     * 设置Collection object. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _spec Collection object. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpec(const MetricSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Label processing. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricRelabels Label processing. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Relabeling> GetMetricRelabels() const;

                    /**
                     * 设置Label processing. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricRelabels Label processing. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricRelabels(const std::vector<Relabeling>& _metricRelabels);

                    /**
                     * 判断参数 MetricRelabels 是否已赋值
                     * @return MetricRelabels 是否已赋值
                     * 
                     */
                    bool MetricRelabelsHasBeenSet() const;

                    /**
                     * 获取Custom metadata. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricLabel Custom metadata. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MetricConfigLabel GetMetricLabel() const;

                    /**
                     * 设置Custom metadata. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricLabel Custom metadata. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricLabel(const MetricConfigLabel& _metricLabel);

                    /**
                     * 判断参数 MetricLabel 是否已赋值
                     * @return MetricLabel 是否已赋值
                     * 
                     */
                    bool MetricLabelHasBeenSet() const;

                    /**
                     * 获取Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scheme Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheme Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScrapeInterval Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScrapeInterval() const;

                    /**
                     * 设置Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scrapeInterval Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScrapeInterval(const std::string& _scrapeInterval);

                    /**
                     * 判断参数 ScrapeInterval 是否已赋值
                     * @return ScrapeInterval 是否已赋值
                     * 
                     */
                    bool ScrapeIntervalHasBeenSet() const;

                    /**
                     * 获取Collection timeout. This parameter is valid only when Flag=0 && Type=1.
- format:`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScrapeTimeout Collection timeout. This parameter is valid only when Flag=0 && Type=1.
- format:`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScrapeTimeout() const;

                    /**
                     * 设置Collection timeout. This parameter is valid only when Flag=0 && Type=1.
- format:`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scrapeTimeout Collection timeout. This parameter is valid only when Flag=0 && Type=1.
- format:`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScrapeTimeout(const std::string& _scrapeTimeout);

                    /**
                     * 判断参数 ScrapeTimeout 是否已赋值
                     * @return ScrapeTimeout 是否已赋值
                     * 
                     */
                    bool ScrapeTimeoutHasBeenSet() const;

                    /**
                     * 获取How Prometheus handles tag conflicts. When Flag=0 takes effect, `true` and `false` are supported.

- `false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HonorLabels How Prometheus handles tag conflicts. When Flag=0 takes effect, `true` and `false` are supported.

- `false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHonorLabels() const;

                    /**
                     * 设置How Prometheus handles tag conflicts. When Flag=0 takes effect, `true` and `false` are supported.

- `false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _honorLabels How Prometheus handles tag conflicts. When Flag=0 takes effect, `true` and `false` are supported.

- `false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHonorLabels(const bool& _honorLabels);

                    /**
                     * 判断参数 HonorLabels 是否已赋值
                     * @return HonorLabels 是否已赋值
                     * 
                     */
                    bool HonorLabelsHasBeenSet() const;

                    /**
                     * 获取Collection configuration, which is a string in YAML format. It is required when Flag is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return YamlSpec Collection configuration, which is a string in YAML format. It is required when Flag is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MetricYamlSpec GetYamlSpec() const;

                    /**
                     * 设置Collection configuration, which is a string in YAML format. It is required when Flag is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _yamlSpec Collection configuration, which is a string in YAML format. It is required when Flag is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetYamlSpec(const MetricYamlSpec& _yamlSpec);

                    /**
                     * 判断参数 YamlSpec 是否已赋值
                     * @return YamlSpec 是否已赋值
                     * 
                     */
                    bool YamlSpecHasBeenSet() const;

                    /**
                     * 获取Operation status. Valid values: 0: applied; 1: paused.
                     * @return Operate Operation status. Valid values: 0: applied; 1: paused.
                     * 
                     */
                    uint64_t GetOperate() const;

                    /**
                     * 设置Operation status. Valid values: 0: applied; 1: paused.
                     * @param _operate Operation status. Valid values: 0: applied; 1: paused.
                     * 
                     */
                    void SetOperate(const uint64_t& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取Creation time (a second-level timestamp).
                     * @return CreateTime Creation time (a second-level timestamp).
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time (a second-level timestamp).
                     * @param _createTime Creation time (a second-level timestamp).
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update timestamp (second-level).
                     * @return UpdateTime Update timestamp (second-level).
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Update timestamp (second-level).
                     * @param _updateTime Update timestamp (second-level).
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Collection configuration ID.
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Log topic ID.
                     */
                    std::vector<std::string> m_topicIds;
                    bool m_topicIdsHasBeenSet;

                    /**
                     * Collection configuration source. Support: `0`, `1`.
-0: Self-build k8s
- 1:TKE
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Machine group ID.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Monitoring type. Supported values: `0`, `1`. Cannot be modified.

-0: Basic monitoring
-Custom monitoring
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Collection configuration method. Supports `0` and `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for: `1`
-YAML import method, Type can be `0` or `1`.
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Collection object. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MetricSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Label processing. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Relabeling> m_metricRelabels;
                    bool m_metricRelabelsHasBeenSet;

                    /**
                     * Custom metadata. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MetricConfigLabel m_metricLabel;
                    bool m_metricLabelHasBeenSet;

                    /**
                     * Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scrapeInterval;
                    bool m_scrapeIntervalHasBeenSet;

                    /**
                     * Collection timeout. This parameter is valid only when Flag=0 && Type=1.
- format:`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scrapeTimeout;
                    bool m_scrapeTimeoutHasBeenSet;

                    /**
                     * How Prometheus handles tag conflicts. When Flag=0 takes effect, `true` and `false` are supported.

- `false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_honorLabels;
                    bool m_honorLabelsHasBeenSet;

                    /**
                     * Collection configuration, which is a string in YAML format. It is required when Flag is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MetricYamlSpec m_yamlSpec;
                    bool m_yamlSpecHasBeenSet;

                    /**
                     * Operation status. Valid values: 0: applied; 1: paused.
                     */
                    uint64_t m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Creation time (a second-level timestamp).
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update timestamp (second-level).
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICCOLLECTCONFIG_H_
