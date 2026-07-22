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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEANALYSISRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEANALYSISRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Knowledge base media analysis result.
                */
                class KnowledgeAnalysisResult : public AbstractModel
                {
                public:
                    KnowledgeAnalysisResult();
                    ~KnowledgeAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Process task type</p><p>Enumeration value:</p><ul><li>AiAnalysis.DescriptionTask: Intelligent summary task</li><li>AiAnalysis.VideoComprehensionTask: Video understanding task</li><li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task</li></ul>
                     * @return TaskType <p>Process task type</p><p>Enumeration value:</p><ul><li>AiAnalysis.DescriptionTask: Intelligent summary task</li><li>AiAnalysis.VideoComprehensionTask: Video understanding task</li><li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Process task type</p><p>Enumeration value:</p><ul><li>AiAnalysis.DescriptionTask: Intelligent summary task</li><li>AiAnalysis.VideoComprehensionTask: Video understanding task</li><li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task</li></ul>
                     * @param _taskType <p>Process task type</p><p>Enumeration value:</p><ul><li>AiAnalysis.DescriptionTask: Intelligent summary task</li><li>AiAnalysis.VideoComprehensionTask: Video understanding task</li><li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task output file collection</p>
                     * @return File <p>Task output file collection</p>
                     * 
                     */
                    MPSOutputFileInfo GetFile() const;

                    /**
                     * 设置<p>Task output file collection</p>
                     * @param _file <p>Task output file collection</p>
                     * 
                     */
                    void SetFile(const MPSOutputFileInfo& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * <p>Process task type</p><p>Enumeration value:</p><ul><li>AiAnalysis.DescriptionTask: Intelligent summary task</li><li>AiAnalysis.VideoComprehensionTask: Video understanding task</li><li>SmartSubtitle.AsrFullTextTask: Intelligent speech full-text recognition task</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Task output file collection</p>
                     */
                    MPSOutputFileInfo m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEANALYSISRESULT_H_
