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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYTIMESTAMPRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYTIMESTAMPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerRecord.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * FetchMessageListByTimestamp response structure.
                */
                class FetchMessageListByTimestampResponse : public AbstractModel
                {
                public:
                    FetchMessageListByTimestampResponse();
                    ~FetchMessageListByTimestampResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned results. note that the list does not return specific message content (key, value). if necessary, please use the FetchMessageByOffset API to query specific message content.
                     * @return Result Returned results. note that the list does not return specific message content (key, value). if necessary, please use the FetchMessageByOffset API to query specific message content.
                     * 
                     */
                    std::vector<ConsumerRecord> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Returned results. note that the list does not return specific message content (key, value). if necessary, please use the FetchMessageByOffset API to query specific message content.
                     */
                    std::vector<ConsumerRecord> m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYTIMESTAMPRESPONSE_H_
