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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBLOCKIPLISTRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBLOCKIPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BlockedIP.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeBlockIPList response structure.
                */
                class DescribeBlockIPListResponse : public AbstractModel
                {
                public:
                    DescribeBlockIPListResponse();
                    ~DescribeBlockIPListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned IPs
                     * @return BlockedIPCount Number of returned IPs
                     * 
                     */
                    uint64_t GetBlockedIPCount() const;

                    /**
                     * 判断参数 BlockedIPCount 是否已赋值
                     * @return BlockedIPCount 是否已赋值
                     * 
                     */
                    bool BlockedIPCountHasBeenSet() const;

                    /**
                     * 获取Field for getting real client IP
                     * @return ClientIPField Field for getting real client IP
                     * 
                     */
                    std::string GetClientIPField() const;

                    /**
                     * 判断参数 ClientIPField 是否已赋值
                     * @return ClientIPField 是否已赋值
                     * 
                     */
                    bool ClientIPFieldHasBeenSet() const;

                    /**
                     * 获取List of IPs added to blocklist 12360
                     * @return BlockedIPList List of IPs added to blocklist 12360
                     * 
                     */
                    std::vector<BlockedIP> GetBlockedIPList() const;

                    /**
                     * 判断参数 BlockedIPList 是否已赋值
                     * @return BlockedIPList 是否已赋值
                     * 
                     */
                    bool BlockedIPListHasBeenSet() const;

                private:

                    /**
                     * Number of returned IPs
                     */
                    uint64_t m_blockedIPCount;
                    bool m_blockedIPCountHasBeenSet;

                    /**
                     * Field for getting real client IP
                     */
                    std::string m_clientIPField;
                    bool m_clientIPFieldHasBeenSet;

                    /**
                     * List of IPs added to blocklist 12360
                     */
                    std::vector<BlockedIP> m_blockedIPList;
                    bool m_blockedIPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBLOCKIPLISTRESPONSE_H_
