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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWIPSTATRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWIPSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/FwGroupIpFlowStat.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeVpcFwIpStat response structure.
                */
                class DescribeVpcFwIpStatResponse : public AbstractModel
                {
                public:
                    DescribeVpcFwIpStatResponse();
                    ~DescribeVpcFwIpStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Peak bandwidth statistics list for a single cvm</p>
                     * @return Data <p>Peak bandwidth statistics list for a single cvm</p>
                     * 
                     */
                    std::vector<FwGroupIpFlowStat> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>Total number of lines</p>
                     * @return Total <p>Total number of lines</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>Asynchronously query status. 1 indicates query execution in progress, and 0 indicates query stopped.</p>
                     * @return Status <p>Asynchronously query status. 1 indicates query execution in progress, and 0 indicates query stopped.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Peak bandwidth statistics list for a single cvm</p>
                     */
                    std::vector<FwGroupIpFlowStat> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>Total number of lines</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Asynchronously query status. 1 indicates query execution in progress, and 0 indicates query stopped.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWIPSTATRESPONSE_H_
