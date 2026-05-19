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
                     * 获取<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b></p>
                     * @return SubAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b></p>
                     * @param _subAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Method of receiving event notifications.</p><li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1);</li><li>PULL: [Reliable Notification Based on Message Queue](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1).</li>
                     * @return Mode <p>Method of receiving event notifications.</p><li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1);</li><li>PULL: [Reliable Notification Based on Message Queue](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1).</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Method of receiving event notifications.</p><li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1);</li><li>PULL: [Reliable Notification Based on Message Queue](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1).</li>
                     * @param _mode <p>Method of receiving event notifications.</p><li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1);</li><li>PULL: [Reliable Notification Based on Message Queue](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1).</li>
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
                     * 获取<p>When using the <a href="https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1">HTTP callback notification</a> reception method, this is the address for receiving format callback 3.0.<br>Note: If the NotificationUrl parameter is included with an empty string, the format callback 3.0 address will be cleared.</p>
                     * @return NotificationUrl <p>When using the <a href="https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1">HTTP callback notification</a> reception method, this is the address for receiving format callback 3.0.<br>Note: If the NotificationUrl parameter is included with an empty string, the format callback 3.0 address will be cleared.</p>
                     * 
                     */
                    std::string GetNotificationUrl() const;

                    /**
                     * 设置<p>When using the <a href="https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1">HTTP callback notification</a> reception method, this is the address for receiving format callback 3.0.<br>Note: If the NotificationUrl parameter is included with an empty string, the format callback 3.0 address will be cleared.</p>
                     * @param _notificationUrl <p>When using the <a href="https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1">HTTP callback notification</a> reception method, this is the address for receiving format callback 3.0.<br>Note: If the NotificationUrl parameter is included with an empty string, the format callback 3.0 address will be cleared.</p>
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
                     * 获取<p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload complete</a> event notifications. The default "OFF" means the event notification is ignored, and "ON" means to receive event notifications.</p>
                     * @return UploadMediaCompleteEventSwitch <p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload complete</a> event notifications. The default "OFF" means the event notification is ignored, and "ON" means to receive event notifications.</p>
                     * 
                     */
                    std::string GetUploadMediaCompleteEventSwitch() const;

                    /**
                     * 设置<p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload complete</a> event notifications. The default "OFF" means the event notification is ignored, and "ON" means to receive event notifications.</p>
                     * @param _uploadMediaCompleteEventSwitch <p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload complete</a> event notifications. The default "OFF" means the event notification is ignored, and "ON" means to receive event notifications.</p>
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
                     * 获取<p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1">video deletion completion</a> event notification. Default "OFF" means the event notification is ignored, "ON" means receive event notifications.</p>
                     * @return DeleteMediaCompleteEventSwitch <p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1">video deletion completion</a> event notification. Default "OFF" means the event notification is ignored, "ON" means receive event notifications.</p>
                     * 
                     */
                    std::string GetDeleteMediaCompleteEventSwitch() const;

                    /**
                     * 设置<p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1">video deletion completion</a> event notification. Default "OFF" means the event notification is ignored, "ON" means receive event notifications.</p>
                     * @param _deleteMediaCompleteEventSwitch <p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1">video deletion completion</a> event notification. Default "OFF" means the event notification is ignored, "ON" means receive event notifications.</p>
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
                     * 获取<p>Whether to receive event notifications for clip solidification completion. Default is "OFF" to ignore the event notification, and "ON" to receive event notifications.</p>
                     * @return PersistenceCompleteEventSwitch <p>Whether to receive event notifications for clip solidification completion. Default is "OFF" to ignore the event notification, and "ON" to receive event notifications.</p>
                     * 
                     */
                    std::string GetPersistenceCompleteEventSwitch() const;

                    /**
                     * 设置<p>Whether to receive event notifications for clip solidification completion. Default is "OFF" to ignore the event notification, and "ON" to receive event notifications.</p>
                     * @param _persistenceCompleteEventSwitch <p>Whether to receive event notifications for clip solidification completion. Default is "OFF" to ignore the event notification, and "ON" to receive event notifications.</p>
                     * 
                     */
                    void SetPersistenceCompleteEventSwitch(const std::string& _persistenceCompleteEventSwitch);

                    /**
                     * 判断参数 PersistenceCompleteEventSwitch 是否已赋值
                     * @return PersistenceCompleteEventSwitch 是否已赋值
                     * 
                     */
                    bool PersistenceCompleteEventSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Callback key, consisting of upper- and lower-case letters and numbers, with a maximum length of 32 characters. After configuration, the <code>Sign</code> and <code>T</code> fields will be sent in callbacks for authentication.</p><ul><li><code>Sign</code>: string type. Event notification security signature Sign = MD5(SignKey + T). Description: Tencent Cloud calculates the Sign value by concatenating the encrypted SignKey and T and performing MD5 encryption, then places it in the notification message. Your backend server can verify whether the Sign is correct upon receiving the notification message using the same algorithm, thereby confirming whether the message is indeed from the Tencent Cloud backend.</li><li><code>T</code>: int64 type. Expiration time, the UNIX timestamp when the event notification signature expires. Notifications from Tencent Cloud default to an expiration time of 10 minutes. If the time specified by the t value in a notification message has expired, the notification can be deemed invalid, preventing network replay attacks. The format of T is a decimal UNIX timestamp, representing the seconds elapsed since January 1, 1970 (midnight UTC/GMT).</li></ul>
                     * @return SignKey <p>Callback key, consisting of upper- and lower-case letters and numbers, with a maximum length of 32 characters. After configuration, the <code>Sign</code> and <code>T</code> fields will be sent in callbacks for authentication.</p><ul><li><code>Sign</code>: string type. Event notification security signature Sign = MD5(SignKey + T). Description: Tencent Cloud calculates the Sign value by concatenating the encrypted SignKey and T and performing MD5 encryption, then places it in the notification message. Your backend server can verify whether the Sign is correct upon receiving the notification message using the same algorithm, thereby confirming whether the message is indeed from the Tencent Cloud backend.</li><li><code>T</code>: int64 type. Expiration time, the UNIX timestamp when the event notification signature expires. Notifications from Tencent Cloud default to an expiration time of 10 minutes. If the time specified by the t value in a notification message has expired, the notification can be deemed invalid, preventing network replay attacks. The format of T is a decimal UNIX timestamp, representing the seconds elapsed since January 1, 1970 (midnight UTC/GMT).</li></ul>
                     * 
                     */
                    std::string GetSignKey() const;

                    /**
                     * 设置<p>Callback key, consisting of upper- and lower-case letters and numbers, with a maximum length of 32 characters. After configuration, the <code>Sign</code> and <code>T</code> fields will be sent in callbacks for authentication.</p><ul><li><code>Sign</code>: string type. Event notification security signature Sign = MD5(SignKey + T). Description: Tencent Cloud calculates the Sign value by concatenating the encrypted SignKey and T and performing MD5 encryption, then places it in the notification message. Your backend server can verify whether the Sign is correct upon receiving the notification message using the same algorithm, thereby confirming whether the message is indeed from the Tencent Cloud backend.</li><li><code>T</code>: int64 type. Expiration time, the UNIX timestamp when the event notification signature expires. Notifications from Tencent Cloud default to an expiration time of 10 minutes. If the time specified by the t value in a notification message has expired, the notification can be deemed invalid, preventing network replay attacks. The format of T is a decimal UNIX timestamp, representing the seconds elapsed since January 1, 1970 (midnight UTC/GMT).</li></ul>
                     * @param _signKey <p>Callback key, consisting of upper- and lower-case letters and numbers, with a maximum length of 32 characters. After configuration, the <code>Sign</code> and <code>T</code> fields will be sent in callbacks for authentication.</p><ul><li><code>Sign</code>: string type. Event notification security signature Sign = MD5(SignKey + T). Description: Tencent Cloud calculates the Sign value by concatenating the encrypted SignKey and T and performing MD5 encryption, then places it in the notification message. Your backend server can verify whether the Sign is correct upon receiving the notification message using the same algorithm, thereby confirming whether the message is indeed from the Tencent Cloud backend.</li><li><code>T</code>: int64 type. Expiration time, the UNIX timestamp when the event notification signature expires. Notifications from Tencent Cloud default to an expiration time of 10 minutes. If the time specified by the t value in a notification message has expired, the notification can be deemed invalid, preventing network replay attacks. The format of T is a decimal UNIX timestamp, representing the seconds elapsed since January 1, 1970 (midnight UTC/GMT).</li></ul>
                     * 
                     */
                    void SetSignKey(const std::string& _signKey);

                    /**
                     * 判断参数 SignKey 是否已赋值
                     * @return SignKey 是否已赋值
                     * 
                     */
                    bool SignKeyHasBeenSet() const;

                private:

                    /**
                     * <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Method of receiving event notifications.</p><li>PUSH: [HTTP callback notification](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1);</li><li>PULL: [Reliable Notification Based on Message Queue](https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1).</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>When using the <a href="https://www.tencentcloud.com/document/product/266/33779?from_cn_redirect=1">HTTP callback notification</a> reception method, this is the address for receiving format callback 3.0.<br>Note: If the NotificationUrl parameter is included with an empty string, the format callback 3.0 address will be cleared.</p>
                     */
                    std::string m_notificationUrl;
                    bool m_notificationUrlHasBeenSet;

                    /**
                     * <p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload complete</a> event notifications. The default "OFF" means the event notification is ignored, and "ON" means to receive event notifications.</p>
                     */
                    std::string m_uploadMediaCompleteEventSwitch;
                    bool m_uploadMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * <p>Whether to receive <a href="https://www.tencentcloud.com/document/product/266/13434?from_cn_redirect=1">video deletion completion</a> event notification. Default "OFF" means the event notification is ignored, "ON" means receive event notifications.</p>
                     */
                    std::string m_deleteMediaCompleteEventSwitch;
                    bool m_deleteMediaCompleteEventSwitchHasBeenSet;

                    /**
                     * <p>Whether to receive event notifications for clip solidification completion. Default is "OFF" to ignore the event notification, and "ON" to receive event notifications.</p>
                     */
                    std::string m_persistenceCompleteEventSwitch;
                    bool m_persistenceCompleteEventSwitchHasBeenSet;

                    /**
                     * <p>Callback key, consisting of upper- and lower-case letters and numbers, with a maximum length of 32 characters. After configuration, the <code>Sign</code> and <code>T</code> fields will be sent in callbacks for authentication.</p><ul><li><code>Sign</code>: string type. Event notification security signature Sign = MD5(SignKey + T). Description: Tencent Cloud calculates the Sign value by concatenating the encrypted SignKey and T and performing MD5 encryption, then places it in the notification message. Your backend server can verify whether the Sign is correct upon receiving the notification message using the same algorithm, thereby confirming whether the message is indeed from the Tencent Cloud backend.</li><li><code>T</code>: int64 type. Expiration time, the UNIX timestamp when the event notification signature expires. Notifications from Tencent Cloud default to an expiration time of 10 minutes. If the time specified by the t value in a notification message has expired, the notification can be deemed invalid, preventing network replay attacks. The format of T is a decimal UNIX timestamp, representing the seconds elapsed since January 1, 1970 (midnight UTC/GMT).</li></ul>
                     */
                    std::string m_signKey;
                    bool m_signKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYEVENTCONFIGREQUEST_H_
