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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDIDSERVICEREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDIDSERVICEREQUEST_H_

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
                * CreateDidService request structure.
                */
                class CreateDidServiceRequest : public AbstractModel
                {
                public:
                    CreateDidServiceRequest();
                    ~CreateDidServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The consortium name.
                     * @return ConsortiumName The consortium name.
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 设置The consortium name.
                     * @param ConsortiumName The consortium name.
                     */
                    void SetConsortiumName(const std::string& _consortiumName);

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     */
                    bool ConsortiumNameHasBeenSet() const;

                    /**
                     * 获取The consortium ID.
                     * @return ConsortiumId The consortium ID.
                     */
                    int64_t GetConsortiumId() const;

                    /**
                     * 设置The consortium ID.
                     * @param ConsortiumId The consortium ID.
                     */
                    void SetConsortiumId(const int64_t& _consortiumId);

                    /**
                     * 判断参数 ConsortiumId 是否已赋值
                     * @return ConsortiumId 是否已赋值
                     */
                    bool ConsortiumIdHasBeenSet() const;

                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param GroupId The group ID.
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The organization name.
                     * @return AgencyName The organization name.
                     */
                    std::string GetAgencyName() const;

                    /**
                     * 设置The organization name.
                     * @param AgencyName The organization name.
                     */
                    void SetAgencyName(const std::string& _agencyName);

                    /**
                     * 判断参数 AgencyName 是否已赋值
                     * @return AgencyName 是否已赋值
                     */
                    bool AgencyNameHasBeenSet() const;

                    /**
                     * 获取The application name.
                     * @return AppName The application name.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The application name.
                     * @param AppName The application name.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

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
                     * 获取The group name.
                     * @return GroupName The group name.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The group name.
                     * @param GroupName The group name.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * The consortium name.
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * The consortium ID.
                     */
                    int64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * The group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The organization name.
                     */
                    std::string m_agencyName;
                    bool m_agencyNameHasBeenSet;

                    /**
                     * The application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATEDIDSERVICEREQUEST_H_
