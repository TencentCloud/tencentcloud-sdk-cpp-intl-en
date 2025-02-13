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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGSESSIONSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGSESSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribePredictiveDialingSessions response structure.
                */
                class DescribePredictiveDialingSessionsResponse : public AbstractModel
                {
                public:
                    DescribePredictiveDialingSessionsResponse();
                    ~DescribePredictiveDialingSessionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total data volume.
                     * @return TotalCount Total data volume.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of session ids for a call. you can access detailed call bills in batches through https://intl.cloud.tencent.com/document/product/679/47714.?from_cn_redirect=1.
                     * @return SessionList List of session ids for a call. you can access detailed call bills in batches through https://intl.cloud.tencent.com/document/product/679/47714.?from_cn_redirect=1.
                     * 
                     */
                    std::vector<std::string> GetSessionList() const;

                    /**
                     * 判断参数 SessionList 是否已赋值
                     * @return SessionList 是否已赋值
                     * 
                     */
                    bool SessionListHasBeenSet() const;

                private:

                    /**
                     * Total data volume.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of session ids for a call. you can access detailed call bills in batches through https://intl.cloud.tencent.com/document/product/679/47714.?from_cn_redirect=1.
                     */
                    std::vector<std::string> m_sessionList;
                    bool m_sessionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEPREDICTIVEDIALINGSESSIONSRESPONSE_H_
