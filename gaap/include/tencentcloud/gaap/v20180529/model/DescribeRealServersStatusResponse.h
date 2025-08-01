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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSSTATUSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RealServerStatus.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRealServersStatus response structure.
                */
                class DescribeRealServersStatusResponse : public AbstractModel
                {
                public:
                    DescribeRealServersStatusResponse();
                    ~DescribeRealServersStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity of origin server query results returned
                     * @return TotalCount Quantity of origin server query results returned
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
                     * 获取Binding status list of origin servers
                     * @return RealServerStatusSet Binding status list of origin servers
                     * 
                     */
                    std::vector<RealServerStatus> GetRealServerStatusSet() const;

                    /**
                     * 判断参数 RealServerStatusSet 是否已赋值
                     * @return RealServerStatusSet 是否已赋值
                     * 
                     */
                    bool RealServerStatusSetHasBeenSet() const;

                private:

                    /**
                     * Quantity of origin server query results returned
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Binding status list of origin servers
                     */
                    std::vector<RealServerStatus> m_realServerStatusSet;
                    bool m_realServerStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSSTATUSRESPONSE_H_
