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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTTRACK_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTTRACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Audio track configuration.
                */
                class InputTrack : public AbstractModel
                {
                public:
                    InputTrack();
                    ~InputTrack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio track index 1-based index mapping to the specified audio track integer starting from 1.
                     * @return TrackIndex Audio track index 1-based index mapping to the specified audio track integer starting from 1.
                     * 
                     */
                    uint64_t GetTrackIndex() const;

                    /**
                     * 设置Audio track index 1-based index mapping to the specified audio track integer starting from 1.
                     * @param _trackIndex Audio track index 1-based index mapping to the specified audio track integer starting from 1.
                     * 
                     */
                    void SetTrackIndex(const uint64_t& _trackIndex);

                    /**
                     * 判断参数 TrackIndex 是否已赋值
                     * @return TrackIndex 是否已赋值
                     * 
                     */
                    bool TrackIndexHasBeenSet() const;

                private:

                    /**
                     * Audio track index 1-based index mapping to the specified audio track integer starting from 1.
                     */
                    uint64_t m_trackIndex;
                    bool m_trackIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTTRACK_H_
