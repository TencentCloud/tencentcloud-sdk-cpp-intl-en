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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Callback template information.
                */
                class CallBackTemplateInfo : public AbstractModel
                {
                public:
                    CallBackTemplateInfo();
                    ~CallBackTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param _templateId Template ID.
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
                     * 获取Stream mixing callback URL (disused)
                     * @return StreamMixNotifyUrl Stream mixing callback URL (disused)
                     * 
                     */
                    std::string GetStreamMixNotifyUrl() const;

                    /**
                     * 设置Stream mixing callback URL (disused)
                     * @param _streamMixNotifyUrl Stream mixing callback URL (disused)
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
                     * 获取Callback authentication key.
                     * @return CallbackKey Callback authentication key.
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置Callback authentication key.
                     * @param _callbackKey Callback authentication key.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PushExceptionNotifyUrl The push error callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPushExceptionNotifyUrl() const;

                    /**
                     * 设置The push error callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pushExceptionNotifyUrl The push error callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPushExceptionNotifyUrl(const std::string& _pushExceptionNotifyUrl);

                    /**
                     * 判断参数 PushExceptionNotifyUrl 是否已赋值
                     * @return PushExceptionNotifyUrl 是否已赋值
                     * 
                     */
                    bool PushExceptionNotifyUrlHasBeenSet() const;

                    /**
                     * 获取The audio/video moderation callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioAuditNotifyUrl The audio/video moderation callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAudioAuditNotifyUrl() const;

                    /**
                     * 设置The audio/video moderation callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioAuditNotifyUrl The audio/video moderation callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioAuditNotifyUrl(const std::string& _audioAuditNotifyUrl);

                    /**
                     * 判断参数 AudioAuditNotifyUrl 是否已赋值
                     * @return AudioAuditNotifyUrl 是否已赋值
                     * 
                     */
                    bool AudioAuditNotifyUrlHasBeenSet() const;

                private:

                    /**
                     * Template ID.
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
                     * Stream mixing callback URL (disused)
                     */
                    std::string m_streamMixNotifyUrl;
                    bool m_streamMixNotifyUrlHasBeenSet;

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
                     * Callback authentication key.
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * The push error callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pushExceptionNotifyUrl;
                    bool m_pushExceptionNotifyUrlHasBeenSet;

                    /**
                     * The audio/video moderation callback URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_audioAuditNotifyUrl;
                    bool m_audioAuditNotifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CALLBACKTEMPLATEINFO_H_
