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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOCRFULLTEXTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOCRFULLTEXTRECOGNITIONRESULT_H_

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
                * OCR-based full live stream recognition
                */
                class LiveStreamOcrFullTextRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamOcrFullTextRecognitionResult();
                    ~LiveStreamOcrFullTextRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Speech text.
                     * @return Text Speech text.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Speech text.
                     * @param _text Speech text.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Start PTS time of recognized segment in seconds.
                     * @return StartPtsTime Start PTS time of recognized segment in seconds.
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置Start PTS time of recognized segment in seconds.
                     * @param _startPtsTime Start PTS time of recognized segment in seconds.
                     * 
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     * 
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取End PTS time of recognized segment in seconds.
                     * @return EndPtsTime End PTS time of recognized segment in seconds.
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置End PTS time of recognized segment in seconds.
                     * @param _endPtsTime End PTS time of recognized segment in seconds.
                     * 
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     * 
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取Confidence of recognized segment. Value range: 0–100.
                     * @return Confidence Confidence of recognized segment. Value range: 0–100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of recognized segment. Value range: 0–100.
                     * @param _confidence Confidence of recognized segment. Value range: 0–100.
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
                     * 获取Zone coordinates of recognition result. The array contains four elements: [x1,y1,x2,y2], i.e., the horizontal and vertical coordinates of the top-left and bottom-right corners.
                     * @return AreaCoordSet Zone coordinates of recognition result. The array contains four elements: [x1,y1,x2,y2], i.e., the horizontal and vertical coordinates of the top-left and bottom-right corners.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Zone coordinates of recognition result. The array contains four elements: [x1,y1,x2,y2], i.e., the horizontal and vertical coordinates of the top-left and bottom-right corners.
                     * @param _areaCoordSet Zone coordinates of recognition result. The array contains four elements: [x1,y1,x2,y2], i.e., the horizontal and vertical coordinates of the top-left and bottom-right corners.
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * Speech text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Start PTS time of recognized segment in seconds.
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * End PTS time of recognized segment in seconds.
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * Confidence of recognized segment. Value range: 0–100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Zone coordinates of recognition result. The array contains four elements: [x1,y1,x2,y2], i.e., the horizontal and vertical coordinates of the top-left and bottom-right corners.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOCRFULLTEXTRECOGNITIONRESULT_H_
