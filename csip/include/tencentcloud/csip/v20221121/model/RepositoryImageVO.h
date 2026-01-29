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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REPOSITORYIMAGEVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REPOSITORYIMAGEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Repository Image List
                */
                class RepositoryImageVO : public AbstractModel
                {
                public:
                    RepositoryImageVO();
                    ~RepositoryImageVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
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
                     * 获取Nickname.
                     * @return NickName Nickname.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Nickname.
                     * @param _nickName Nickname.
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Mirror id.
                     * @return InstanceId Mirror id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Mirror id.
                     * @param _instanceId Mirror id.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Image name.
                     * @return InstanceName Image name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Image name.
                     * @param _instanceName Image name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Image creation time.
                     * @return InstanceCreateTime Image creation time.
                     * 
                     */
                    std::string GetInstanceCreateTime() const;

                    /**
                     * 设置Image creation time.
                     * @param _instanceCreateTime Image creation time.
                     * 
                     */
                    void SetInstanceCreateTime(const std::string& _instanceCreateTime);

                    /**
                     * 判断参数 InstanceCreateTime 是否已赋值
                     * @return InstanceCreateTime 是否已赋值
                     * 
                     */
                    bool InstanceCreateTimeHasBeenSet() const;

                    /**
                     * 获取Image Size with Unit
                     * @return InstanceSize Image Size with Unit
                     * 
                     */
                    std::string GetInstanceSize() const;

                    /**
                     * 设置Image Size with Unit
                     * @param _instanceSize Image Size with Unit
                     * 
                     */
                    void SetInstanceSize(const std::string& _instanceSize);

                    /**
                     * 判断参数 InstanceSize 是否已赋值
                     * @return InstanceSize 是否已赋值
                     * 
                     */
                    bool InstanceSizeHasBeenSet() const;

                    /**
                     * 获取Build times.
                     * @return BuildCount Build times.
                     * 
                     */
                    int64_t GetBuildCount() const;

                    /**
                     * 设置Build times.
                     * @param _buildCount Build times.
                     * 
                     */
                    void SetBuildCount(const int64_t& _buildCount);

                    /**
                     * 判断参数 BuildCount 是否已赋值
                     * @return BuildCount 是否已赋值
                     * 
                     */
                    bool BuildCountHasBeenSet() const;

                    /**
                     * 获取Image type.
                     * @return InstanceType Image type.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Image type.
                     * @param _instanceType Image type.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Authorization status.
                     * @return AuthStatus Authorization status.
                     * 
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 设置Authorization status.
                     * @param _authStatus Authorization status.
                     * 
                     */
                    void SetAuthStatus(const int64_t& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取Mirror version.
                     * @return InstanceVersion Mirror version.
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置Mirror version.
                     * @param _instanceVersion Mirror version.
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Repository address.
                     * @return RepositoryUrl Repository address.
                     * 
                     */
                    std::string GetRepositoryUrl() const;

                    /**
                     * 设置Repository address.
                     * @param _repositoryUrl Repository address.
                     * 
                     */
                    void SetRepositoryUrl(const std::string& _repositoryUrl);

                    /**
                     * 判断参数 RepositoryUrl 是否已赋值
                     * @return RepositoryUrl 是否已赋值
                     * 
                     */
                    bool RepositoryUrlHasBeenSet() const;

                    /**
                     * 获取Repository name.
                     * @return RepositoryName Repository name.
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置Repository name.
                     * @param _repositoryName Repository name.
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取Core or Not
                     * @return IsCore Core or Not
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Core or Not
                     * @param _isCore Core or Not
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取Vulnerability risk.
                     * @return VulRisk Vulnerability risk.
                     * 
                     */
                    int64_t GetVulRisk() const;

                    /**
                     * 设置Vulnerability risk.
                     * @param _vulRisk Vulnerability risk.
                     * 
                     */
                    void SetVulRisk(const int64_t& _vulRisk);

                    /**
                     * 判断参数 VulRisk 是否已赋值
                     * @return VulRisk 是否已赋值
                     * 
                     */
                    bool VulRiskHasBeenSet() const;

                    /**
                     * 获取Check task.
                     * @return CheckCount Check task.
                     * 
                     */
                    int64_t GetCheckCount() const;

                    /**
                     * 设置Check task.
                     * @param _checkCount Check task.
                     * 
                     */
                    void SetCheckCount(const int64_t& _checkCount);

                    /**
                     * 判断参数 CheckCount 是否已赋值
                     * @return CheckCount 是否已赋值
                     * 
                     */
                    bool CheckCountHasBeenSet() const;

                    /**
                     * 获取Health Checkup Time
                     * @return CheckTime Health Checkup Time
                     * 
                     */
                    std::string GetCheckTime() const;

                    /**
                     * 设置Health Checkup Time
                     * @param _checkTime Health Checkup Time
                     * 
                     */
                    void SetCheckTime(const std::string& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

                    /**
                     * 获取New Asset or Not. 1: New
                     * @return IsNewAsset New Asset or Not. 1: New
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置New Asset or Not. 1: New
                     * @param _isNewAsset New Asset or Not. 1: New
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                private:

                    /**
                     * User appid.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Mirror id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Image name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Image creation time.
                     */
                    std::string m_instanceCreateTime;
                    bool m_instanceCreateTimeHasBeenSet;

                    /**
                     * Image Size with Unit
                     */
                    std::string m_instanceSize;
                    bool m_instanceSizeHasBeenSet;

                    /**
                     * Build times.
                     */
                    int64_t m_buildCount;
                    bool m_buildCountHasBeenSet;

                    /**
                     * Image type.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Authorization status.
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * Mirror version.
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Repository address.
                     */
                    std::string m_repositoryUrl;
                    bool m_repositoryUrlHasBeenSet;

                    /**
                     * Repository name.
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * Core or Not
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Vulnerability risk.
                     */
                    int64_t m_vulRisk;
                    bool m_vulRiskHasBeenSet;

                    /**
                     * Check task.
                     */
                    int64_t m_checkCount;
                    bool m_checkCountHasBeenSet;

                    /**
                     * Health Checkup Time
                     */
                    std::string m_checkTime;
                    bool m_checkTimeHasBeenSet;

                    /**
                     * New Asset or Not. 1: New
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REPOSITORYIMAGEVO_H_
