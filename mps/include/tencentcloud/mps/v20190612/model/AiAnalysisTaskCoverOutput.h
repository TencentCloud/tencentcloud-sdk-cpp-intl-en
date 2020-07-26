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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCOVEROUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisCoverItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result information of intelligent cover generating
                */
                class AiAnalysisTaskCoverOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskCoverOutput();
                    ~AiAnalysisTaskCoverOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of intelligently generated covers.
                     * @return CoverSet List of intelligently generated covers.
                     */
                    std::vector<MediaAiAnalysisCoverItem> GetCoverSet() const;

                    /**
                     * 设置List of intelligently generated covers.
                     * @param CoverSet List of intelligently generated covers.
                     */
                    void SetCoverSet(const std::vector<MediaAiAnalysisCoverItem>& _coverSet);

                    /**
                     * 判断参数 CoverSet 是否已赋值
                     * @return CoverSet 是否已赋值
                     */
                    bool CoverSetHasBeenSet() const;

                    /**
                     * 获取Storage location of intelligently generated cover.
                     * @return OutputStorage Storage location of intelligently generated cover.
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of intelligently generated cover.
                     * @param OutputStorage Storage location of intelligently generated cover.
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * List of intelligently generated covers.
                     */
                    std::vector<MediaAiAnalysisCoverItem> m_coverSet;
                    bool m_coverSetHasBeenSet;

                    /**
                     * Storage location of intelligently generated cover.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
