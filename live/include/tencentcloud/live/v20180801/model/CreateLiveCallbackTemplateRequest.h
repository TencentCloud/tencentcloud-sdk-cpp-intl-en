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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECALLBACKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECALLBACKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveCallbackTemplate request structure.
                */
                class CreateLiveCallbackTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveCallbackTemplateRequest();
                    ~CreateLiveCallbackTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @return TemplateName Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @param _templateName Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @return Description Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * @param _description Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Stream starting callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @return StreamBeginNotifyUrl Stream starting callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    std::string GetStreamBeginNotifyUrl() const;

                    /**
                     * 设置Stream starting callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @param _streamBeginNotifyUrl Stream starting callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    void SetStreamBeginNotifyUrl(const std::string& _streamBeginNotifyUrl);

                    /**
                     * 判断参数 StreamBeginNotifyUrl 是否已赋值
                     * @return StreamBeginNotifyUrl 是否已赋值
                     * 
                     */
                    bool StreamBeginNotifyUrlHasBeenSet() const;

                    /**
                     * 获取Interruption callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @return StreamEndNotifyUrl Interruption callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    std::string GetStreamEndNotifyUrl() const;

                    /**
                     * 设置Interruption callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @param _streamEndNotifyUrl Interruption callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    void SetStreamEndNotifyUrl(const std::string& _streamEndNotifyUrl);

                    /**
                     * 判断参数 StreamEndNotifyUrl 是否已赋值
                     * @return StreamEndNotifyUrl 是否已赋值
                     * 
                     */
                    bool StreamEndNotifyUrlHasBeenSet() const;

                    /**
                     * 获取Recording callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @return RecordNotifyUrl Recording callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    std::string GetRecordNotifyUrl() const;

                    /**
                     * 设置Recording callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @param _recordNotifyUrl Recording callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    void SetRecordNotifyUrl(const std::string& _recordNotifyUrl);

                    /**
                     * 判断参数 RecordNotifyUrl 是否已赋值
                     * @return RecordNotifyUrl 是否已赋值
                     * 
                     */
                    bool RecordNotifyUrlHasBeenSet() const;

                    /**
                     * 获取Screencapturing callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @return SnapshotNotifyUrl Screencapturing callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSnapshotNotifyUrl() const;

                    /**
                     * 设置Screencapturing callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @param _snapshotNotifyUrl Screencapturing callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    void SetSnapshotNotifyUrl(const std::string& _snapshotNotifyUrl);

                    /**
                     * 判断参数 SnapshotNotifyUrl 是否已赋值
                     * @return SnapshotNotifyUrl 是否已赋值
                     * 
                     */
                    bool SnapshotNotifyUrlHasBeenSet() const;

                    /**
                     * 获取Porn detection callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32741?from_cn_redirect=1).
                     * @return PornCensorshipNotifyUrl Porn detection callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32741?from_cn_redirect=1).
                     * 
                     */
                    std::string GetPornCensorshipNotifyUrl() const;

                    /**
                     * 设置Porn detection callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32741?from_cn_redirect=1).
                     * @param _pornCensorshipNotifyUrl Porn detection callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32741?from_cn_redirect=1).
                     * 
                     */
                    void SetPornCensorshipNotifyUrl(const std::string& _pornCensorshipNotifyUrl);

                    /**
                     * 判断参数 PornCensorshipNotifyUrl 是否已赋值
                     * @return PornCensorshipNotifyUrl 是否已赋值
                     * 
                     */
                    bool PornCensorshipNotifyUrlHasBeenSet() const;

                    /**
                     * 获取Callback key. The callback URL is public. For the callback signature, please see the event message notification document.
[Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @return CallbackKey Callback key. The callback URL is public. For the callback signature, please see the event message notification document.
[Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置Callback key. The callback URL is public. For the callback signature, please see the event message notification document.
[Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * @param _callbackKey Callback key. The callback URL is public. For the callback signature, please see the event message notification document.
[Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取Disused
                     * @return StreamMixNotifyUrl Disused
                     * 
                     */
                    std::string GetStreamMixNotifyUrl() const;

                    /**
                     * 设置Disused
                     * @param _streamMixNotifyUrl Disused
                     * 
                     */
                    void SetStreamMixNotifyUrl(const std::string& _streamMixNotifyUrl);

                    /**
                     * 判断参数 StreamMixNotifyUrl 是否已赋值
                     * @return StreamMixNotifyUrl 是否已赋值
                     * 
                     */
                    bool StreamMixNotifyUrlHasBeenSet() const;

                    /**
                     * 获取The push error callback URL.
                     * @return PushExceptionNotifyUrl The push error callback URL.
                     * 
                     */
                    std::string GetPushExceptionNotifyUrl() const;

                    /**
                     * 设置The push error callback URL.
                     * @param _pushExceptionNotifyUrl The push error callback URL.
                     * 
                     */
                    void SetPushExceptionNotifyUrl(const std::string& _pushExceptionNotifyUrl);

                    /**
                     * 判断参数 PushExceptionNotifyUrl 是否已赋值
                     * @return PushExceptionNotifyUrl 是否已赋值
                     * 
                     */
                    bool PushExceptionNotifyUrlHasBeenSet() const;

                private:

                    /**
                     * Template name.
Maximum length: 255 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Description.
Maximum length: 1,024 bytes.
Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Stream starting callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     */
                    std::string m_streamBeginNotifyUrl;
                    bool m_streamBeginNotifyUrlHasBeenSet;

                    /**
                     * Interruption callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     */
                    std::string m_streamEndNotifyUrl;
                    bool m_streamEndNotifyUrlHasBeenSet;

                    /**
                     * Recording callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     */
                    std::string m_recordNotifyUrl;
                    bool m_recordNotifyUrlHasBeenSet;

                    /**
                     * Screencapturing callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     */
                    std::string m_snapshotNotifyUrl;
                    bool m_snapshotNotifyUrlHasBeenSet;

                    /**
                     * Porn detection callback URL,
Protocol document: [Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32741?from_cn_redirect=1).
                     */
                    std::string m_pornCensorshipNotifyUrl;
                    bool m_pornCensorshipNotifyUrlHasBeenSet;

                    /**
                     * Callback key. The callback URL is public. For the callback signature, please see the event message notification document.
[Event Message Notification](https://intl.cloud.tencent.com/document/product/267/32744?from_cn_redirect=1).
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * Disused
                     */
                    std::string m_streamMixNotifyUrl;
                    bool m_streamMixNotifyUrlHasBeenSet;

                    /**
                     * The push error callback URL.
                     */
                    std::string m_pushExceptionNotifyUrl;
                    bool m_pushExceptionNotifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVECALLBACKTEMPLATEREQUEST_H_
