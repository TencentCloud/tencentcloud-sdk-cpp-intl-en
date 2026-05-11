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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisFrameTagItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p>Offset time for frame tagging start.</p><p>Unit: second</p>
                     * @return StartTimeOffset <p>Offset time for frame tagging start.</p><p>Unit: second</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Offset time for frame tagging start.</p><p>Unit: second</p>
                     * @param _startTimeOffset <p>Offset time for frame tagging start.</p><p>Unit: second</p>
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
                     * 获取<p>End time offset of frame tagging.</p><p>Unit: seconds</p>
                     * @return EndTimeOffset <p>End time offset of frame tagging.</p><p>Unit: seconds</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>End time offset of frame tagging.</p><p>Unit: seconds</p>
                     * @param _endTimeOffset <p>End time offset of frame tagging.</p><p>Unit: seconds</p>
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
                     * 获取<p>Tag list in the time segment.</p>
                     * @return TagSet <p>Tag list in the time segment.</p>
                     * 
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> GetTagSet() const;

                    /**
                     * 设置<p>Tag list in the time segment.</p>
                     * @param _tagSet <p>Tag list in the time segment.</p>
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
                     * <p>Offset time for frame tagging start.</p><p>Unit: second</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>End time offset of frame tagging.</p><p>Unit: seconds</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * <p>Tag list in the time segment.</p>
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
