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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGEVODREMUXTASKSREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGEVODREMUXTASKSREQUEST_H_

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
                * DeleteStreamPackageVodRemuxTasks request structure.
                */
                class DeleteStreamPackageVodRemuxTasksRequest : public AbstractModel
                {
                public:
                    DeleteStreamPackageVodRemuxTasksRequest();
                    ~DeleteStreamPackageVodRemuxTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of VOD remux task ids.
                     * @return Ids List of VOD remux task ids.
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置List of VOD remux task ids.
                     * @param _ids List of VOD remux task ids.
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * List of VOD remux task ids.
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DELETESTREAMPACKAGEVODREMUXTASKSREQUEST_H_
