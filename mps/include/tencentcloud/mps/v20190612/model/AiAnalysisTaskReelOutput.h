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
                * AI narration and video re-creation result info.
                */
                class AiAnalysisTaskReelOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskReelOutput();
                    ~AiAnalysisTaskReelOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path of the output video.
                     * @return VideoPath Path of the output video.
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置Path of the output video.
                     * @param _videoPath Path of the output video.
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
                     * 获取Path list of the output videos.

**Note**:.
1. when returning a file, `VideoPath` returns a file path, and `VideoPaths` likewise populates an element with the same path.
2. when multiple files are returned, `VideoPath` returns an empty string, and `VideoPaths` returns the file path list.
                     * @return VideoPaths Path list of the output videos.

**Note**:.
1. when returning a file, `VideoPath` returns a file path, and `VideoPaths` likewise populates an element with the same path.
2. when multiple files are returned, `VideoPath` returns an empty string, and `VideoPaths` returns the file path list.
                     * 
                     */
                    std::vector<std::string> GetVideoPaths() const;

                    /**
                     * 设置Path list of the output videos.

**Note**:.
1. when returning a file, `VideoPath` returns a file path, and `VideoPaths` likewise populates an element with the same path.
2. when multiple files are returned, `VideoPath` returns an empty string, and `VideoPaths` returns the file path list.
                     * @param _videoPaths Path list of the output videos.

**Note**:.
1. when returning a file, `VideoPath` returns a file path, and `VideoPaths` likewise populates an element with the same path.
2. when multiple files are returned, `VideoPath` returns an empty string, and `VideoPaths` returns the file path list.
                     * 
                     */
                    void SetVideoPaths(const std::vector<std::string>& _videoPaths);

                    /**
                     * 判断参数 VideoPaths 是否已赋值
                     * @return VideoPaths 是否已赋值
                     * 
                     */
                    bool VideoPathsHasBeenSet() const;

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
                     * 获取Storage location of the output video.
                     * @return OutputStorage Storage location of the output video.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of the output video.
                     * @param _outputStorage Storage location of the output video.
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
                     * Path of the output video.
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

                    /**
                     * Path list of the output videos.

**Note**:.
1. when returning a file, `VideoPath` returns a file path, and `VideoPaths` likewise populates an element with the same path.
2. when multiple files are returned, `VideoPath` returns an empty string, and `VideoPaths` returns the file path list.
                     */
                    std::vector<std::string> m_videoPaths;
                    bool m_videoPathsHasBeenSet;

                    /**
                     * Script file path.

                     */
                    std::string m_scriptPath;
                    bool m_scriptPathHasBeenSet;

                    /**
                     * Storage location of the output video.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_
