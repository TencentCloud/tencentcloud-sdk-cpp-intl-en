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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeSourceMedia.h>
#include <tencentcloud/mps/v20190612/model/ComposeTrackTime.h>
#include <tencentcloud/mps/v20190612/model/ComposeAudioOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The audio element information of a video editing/compositing task.
                */
                class ComposeAudioItem : public AbstractModel
                {
                public:
                    ComposeAudioItem();
                    ~ComposeAudioItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The media information of the element.
                     * @return SourceMedia The media information of the element.
                     * 
                     */
                    ComposeSourceMedia GetSourceMedia() const;

                    /**
                     * 设置The media information of the element.
                     * @param _sourceMedia The media information of the element.
                     * 
                     */
                    void SetSourceMedia(const ComposeSourceMedia& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * @return TrackTime The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * 
                     */
                    ComposeTrackTime GetTrackTime() const;

                    /**
                     * 设置The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * @param _trackTime The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     * 
                     */
                    void SetTrackTime(const ComposeTrackTime& _trackTime);

                    /**
                     * 判断参数 TrackTime 是否已赋值
                     * @return TrackTime 是否已赋值
                     * 
                     */
                    bool TrackTimeHasBeenSet() const;

                    /**
                     * 获取The operations performed, such as muting.
                     * @return AudioOperations The operations performed, such as muting.
                     * 
                     */
                    std::vector<ComposeAudioOperation> GetAudioOperations() const;

                    /**
                     * 设置The operations performed, such as muting.
                     * @param _audioOperations The operations performed, such as muting.
                     * 
                     */
                    void SetAudioOperations(const std::vector<ComposeAudioOperation>& _audioOperations);

                    /**
                     * 判断参数 AudioOperations 是否已赋值
                     * @return AudioOperations 是否已赋值
                     * 
                     */
                    bool AudioOperationsHasBeenSet() const;

                private:

                    /**
                     * The media information of the element.
                     */
                    ComposeSourceMedia m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * The time of the element in the timeline. If this is not specified, the element will follow the previous element.
                     */
                    ComposeTrackTime m_trackTime;
                    bool m_trackTimeHasBeenSet;

                    /**
                     * The operations performed, such as muting.
                     */
                    std::vector<ComposeAudioOperation> m_audioOperations;
                    bool m_audioOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOITEM_H_
