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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMWAYWEBHOOK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMWAYWEBHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Alarm channel specifies the webhook url configuration for wecom group, dingtalk group, or lark group.
                */
                class AlarmWayWebHook : public AbstractModel
                {
                public:
                    AlarmWayWebHook();
                    ~AlarmWayWebHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the Alarm channel value.
7. wecom group 8. lark group 9. dingtalk group 10. Slack group 11. Teams group.
                     * @return AlarmWay Specifies the Alarm channel value.
7. wecom group 8. lark group 9. dingtalk group 10. Slack group 11. Teams group.
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置Specifies the Alarm channel value.
7. wecom group 8. lark group 9. dingtalk group 10. Slack group 11. Teams group.
                     * @param _alarmWay Specifies the Alarm channel value.
7. wecom group 8. lark group 9. dingtalk group 10. Slack group 11. Teams group.
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取webhook url list of the Alarm group.
                     * @return WebHooks webhook url list of the Alarm group.
                     * 
                     */
                    std::vector<std::string> GetWebHooks() const;

                    /**
                     * 设置webhook url list of the Alarm group.
                     * @param _webHooks webhook url list of the Alarm group.
                     * 
                     */
                    void SetWebHooks(const std::vector<std::string>& _webHooks);

                    /**
                     * 判断参数 WebHooks 是否已赋值
                     * @return WebHooks 是否已赋值
                     * 
                     */
                    bool WebHooksHasBeenSet() const;

                private:

                    /**
                     * Specifies the Alarm channel value.
7. wecom group 8. lark group 9. dingtalk group 10. Slack group 11. Teams group.
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * webhook url list of the Alarm group.
                     */
                    std::vector<std::string> m_webHooks;
                    bool m_webHooksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMWAYWEBHOOK_H_
