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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_

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
                * ModifyEventConfig request structure.
                */
                class ModifyEventConfigRequest : public AbstractModel
                {
                public:
                    ModifyEventConfigRequest();
                    ~ModifyEventConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取How to receive event notifications. 
<li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948);</li>
<li>PULL: [Reliable notification based on message queue ](https://www.tencentcloud.com/document/product/266/33948). </li>
                     * @return Mode How to receive event notifications. 
<li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948);</li>
<li>PULL: [Reliable notification based on message queue ](https://www.tencentcloud.com/document/product/266/33948). </li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置How to receive event notifications. 
<li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948);</li>
<li>PULL: [Reliable notification based on message queue ](https://www.tencentcloud.com/document/product/266/33948). </li>
                     * @param _mode How to receive event notifications. 
<li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948);</li>
<li>PULL: [Reliable notification based on message queue ](https://www.tencentcloud.com/document/product/266/33948). </li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The address used to receive 3.0 format callbacks when using the [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948) reception method. 
Note: If the NotificationUrl parameter is provided and the value is an empty string, the 3.0 format callback address will be cleared.
                     * @return NotificationUrl The address used to receive 3.0 format callbacks when using the [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948) reception method. 
Note: If the NotificationUrl parameter is provided and the value is an empty string, the 3.0 format callback address will be cleared.
                     * 
                     */
                    std::string GetNotificationUrl() const;

                    /**
                     * 设置The address used to receive 3.0 format callbacks when using the [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948) reception method. 
Note: If the NotificationUrl parameter is provided and the value is an empty string, the 3.0 format callback address will be cleared.
                     * @param _notificationUrl The address used to receive 3.0 format callbacks when using the [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948) reception method. 
Note: If the NotificationUrl parameter is provided and the value is an empty string, the 3.0 format callback address will be cleared.
                     * 
                     */
                    void SetNotificationUrl(const std::string& _notificationUrl);

                    /**
                     * 判断参数 NotificationUrl 是否已赋值
                     * @return NotificationUrl 是否已赋值
                     * 
                     */
                    bool NotificationUrlHasBeenSet() const;

                    /**
                     * 获取Whether to receive the [Video Upload Completed](https://www.tencentcloud.com/document/product/266/33950) event notification. The default "OFF" is to ignore the event notification, and "ON" is to receive the event notification. 
                     * @return UploadMediaCompleteEventSwitch Whether to receive the [Video Upload Completed](https://www.tencentcloud.com/document/product/266/33950) event notification. The default "OFF" is to ignore the event notification, and "ON" is to receive the event notification. 
                     * 
                     */
                    std::string GetUploadMediaCompleteEventSwitch() const;

                    /**
                     * 设置Whether to receive the [Video Upload Completed](https://www.tencentcloud.com/document/product/266/33950) event notification. The default "OFF" is to ignore the event notification, and "ON" is to receive the event notification. 
                     * @param _uploadMediaCompleteEventSwitch Whether to receive the [Video Upload Completed](https://www.tencentcloud.com/document/product/266/33950) event notification. The default "OFF" is to ignore the event notification, and "ON" is to receive the event notification. 
                     * 
                     */
                    void SetUploadMediaCompleteEventSwitch(const std::string& _uploadMediaCompleteEventSwitch);

                    /**
                     * 判断参数 UploadMediaCompleteEventSwitch 是否已赋值
                     * @return UploadMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool UploadMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to receive [Video deletion completed](https://www.tencentcloud.com/document/product/266/33952) event notification, the default "OFF" means to ignore the event notification, "ON" means to receive the event notification .
                     * @return DeleteMediaCompleteEventSwitch Whether to receive [Video deletion completed](https://www.tencentcloud.com/document/product/266/33952) event notification, the default "OFF" means to ignore the event notification, "ON" means to receive the event notification .
                     * 
                     */
                    std::string GetDeleteMediaCompleteEventSwitch() const;

                    /**
                     * 设置Whether to receive [Video deletion completed](https://www.tencentcloud.com/document/product/266/33952) event notification, the default "OFF" means to ignore the event notification, "ON" means to receive the event notification .
                     * @param _deleteMediaCompleteEventSwitch Whether to receive [Video deletion completed](https://www.tencentcloud.com/document/product/266/33952) event notification, the default "OFF" means to ignore the event notification, "ON" means to receive the event notification .
                     * 
                     */
                    void SetDeleteMediaCompleteEventSwitch(const std::string& _deleteMediaCompleteEventSwitch);

                    /**
                     * 判断参数 DeleteMediaCompleteEventSwitch 是否已赋值
                     * @return DeleteMediaCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool DeleteMediaCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * @return SubAppId VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * @param _subAppId VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * How to receive event notifications. 
<li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948);</li>
<li>PULL: [Reliable notification based on message queue ](https://www.tencentcloud.com/document/product/266/33948). </li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The address used to receive 3.0 format callbacks when using the [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33948) reception method. 
Note: If the NotificationUrl parameter is provided and the value is an empty string, the 3.0 format callback address will be cleared.
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * Whether to receive the [Video Upload Completed](https://www.tencentcloud.com/document/product/266/33950) event notification. The default "OFF" is to ignore the event notification, and "ON" is to receive the event notification. 
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * Whether to receive [Video deletion completed](https://www.tencentcloud.com/document/product/266/33952) event notification, the default "OFF" means to ignore the event notification, "ON" means to receive the event notification .
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
