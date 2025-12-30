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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTEXTRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTEXTRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitleResult.h>
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
                * Smart subtitle recognition result.
                */
                class SmartSubtitleTaskTextResultOutput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskTextResultOutput();
                    ~SmartSubtitleTaskTextResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle recognition result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecognizeSubtitleResult Subtitle recognition result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubtitleResult> GetRecognizeSubtitleResult() const;

                    /**
                     * 设置Subtitle recognition result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recognizeSubtitleResult Subtitle recognition result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecognizeSubtitleResult(const std::vector<SubtitleResult>& _recognizeSubtitleResult);

                    /**
                     * 判断参数 RecognizeSubtitleResult 是否已赋值
                     * @return RecognizeSubtitleResult 是否已赋值
                     * 
                     */
                    bool RecognizeSubtitleResultHasBeenSet() const;

                    /**
                     * 获取Subtitle translation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransSubtitleResult Subtitle translation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SubtitleResult> GetTransSubtitleResult() const;

                    /**
                     * 设置Subtitle translation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transSubtitleResult Subtitle translation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransSubtitleResult(const std::vector<SubtitleResult>& _transSubtitleResult);

                    /**
                     * 判断参数 TransSubtitleResult 是否已赋值
                     * @return TransSubtitleResult 是否已赋值
                     * 
                     */
                    bool TransSubtitleResultHasBeenSet() const;

                    /**
                     * 获取Storage location of the subtitle file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputStorage Storage location of the subtitle file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of the subtitle file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputStorage Storage location of the subtitle file.
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

                private:

                    /**
                     * Subtitle recognition result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubtitleResult> m_recognizeSubtitleResult;
                    bool m_recognizeSubtitleResultHasBeenSet;

                    /**
                     * Subtitle translation result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SubtitleResult> m_transSubtitleResult;
                    bool m_transSubtitleResultHasBeenSet;

                    /**
                     * Storage location of the subtitle file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTEXTRESULTOUTPUT_H_
