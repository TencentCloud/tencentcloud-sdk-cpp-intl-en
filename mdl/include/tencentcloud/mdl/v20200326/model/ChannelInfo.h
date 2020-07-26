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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AttachedInputInfo.h>
#include <tencentcloud/mdl/v20200326/model/OutputGroupsInfo.h>
#include <tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h>
#include <tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Channel information.
                */
                class ChannelInfo : public AbstractModel
                {
                public:
                    ChannelInfo();
                    ~ChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel ID.
                     * @return Id Channel ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID.
                     * @param Id Channel ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Channel status.
                     * @return State Channel status.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Channel status.
                     * @param State Channel status.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Information of associated input.
                     * @return AttachedInputs Information of associated input.
                     */
                    std::vector<AttachedInputInfo> GetAttachedInputs() const;

                    /**
                     * 设置Information of associated input.
                     * @param AttachedInputs Information of associated input.
                     */
                    void SetAttachedInputs(const std::vector<AttachedInputInfo>& _attachedInputs);

                    /**
                     * 判断参数 AttachedInputs 是否已赋值
                     * @return AttachedInputs 是否已赋值
                     */
                    bool AttachedInputsHasBeenSet() const;

                    /**
                     * 获取Information of output group.
                     * @return OutputGroups Information of output group.
                     */
                    std::vector<OutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Information of output group.
                     * @param OutputGroups Information of output group.
                     */
                    void SetOutputGroups(const std::vector<OutputGroupsInfo>& _outputGroups);

                    /**
                     * 判断参数 OutputGroups 是否已赋值
                     * @return OutputGroups 是否已赋值
                     */
                    bool OutputGroupsHasBeenSet() const;

                    /**
                     * 获取Channel name.
                     * @return Name Channel name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name.
                     * @param Name Channel name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audio transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioTemplates Audio transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AudioTemplates Audio transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioTemplates(const std::vector<AudioTemplateInfo>& _audioTemplates);

                    /**
                     * 判断参数 AudioTemplates 是否已赋值
                     * @return AudioTemplates 是否已赋值
                     */
                    bool AudioTemplatesHasBeenSet() const;

                    /**
                     * 获取Video transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoTemplates Video transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VideoTemplates Video transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoTemplates(const std::vector<VideoTemplateInfo>& _videoTemplates);

                    /**
                     * 判断参数 VideoTemplates 是否已赋值
                     * @return VideoTemplates 是否已赋值
                     */
                    bool VideoTemplatesHasBeenSet() const;

                private:

                    /**
                     * Channel ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Channel status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Information of associated input.
                     */
                    std::vector<AttachedInputInfo> m_attachedInputs;
                    bool m_attachedInputsHasBeenSet;

                    /**
                     * Information of output group.
                     */
                    std::vector<OutputGroupsInfo> m_outputGroups;
                    bool m_outputGroupsHasBeenSet;

                    /**
                     * Channel name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audio transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioTemplateInfo> m_audioTemplates;
                    bool m_audioTemplatesHasBeenSet;

                    /**
                     * Video transcoding template array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VideoTemplateInfo> m_videoTemplates;
                    bool m_videoTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELINFO_H_
