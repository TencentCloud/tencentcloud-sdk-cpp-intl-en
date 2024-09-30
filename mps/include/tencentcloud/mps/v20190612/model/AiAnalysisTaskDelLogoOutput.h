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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_

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
                * Intelligent removal result.
                */
                class AiAnalysisTaskDelLogoOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDelLogoOutput();
                    ~AiAnalysisTaskDelLogoOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path of a file after removal.
                     * @return Path Path of a file after removal.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path of a file after removal.
                     * @param _path Path of a file after removal.
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
                     * 获取Storage location of a file after removal.
                     * @return OutputStorage Storage location of a file after removal.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of a file after removal.
                     * @param _outputStorage Storage location of a file after removal.
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
                     * 获取Path of a subtitle file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginSubtitlePath Path of a subtitle file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginSubtitlePath() const;

                    /**
                     * 设置Path of a subtitle file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originSubtitlePath Path of a subtitle file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginSubtitlePath(const std::string& _originSubtitlePath);

                    /**
                     * 判断参数 OriginSubtitlePath 是否已赋值
                     * @return OriginSubtitlePath 是否已赋值
                     * 
                     */
                    bool OriginSubtitlePathHasBeenSet() const;

                    /**
                     * 获取Path of a subtitle translation file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranslateSubtitlePath Path of a subtitle translation file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranslateSubtitlePath() const;

                    /**
                     * 设置Path of a subtitle translation file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _translateSubtitlePath Path of a subtitle translation file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranslateSubtitlePath(const std::string& _translateSubtitlePath);

                    /**
                     * 判断参数 TranslateSubtitlePath 是否已赋值
                     * @return TranslateSubtitlePath 是否已赋值
                     * 
                     */
                    bool TranslateSubtitlePathHasBeenSet() const;

                private:

                    /**
                     * Path of a file after removal.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Storage location of a file after removal.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Path of a subtitle file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originSubtitlePath;
                    bool m_originSubtitlePathHasBeenSet;

                    /**
                     * Path of a subtitle translation file extracted from a video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_translateSubtitlePath;
                    bool m_translateSubtitlePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
