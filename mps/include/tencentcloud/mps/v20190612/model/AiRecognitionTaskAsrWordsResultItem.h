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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrWordsSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Speech keyword recognition result.
                */
                class AiRecognitionTaskAsrWordsResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrWordsResultItem();
                    ~AiRecognitionTaskAsrWordsResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Speech keyword.
                     * @return Word Speech keyword.
                     */
                    std::string GetWord() const;

                    /**
                     * 设置Speech keyword.
                     * @param Word Speech keyword.
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取List of time segments that contain the speech keyword.
                     * @return SegmentSet List of time segments that contain the speech keyword.
                     */
                    std::vector<AiRecognitionTaskAsrWordsSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of time segments that contain the speech keyword.
                     * @param SegmentSet List of time segments that contain the speech keyword.
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskAsrWordsSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Speech keyword.
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * List of time segments that contain the speech keyword.
                     */
                    std::vector<AiRecognitionTaskAsrWordsSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSRESULTITEM_H_
