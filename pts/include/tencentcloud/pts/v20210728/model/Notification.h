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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_NOTIFICATION_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_NOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Message notification before and after job.
                */
                class Notification : public AbstractModel
                {
                public:
                    Notification();
                    ~Notification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event.
                     * @return Events Event.
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置Event.
                     * @param _events Event.
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取Webhook URL.
                     * @return URL Webhook URL.
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Webhook URL.
                     * @param _uRL Webhook URL.
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                private:

                    /**
                     * Event.
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * Webhook URL.
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_NOTIFICATION_H_
