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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/Scte35SettingsInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Output information.
                */
                class OutputInfo : public AbstractModel
                {
                public:
                    OutputInfo();
                    ~OutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output name.
                     * @return Name Output name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Output name.
                     * @param Name Output name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audio transcoding template name array.
Quantity limit: [0,1] for RTMP; [0,20] for others.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioTemplateNames Audio transcoding template name array.
Quantity limit: [0,1] for RTMP; [0,20] for others.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAudioTemplateNames() const;

                    /**
                     * 设置Audio transcoding template name array.
Quantity limit: [0,1] for RTMP; [0,20] for others.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AudioTemplateNames Audio transcoding template name array.
Quantity limit: [0,1] for RTMP; [0,20] for others.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioTemplateNames(const std::vector<std::string>& _audioTemplateNames);

                    /**
                     * 判断参数 AudioTemplateNames 是否已赋值
                     * @return AudioTemplateNames 是否已赋值
                     */
                    bool AudioTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Video transcoding template name array. Quantity limit: [0,1].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoTemplateNames Video transcoding template name array. Quantity limit: [0,1].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetVideoTemplateNames() const;

                    /**
                     * 设置Video transcoding template name array. Quantity limit: [0,1].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VideoTemplateNames Video transcoding template name array. Quantity limit: [0,1].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVideoTemplateNames(const std::vector<std::string>& _videoTemplateNames);

                    /**
                     * 判断参数 VideoTemplateNames 是否已赋值
                     * @return VideoTemplateNames 是否已赋值
                     */
                    bool VideoTemplateNamesHasBeenSet() const;

                    /**
                     * 获取SCTE-35 information configuration.
                     * @return Scte35Settings SCTE-35 information configuration.
                     */
                    Scte35SettingsInfo GetScte35Settings() const;

                    /**
                     * 设置SCTE-35 information configuration.
                     * @param Scte35Settings SCTE-35 information configuration.
                     */
                    void SetScte35Settings(const Scte35SettingsInfo& _scte35Settings);

                    /**
                     * 判断参数 Scte35Settings 是否已赋值
                     * @return Scte35Settings 是否已赋值
                     */
                    bool Scte35SettingsHasBeenSet() const;

                private:

                    /**
                     * Output name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audio transcoding template name array.
Quantity limit: [0,1] for RTMP; [0,20] for others.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_audioTemplateNames;
                    bool m_audioTemplateNamesHasBeenSet;

                    /**
                     * Video transcoding template name array. Quantity limit: [0,1].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_videoTemplateNames;
                    bool m_videoTemplateNamesHasBeenSet;

                    /**
                     * SCTE-35 information configuration.
                     */
                    Scte35SettingsInfo m_scte35Settings;
                    bool m_scte35SettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTINFO_H_
