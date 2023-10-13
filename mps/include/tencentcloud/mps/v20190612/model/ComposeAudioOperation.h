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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOOPERATION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOOPERATION_H_

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
                * The audio operations of a video editing/compositing task.
                */
                class ComposeAudioOperation : public AbstractModel
                {
                public:
                    ComposeAudioOperation();
                    ~ComposeAudioOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The operation type. Valid values:
<li>`Volume`: Volume adjustment. </li>
                     * @return Type The operation type. Valid values:
<li>`Volume`: Volume adjustment. </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The operation type. Valid values:
<li>`Volume`: Volume adjustment. </li>
                     * @param _type The operation type. Valid values:
<li>`Volume`: Volume adjustment. </li>
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
                     * 获取 The volume level. This parameter is valid if `Type` is `Volume`. Value range: 0–5. 
<li>If the parameter value is `0`, the video will be muted. </li>
<li>If the parameter value is smaller than 1, the volume will be reduced. </li>
<li>If the parameter value is `1`, the original volume will be kept. </li>
<li>If the parameter value is greater than 1, the volume will be increased. </li>
                     * @return Volume  The volume level. This parameter is valid if `Type` is `Volume`. Value range: 0–5. 
<li>If the parameter value is `0`, the video will be muted. </li>
<li>If the parameter value is smaller than 1, the volume will be reduced. </li>
<li>If the parameter value is `1`, the original volume will be kept. </li>
<li>If the parameter value is greater than 1, the volume will be increased. </li>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置 The volume level. This parameter is valid if `Type` is `Volume`. Value range: 0–5. 
<li>If the parameter value is `0`, the video will be muted. </li>
<li>If the parameter value is smaller than 1, the volume will be reduced. </li>
<li>If the parameter value is `1`, the original volume will be kept. </li>
<li>If the parameter value is greater than 1, the volume will be increased. </li>
                     * @param _volume  The volume level. This parameter is valid if `Type` is `Volume`. Value range: 0–5. 
<li>If the parameter value is `0`, the video will be muted. </li>
<li>If the parameter value is smaller than 1, the volume will be reduced. </li>
<li>If the parameter value is `1`, the original volume will be kept. </li>
<li>If the parameter value is greater than 1, the volume will be increased. </li>
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * The operation type. Valid values:
<li>`Volume`: Volume adjustment. </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     *  The volume level. This parameter is valid if `Type` is `Volume`. Value range: 0–5. 
<li>If the parameter value is `0`, the video will be muted. </li>
<li>If the parameter value is smaller than 1, the volume will be reduced. </li>
<li>If the parameter value is `1`, the original volume will be kept. </li>
<li>If the parameter value is greater than 1, the volume will be increased. </li>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOOPERATION_H_
