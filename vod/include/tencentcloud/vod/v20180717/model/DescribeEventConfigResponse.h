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
                     * 获取Method of receiving event notifications. "PUSH" is [normal callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E6.99.AE.E9.80.9A.E5.9B.9E.E8.B0.83), "PULL" is [reliable callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83).
                     * @return Mode Method of receiving event notifications. "PUSH" is [normal callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E6.99.AE.E9.80.9A.E5.9B.9E.E8.B0.83), "PULL" is [reliable callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83).
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
                     * 获取Use the [normal callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E6.99.AE.E9.80.9A.E5.9B.9E.E8.B0.83) mode for domain names or IP addresses to receive V3 version event notifications.
                     * @return NotificationUrl Use the [normal callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E6.99.AE.E9.80.9A.E5.9B.9E.E8.B0.83) mode for domain names or IP addresses to receive V3 version event notifications.
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
                     * 获取Whether to receive [video upload complete](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) event notification. "OFF" means the event notification is ignored, and "ON" means to receive event notifications.
                     * @return UploadMediaCompleteEventSwitch Whether to receive [video upload complete](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) event notification. "OFF" means the event notification is ignored, and "ON" means to receive event notifications.
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
                     * 获取Whether to receive [video deletion completion](https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1) event notification. "OFF" means the event notification is ignored, and "ON" means to receive event notifications.
                     * @return DeleteMediaCompleteEventSwitch Whether to receive [video deletion completion](https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1) event notification. "OFF" means the event notification is ignored, and "ON" means to receive event notifications.
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
                     * 获取Whether to receive event notifications for clip solidification completion. "OFF" means the event notification is ignored, "ON" means to receive event notifications.
                     * @return PersistenceCompleteEventSwitch Whether to receive event notifications for clip solidification completion. "OFF" means the event notification is ignored, "ON" means to receive event notifications.
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
                     * Method of receiving event notifications. "PUSH" is [normal callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E6.99.AE.E9.80.9A.E5.9B.9E.E8.B0.83), "PULL" is [reliable callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E5.8F.AF.E9.9D.A0.E5.9B.9E.E8.B0.83).
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Use the [normal callback](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1#.E6.99.AE.E9.80.9A.E5.9B.9E.E8.B0.83) mode for domain names or IP addresses to receive V3 version event notifications.
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * Whether to receive [video upload complete](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) event notification. "OFF" means the event notification is ignored, and "ON" means to receive event notifications.
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * Whether to receive [video deletion completion](https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1) event notification. "OFF" means the event notification is ignored, and "ON" means to receive event notifications.
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * Whether to receive event notifications for clip solidification completion. "OFF" means the event notification is ignored, "ON" means to receive event notifications.
                     */
                    std::string m_persistenceCompleteEventSwitch;
                    bool m_persistenceCompleteEventSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEEVENTCONFIGRESPONSE_H_
