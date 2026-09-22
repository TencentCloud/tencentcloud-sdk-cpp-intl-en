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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskOutputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskUsage.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output information of the AIGC video task.
                */
                class AigcVideoTaskOutput : public AbstractModel
                {
                public:
                    AigcVideoTaskOutput();
                    ~AigcVideoTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Output file information of the AIGC video generation task.</p>
                     * @return FileInfos <p>Output file information of the AIGC video generation task.</p>
                     * 
                     */
                    std::vector<AigcVideoTaskOutputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Output file information of the AIGC video generation task.</p>
                     * @param _fileInfos <p>Output file information of the AIGC video generation task.</p>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskOutputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>Task ID of the task whose task type is Procedure. If a task flow template (Procedure) is specified when initiating an <a href="https://www.tencentcloud.com/document/product/266/126239?from_cn_redirect=1">AIGC video generation task</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * @return ProcedureTaskIds <p>Task ID of the task whose task type is Procedure. If a task flow template (Procedure) is specified when initiating an <a href="https://www.tencentcloud.com/document/product/266/126239?from_cn_redirect=1">AIGC video generation task</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * 
                     */
                    std::vector<std::string> GetProcedureTaskIds() const;

                    /**
                     * 设置<p>Task ID of the task whose task type is Procedure. If a task flow template (Procedure) is specified when initiating an <a href="https://www.tencentcloud.com/document/product/266/126239?from_cn_redirect=1">AIGC video generation task</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * @param _procedureTaskIds <p>Task ID of the task whose task type is Procedure. If a task flow template (Procedure) is specified when initiating an <a href="https://www.tencentcloud.com/document/product/266/126239?from_cn_redirect=1">AIGC video generation task</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * 
                     */
                    void SetProcedureTaskIds(const std::vector<std::string>& _procedureTaskIds);

                    /**
                     * 判断参数 ProcedureTaskIds 是否已赋值
                     * @return ProcedureTaskIds 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>Usage information of AIGC video tasks.</p>
                     * @return Usage <p>Usage information of AIGC video tasks.</p>
                     * 
                     */
                    AigcVideoTaskUsage GetUsage() const;

                    /**
                     * 设置<p>Usage information of AIGC video tasks.</p>
                     * @param _usage <p>Usage information of AIGC video tasks.</p>
                     * 
                     */
                    void SetUsage(const AigcVideoTaskUsage& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>Output file information of the AIGC video generation task.</p>
                     */
                    std::vector<AigcVideoTaskOutputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Task ID of the task whose task type is Procedure. If a task flow template (Procedure) is specified when initiating an <a href="https://www.tencentcloud.com/document/product/266/126239?from_cn_redirect=1">AIGC video generation task</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     */
                    std::vector<std::string> m_procedureTaskIds;
                    bool m_procedureTaskIdsHasBeenSet;

                    /**
                     * <p>Usage information of AIGC video tasks.</p>
                     */
                    AigcVideoTaskUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_
