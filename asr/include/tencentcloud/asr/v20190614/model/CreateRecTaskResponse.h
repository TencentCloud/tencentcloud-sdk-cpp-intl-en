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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/Task.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CreateRecTask response structure.
                */
                class CreateRecTaskResponse : public AbstractModel
                {
                public:
                    CreateRecTaskResponse();
                    ~CreateRecTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned result of the recording recognition request, containing the task ID required for querying the result.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **

                     * @return Data Returned result of the recording recognition request, containing the task ID required for querying the result.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **

                     * 
                     */
                    Task GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Returned result of the recording recognition request, containing the task ID required for querying the result.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **

                     */
                    Task m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKRESPONSE_H_
