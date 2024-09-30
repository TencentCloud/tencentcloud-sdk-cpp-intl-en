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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALOUTPUT_H_

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
                * Intelligent landscape-to-portrait result.
                */
                class AiAnalysisTaskHorizontalToVerticalOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHorizontalToVerticalOutput();
                    ~AiAnalysisTaskHorizontalToVerticalOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent landscape-to-portrait video list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Intelligent landscape-to-portrait video list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Intelligent landscape-to-portrait video list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path Intelligent landscape-to-portrait video list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Storage location of intelligent landscape-to-portrait videos.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage Storage location of intelligent landscape-to-portrait videos.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of intelligent landscape-to-portrait videos.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputStorage Storage location of intelligent landscape-to-portrait videos.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Confidence.	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Confidence Confidence.	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence.	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _confidence Confidence.	
	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Intelligent landscape-to-portrait video list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Storage location of intelligent landscape-to-portrait videos.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Confidence.	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHORIZONTALTOVERTICALOUTPUT_H_
