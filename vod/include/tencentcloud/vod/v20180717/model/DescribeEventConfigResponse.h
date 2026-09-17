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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTCONFIGRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeEventConfig response structure.
                */
                class DescribeEventConfigResponse : public AbstractModel
                {
                public:
                    DescribeEventConfigResponse();
                    ~DescribeEventConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Mode 
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return NotificationUrl 
                     * 
                     */
                    std::string GetNotificationUrl() const;

                    /**
                     * 判断参数 NotificationUrl 是否已赋值
                     * @return NotificationUrl 是否已赋值
                     * 
                     */
                    bool NotificationUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return UploadMediaCompleteEventSwitch 
                     * 
                     */
                    std::string GetUploadMediaCompleteEventSwitch() const;

                    /**
                     * 判断参数 UploadMediaCompleteEventSwitch 是否已赋值
                     * @return UploadMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool UploadMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeleteMediaCompleteEventSwitch 
                     * 
                     */
                    std::string GetDeleteMediaCompleteEventSwitch() const;

                    /**
                     * 判断参数 DeleteMediaCompleteEventSwitch 是否已赋值
                     * @return DeleteMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool DeleteMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return PersistenceCompleteEventSwitch 
                     * 
                     */
                    std::string GetPersistenceCompleteEventSwitch() const;

                    /**
                     * 判断参数 PersistenceCompleteEventSwitch 是否已赋值
                     * @return PersistenceCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventSwitchHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_persistenceCompleteEventSwitch;
                    bool m_persistenceCompleteEventSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTCONFIGRESPONSE_H_
