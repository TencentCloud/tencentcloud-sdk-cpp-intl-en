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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINACLRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINACLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginACLInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeOriginACL response structure.
                */
                class DescribeOriginACLResponse : public AbstractModel
                {
                public:
                    DescribeOriginACLResponse();
                    ~DescribeOriginACLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Describes the binding relationship between the l7 acceleration domain/l4 proxy instance and the origin server IP range.
                     * @return OriginACLInfo Describes the binding relationship between the l7 acceleration domain/l4 proxy instance and the origin server IP range.
                     * 
                     */
                    OriginACLInfo GetOriginACLInfo() const;

                    /**
                     * 判断参数 OriginACLInfo 是否已赋值
                     * @return OriginACLInfo 是否已赋值
                     * 
                     */
                    bool OriginACLInfoHasBeenSet() const;

                private:

                    /**
                     * Describes the binding relationship between the l7 acceleration domain/l4 proxy instance and the origin server IP range.
                     */
                    OriginACLInfo m_originACLInfo;
                    bool m_originACLInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINACLRESPONSE_H_
