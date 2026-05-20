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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TURNDETECTION_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TURNDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Sentence segmentation configuration.
                */
                class TurnDetection : public AbstractModel
                {
                public:
                    TurnDetection();
                    ~TurnDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This parameter is valid only when TurnDetectionMode is 3, indicating the sensitivity of sentence segmentation.


Feature description: determines whether the user has finished speaking to separate the audio.


Optional: "low" | "medium" | "high" | "auto".


auto is the default value, same as medium.
low will give users sufficient time to speak.
high will perform audio chunking as soon as possible.


If you wish the model to respond more frequently in conversation mode, you can set SemanticEagerness to high.
If you wish the AI to wait a moment when the user pauses, set SemanticEagerness to low.
Regardless of the mode, it will eventually split and send to a large model for reply.

                     * @return SemanticEagerness This parameter is valid only when TurnDetectionMode is 3, indicating the sensitivity of sentence segmentation.


Feature description: determines whether the user has finished speaking to separate the audio.


Optional: "low" | "medium" | "high" | "auto".


auto is the default value, same as medium.
low will give users sufficient time to speak.
high will perform audio chunking as soon as possible.


If you wish the model to respond more frequently in conversation mode, you can set SemanticEagerness to high.
If you wish the AI to wait a moment when the user pauses, set SemanticEagerness to low.
Regardless of the mode, it will eventually split and send to a large model for reply.

                     * 
                     */
                    std::string GetSemanticEagerness() const;

                    /**
                     * 设置This parameter is valid only when TurnDetectionMode is 3, indicating the sensitivity of sentence segmentation.


Feature description: determines whether the user has finished speaking to separate the audio.


Optional: "low" | "medium" | "high" | "auto".


auto is the default value, same as medium.
low will give users sufficient time to speak.
high will perform audio chunking as soon as possible.


If you wish the model to respond more frequently in conversation mode, you can set SemanticEagerness to high.
If you wish the AI to wait a moment when the user pauses, set SemanticEagerness to low.
Regardless of the mode, it will eventually split and send to a large model for reply.

                     * @param _semanticEagerness This parameter is valid only when TurnDetectionMode is 3, indicating the sensitivity of sentence segmentation.


Feature description: determines whether the user has finished speaking to separate the audio.


Optional: "low" | "medium" | "high" | "auto".


auto is the default value, same as medium.
low will give users sufficient time to speak.
high will perform audio chunking as soon as possible.


If you wish the model to respond more frequently in conversation mode, you can set SemanticEagerness to high.
If you wish the AI to wait a moment when the user pauses, set SemanticEagerness to low.
Regardless of the mode, it will eventually split and send to a large model for reply.

                     * 
                     */
                    void SetSemanticEagerness(const std::string& _semanticEagerness);

                    /**
                     * 判断参数 SemanticEagerness 是否已赋值
                     * @return SemanticEagerness 是否已赋值
                     * 
                     */
                    bool SemanticEagernessHasBeenSet() const;

                private:

                    /**
                     * This parameter is valid only when TurnDetectionMode is 3, indicating the sensitivity of sentence segmentation.


Feature description: determines whether the user has finished speaking to separate the audio.


Optional: "low" | "medium" | "high" | "auto".


auto is the default value, same as medium.
low will give users sufficient time to speak.
high will perform audio chunking as soon as possible.


If you wish the model to respond more frequently in conversation mode, you can set SemanticEagerness to high.
If you wish the AI to wait a moment when the user pauses, set SemanticEagerness to low.
Regardless of the mode, it will eventually split and send to a large model for reply.

                     */
                    std::string m_semanticEagerness;
                    bool m_semanticEagernessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TURNDETECTION_H_
