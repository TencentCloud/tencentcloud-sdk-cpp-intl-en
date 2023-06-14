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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALNOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALNOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusNotificationItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusGlobalNotification response structure.
                */
                class DescribePrometheusGlobalNotificationResponse : public AbstractModel
                {
                public:
                    DescribePrometheusGlobalNotificationResponse();
                    ~DescribePrometheusGlobalNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Global alert notification channel
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Notification Global alert notification channel
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PrometheusNotificationItem GetNotification() const;

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     * 
                     */
                    bool NotificationHasBeenSet() const;

                private:

                    /**
                     * Global alert notification channel
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrometheusNotificationItem m_notification;
                    bool m_notificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSGLOBALNOTIFICATIONRESPONSE_H_
