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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrFullTextSegmentItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Full speech recognition result.
                */
                class AiRecognitionTaskAsrFullTextResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrFullTextResultOutput();
                    ~AiRecognitionTaskAsrFullTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Full speech recognition segment list.
                     * @return SegmentSet Full speech recognition segment list.
                     * 
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Full speech recognition segment list.
                     * @param _segmentSet Full speech recognition segment list.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskAsrFullTextSegmentItem>& _segmentSet);

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

                    /**
                     * 获取Storage location of the subtitle file.
                     * @return OutputStorage Storage location of the subtitle file.
                     * @deprecated
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of the subtitle file.
                     * @param _outputStorage Storage location of the subtitle file.
                     * @deprecated
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * @deprecated
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * Full speech recognition segment list.
                     */
                    std::vector<AiRecognitionTaskAsrFullTextSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * Subtitle file path.
                     */
                    std::string m_subtitlePath;
                    bool m_subtitlePathHasBeenSet;

                    /**
                     * Storage location of the subtitle file.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUT_H_
