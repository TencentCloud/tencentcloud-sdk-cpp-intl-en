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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSSCRAPEJOB_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSSCRAPEJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus scrape task
                */
                class PrometheusScrapeJob : public AbstractModel
                {
                public:
                    PrometheusScrapeJob();
                    ~PrometheusScrapeJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Task name
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
                     * 获取Agent ID
                     * @return AgentId Agent ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID
                     * @param _agentId Agent ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return JobId Task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID
                     * @param _jobId Task ID
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
                     * 获取Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Config Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _config Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSSCRAPEJOB_H_
