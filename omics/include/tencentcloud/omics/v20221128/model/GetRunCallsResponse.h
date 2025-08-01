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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNCALLSRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNCALLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunMetadata.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunCalls response structure.
                */
                class GetRunCallsResponse : public AbstractModel
                {
                public:
                    GetRunCallsResponse();
                    ~GetRunCallsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Job details
                     * @return Calls Job details
                     * 
                     */
                    std::vector<RunMetadata> GetCalls() const;

                    /**
                     * 判断参数 Calls 是否已赋值
                     * @return Calls 是否已赋值
                     * 
                     */
                    bool CallsHasBeenSet() const;

                private:

                    /**
                     * Job details
                     */
                    std::vector<RunMetadata> m_calls;
                    bool m_callsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNCALLSRESPONSE_H_
