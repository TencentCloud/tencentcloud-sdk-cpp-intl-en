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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Opening and closing segments recognition result.
                */
                class AiAnalysisTaskHeadTailOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHeadTailOutput();
                    ~AiAnalysisTaskHeadTailOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Opening segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HeadTimeOffset Opening segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetHeadTimeOffset() const;

                    /**
                     * 设置Opening segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _headTimeOffset Opening segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeadTimeOffset(const double& _headTimeOffset);

                    /**
                     * 判断参数 HeadTimeOffset 是否已赋值
                     * @return HeadTimeOffset 是否已赋值
                     * 
                     */
                    bool HeadTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Closing segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TailTimeOffset Closing segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTailTimeOffset() const;

                    /**
                     * 设置Closing segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tailTimeOffset Closing segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTailTimeOffset(const double& _tailTimeOffset);

                    /**
                     * 判断参数 TailTimeOffset 是否已赋值
                     * @return TailTimeOffset 是否已赋值
                     * 
                     */
                    bool TailTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Opening segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_headTimeOffset;
                    bool m_headTimeOffsetHasBeenSet;

                    /**
                     * Closing segment PTS.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_tailTimeOffset;
                    bool m_tailTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHEADTAILOUTPUT_H_
