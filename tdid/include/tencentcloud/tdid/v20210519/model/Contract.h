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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CONTRACT_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CONTRACT_H_

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
                * The information of a deployed contract.
                */
                class Contract : public AbstractModel
                {
                public:
                    Contract();
                    ~Contract() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The application name.
                     * @return ApplyName The application name.
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置The application name.
                     * @param _applyName The application name.
                     * 
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     * 
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取The contract status. `true`: Enabled; `false`: Not enabled.
                     * @return Enable The contract status. `true`: Enabled; `false`: Not enabled.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置The contract status. `true`: Enabled; `false`: Not enabled.
                     * @param _enable The contract status. `true`: Enabled; `false`: Not enabled.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取The CNS address of the contract.
                     * @return Hash The CNS address of the contract.
                     * 
                     */
                    std::string GetHash() const;

                    /**
                     * 设置The CNS address of the contract.
                     * @param _hash The CNS address of the contract.
                     * 
                     */
                    void SetHash(const std::string& _hash);

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     * 
                     */
                    bool HashHasBeenSet() const;

                    /**
                     * 获取The desensitized CNS address.
                     * @return HashShow The desensitized CNS address.
                     * 
                     */
                    std::string GetHashShow() const;

                    /**
                     * 设置The desensitized CNS address.
                     * @param _hashShow The desensitized CNS address.
                     * 
                     */
                    void SetHashShow(const std::string& _hashShow);

                    /**
                     * 判断参数 HashShow 是否已赋值
                     * @return HashShow 是否已赋值
                     * 
                     */
                    bool HashShowHasBeenSet() const;

                    /**
                     * 获取The DID of the organization that deployed the contract.
                     * @return WeId The DID of the organization that deployed the contract.
                     * 
                     */
                    std::string GetWeId() const;

                    /**
                     * 设置The DID of the organization that deployed the contract.
                     * @param _weId The DID of the organization that deployed the contract.
                     * 
                     */
                    void SetWeId(const std::string& _weId);

                    /**
                     * 判断参数 WeId 是否已赋值
                     * @return WeId 是否已赋值
                     * 
                     */
                    bool WeIdHasBeenSet() const;

                    /**
                     * 获取The name of the organization that deployed the contract.
                     * @return DeployName The name of the organization that deployed the contract.
                     * 
                     */
                    std::string GetDeployName() const;

                    /**
                     * 设置The name of the organization that deployed the contract.
                     * @param _deployName The name of the organization that deployed the contract.
                     * 
                     */
                    void SetDeployName(const std::string& _deployName);

                    /**
                     * 判断参数 DeployName 是否已赋值
                     * @return DeployName 是否已赋值
                     * 
                     */
                    bool DeployNameHasBeenSet() const;

                    /**
                     * 获取The group.
                     * @return GroupId The group.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置The group.
                     * @param _groupId The group.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The deployment time.
                     * @return CreateTime The deployment time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The deployment time.
                     * @param _createTime The deployment time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * The application name.
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * The contract status. `true`: Enabled; `false`: Not enabled.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * The CNS address of the contract.
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                    /**
                     * The desensitized CNS address.
                     */
                    std::string m_hashShow;
                    bool m_hashShowHasBeenSet;

                    /**
                     * The DID of the organization that deployed the contract.
                     */
                    std::string m_weId;
                    bool m_weIdHasBeenSet;

                    /**
                     * The name of the organization that deployed the contract.
                     */
                    std::string m_deployName;
                    bool m_deployNameHasBeenSet;

                    /**
                     * The group.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The deployment time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CONTRACT_H_
