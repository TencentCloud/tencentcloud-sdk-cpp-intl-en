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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICEONCALLUSERSINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICEONCALLUSERSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/NoticeSendGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Notification template configuration sending user's message
                */
                class NoticeOnCallUsersInfo : public AbstractModel
                {
                public:
                    NoticeOnCallUsersInfo();
                    ~NoticeOnCallUsersInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Notification template id</p><p>Parameter format: notice-xxxxxxxx</p>
                     * @return NoticeId <p>Notification template id</p><p>Parameter format: notice-xxxxxxxx</p>
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置<p>Notification template id</p><p>Parameter format: notice-xxxxxxxx</p>
                     * @param _noticeId <p>Notification template id</p><p>Parameter format: notice-xxxxxxxx</p>
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取<p>Send group information, corresponding to each configuration in the notification template</p>
                     * @return SendGroups <p>Send group information, corresponding to each configuration in the notification template</p>
                     * 
                     */
                    std::vector<NoticeSendGroup> GetSendGroups() const;

                    /**
                     * 设置<p>Send group information, corresponding to each configuration in the notification template</p>
                     * @param _sendGroups <p>Send group information, corresponding to each configuration in the notification template</p>
                     * 
                     */
                    void SetSendGroups(const std::vector<NoticeSendGroup>& _sendGroups);

                    /**
                     * 判断参数 SendGroups 是否已赋值
                     * @return SendGroups 是否已赋值
                     * 
                     */
                    bool SendGroupsHasBeenSet() const;

                private:

                    /**
                     * <p>Notification template id</p><p>Parameter format: notice-xxxxxxxx</p>
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * <p>Send group information, corresponding to each configuration in the notification template</p>
                     */
                    std::vector<NoticeSendGroup> m_sendGroups;
                    bool m_sendGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICEONCALLUSERSINFO_H_
