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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiRecognitionResultItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Live stream AI recognition results
                */
                class LiveStreamAiRecognitionResultInfo : public AbstractModel
                {
                public:
                    LiveStreamAiRecognitionResultInfo();
                    ~LiveStreamAiRecognitionResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content recognition result list.
                     * @return ResultSet Content recognition result list.
                     * 
                     */
                    std::vector<LiveStreamAiRecognitionResultItem> GetResultSet() const;

                    /**
                     * 设置Content recognition result list.
                     * @param _resultSet Content recognition result list.
                     * 
                     */
                    void SetResultSet(const std::vector<LiveStreamAiRecognitionResultItem>& _resultSet);

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                private:

                    /**
                     * Content recognition result list.
                     */
                    std::vector<LiveStreamAiRecognitionResultItem> m_resultSet;
                    bool m_resultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTINFO_H_
