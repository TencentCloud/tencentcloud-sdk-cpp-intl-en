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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREIMPACTEDHOSTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREIMPACTEDHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * IgnoreImpactedHosts request structure.
                */
                class IgnoreImpactedHostsRequest : public AbstractModel
                {
                public:
                    IgnoreImpactedHostsRequest();
                    ~IgnoreImpactedHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability ID array
                     * @return Ids Vulnerability ID array
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置Vulnerability ID array
                     * @param _ids Vulnerability ID array
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID array
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IGNOREIMPACTEDHOSTSREQUEST_H_
