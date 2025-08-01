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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RELEASEWANADDRESSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RELEASEWANADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ReleaseWanAddress response structure.
                */
                class ReleaseWanAddressResponse : public AbstractModel
                {
                public:
                    ReleaseWanAddressResponse();
                    ~ReleaseWanAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Async task ID
                     * @return FlowId Async task ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Status of disabling public network access
                     * @return WanStatus Status of disabling public network access
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                private:

                    /**
                     * Async task ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Status of disabling public network access
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RELEASEWANADDRESSRESPONSE_H_
