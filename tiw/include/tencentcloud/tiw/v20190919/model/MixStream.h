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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_MIXSTREAM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_MIXSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/CustomLayout.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Stream mixing configuration
                */
                class MixStream : public AbstractModel
                {
                public:
                    MixStream();
                    ~MixStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether stream mixing is enabled
                     * @return Enabled Whether stream mixing is enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether stream mixing is enabled
                     * @param _enabled Whether stream mixing is enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Whether audio stream mixing is disabled
                     * @return DisableAudio Whether audio stream mixing is disabled
                     * 
                     */
                    bool GetDisableAudio() const;

                    /**
                     * 设置Whether audio stream mixing is disabled
                     * @param _disableAudio Whether audio stream mixing is disabled
                     * 
                     */
                    void SetDisableAudio(const bool& _disableAudio);

                    /**
                     * 判断参数 DisableAudio 是否已赋值
                     * @return DisableAudio 是否已赋值
                     * 
                     */
                    bool DisableAudioHasBeenSet() const;

                    /**
                     * 获取ID of the embedded mixed stream layout template. Valid values: 1 and 2. For more information on the differences of both values, see the sample embedded mixed stream layout template.
If the Custom field is not specified, ModelId is required.
                     * @return ModelId ID of the embedded mixed stream layout template. Valid values: 1 and 2. For more information on the differences of both values, see the sample embedded mixed stream layout template.
If the Custom field is not specified, ModelId is required.
                     * 
                     */
                    int64_t GetModelId() const;

                    /**
                     * 设置ID of the embedded mixed stream layout template. Valid values: 1 and 2. For more information on the differences of both values, see the sample embedded mixed stream layout template.
If the Custom field is not specified, ModelId is required.
                     * @param _modelId ID of the embedded mixed stream layout template. Valid values: 1 and 2. For more information on the differences of both values, see the sample embedded mixed stream layout template.
If the Custom field is not specified, ModelId is required.
                     * 
                     */
                    void SetModelId(const int64_t& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取ID of a teacher account
This field is valid only when ModelId is specified.
If you specify TeacherID for a user, the user's video stream will be displayed in the first image of the embedded template.
                     * @return TeacherId ID of a teacher account
This field is valid only when ModelId is specified.
If you specify TeacherID for a user, the user's video stream will be displayed in the first image of the embedded template.
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置ID of a teacher account
This field is valid only when ModelId is specified.
If you specify TeacherID for a user, the user's video stream will be displayed in the first image of the embedded template.
                     * @param _teacherId ID of a teacher account
This field is valid only when ModelId is specified.
If you specify TeacherID for a user, the user's video stream will be displayed in the first image of the embedded template.
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取Custom mixed stream layout parameter
If this parameter is available, the ModelId and TeacherId fields will be ignored.
                     * @return Custom Custom mixed stream layout parameter
If this parameter is available, the ModelId and TeacherId fields will be ignored.
                     * 
                     */
                    CustomLayout GetCustom() const;

                    /**
                     * 设置Custom mixed stream layout parameter
If this parameter is available, the ModelId and TeacherId fields will be ignored.
                     * @param _custom Custom mixed stream layout parameter
If this parameter is available, the ModelId and TeacherId fields will be ignored.
                     * 
                     */
                    void SetCustom(const CustomLayout& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                private:

                    /**
                     * Whether stream mixing is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Whether audio stream mixing is disabled
                     */
                    bool m_disableAudio;
                    bool m_disableAudioHasBeenSet;

                    /**
                     * ID of the embedded mixed stream layout template. Valid values: 1 and 2. For more information on the differences of both values, see the sample embedded mixed stream layout template.
If the Custom field is not specified, ModelId is required.
                     */
                    int64_t m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * ID of a teacher account
This field is valid only when ModelId is specified.
If you specify TeacherID for a user, the user's video stream will be displayed in the first image of the embedded template.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * Custom mixed stream layout parameter
If this parameter is available, the ModelId and TeacherId fields will be ignored.
                     */
                    CustomLayout m_custom;
                    bool m_customHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_MIXSTREAM_H_
