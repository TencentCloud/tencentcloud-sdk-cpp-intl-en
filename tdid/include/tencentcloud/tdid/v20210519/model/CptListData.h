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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CPTLISTDATA_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CPTLISTDATA_H_

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
                * The information of claim protocol types (CPT).
                */
                class CptListData : public AbstractModel
                {
                public:
                    CptListData();
                    ~CptListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The CPT ID.
                     * @return Id The CPT ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置The CPT ID.
                     * @param Id The CPT ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The name of the claim protocol type (CPT).
                     * @return Name The name of the claim protocol type (CPT).
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the claim protocol type (CPT).
                     * @param Name The name of the claim protocol type (CPT).
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取The service ID.
                     * @return ServiceId The service ID.
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置The service ID.
                     * @param ServiceId The service ID.
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取The application ID of the contract.
                     * @return ContractAppId The application ID of the contract.
                     */
                    uint64_t GetContractAppId() const;

                    /**
                     * 设置The application ID of the contract.
                     * @param ContractAppId The application ID of the contract.
                     */
                    void SetContractAppId(const uint64_t& _contractAppId);

                    /**
                     * 判断参数 ContractAppId 是否已赋值
                     * @return ContractAppId 是否已赋值
                     */
                    bool ContractAppIdHasBeenSet() const;

                    /**
                     * 获取The claim protocol type (CPT) ID.
                     * @return CptId The claim protocol type (CPT) ID.
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置The claim protocol type (CPT) ID.
                     * @param CptId The claim protocol type (CPT) ID.
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取The type. `1`: System CPTs; `2`: Authorization CPTs; `3`: General CPTs
                     * @return CptType The type. `1`: System CPTs; `2`: Authorization CPTs; `3`: General CPTs
                     */
                    uint64_t GetCptType() const;

                    /**
                     * 设置The type. `1`: System CPTs; `2`: Authorization CPTs; `3`: General CPTs
                     * @param CptType The type. `1`: System CPTs; `2`: Authorization CPTs; `3`: General CPTs
                     */
                    void SetCptType(const uint64_t& _cptType);

                    /**
                     * 判断参数 CptType 是否已赋值
                     * @return CptType 是否已赋值
                     */
                    bool CptTypeHasBeenSet() const;

                    /**
                     * 获取The description of the claim protocol type (CPT).
                     * @return Description The description of the claim protocol type (CPT).
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The description of the claim protocol type (CPT).
                     * @param Description The description of the claim protocol type (CPT).
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The JSON file of the claim protocol type (CPT).
                     * @return CptJson The JSON file of the claim protocol type (CPT).
                     */
                    std::string GetCptJson() const;

                    /**
                     * 设置The JSON file of the claim protocol type (CPT).
                     * @param CptJson The JSON file of the claim protocol type (CPT).
                     */
                    void SetCptJson(const std::string& _cptJson);

                    /**
                     * 判断参数 CptJson 是否已赋值
                     * @return CptJson 是否已赋值
                     */
                    bool CptJsonHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param CreateTime The creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The last updated time.
                     * @return UpdateTime The last updated time.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time.
                     * @param UpdateTime The last updated time.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取The DID of the creator.
                     * @return CreatorDid The DID of the creator.
                     */
                    std::string GetCreatorDid() const;

                    /**
                     * 设置The DID of the creator.
                     * @param CreatorDid The DID of the creator.
                     */
                    void SetCreatorDid(const std::string& _creatorDid);

                    /**
                     * 判断参数 CreatorDid 是否已赋值
                     * @return CreatorDid 是否已赋值
                     */
                    bool CreatorDidHasBeenSet() const;

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

                private:

                    /**
                     * The CPT ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The name of the claim protocol type (CPT).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * The service ID.
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * The application ID of the contract.
                     */
                    uint64_t m_contractAppId;
                    bool m_contractAppIdHasBeenSet;

                    /**
                     * The claim protocol type (CPT) ID.
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * The type. `1`: System CPTs; `2`: Authorization CPTs; `3`: General CPTs
                     */
                    uint64_t m_cptType;
                    bool m_cptTypeHasBeenSet;

                    /**
                     * The description of the claim protocol type (CPT).
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The JSON file of the claim protocol type (CPT).
                     */
                    std::string m_cptJson;
                    bool m_cptJsonHasBeenSet;

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
                     * The DID of the creator.
                     */
                    std::string m_creatorDid;
                    bool m_creatorDidHasBeenSet;

                    /**
                     * The application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CPTLISTDATA_H_
