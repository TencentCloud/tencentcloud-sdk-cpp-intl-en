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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCELISTRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SLInstanceInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSLInstanceList response structure.
                */
                class DescribeSLInstanceListResponse : public AbstractModel
                {
                public:
                    DescribeSLInstanceListResponse();
                    ~DescribeSLInstanceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of qualified instances	.
                     * @return TotalCnt Total number of qualified instances	.
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取Instance information list. If pagination is applied, only the current page's instance information list is displayed.
                     * @return InstancesList Instance information list. If pagination is applied, only the current page's instance information list is displayed.
                     * 
                     */
                    std::vector<SLInstanceInfo> GetInstancesList() const;

                    /**
                     * 判断参数 InstancesList 是否已赋值
                     * @return InstancesList 是否已赋值
                     * 
                     */
                    bool InstancesListHasBeenSet() const;

                private:

                    /**
                     * Total number of qualified instances	.
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * Instance information list. If pagination is applied, only the current page's instance information list is displayed.
                     */
                    std::vector<SLInstanceInfo> m_instancesList;
                    bool m_instancesListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCELISTRESPONSE_H_
