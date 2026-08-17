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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskTransTextSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Translation result.
                */
                class AiRecognitionTaskTransTextResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskTransTextResultOutput();
                    ~AiRecognitionTaskTransTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Translate segments.
                     * @return SegmentSet Translate segments.
                     * 
                     */
                    std::vector<AiRecognitionTaskTransTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Translate segments.
                     * @param _segmentSet Translate segments.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskTransTextSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取Subtitle file path.
                     * @return SubtitlePath Subtitle file path.
                     * 
                     */
                    std::string GetSubtitlePath() const;

                    /**
                     * 设置Subtitle file path.
                     * @param _subtitlePath Subtitle file path.
                     * 
                     */
                    void SetSubtitlePath(const std::string& _subtitlePath);

                    /**
                     * 判断参数 SubtitlePath 是否已赋值
                     * @return SubtitlePath 是否已赋值
                     * 
                     */
                    bool SubtitlePathHasBeenSet() const;

                private:

                    /**
                     * Translate segments.
                     */
                    std::vector<AiRecognitionTaskTransTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * Subtitle file path.
                     */
                    std::string m_subtitlePath;
                    bool m_subtitlePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTRESULTOUTPUT_H_
