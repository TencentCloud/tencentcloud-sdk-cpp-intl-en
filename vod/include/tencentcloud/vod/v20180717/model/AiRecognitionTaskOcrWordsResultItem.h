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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrWordsSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Text keyword recognition result.
                */
                class AiRecognitionTaskOcrWordsResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskOcrWordsResultItem();
                    ~AiRecognitionTaskOcrWordsResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text keyword.
                     * @return Word Text keyword.
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置Text keyword.
                     * @param _word Text keyword.
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取List of segments that contain a text keyword.
                     * @return SegmentSet List of segments that contain a text keyword.
                     * 
                     */
                    std::vector<AiRecognitionTaskOcrWordsSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置List of segments that contain a text keyword.
                     * @param _segmentSet List of segments that contain a text keyword.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskOcrWordsSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * Text keyword.
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * List of segments that contain a text keyword.
                     */
                    std::vector<AiRecognitionTaskOcrWordsSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTITEM_H_
