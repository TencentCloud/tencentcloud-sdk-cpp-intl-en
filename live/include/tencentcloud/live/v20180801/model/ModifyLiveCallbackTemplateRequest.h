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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECALLBACKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECALLBACKTEMPLATEREQUEST_H_

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
                * ModifyLiveCallbackTemplate request structure.
                */
                class ModifyLiveCallbackTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLiveCallbackTemplateRequest();
                    ~ModifyLiveCallbackTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID returned by the `DescribeLiveCallbackTemplates` API.
                     * @return TemplateId Template ID returned by the `DescribeLiveCallbackTemplates` API.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID returned by the `DescribeLiveCallbackTemplates` API.
                     * @param _templateId Template ID returned by the `DescribeLiveCallbackTemplates` API.
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param _templateName Template name.
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
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
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
                     * 获取Stream starting callback URL.
                     * @return StreamBeginNotifyUrl Stream starting callback URL.
                     * 
                     */
                    std::string GetStreamBeginNotifyUrl() const;

                    /**
                     * 设置Stream starting callback URL.
                     * @param _streamBeginNotifyUrl Stream starting callback URL.
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
                     * 获取Interruption callback URL.
                     * @return StreamEndNotifyUrl Interruption callback URL.
                     * 
                     */
                    std::string GetStreamEndNotifyUrl() const;

                    /**
                     * 设置Interruption callback URL.
                     * @param _streamEndNotifyUrl Interruption callback URL.
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
                     * 获取Recording callback URL.
                     * @return RecordNotifyUrl Recording callback URL.
                     * 
                     */
                    std::string GetRecordNotifyUrl() const;

                    /**
                     * 设置Recording callback URL.
                     * @param _recordNotifyUrl Recording callback URL.
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
                     * 获取Screencapturing callback URL.
                     * @return SnapshotNotifyUrl Screencapturing callback URL.
                     * 
                     */
                    std::string GetSnapshotNotifyUrl() const;

                    /**
                     * 设置Screencapturing callback URL.
                     * @param _snapshotNotifyUrl Screencapturing callback URL.
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
                     * 获取Porn detection callback URL.
                     * @return PornCensorshipNotifyUrl Porn detection callback URL.
                     * 
                     */
                    std::string GetPornCensorshipNotifyUrl() const;

                    /**
                     * 设置Porn detection callback URL.
                     * @param _pornCensorshipNotifyUrl Porn detection callback URL.
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
                     * Template ID returned by the `DescribeLiveCallbackTemplates` API.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Stream starting callback URL.
                     */
                    std::string m_streamBeginNotifyUrl;
                    bool m_streamBeginNotifyUrlHasBeenSet;

                    /**
                     * Interruption callback URL.
                     */
                    std::string m_streamEndNotifyUrl;
                    bool m_streamEndNotifyUrlHasBeenSet;

                    /**
                     * Recording callback URL.
                     */
                    std::string m_recordNotifyUrl;
                    bool m_recordNotifyUrlHasBeenSet;

                    /**
                     * Screencapturing callback URL.
                     */
                    std::string m_snapshotNotifyUrl;
                    bool m_snapshotNotifyUrlHasBeenSet;

                    /**
                     * Porn detection callback URL.
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
                     * The push error callback URL.
                     */
                    std::string m_pushExceptionNotifyUrl;
                    bool m_pushExceptionNotifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECALLBACKTEMPLATEREQUEST_H_
