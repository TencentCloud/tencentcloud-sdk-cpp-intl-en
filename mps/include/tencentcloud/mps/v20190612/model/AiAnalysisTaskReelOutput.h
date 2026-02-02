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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Intelligent video editing result.
                */
                class AiAnalysisTaskReelOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskReelOutput();
                    ~AiAnalysisTaskReelOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path of the edited video.
                     * @return VideoPath Path of the edited video.
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置Path of the edited video.
                     * @param _videoPath Path of the edited video.
                     * 
                     */
                    void SetVideoPath(const std::string& _videoPath);

                    /**
                     * 判断参数 VideoPath 是否已赋值
                     * @return VideoPath 是否已赋值
                     * 
                     */
                    bool VideoPathHasBeenSet() const;

                    /**
                     * 获取Script file path.

                     * @return ScriptPath Script file path.

                     * 
                     */
                    std::string GetScriptPath() const;

                    /**
                     * 设置Script file path.

                     * @param _scriptPath Script file path.

                     * 
                     */
                    void SetScriptPath(const std::string& _scriptPath);

                    /**
                     * 判断参数 ScriptPath 是否已赋值
                     * @return ScriptPath 是否已赋值
                     * 
                     */
                    bool ScriptPathHasBeenSet() const;

                    /**
                     * 获取Storage location of the edited video.
                     * @return OutputStorage Storage location of the edited video.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of the edited video.
                     * @param _outputStorage Storage location of the edited video.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * Path of the edited video.
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

                    /**
                     * Script file path.

                     */
                    std::string m_scriptPath;
                    bool m_scriptPathHasBeenSet;

                    /**
                     * Storage location of the edited video.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_
