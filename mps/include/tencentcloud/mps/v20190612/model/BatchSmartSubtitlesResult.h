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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSMARTSUBTITLESRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSMARTSUBTITLESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskResultInput.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskBatchOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Smart subtitle task result.
                */
                class BatchSmartSubtitlesResult : public AbstractModel
                {
                public:
                    BatchSmartSubtitlesResult();
                    ~BatchSmartSubtitlesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Input Input information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartSubtitleTaskResultInput GetInput() const;

                    /**
                     * 设置Input information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _input Input information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInput(const SmartSubtitleTaskResultInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Outputs Output information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SmartSubtitleTaskBatchOutput> GetOutputs() const;

                    /**
                     * 设置Output information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _outputs Output information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutputs(const std::vector<SmartSubtitleTaskBatchOutput>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * Input information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartSubtitleTaskResultInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output information for smart subtitle tasks.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SmartSubtitleTaskBatchOutput> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSMARTSUBTITLESRESULT_H_
