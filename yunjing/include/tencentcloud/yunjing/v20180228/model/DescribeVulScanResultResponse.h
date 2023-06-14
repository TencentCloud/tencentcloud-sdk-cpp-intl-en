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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSCANRESULTRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSCANRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulScanResult response structure.
                */
                class DescribeVulScanResultResponse : public AbstractModel
                {
                public:
                    DescribeVulScanResultResponse();
                    ~DescribeVulScanResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of vulnerabilities.
                     * @return VulNum Number of vulnerabilities.
                     * 
                     */
                    uint64_t GetVulNum() const;

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取Number of servers activated CWP Pro
                     * @return ProVersionNum Number of servers activated CWP Pro
                     * 
                     */
                    uint64_t GetProVersionNum() const;

                    /**
                     * 判断参数 ProVersionNum 是否已赋值
                     * @return ProVersionNum 是否已赋值
                     * 
                     */
                    bool ProVersionNumHasBeenSet() const;

                    /**
                     * 获取Number of affected activated CWP Pro.
                     * @return ImpactedHostNum Number of affected activated CWP Pro.
                     * 
                     */
                    uint64_t GetImpactedHostNum() const;

                    /**
                     * 判断参数 ImpactedHostNum 是否已赋值
                     * @return ImpactedHostNum 是否已赋值
                     * 
                     */
                    bool ImpactedHostNumHasBeenSet() const;

                    /**
                     * 获取Total number of servers.
                     * @return HostNum Total number of servers.
                     * 
                     */
                    uint64_t GetHostNum() const;

                    /**
                     * 判断参数 HostNum 是否已赋值
                     * @return HostNum 是否已赋值
                     * 
                     */
                    bool HostNumHasBeenSet() const;

                    /**
                     * 获取Number of servers on CWP Basic.
                     * @return BasicVersionNum Number of servers on CWP Basic.
                     * 
                     */
                    uint64_t GetBasicVersionNum() const;

                    /**
                     * 判断参数 BasicVersionNum 是否已赋值
                     * @return BasicVersionNum 是否已赋值
                     * 
                     */
                    bool BasicVersionNumHasBeenSet() const;

                private:

                    /**
                     * Number of vulnerabilities.
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Number of servers activated CWP Pro
                     */
                    uint64_t m_proVersionNum;
                    bool m_proVersionNumHasBeenSet;

                    /**
                     * Number of affected activated CWP Pro.
                     */
                    uint64_t m_impactedHostNum;
                    bool m_impactedHostNumHasBeenSet;

                    /**
                     * Total number of servers.
                     */
                    uint64_t m_hostNum;
                    bool m_hostNumHasBeenSet;

                    /**
                     * Number of servers on CWP Basic.
                     */
                    uint64_t m_basicVersionNum;
                    bool m_basicVersionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSCANRESULTRESPONSE_H_
