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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKSEGMENTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKSEGMENTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentRecognitionItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent splitting result.
                */
                class AiAnalysisTaskSegmentOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskSegmentOutput();
                    ~AiAnalysisTaskSegmentOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent splitting sub-segment list.
                     * @return SegmentSet Intelligent splitting sub-segment list.
                     * 
                     */
                    std::vector<SegmentRecognitionItem> GetSegmentSet() const;

                    /**
                     * 设置Intelligent splitting sub-segment list.
                     * @param _segmentSet Intelligent splitting sub-segment list.
                     * 
                     */
                    void SetSegmentSet(const std::vector<SegmentRecognitionItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取Video abstract, used for offline scenarios.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Abstract Video abstract, used for offline scenarios.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置Video abstract, used for offline scenarios.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _abstract Video abstract, used for offline scenarios.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                private:

                    /**
                     * Intelligent splitting sub-segment list.
                     */
                    std::vector<SegmentRecognitionItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * Video abstract, used for offline scenarios.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKSEGMENTOUTPUT_H_
