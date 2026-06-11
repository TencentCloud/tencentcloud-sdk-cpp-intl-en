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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateMetricConfig request structure.
                */
                class CreateMetricConfigRequest : public AbstractModel
                {
                public:
                    CreateMetricConfigRequest();
                    ~CreateMetricConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Metric log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * @return TopicId Metric log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Metric log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * @param _topicId Metric log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

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
                     * 获取Collection configuration method. Supports `0`, `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for `1`.
-YAML import method. Type can be `0` or `1`.
                     * @return Flag Collection configuration method. Supports `0`, `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for `1`.
-YAML import method. Type can be `0` or `1`.
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置Collection configuration method. Supports `0`, `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for `1`.
-YAML import method. Type can be `0` or `1`.
                     * @param _flag Collection configuration method. Supports `0`, `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for `1`.
-YAML import method. Type can be `0` or `1`.
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
                     * @return Name Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
                     * @param _name Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
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
                     * @return Spec Collection object. This parameter is valid only when Flag is 0.
                     * 
                     */
                    MetricSpec GetSpec() const;

                    /**
                     * 设置Collection object. This parameter is valid only when Flag is 0.
                     * @param _spec Collection object. This parameter is valid only when Flag is 0.
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
                     * @return MetricRelabels Label processing. This parameter is valid only when Flag is 0.
                     * 
                     */
                    std::vector<Relabeling> GetMetricRelabels() const;

                    /**
                     * 设置Label processing. This parameter is valid only when Flag is 0.
                     * @param _metricRelabels Label processing. This parameter is valid only when Flag is 0.
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
                     * @return MetricLabel Custom metadata. This parameter is valid only when Flag is 0.
                     * 
                     */
                    MetricConfigLabel GetMetricLabel() const;

                    /**
                     * 设置Custom metadata. This parameter is valid only when Flag is 0.
                     * @param _metricLabel Custom metadata. This parameter is valid only when Flag is 0.
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
                     * @return Scheme Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
                     * @param _scheme Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
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
-Default: 60s
                     * @return ScrapeInterval Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 60s
                     * 
                     */
                    std::string GetScrapeInterval() const;

                    /**
                     * 设置Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 60s
                     * @param _scrapeInterval Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 60s
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
                     * 获取Collection timeout. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 30s
                     * @return ScrapeTimeout Collection timeout. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 30s
                     * 
                     */
                    std::string GetScrapeTimeout() const;

                    /**
                     * 设置Collection timeout. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 30s
                     * @param _scrapeTimeout Collection timeout. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 30s
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
                     * 获取How to handle tag conflicts. This parameter is valid only when Flag=0 and supports `true` and `false`.
-`false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
                     * @return HonorLabels How to handle tag conflicts. This parameter is valid only when Flag=0 and supports `true` and `false`.
-`false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
                     * 
                     */
                    bool GetHonorLabels() const;

                    /**
                     * 设置How to handle tag conflicts. This parameter is valid only when Flag=0 and supports `true` and `false`.
-`false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
                     * @param _honorLabels How to handle tag conflicts. This parameter is valid only when Flag=0 and supports `true` and `false`.
-`false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
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
                     * @return YamlSpec Collection configuration, which is a string in YAML format. It is required when Flag is 1.
                     * 
                     */
                    MetricYamlSpec GetYamlSpec() const;

                    /**
                     * 设置Collection configuration, which is a string in YAML format. It is required when Flag is 1.
                     * @param _yamlSpec Collection configuration, which is a string in YAML format. It is required when Flag is 1.
                     * 
                     */
                    void SetYamlSpec(const MetricYamlSpec& _yamlSpec);

                    /**
                     * 判断参数 YamlSpec 是否已赋值
                     * @return YamlSpec 是否已赋值
                     * 
                     */
                    bool YamlSpecHasBeenSet() const;

                private:

                    /**
                     * Metric log topic id.
- Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1). Note that BizType 0: log topic (default value), 1: metric topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

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
                     * Collection configuration method. Supports `0`, `1`. Cannot be modified.
-0: Ordinary setting method. The Type field is only for `1`.
-YAML import method. Type can be `0` or `1`.
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Name: Length not exceeding 253 characters, check format `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Collection object. This parameter is valid only when Flag is 0.
                     */
                    MetricSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Label processing. This parameter is valid only when Flag is 0.
                     */
                    std::vector<Relabeling> m_metricRelabels;
                    bool m_metricRelabelsHasBeenSet;

                    /**
                     * Custom metadata. This parameter is valid only when Flag is 0.
                     */
                    MetricConfigLabel m_metricLabel;
                    bool m_metricLabelHasBeenSet;

                    /**
                     * Communication protocol. Valid values: HTTP and HTTPS. This parameter is valid only when Flag is 0.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Collection frequency. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 60s
                     */
                    std::string m_scrapeInterval;
                    bool m_scrapeIntervalHasBeenSet;

                    /**
                     * Collection timeout. This parameter is valid only when Flag is 0.
-Check format: `^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
-Default: 30s
                     */
                    std::string m_scrapeTimeout;
                    bool m_scrapeTimeoutHasBeenSet;

                    /**
                     * How to handle tag conflicts. This parameter is valid only when Flag=0 and supports `true` and `false`.
-`false`: Rename conflicting tags in configuration data
-`true`: Ignore server-side tag conflicts
                     */
                    bool m_honorLabels;
                    bool m_honorLabelsHasBeenSet;

                    /**
                     * Collection configuration, which is a string in YAML format. It is required when Flag is 1.
                     */
                    MetricYamlSpec m_yamlSpec;
                    bool m_yamlSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGREQUEST_H_
