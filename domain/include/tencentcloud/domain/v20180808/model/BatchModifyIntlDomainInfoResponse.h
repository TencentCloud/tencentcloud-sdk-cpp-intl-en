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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAININFORESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAININFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BatchModifyIntlDomainInfo response structure.
                */
                class BatchModifyIntlDomainInfoResponse : public AbstractModel
                {
                public:
                    BatchModifyIntlDomainInfoResponse();
                    ~BatchModifyIntlDomainInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The log ID.
                     * @return LogId The log ID.
                     * 
                     */
                    int64_t GetLogId() const;

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                private:

                    /**
                     * The log ID.
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYINTLDOMAININFORESPONSE_H_
