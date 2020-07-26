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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisFrameTagItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * List of frame-specific tag segments
                */
                class MediaAiAnalysisFrameTagSegmentItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisFrameTagSegmentItem();
                    ~MediaAiAnalysisFrameTagSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of frame-specific tag.
                     * @return StartTimeOffset Start time offset of frame-specific tag.
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of frame-specific tag.
                     * @param StartTimeOffset Start time offset of frame-specific tag.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of frame-specific tag.
                     * @return EndTimeOffset End time offset of frame-specific tag.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of frame-specific tag.
                     * @param EndTimeOffset End time offset of frame-specific tag.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取List of tags in time period.
                     * @return TagSet List of tags in time period.
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> GetTagSet() const;

                    /**
                     * 设置List of tags in time period.
                     * @param TagSet List of tags in time period.
                     */
                    void SetTagSet(const std::vector<MediaAiAnalysisFrameTagItem>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * Start time offset of frame-specific tag.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of frame-specific tag.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * List of tags in time period.
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
