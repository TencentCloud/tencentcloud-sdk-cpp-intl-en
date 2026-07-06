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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOCRFULLTEXTSEGMENTTEXTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOCRFULLTEXTSEGMENTTEXTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Full text recognition segment.
                */
                class AiRecognitionTaskOcrFullTextSegmentTextItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskOcrFullTextSegmentTextItem();
                    ~AiRecognitionTaskOcrFullTextSegmentTextItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * @return Confidence <p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * @param _confidence <p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>Area coordinates of the recognition result. The array contains 4 elements [x1,y1,x2,y2], representing the horizontal and vertical coordinates of the top-left corner and bottom-right corner.</p>
                     * @return AreaCoordSet <p>Area coordinates of the recognition result. The array contains 4 elements [x1,y1,x2,y2], representing the horizontal and vertical coordinates of the top-left corner and bottom-right corner.</p>
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置<p>Area coordinates of the recognition result. The array contains 4 elements [x1,y1,x2,y2], representing the horizontal and vertical coordinates of the top-left corner and bottom-right corner.</p>
                     * @param _areaCoordSet <p>Area coordinates of the recognition result. The array contains 4 elements [x1,y1,x2,y2], representing the horizontal and vertical coordinates of the top-left corner and bottom-right corner.</p>
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取<p>Recognized text.</p>
                     * @return Text <p>Recognized text.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Recognized text.</p>
                     * @param _text <p>Recognized text.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * <p>Confidence of the recognized segment. Value range: 0–100.</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Area coordinates of the recognition result. The array contains 4 elements [x1,y1,x2,y2], representing the horizontal and vertical coordinates of the top-left corner and bottom-right corner.</p>
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * <p>Recognized text.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOCRFULLTEXTSEGMENTTEXTITEM_H_
