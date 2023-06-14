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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DIDSERVICEINFO_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DIDSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The DID service information.
                */
                class DidServiceInfo : public AbstractModel
                {
                public:
                    DidServiceInfo();
                    ~DidServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The DID service ID.
                     * @return Id The DID service ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置The DID service ID.
                     * @param _id The DID service ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The application ID.
                     * @return Appid The application ID.
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置The application ID.
                     * @param _appid The application ID.
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取The account ID.
                     * @return Uin The account ID.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置The account ID.
                     * @param _uin The account ID.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取The consortium ID.
                     * @return ConsortiumId The consortium ID.
                     * 
                     */
                    int64_t GetConsortiumId() const;

                    /**
                     * 设置The consortium ID.
                     * @param _consortiumId The consortium ID.
                     * 
                     */
                    void SetConsortiumId(const int64_t& _consortiumId);

                    /**
                     * 判断参数 ConsortiumId 是否已赋值
                     * @return ConsortiumId 是否已赋值
                     * 
                     */
                    bool ConsortiumIdHasBeenSet() const;

                    /**
                     * 获取The consortium name.
                     * @return ConsortiumName The consortium name.
                     * 
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 设置The consortium name.
                     * @param _consortiumName The consortium name.
                     * 
                     */
                    void SetConsortiumName(const std::string& _consortiumName);

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     * 
                     */
                    bool ConsortiumNameHasBeenSet() const;

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
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param _groupId The group ID.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The chain ID.
                     * @return ChainId The chain ID.
                     * 
                     */
                    std::string GetChainId() const;

                    /**
                     * 设置The chain ID.
                     * @param _chainId The chain ID.
                     * 
                     */
                    void SetChainId(const std::string& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     * @return RoleType Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     * 
                     */
                    uint64_t GetRoleType() const;

                    /**
                     * 设置Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     * @param _roleType Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     * 
                     */
                    void SetRoleType(const uint64_t& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取The organization DID.
                     * @return AgencyDid The organization DID.
                     * 
                     */
                    std::string GetAgencyDid() const;

                    /**
                     * 设置The organization DID.
                     * @param _agencyDid The organization DID.
                     * 
                     */
                    void SetAgencyDid(const std::string& _agencyDid);

                    /**
                     * 判断参数 AgencyDid 是否已赋值
                     * @return AgencyDid 是否已赋值
                     * 
                     */
                    bool AgencyDidHasBeenSet() const;

                    /**
                     * 获取The organization name.
                     * @return CreateOrg The organization name.
                     * 
                     */
                    std::string GetCreateOrg() const;

                    /**
                     * 设置The organization name.
                     * @param _createOrg The organization name.
                     * 
                     */
                    void SetCreateOrg(const std::string& _createOrg);

                    /**
                     * 判断参数 CreateOrg 是否已赋值
                     * @return CreateOrg 是否已赋值
                     * 
                     */
                    bool CreateOrgHasBeenSet() const;

                    /**
                     * 获取The endpoint.
                     * @return Endpoint The endpoint.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置The endpoint.
                     * @param _endpoint The endpoint.
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param _createTime The creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The last updated time.
                     * @return UpdateTime The last updated time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time.
                     * @param _updateTime The last updated time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The group name.
                     * @return GroupName The group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置The group name.
                     * @param _groupName The group name.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * The DID service ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The application ID.
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * The account ID.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * The consortium ID.
                     */
                    int64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * The consortium name.
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The chain ID.
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     */
                    uint64_t m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * The organization DID.
                     */
                    std::string m_agencyDid;
                    bool m_agencyDidHasBeenSet;

                    /**
                     * The organization name.
                     */
                    std::string m_createOrg;
                    bool m_createOrgHasBeenSet;

                    /**
                     * The endpoint.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last updated time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DIDSERVICEINFO_H_
