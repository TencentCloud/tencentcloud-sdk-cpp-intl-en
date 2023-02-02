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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSSCRAPEJOBREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSSCRAPEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdatePrometheusScrapeJob request structure.
                */
                class UpdatePrometheusScrapeJobRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusScrapeJobRequest();
                    ~UpdatePrometheusScrapeJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TMP instance ID, such as “prom-abcd1234”.
                     * @return InstanceId TMP instance ID, such as “prom-abcd1234”.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TMP instance ID, such as “prom-abcd1234”.
                     * @param InstanceId TMP instance ID, such as “prom-abcd1234”.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Agent ID such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console
                     * @return AgentId Agent ID such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console
                     * @param AgentId Agent ID such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Scrape task ID such as “job-abcd1234”. You can go to the **Agent Management** page and obtain the ID in the pop-up **Create Scrape Task** window.
                     * @return JobId Scrape task ID such as “job-abcd1234”. You can go to the **Agent Management** page and obtain the ID in the pop-up **Create Scrape Task** window.
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Scrape task ID such as “job-abcd1234”. You can go to the **Agent Management** page and obtain the ID in the pop-up **Create Scrape Task** window.
                     * @param JobId Scrape task ID such as “job-abcd1234”. You can go to the **Agent Management** page and obtain the ID in the pop-up **Create Scrape Task** window.
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Scrape task ID in the format of “job_name:xx”
                     * @return Config Scrape task ID in the format of “job_name:xx”
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Scrape task ID in the format of “job_name:xx”
                     * @param Config Scrape task ID in the format of “job_name:xx”
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * TMP instance ID, such as “prom-abcd1234”.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent ID such as “agent-abcd1234”, which can be obtained on the **Agent Management** page in the console
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Scrape task ID such as “job-abcd1234”. You can go to the **Agent Management** page and obtain the ID in the pop-up **Create Scrape Task** window.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Scrape task ID in the format of “job_name:xx”
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSSCRAPEJOBREQUEST_H_
