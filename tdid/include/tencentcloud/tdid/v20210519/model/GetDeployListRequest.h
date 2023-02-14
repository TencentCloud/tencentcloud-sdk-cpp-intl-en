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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYLISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYLISTREQUEST_H_

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
                * GetDeployList request structure.
                */
                class GetDeployListRequest : public AbstractModel
                {
                public:
                    GetDeployListRequest();
                    ~GetDeployListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param ClusterId The network ID.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param GroupId The group ID.
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The start.
                     * @return DisplayStart The start.
                     */
                    uint64_t GetDisplayStart() const;

                    /**
                     * 设置The start.
                     * @param DisplayStart The start.
                     */
                    void SetDisplayStart(const uint64_t& _displayStart);

                    /**
                     * 判断参数 DisplayStart 是否已赋值
                     * @return DisplayStart 是否已赋值
                     */
                    bool DisplayStartHasBeenSet() const;

                    /**
                     * 获取The maximum number of records to return.
                     * @return DisplayLength The maximum number of records to return.
                     */
                    uint64_t GetDisplayLength() const;

                    /**
                     * 设置The maximum number of records to return.
                     * @param DisplayLength The maximum number of records to return.
                     */
                    void SetDisplayLength(const uint64_t& _displayLength);

                    /**
                     * 判断参数 DisplayLength 是否已赋值
                     * @return DisplayLength 是否已赋值
                     */
                    bool DisplayLengthHasBeenSet() const;

                private:

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The group ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The start.
                     */
                    uint64_t m_displayStart;
                    bool m_displayStartHasBeenSet;

                    /**
                     * The maximum number of records to return.
                     */
                    uint64_t m_displayLength;
                    bool m_displayLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYLISTREQUEST_H_
