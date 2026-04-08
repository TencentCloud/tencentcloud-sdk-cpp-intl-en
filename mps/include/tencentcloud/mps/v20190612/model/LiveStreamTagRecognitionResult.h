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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTAGRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTAGRECOGNITIONRESULT_H_

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
                * 
                */
                class LiveStreamTagRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamTagRecognitionResult();
                    ~LiveStreamTagRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Id 
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置
                     * @param _id 
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取
                     * @return StartPtsTime 
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置
                     * @param _startPtsTime 
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
                     * 获取
                     * @return EndPtsTime 
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置
                     * @param _endPtsTime 
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
                     * 获取
                     * @return Confidence 
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置
                     * @param _confidence 
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTAGRECOGNITIONRESULT_H_
