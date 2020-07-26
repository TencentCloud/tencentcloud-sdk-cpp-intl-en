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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskOcrWordsResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Output of text keyword recognition.
                */
                class AiRecognitionTaskOcrWordsResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskOcrWordsResultOutput();
                    ~AiRecognitionTaskOcrWordsResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Text keyword recognition result set.
                     * @return ResultSet Text keyword recognition result set.
                     */
                    std::vector<AiRecognitionTaskOcrWordsResultItem> GetResultSet() const;

                    /**
                     * 设置Text keyword recognition result set.
                     * @param ResultSet Text keyword recognition result set.
                     */
                    void SetResultSet(const std::vector<AiRecognitionTaskOcrWordsResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     */
                    bool ResultSetHasBeenSet() const;

                private:

                    /**
                     * Text keyword recognition result set.
                     */
                    std::vector<AiRecognitionTaskOcrWordsResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKOCRWORDSRESULTOUTPUT_H_
