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
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取Just in time transcoding template name. Length limit: 64 characters.
                     * @return TemplateName Just in time transcoding template name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Just in time transcoding template name. Length limit: 64 characters.
                     * @param _templateName Just in time transcoding template name. Length limit: 64 characters.
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
                     * 获取Template description information. The length cannot exceed 256 characters. Empty by default.
                     * @return Comment Template description information. The length cannot exceed 256 characters. Empty by default.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information. The length cannot exceed 256 characters. Empty by default.
                     * @param _comment Template description information. The length cannot exceed 256 characters. Empty by default.
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
                     * 获取Video stream switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     * @return VideoStreamSwitch Video stream switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     * 
                     */
                    std::string GetVideoStreamSwitch() const;

                    /**
                     * 设置Video stream switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     * @param _videoStreamSwitch Video stream switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
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
                     * 获取Enable audio stream switch. Value:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     * @return AudioStreamSwitch Enable audio stream switch. Value:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     * 
                     */
                    std::string GetAudioStreamSwitch() const;

                    /**
                     * 设置Enable audio stream switch. Value:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     * @param _audioStreamSwitch Enable audio stream switch. Value:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
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
                     * 获取Video stream configuration parameters. This field is required when VideoStreamSwitch is on.
                     * @return VideoTemplate Video stream configuration parameters. This field is required when VideoStreamSwitch is on.
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameters. This field is required when VideoStreamSwitch is on.
                     * @param _videoTemplate Video stream configuration parameters. This field is required when VideoStreamSwitch is on.
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
                     * 获取Audio stream configuration parameters. This field is required when AudioStreamSwitch is on.
                     * @return AudioTemplate Audio stream configuration parameters. This field is required when AudioStreamSwitch is on.
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameters. This field is required when AudioStreamSwitch is on.
                     * @param _audioTemplate Audio stream configuration parameters. This field is required when AudioStreamSwitch is on.
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
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Just in time transcoding template name. Length limit: 64 characters.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Template description information. The length cannot exceed 256 characters. Empty by default.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Video stream switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     */
                    std::string m_videoStreamSwitch;
                    bool m_videoStreamSwitchHasBeenSet;

                    /**
                     * Enable audio stream switch. Value:
<li>`on`: Enable;</li>
<li>off: Disable.</li>Default value: on.
                     */
                    std::string m_audioStreamSwitch;
                    bool m_audioStreamSwitchHasBeenSet;

                    /**
                     * Video stream configuration parameters. This field is required when VideoStreamSwitch is on.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameters. This field is required when AudioStreamSwitch is on.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATEREQUEST_H_
