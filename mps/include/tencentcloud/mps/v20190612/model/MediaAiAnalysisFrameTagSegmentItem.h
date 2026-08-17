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
                * Frame tagging segments
                */
                class MediaAiAnalysisFrameTagSegmentItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisFrameTagSegmentItem();
                    ~MediaAiAnalysisFrameTagSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset time starting from frame tagging.
                     * @return StartTimeOffset Offset time starting from frame tagging.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Offset time starting from frame tagging.
                     * @param _startTimeOffset Offset time starting from frame tagging.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Offset time for frame tagging completion.
                     * @return EndTimeOffset Offset time for frame tagging completion.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Offset time for frame tagging completion.
                     * @param _endTimeOffset Offset time for frame tagging completion.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Tag list within the time segment.
                     * @return TagSet Tag list within the time segment.
                     * 
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> GetTagSet() const;

                    /**
                     * 设置Tag list within the time segment.
                     * @param _tagSet Tag list within the time segment.
                     * 
                     */
                    void SetTagSet(const std::vector<MediaAiAnalysisFrameTagItem>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * Offset time starting from frame tagging.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset time for frame tagging completion.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Tag list within the time segment.
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
