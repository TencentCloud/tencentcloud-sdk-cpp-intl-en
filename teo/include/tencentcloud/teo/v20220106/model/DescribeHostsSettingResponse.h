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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSSETTINGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DetailHost.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeHostsSetting response structure.
                */
                class DescribeHostsSettingResponse : public AbstractModel
                {
                public:
                    DescribeHostsSettingResponse();
                    ~DescribeHostsSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of domain names
                     * @return Hosts List of domain names
                     * 
                     */
                    std::vector<DetailHost> GetHosts() const;

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Number of domain names
                     * @return TotalNumber Number of domain names
                     * 
                     */
                    int64_t GetTotalNumber() const;

                    /**
                     * 判断参数 TotalNumber 是否已赋值
                     * @return TotalNumber 是否已赋值
                     * 
                     */
                    bool TotalNumberHasBeenSet() const;

                private:

                    /**
                     * List of domain names
                     */
                    std::vector<DetailHost> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Number of domain names
                     */
                    int64_t m_totalNumber;
                    bool m_totalNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSSETTINGRESPONSE_H_
