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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INSTANCELOG_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INSTANCELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES cluster log details
                */
                class InstanceLog : public AbstractModel
                {
                public:
                    InstanceLog();
                    ~InstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log time
                     * @return Time Log time
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Log time
                     * @param _time Log time
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Log level
                     * @return Level Log level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Log level
                     * @param _level Log level
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
                     * 获取Cluster node IP
                     * @return Ip Cluster node IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Cluster node IP
                     * @param _ip Cluster node IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Log content
                     * @return Message Log content
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Log content
                     * @param _message Log content
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Log time
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Log level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Cluster node IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Log content
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCELOG_H_
