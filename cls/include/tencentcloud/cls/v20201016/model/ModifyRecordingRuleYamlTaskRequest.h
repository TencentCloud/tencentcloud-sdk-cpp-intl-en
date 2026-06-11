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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRECORDINGRULEYAMLTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRECORDINGRULEYAMLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyRecordingRuleYamlTask request structure.
                */
                class ModifyRecordingRuleYamlTaskRequest : public AbstractModel
                {
                public:
                    ModifyRecordingRuleYamlTaskRequest();
                    ~ModifyRecordingRuleYamlTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Yaml configuration id</p>
                     * @return YamlID <p>Yaml configuration id</p>
                     * 
                     */
                    std::string GetYamlID() const;

                    /**
                     * 设置<p>Yaml configuration id</p>
                     * @param _yamlID <p>Yaml configuration id</p>
                     * 
                     */
                    void SetYamlID(const std::string& _yamlID);

                    /**
                     * 判断参数 YamlID 是否已赋值
                     * @return YamlID 是否已赋值
                     * 
                     */
                    bool YamlIDHasBeenSet() const;

                    /**
                     * 获取<p>Source metric topic id</p>
                     * @return TopicId <p>Source metric topic id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Source metric topic id</p>
                     * @param _topicId <p>Source metric topic id</p>
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
                     * 获取<p>Target metric topic id</p>
                     * @return DstTopicId <p>Target metric topic id</p>
                     * 
                     */
                    std::string GetDstTopicId() const;

                    /**
                     * 设置<p>Target metric topic id</p>
                     * @param _dstTopicId <p>Target metric topic id</p>
                     * 
                     */
                    void SetDstTopicId(const std::string& _dstTopicId);

                    /**
                     * 判断参数 DstTopicId 是否已赋值
                     * @return DstTopicId 是否已赋值
                     * 
                     */
                    bool DstTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status: 1: Enabled; 2: Disabled</p>
                     * @return EnableFlag <p>Task status: 1: Enabled; 2: Disabled</p>
                     * 
                     */
                    uint64_t GetEnableFlag() const;

                    /**
                     * 设置<p>Task status: 1: Enabled; 2: Disabled</p>
                     * @param _enableFlag <p>Task status: 1: Enabled; 2: Disabled</p>
                     * 
                     */
                    void SetEnableFlag(const uint64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取<p>Schedule start time, Unix timestamp in milliseconds</p>
                     * @return ProcessStartTime <p>Schedule start time, Unix timestamp in milliseconds</p>
                     * 
                     */
                    uint64_t GetProcessStartTime() const;

                    /**
                     * 设置<p>Schedule start time, Unix timestamp in milliseconds</p>
                     * @param _processStartTime <p>Schedule start time, Unix timestamp in milliseconds</p>
                     * 
                     */
                    void SetProcessStartTime(const uint64_t& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * @return ProcessPeriod <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * 
                     */
                    int64_t GetProcessPeriod() const;

                    /**
                     * 设置<p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * @param _processPeriod <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     * 
                     */
                    void SetProcessPeriod(const int64_t& _processPeriod);

                    /**
                     * 判断参数 ProcessPeriod 是否已赋值
                     * @return ProcessPeriod 是否已赋值
                     * 
                     */
                    bool ProcessPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Execution Delay (Seconds)</p>
                     * @return ProcessDelay <p>Execution Delay (Seconds)</p>
                     * 
                     */
                    int64_t GetProcessDelay() const;

                    /**
                     * 设置<p>Execution Delay (Seconds)</p>
                     * @param _processDelay <p>Execution Delay (Seconds)</p>
                     * 
                     */
                    void SetProcessDelay(const int64_t& _processDelay);

                    /**
                     * 判断参数 ProcessDelay 是否已赋值
                     * @return ProcessDelay 是否已赋值
                     * 
                     */
                    bool ProcessDelayHasBeenSet() const;

                    /**
                     * 获取<p>yaml configuration name</p>
                     * @return YamlConfigName <p>yaml configuration name</p>
                     * 
                     */
                    std::string GetYamlConfigName() const;

                    /**
                     * 设置<p>yaml configuration name</p>
                     * @param _yamlConfigName <p>yaml configuration name</p>
                     * 
                     */
                    void SetYamlConfigName(const std::string& _yamlConfigName);

                    /**
                     * 判断参数 YamlConfigName 是否已赋值
                     * @return YamlConfigName 是否已赋值
                     * 
                     */
                    bool YamlConfigNameHasBeenSet() const;

                    /**
                     * 获取<p>yaml configuration content</p>
                     * @return YamlContent <p>yaml configuration content</p>
                     * 
                     */
                    std::string GetYamlContent() const;

                    /**
                     * 设置<p>yaml configuration content</p>
                     * @param _yamlContent <p>yaml configuration content</p>
                     * 
                     */
                    void SetYamlContent(const std::string& _yamlContent);

                    /**
                     * 判断参数 YamlContent 是否已赋值
                     * @return YamlContent 是否已赋值
                     * 
                     */
                    bool YamlContentHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * @return HasServicesLog <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * @param _hasServicesLog <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * <p>Yaml configuration id</p>
                     */
                    std::string m_yamlID;
                    bool m_yamlIDHasBeenSet;

                    /**
                     * <p>Source metric topic id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Target metric topic id</p>
                     */
                    std::string m_dstTopicId;
                    bool m_dstTopicIdHasBeenSet;

                    /**
                     * <p>Task status: 1: Enabled; 2: Disabled</p>
                     */
                    uint64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>Schedule start time, Unix timestamp in milliseconds</p>
                     */
                    uint64_t m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * <p>Scheduling period (minutes). Supported range (0,1440] minutes.</p>
                     */
                    int64_t m_processPeriod;
                    bool m_processPeriodHasBeenSet;

                    /**
                     * <p>Execution Delay (Seconds)</p>
                     */
                    int64_t m_processDelay;
                    bool m_processDelayHasBeenSet;

                    /**
                     * <p>yaml configuration name</p>
                     */
                    std::string m_yamlConfigName;
                    bool m_yamlConfigNameHasBeenSet;

                    /**
                     * <p>yaml configuration content</p>
                     */
                    std::string m_yamlContent;
                    bool m_yamlContentHasBeenSet;

                    /**
                     * <p>Whether to enable service log shipping. Valid values: 1: disable; 2: enable.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRECORDINGRULEYAMLTASKREQUEST_H_
