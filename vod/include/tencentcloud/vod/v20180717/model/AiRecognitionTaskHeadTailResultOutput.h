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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video start and end recognition output.
                */
                class AiRecognitionTaskHeadTailResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskHeadTailResultOutput();
                    ~AiRecognitionTaskHeadTailResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recognition confidence of the opening scene. Value range: 0-100.
                     * @return HeadConfidence Recognition confidence of the opening scene. Value range: 0-100.
                     * 
                     */
                    double GetHeadConfidence() const;

                    /**
                     * 设置Recognition confidence of the opening scene. Value range: 0-100.
                     * @param _headConfidence Recognition confidence of the opening scene. Value range: 0-100.
                     * 
                     */
                    void SetHeadConfidence(const double& _headConfidence);

                    /**
                     * 判断参数 HeadConfidence 是否已赋值
                     * @return HeadConfidence 是否已赋值
                     * 
                     */
                    bool HeadConfidenceHasBeenSet() const;

                    /**
                     * 获取End time point of the video intro, in seconds.
                     * @return HeadTimeOffset End time point of the video intro, in seconds.
                     * 
                     */
                    double GetHeadTimeOffset() const;

                    /**
                     * 设置End time point of the video intro, in seconds.
                     * @param _headTimeOffset End time point of the video intro, in seconds.
                     * 
                     */
                    void SetHeadTimeOffset(const double& _headTimeOffset);

                    /**
                     * 判断参数 HeadTimeOffset 是否已赋值
                     * @return HeadTimeOffset 是否已赋值
                     * 
                     */
                    bool HeadTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Recognition confidence of the ending scene. Value range: 0-100.
                     * @return TailConfidence Recognition confidence of the ending scene. Value range: 0-100.
                     * 
                     */
                    double GetTailConfidence() const;

                    /**
                     * 设置Recognition confidence of the ending scene. Value range: 0-100.
                     * @param _tailConfidence Recognition confidence of the ending scene. Value range: 0-100.
                     * 
                     */
                    void SetTailConfidence(const double& _tailConfidence);

                    /**
                     * 判断参数 TailConfidence 是否已赋值
                     * @return TailConfidence 是否已赋值
                     * 
                     */
                    bool TailConfidenceHasBeenSet() const;

                    /**
                     * 获取Start time point of the video ending, in seconds.
                     * @return TailTimeOffset Start time point of the video ending, in seconds.
                     * 
                     */
                    double GetTailTimeOffset() const;

                    /**
                     * 设置Start time point of the video ending, in seconds.
                     * @param _tailTimeOffset Start time point of the video ending, in seconds.
                     * 
                     */
                    void SetTailTimeOffset(const double& _tailTimeOffset);

                    /**
                     * 判断参数 TailTimeOffset 是否已赋值
                     * @return TailTimeOffset 是否已赋值
                     * 
                     */
                    bool TailTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Recognition confidence of the opening scene. Value range: 0-100.
                     */
                    double m_headConfidence;
                    bool m_headConfidenceHasBeenSet;

                    /**
                     * End time point of the video intro, in seconds.
                     */
                    double m_headTimeOffset;
                    bool m_headTimeOffsetHasBeenSet;

                    /**
                     * Recognition confidence of the ending scene. Value range: 0-100.
                     */
                    double m_tailConfidence;
                    bool m_tailConfidenceHasBeenSet;

                    /**
                     * Start time point of the video ending, in seconds.
                     */
                    double m_tailTimeOffset;
                    bool m_tailTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULTOUTPUT_H_
