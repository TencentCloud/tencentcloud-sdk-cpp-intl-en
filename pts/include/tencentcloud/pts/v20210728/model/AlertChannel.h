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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTCHANNEL_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTCHANNEL_H_

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
                * Alert notification channel
                */
                class AlertChannel : public AbstractModel
                {
                public:
                    AlertChannel();
                    ~AlertChannel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification template ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return NoticeId Notification template ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Notification template ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _noticeId Notification template ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取AMP consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return AMPConsumerId AMP consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetAMPConsumerId() const;

                    /**
                     * 设置AMP consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _aMPConsumerId AMP consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAMPConsumerId(const std::string& _aMPConsumerId);

                    /**
                     * 判断参数 AMPConsumerId 是否已赋值
                     * @return AMPConsumerId 是否已赋值
                     * 
                     */
                    bool AMPConsumerIdHasBeenSet() const;

                private:

                    /**
                     * Notification template ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * AMP consumer ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_aMPConsumerId;
                    bool m_aMPConsumerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTCHANNEL_H_
