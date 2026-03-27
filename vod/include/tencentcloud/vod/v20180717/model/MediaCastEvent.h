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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACASTEVENT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACASTEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Media relay event notification message.
                */
                class MediaCastEvent : public AbstractModel
                {
                public:
                    MediaCastEvent();
                    ~MediaCastEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media relay ID.
                     * @return CastId Media relay ID.
                     * 
                     */
                    std::string GetCastId() const;

                    /**
                     * 设置Media relay ID.
                     * @param _castId Media relay ID.
                     * 
                     */
                    void SetCastId(const std::string& _castId);

                    /**
                     * 判断参数 CastId 是否已赋值
                     * @return CastId 是否已赋值
                     * 
                     */
                    bool CastIdHasBeenSet() const;

                    /**
                     * 获取Relay status. Valid values:
<li>Working: Running;</li>
<li>Scheduled: To be started after the scheduled time arrives;</li>
<li>Stopped: Relay stopped;</li>
<li>Idle: Idle.</li>
                     * @return Status Relay status. Valid values:
<li>Working: Running;</li>
<li>Scheduled: To be started after the scheduled time arrives;</li>
<li>Stopped: Relay stopped;</li>
<li>Idle: Idle.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Relay status. Valid values:
<li>Working: Running;</li>
<li>Scheduled: To be started after the scheduled time arrives;</li>
<li>Stopped: Relay stopped;</li>
<li>Idle: Idle.</li>
                     * @param _status Relay status. Valid values:
<li>Working: Running;</li>
<li>Scheduled: To be started after the scheduled time arrives;</li>
<li>Stopped: Relay stopped;</li>
<li>Idle: Idle.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Media relay ID.
                     */
                    std::string m_castId;
                    bool m_castIdHasBeenSet;

                    /**
                     * Relay status. Valid values:
<li>Working: Running;</li>
<li>Scheduled: To be started after the scheduled time arrives;</li>
<li>Stopped: Relay stopped;</li>
<li>Idle: Idle.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACASTEVENT_H_
