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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDESCRIPTIONOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDESCRIPTIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisDescriptionItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent description result information.
                */
                class AiAnalysisTaskDescriptionOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDescriptionOutput();
                    ~AiAnalysisTaskDescriptionOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent video description list.
                     * @return DescriptionSet Intelligent video description list.
                     * 
                     */
                    std::vector<MediaAiAnalysisDescriptionItem> GetDescriptionSet() const;

                    /**
                     * 设置Intelligent video description list.
                     * @param _descriptionSet Intelligent video description list.
                     * 
                     */
                    void SetDescriptionSet(const std::vector<MediaAiAnalysisDescriptionItem>& _descriptionSet);

                    /**
                     * 判断参数 DescriptionSet 是否已赋值
                     * @return DescriptionSet 是否已赋值
                     * 
                     */
                    bool DescriptionSetHasBeenSet() const;

                private:

                    /**
                     * Intelligent video description list.
                     */
                    std::vector<MediaAiAnalysisDescriptionItem> m_descriptionSet;
                    bool m_descriptionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDESCRIPTIONOUTPUT_H_
