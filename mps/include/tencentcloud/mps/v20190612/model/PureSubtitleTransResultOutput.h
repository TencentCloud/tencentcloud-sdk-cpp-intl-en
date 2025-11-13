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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PURESUBTITLETRANSRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PURESUBTITLETRANSRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTransResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Detailed output result of translation.
                */
                class PureSubtitleTransResultOutput : public AbstractModel
                {
                public:
                    PureSubtitleTransResultOutput();
                    ~PureSubtitleTransResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Result set of multilingual translation.
                     * @return SubtitleResults Result set of multilingual translation.
                     * 
                     */
                    std::vector<SubtitleTransResultItem> GetSubtitleResults() const;

                    /**
                     * 设置Result set of multilingual translation.
                     * @param _subtitleResults Result set of multilingual translation.
                     * 
                     */
                    void SetSubtitleResults(const std::vector<SubtitleTransResultItem>& _subtitleResults);

                    /**
                     * 判断参数 SubtitleResults 是否已赋值
                     * @return SubtitleResults 是否已赋值
                     * 
                     */
                    bool SubtitleResultsHasBeenSet() const;

                private:

                    /**
                     * Storage location of the subtitle file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Result set of multilingual translation.
                     */
                    std::vector<SubtitleTransResultItem> m_subtitleResults;
                    bool m_subtitleResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PURESUBTITLETRANSRESULTOUTPUT_H_
