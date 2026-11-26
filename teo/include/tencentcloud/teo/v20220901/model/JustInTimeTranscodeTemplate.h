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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/VideoTemplateInfo.h>
#include <tencentcloud/teo/v20220901/model/AudioTemplateInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of the just in time transcoding template.
                */
                class JustInTimeTranscodeTemplate : public AbstractModel
                {
                public:
                    JustInTimeTranscodeTemplate();
                    ~JustInTimeTranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the instant transcoding template.
                     * @return TemplateId Unique identifier of the instant transcoding template.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Unique identifier of the instant transcoding template.
                     * @param _templateId Unique identifier of the instant transcoding template.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Transcoding template name.
                     * @return TemplateName Transcoding template name.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Transcoding template name.
                     * @param _templateName Transcoding template name.
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
                     * 获取Template description information.
                     * @return Comment Template description information.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information.
                     * @param _comment Template description information.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Template type. Valid values: <li>preset: system-preset template.</li><li>custom: custom template.</li>
                     * @return Type Template type. Valid values: <li>preset: system-preset template.</li><li>custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values: <li>preset: system-preset template.</li><li>custom: custom template.</li>
                     * @param _type Template type. Valid values: <li>preset: system-preset template.</li><li>custom: custom template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Enable the video stream switch. Value: <li>on: enable;</li><li>off: disable.</li>
                     * @return VideoStreamSwitch Enable the video stream switch. Value: <li>on: enable;</li><li>off: disable.</li>
                     * 
                     */
                    std::string GetVideoStreamSwitch() const;

                    /**
                     * 设置Enable the video stream switch. Value: <li>on: enable;</li><li>off: disable.</li>
                     * @param _videoStreamSwitch Enable the video stream switch. Value: <li>on: enable;</li><li>off: disable.</li>
                     * 
                     */
                    void SetVideoStreamSwitch(const std::string& _videoStreamSwitch);

                    /**
                     * 判断参数 VideoStreamSwitch 是否已赋值
                     * @return VideoStreamSwitch 是否已赋值
                     * 
                     */
                    bool VideoStreamSwitchHasBeenSet() const;

                    /**
                     * 获取Enable the audio stream switch. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * @return AudioStreamSwitch Enable the audio stream switch. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * 
                     */
                    std::string GetAudioStreamSwitch() const;

                    /**
                     * 设置Enable the audio stream switch. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * @param _audioStreamSwitch Enable the audio stream switch. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * 
                     */
                    void SetAudioStreamSwitch(const std::string& _audioStreamSwitch);

                    /**
                     * 判断参数 AudioStreamSwitch 是否已赋值
                     * @return AudioStreamSwitch 是否已赋值
                     * 
                     */
                    bool AudioStreamSwitchHasBeenSet() const;

                    /**
                     * 获取Video stream configuration parameters. This field is valid only when VideoStreamSwitch is on.
                     * @return VideoTemplate Video stream configuration parameters. This field is valid only when VideoStreamSwitch is on.
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameters. This field is valid only when VideoStreamSwitch is on.
                     * @param _videoTemplate Video stream configuration parameters. This field is valid only when VideoStreamSwitch is on.
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfo& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取Audio stream configuration parameters. This field is valid only when AudioStreamSwitch is on.
                     * @return AudioTemplate Audio stream configuration parameters. This field is valid only when AudioStreamSwitch is on.
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameters. This field is valid only when AudioStreamSwitch is on.
                     * @param _audioTemplate Audio stream configuration parameters. This field is valid only when AudioStreamSwitch is on.
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Template last modified time, use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Template last modified time, use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Template last modified time, use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Template last modified time, use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the instant transcoding template.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Transcoding template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template description information.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values: <li>preset: system-preset template.</li><li>custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Enable the video stream switch. Value: <li>on: enable;</li><li>off: disable.</li>
                     */
                    std::string m_videoStreamSwitch;
                    bool m_videoStreamSwitchHasBeenSet;

                    /**
                     * Enable the audio stream switch. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     */
                    std::string m_audioStreamSwitch;
                    bool m_audioStreamSwitchHasBeenSet;

                    /**
                     * Video stream configuration parameters. This field is valid only when VideoStreamSwitch is on.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameters. This field is valid only when AudioStreamSwitch is on.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * Template creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template last modified time, use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
