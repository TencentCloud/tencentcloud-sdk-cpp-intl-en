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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCONFIGITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Targets.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus configuration
                */
                class PrometheusConfigItem : public AbstractModel
                {
                public:
                    PrometheusConfigItem();
                    ~PrometheusConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param Name Name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Configuration content
                     * @return Config Configuration content
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration content
                     * @param Config Configuration content
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取If the configuration comes from a template, this parameter is the template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateId If the configuration comes from a template, this parameter is the template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置If the configuration comes from a template, this parameter is the template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TemplateId If the configuration comes from a template, this parameter is the template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Number of targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Targets Number of targets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Targets GetTargets() const;

                    /**
                     * 设置Number of targets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Targets Number of targets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargets(const Targets& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Configuration content
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * If the configuration comes from a template, this parameter is the template ID, which is used as an output parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Number of targets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Targets m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCONFIGITEM_H_
