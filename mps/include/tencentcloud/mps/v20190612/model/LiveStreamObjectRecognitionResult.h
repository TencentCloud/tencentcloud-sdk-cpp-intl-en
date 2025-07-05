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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOBJECTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOBJECTRECOGNITIONRESULT_H_

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
                * Live streaming AI object recognition result.
                */
                class LiveStreamObjectRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamObjectRecognitionResult();
                    ~LiveStreamObjectRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of a recognized object.
                     * @return Name Name of a recognized object.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a recognized object.
                     * @param _name Name of a recognized object.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Start PTS time of a recognized segment, in seconds.
                     * @return StartPtsOffset Start PTS time of a recognized segment, in seconds.
                     * 
                     */
                    double GetStartPtsOffset() const;

                    /**
                     * 设置Start PTS time of a recognized segment, in seconds.
                     * @param _startPtsOffset Start PTS time of a recognized segment, in seconds.
                     * 
                     */
                    void SetStartPtsOffset(const double& _startPtsOffset);

                    /**
                     * 判断参数 StartPtsOffset 是否已赋值
                     * @return StartPtsOffset 是否已赋值
                     * 
                     */
                    bool StartPtsOffsetHasBeenSet() const;

                    /**
                     * 获取End PTS time of a recognized segment, in seconds.
                     * @return EndPtsOffset End PTS time of a recognized segment, in seconds.
                     * 
                     */
                    double GetEndPtsOffset() const;

                    /**
                     * 设置End PTS time of a recognized segment, in seconds.
                     * @param _endPtsOffset End PTS time of a recognized segment, in seconds.
                     * 
                     */
                    void SetEndPtsOffset(const double& _endPtsOffset);

                    /**
                     * 判断参数 EndPtsOffset 是否已赋值
                     * @return EndPtsOffset 是否已赋值
                     * 
                     */
                    bool EndPtsOffsetHasBeenSet() const;

                    /**
                     * 获取Confidence of a recognized segment. Value range: 0-100.
                     * @return Confidence Confidence of a recognized segment. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of a recognized segment. Value range: 0-100.
                     * @param _confidence Confidence of a recognized segment. Value range: 0-100.
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
                     * 获取Zone coordinates of the recognition result. An array contains four elements: [x1, y1, x2, y2], representing the horizontal and vertical coordinates of the top-left and bottom-right corners, respectively.
                     * @return AreaCoordSet Zone coordinates of the recognition result. An array contains four elements: [x1, y1, x2, y2], representing the horizontal and vertical coordinates of the top-left and bottom-right corners, respectively.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Zone coordinates of the recognition result. An array contains four elements: [x1, y1, x2, y2], representing the horizontal and vertical coordinates of the top-left and bottom-right corners, respectively.
                     * @param _areaCoordSet Zone coordinates of the recognition result. An array contains four elements: [x1, y1, x2, y2], representing the horizontal and vertical coordinates of the top-left and bottom-right corners, respectively.
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
                     * 获取Screenshot link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Screenshot link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Screenshot link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Screenshot link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Name of a recognized object.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Start PTS time of a recognized segment, in seconds.
                     */
                    double m_startPtsOffset;
                    bool m_startPtsOffsetHasBeenSet;

                    /**
                     * End PTS time of a recognized segment, in seconds.
                     */
                    double m_endPtsOffset;
                    bool m_endPtsOffsetHasBeenSet;

                    /**
                     * Confidence of a recognized segment. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Zone coordinates of the recognition result. An array contains four elements: [x1, y1, x2, y2], representing the horizontal and vertical coordinates of the top-left and bottom-right corners, respectively.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Screenshot link.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMOBJECTRECOGNITIONRESULT_H_
