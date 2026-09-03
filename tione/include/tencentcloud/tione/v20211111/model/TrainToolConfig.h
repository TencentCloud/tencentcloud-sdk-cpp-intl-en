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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAINTOOLCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAINTOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 
                */
                class TrainToolConfig : public AbstractModel
                {
                public:
                    TrainToolConfig();
                    ~TrainToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return EnableHangMonitor 
                     * 
                     */
                    bool GetEnableHangMonitor() const;

                    /**
                     * 设置
                     * @param _enableHangMonitor 
                     * 
                     */
                    void SetEnableHangMonitor(const bool& _enableHangMonitor);

                    /**
                     * 判断参数 EnableHangMonitor 是否已赋值
                     * @return EnableHangMonitor 是否已赋值
                     * 
                     */
                    bool EnableHangMonitorHasBeenSet() const;

                    /**
                     * 获取
                     * @return HangMonitorNodes 
                     * 
                     */
                    std::vector<std::string> GetHangMonitorNodes() const;

                    /**
                     * 设置
                     * @param _hangMonitorNodes 
                     * 
                     */
                    void SetHangMonitorNodes(const std::vector<std::string>& _hangMonitorNodes);

                    /**
                     * 判断参数 HangMonitorNodes 是否已赋值
                     * @return HangMonitorNodes 是否已赋值
                     * 
                     */
                    bool HangMonitorNodesHasBeenSet() const;

                    /**
                     * 获取
                     * @return LogHangTimeoutInMinute 
                     * 
                     */
                    uint64_t GetLogHangTimeoutInMinute() const;

                    /**
                     * 设置
                     * @param _logHangTimeoutInMinute 
                     * 
                     */
                    void SetLogHangTimeoutInMinute(const uint64_t& _logHangTimeoutInMinute);

                    /**
                     * 判断参数 LogHangTimeoutInMinute 是否已赋值
                     * @return LogHangTimeoutInMinute 是否已赋值
                     * 
                     */
                    bool LogHangTimeoutInMinuteHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    bool m_enableHangMonitor;
                    bool m_enableHangMonitorHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_hangMonitorNodes;
                    bool m_hangMonitorNodesHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_logHangTimeoutInMinute;
                    bool m_logHangTimeoutInMinuteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAINTOOLCONFIG_H_
