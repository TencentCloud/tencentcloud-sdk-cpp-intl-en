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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateTDid request structure.
                */
                class CreateTDidRequest : public AbstractModel
                {
                public:
                    CreateTDidRequest();
                    ~CreateTDidRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param _groupId The group ID.
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param _clusterId The network ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取 
                     * @return Relegation  
                     * 
                     */
                    uint64_t GetRelegation() const;

                    /**
                     * 设置 
                     * @param _relegation  
                     * 
                     */
                    void SetRelegation(const uint64_t& _relegation);

                    /**
                     * 判断参数 Relegation 是否已赋值
                     * @return Relegation 是否已赋值
                     * 
                     */
                    bool RelegationHasBeenSet() const;

                private:

                    /**
                     * The group ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     *  
                     */
                    uint64_t m_relegation;
                    bool m_relegationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDREQUEST_H_
