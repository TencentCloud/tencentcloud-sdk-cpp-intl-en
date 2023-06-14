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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRFULLTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRFULLTEXTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrFullTextSegmentTextItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Full text recognition segment.
                */
                class AiRecognitionTaskOcrFullTextSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskOcrFullTextSegmentItem();
                    ~AiRecognitionTaskOcrFullTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of recognized segment in seconds.
                     * @return StartTimeOffset Start time offset of recognized segment in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of recognized segment in seconds.
                     * @param _startTimeOffset Start time offset of recognized segment in seconds.
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
                     * 获取End time offset of recognition segment in seconds.
                     * @return EndTimeOffset End time offset of recognition segment in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of recognition segment in seconds.
                     * @param _endTimeOffset End time offset of recognition segment in seconds.
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
                     * 获取Recognition segment result set.
                     * @return TextSet Recognition segment result set.
                     * 
                     */
                    std::vector<AiRecognitionTaskOcrFullTextSegmentTextItem> GetTextSet() const;

                    /**
                     * 设置Recognition segment result set.
                     * @param _textSet Recognition segment result set.
                     * 
                     */
                    void SetTextSet(const std::vector<AiRecognitionTaskOcrFullTextSegmentTextItem>& _textSet);

                    /**
                     * 判断参数 TextSet 是否已赋值
                     * @return TextSet 是否已赋值
                     * 
                     */
                    bool TextSetHasBeenSet() const;

                private:

                    /**
                     * Start time offset of recognized segment in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of recognition segment in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Recognition segment result set.
                     */
                    std::vector<AiRecognitionTaskOcrFullTextSegmentTextItem> m_textSet;
                    bool m_textSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRFULLTEXTSEGMENTITEM_H_
