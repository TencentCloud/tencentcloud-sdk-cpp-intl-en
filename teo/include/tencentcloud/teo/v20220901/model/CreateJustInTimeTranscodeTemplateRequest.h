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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateJustInTimeTranscodeTemplate request structure.
                */
                class CreateJustInTimeTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateJustInTimeTranscodeTemplateRequest();
                    ~CreateJustInTimeTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the site ID.
                     * @return ZoneId Specifies the site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Specifies the site ID.
                     * @param _zoneId Specifies the site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Name of the just in time transcoding template, length limited to 64 characters.
                     * @return TemplateName Name of the just in time transcoding template, length limited to 64 characters.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Name of the just in time transcoding template, length limited to 64 characters.
                     * @param _templateName Name of the just in time transcoding template, length limited to 64 characters.
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
                     * 获取Template description, with a length limit of 256 characters. empty by default.
                     * @return Comment Template description, with a length limit of 256 characters. empty by default.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description, with a length limit of 256 characters. empty by default.
                     * @param _comment Template description, with a length limit of 256 characters. empty by default.
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
                     * 获取Enable video stream. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     * @return VideoStreamSwitch Enable video stream. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     * 
                     */
                    std::string GetVideoStreamSwitch() const;

                    /**
                     * 设置Enable video stream. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     * @param _videoStreamSwitch Enable video stream. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
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
                     * 获取Enable audio stream switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     * @return AudioStreamSwitch Enable audio stream switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     * 
                     */
                    std::string GetAudioStreamSwitch() const;

                    /**
                     * 设置Enable audio stream switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     * @param _audioStreamSwitch Enable audio stream switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
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
                     * 获取Video stream configuration parameters. this field is required when VideoStreamSwitch is on.
                     * @return VideoTemplate Video stream configuration parameters. this field is required when VideoStreamSwitch is on.
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameters. this field is required when VideoStreamSwitch is on.
                     * @param _videoTemplate Video stream configuration parameters. this field is required when VideoStreamSwitch is on.
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
                     * 获取Audio stream configuration parameters. this field is required when AudioStreamSwitch is on.
                     * @return AudioTemplate Audio stream configuration parameters. this field is required when AudioStreamSwitch is on.
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameters. this field is required when AudioStreamSwitch is on.
                     * @param _audioTemplate Audio stream configuration parameters. this field is required when AudioStreamSwitch is on.
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                private:

                    /**
                     * Specifies the site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Name of the just in time transcoding template, length limited to 64 characters.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template description, with a length limit of 256 characters. empty by default.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Enable video stream. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     */
                    std::string m_videoStreamSwitch;
                    bool m_videoStreamSwitchHasBeenSet;

                    /**
                     * Enable audio stream switch. valid values:.
<li>`on`: Enable;</li>

<li>off: disabled.</li>default value: on.
                     */
                    std::string m_audioStreamSwitch;
                    bool m_audioStreamSwitchHasBeenSet;

                    /**
                     * Video stream configuration parameters. this field is required when VideoStreamSwitch is on.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameters. this field is required when AudioStreamSwitch is on.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
