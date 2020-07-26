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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRANSFORM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRANSFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioVolumeParam.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio operation
                */
                class AudioTransform : public AbstractModel
                {
                public:
                    AudioTransform();
                    ~AudioTransform() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio operation type. Valid values:
<li>Volume: volume adjustment.</li>
                     * @return Type Audio operation type. Valid values:
<li>Volume: volume adjustment.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Audio operation type. Valid values:
<li>Volume: volume adjustment.</li>
                     * @param Type Audio operation type. Valid values:
<li>Volume: volume adjustment.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Volume adjustment parameter, which is valid if `Type` is `Volume`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VolumeParam Volume adjustment parameter, which is valid if `Type` is `Volume`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioVolumeParam GetVolumeParam() const;

                    /**
                     * 设置Volume adjustment parameter, which is valid if `Type` is `Volume`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VolumeParam Volume adjustment parameter, which is valid if `Type` is `Volume`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVolumeParam(const AudioVolumeParam& _volumeParam);

                    /**
                     * 判断参数 VolumeParam 是否已赋值
                     * @return VolumeParam 是否已赋值
                     */
                    bool VolumeParamHasBeenSet() const;

                private:

                    /**
                     * Audio operation type. Valid values:
<li>Volume: volume adjustment.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Volume adjustment parameter, which is valid if `Type` is `Volume`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioVolumeParam m_volumeParam;
                    bool m_volumeParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRANSFORM_H_
