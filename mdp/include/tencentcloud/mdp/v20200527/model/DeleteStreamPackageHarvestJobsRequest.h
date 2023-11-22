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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGEHARVESTJOBSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGEHARVESTJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DeleteStreamPackageHarvestJobs request structure.
                */
                class DeleteStreamPackageHarvestJobsRequest : public AbstractModel
                {
                public:
                    DeleteStreamPackageHarvestJobsRequest();
                    ~DeleteStreamPackageHarvestJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task IDs, id is a globally unique identifier.
                     * @return IDs Task IDs, id is a globally unique identifier.
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置Task IDs, id is a globally unique identifier.
                     * @param _iDs Task IDs, id is a globally unique identifier.
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                private:

                    /**
                     * Task IDs, id is a globally unique identifier.
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGEHARVESTJOBSREQUEST_H_
