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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTASKNOTIFYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTASKNOTIFYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Event notification configuration of a task.
                */
                class LiveStreamTaskNotifyConfig : public AbstractModel
                {
                public:
                    LiveStreamTaskNotifyConfig();
                    ~LiveStreamTaskNotifyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification type:

"CMQ": Callback messages are written to the CMQ queue; 
"URL": When a URL is specified, the HTTP callback is pushed to the address specified by NotifyUrl. The callback protocol is http+json. The content of the packet body is the same as the output parameters of the [ParseLiveStreamProcessNotification API](https://intl.cloud.tencent.com/document/product/862/39229?from_cn_redirect=1).

<font color="red">Note: If left blank, it is CMQ by default. To use the other type, you need to fill in the corresponding type value.</font>
                     * @return NotifyType Notification type:

"CMQ": Callback messages are written to the CMQ queue; 
"URL": When a URL is specified, the HTTP callback is pushed to the address specified by NotifyUrl. The callback protocol is http+json. The content of the packet body is the same as the output parameters of the [ParseLiveStreamProcessNotification API](https://intl.cloud.tencent.com/document/product/862/39229?from_cn_redirect=1).

<font color="red">Note: If left blank, it is CMQ by default. To use the other type, you need to fill in the corresponding type value.</font>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置Notification type:

"CMQ": Callback messages are written to the CMQ queue; 
"URL": When a URL is specified, the HTTP callback is pushed to the address specified by NotifyUrl. The callback protocol is http+json. The content of the packet body is the same as the output parameters of the [ParseLiveStreamProcessNotification API](https://intl.cloud.tencent.com/document/product/862/39229?from_cn_redirect=1).

<font color="red">Note: If left blank, it is CMQ by default. To use the other type, you need to fill in the corresponding type value.</font>
                     * @param _notifyType Notification type:

"CMQ": Callback messages are written to the CMQ queue; 
"URL": When a URL is specified, the HTTP callback is pushed to the address specified by NotifyUrl. The callback protocol is http+json. The content of the packet body is the same as the output parameters of the [ParseLiveStreamProcessNotification API](https://intl.cloud.tencent.com/document/product/862/39229?from_cn_redirect=1).

<font color="red">Note: If left blank, it is CMQ by default. To use the other type, you need to fill in the corresponding type value.</font>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取HTTP callback URL, required if `NotifyType` is set to `URL`
                     * @return NotifyUrl HTTP callback URL, required if `NotifyType` is set to `URL`
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置HTTP callback URL, required if `NotifyType` is set to `URL`
                     * @param _notifyUrl HTTP callback URL, required if `NotifyType` is set to `URL`
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取CMQ model. There are two types: `Queue` and `Topic`. Currently, only `Queue` is supported.
                     * @return CmqModel CMQ model. There are two types: `Queue` and `Topic`. Currently, only `Queue` is supported.
                     * 
                     */
                    std::string GetCmqModel() const;

                    /**
                     * 设置CMQ model. There are two types: `Queue` and `Topic`. Currently, only `Queue` is supported.
                     * @param _cmqModel CMQ model. There are two types: `Queue` and `Topic`. Currently, only `Queue` is supported.
                     * 
                     */
                    void SetCmqModel(const std::string& _cmqModel);

                    /**
                     * 判断参数 CmqModel 是否已赋值
                     * @return CmqModel 是否已赋值
                     * 
                     */
                    bool CmqModelHasBeenSet() const;

                    /**
                     * 获取CMQ region, such as `sh` and `bj`.
                     * @return CmqRegion CMQ region, such as `sh` and `bj`.
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置CMQ region, such as `sh` and `bj`.
                     * @param _cmqRegion CMQ region, such as `sh` and `bj`.
                     * 
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取This parameter is valid when the model is `Queue`, indicating the name of the CMQ queue for receiving event notifications.
                     * @return QueueName This parameter is valid when the model is `Queue`, indicating the name of the CMQ queue for receiving event notifications.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置This parameter is valid when the model is `Queue`, indicating the name of the CMQ queue for receiving event notifications.
                     * @param _queueName This parameter is valid when the model is `Queue`, indicating the name of the CMQ queue for receiving event notifications.
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取This parameter is valid when the model is `Topic`, indicating the name of the CMQ topic for receiving event notifications.
                     * @return TopicName This parameter is valid when the model is `Topic`, indicating the name of the CMQ topic for receiving event notifications.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置This parameter is valid when the model is `Topic`, indicating the name of the CMQ topic for receiving event notifications.
                     * @param _topicName This parameter is valid when the model is `Topic`, indicating the name of the CMQ topic for receiving event notifications.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Key used to generate a callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NotifyKey Key used to generate a callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotifyKey() const;

                    /**
                     * 设置Key used to generate a callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _notifyKey Key used to generate a callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotifyKey(const std::string& _notifyKey);

                    /**
                     * 判断参数 NotifyKey 是否已赋值
                     * @return NotifyKey 是否已赋值
                     * 
                     */
                    bool NotifyKeyHasBeenSet() const;

                private:

                    /**
                     * Notification type:

"CMQ": Callback messages are written to the CMQ queue; 
"URL": When a URL is specified, the HTTP callback is pushed to the address specified by NotifyUrl. The callback protocol is http+json. The content of the packet body is the same as the output parameters of the [ParseLiveStreamProcessNotification API](https://intl.cloud.tencent.com/document/product/862/39229?from_cn_redirect=1).

<font color="red">Note: If left blank, it is CMQ by default. To use the other type, you need to fill in the corresponding type value.</font>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * HTTP callback URL, required if `NotifyType` is set to `URL`
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * CMQ model. There are two types: `Queue` and `Topic`. Currently, only `Queue` is supported.
                     */
                    std::string m_cmqModel;
                    bool m_cmqModelHasBeenSet;

                    /**
                     * CMQ region, such as `sh` and `bj`.
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * This parameter is valid when the model is `Queue`, indicating the name of the CMQ queue for receiving event notifications.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * This parameter is valid when the model is `Topic`, indicating the name of the CMQ topic for receiving event notifications.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Key used to generate a callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_notifyKey;
                    bool m_notifyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTASKNOTIFYCONFIG_H_
