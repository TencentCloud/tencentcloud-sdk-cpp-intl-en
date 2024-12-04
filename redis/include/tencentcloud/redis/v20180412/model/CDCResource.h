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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CDCRESOURCE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CDCRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ResourceBundle.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Details of the dedicated Redis cluster.
                */
                class CDCResource : public AbstractModel
                {
                public:
                    CDCResource();
                    ~CDCResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取App ID of a user.
                     * @return AppId App ID of a user.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID of a user.
                     * @param _appId App ID of a user.
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
                     * 获取Region ID.
                     * @return RegionId Region ID.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID.
                     * @param _regionId Region ID.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取AZ ID.
                     * @return ZoneId AZ ID.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID.
                     * @param _zoneId AZ ID.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取ID of the dedicated Redis cluster.
                     * @return RedisClusterId ID of the dedicated Redis cluster.
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置ID of the dedicated Redis cluster.
                     * @param _redisClusterId ID of the dedicated Redis cluster.
                     * 
                     */
                    void SetRedisClusterId(const std::string& _redisClusterId);

                    /**
                     * 判断参数 RedisClusterId 是否已赋值
                     * @return RedisClusterId 是否已赋值
                     * 
                     */
                    bool RedisClusterIdHasBeenSet() const;

                    /**
                     * 获取Billing mode. 1: monthly subscription; 0: pay-as-you-go.
                     * @return PayMode Billing mode. 1: monthly subscription; 0: pay-as-you-go.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. 1: monthly subscription; 0: pay-as-you-go.
                     * @param _payMode Billing mode. 1: monthly subscription; 0: pay-as-you-go.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Automatic renewal flag. 0: default status (manual renewal); 1: automatic renewal; 2: no automatic renewal.
                     * @return AutoRenewFlag Automatic renewal flag. 0: default status (manual renewal); 1: automatic renewal; 2: no automatic renewal.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Automatic renewal flag. 0: default status (manual renewal); 1: automatic renewal; 2: no automatic renewal.
                     * @param _autoRenewFlag Automatic renewal flag. 0: default status (manual renewal); 1: automatic renewal; 2: no automatic renewal.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster name.
                     * @return ClusterName Dedicated cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Dedicated cluster name.
                     * @param _clusterName Dedicated cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return StartTime Instance creation time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Instance creation time
                     * @param _startTime Instance creation time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Instance expiration time.
                     * @return EndTime Instance expiration time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Instance expiration time.
                     * @param _endTime Instance expiration time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Cluster status. 1: in process; 2: running; 3: isolated.
                     * @return Status Cluster status. 1: in process; 2: running; 3: isolated.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. 1: in process; 2: running; 3: isolated.
                     * @param _status Cluster status. 1: in process; 2: running; 3: isolated.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Basic control resource package.
                     * @return BaseBundles Basic control resource package.
                     * 
                     */
                    std::vector<ResourceBundle> GetBaseBundles() const;

                    /**
                     * 设置Basic control resource package.
                     * @param _baseBundles Basic control resource package.
                     * 
                     */
                    void SetBaseBundles(const std::vector<ResourceBundle>& _baseBundles);

                    /**
                     * 判断参数 BaseBundles 是否已赋值
                     * @return BaseBundles 是否已赋值
                     * 
                     */
                    bool BaseBundlesHasBeenSet() const;

                    /**
                     * 获取Resource package list.
                     * @return ResourceBundles Resource package list.
                     * 
                     */
                    std::vector<ResourceBundle> GetResourceBundles() const;

                    /**
                     * 设置Resource package list.
                     * @param _resourceBundles Resource package list.
                     * 
                     */
                    void SetResourceBundles(const std::vector<ResourceBundle>& _resourceBundles);

                    /**
                     * 判断参数 ResourceBundles 是否已赋值
                     * @return ResourceBundles 是否已赋值
                     * 
                     */
                    bool ResourceBundlesHasBeenSet() const;

                    /**
                     * 获取Local dedicated cluster ID.
                     * @return DedicatedClusterId Local dedicated cluster ID.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置Local dedicated cluster ID.
                     * @param _dedicatedClusterId Local dedicated cluster ID.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * App ID of a user.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Region ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * AZ ID.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ID of the dedicated Redis cluster.
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * Billing mode. 1: monthly subscription; 0: pay-as-you-go.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Automatic renewal flag. 0: default status (manual renewal); 1: automatic renewal; 2: no automatic renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Dedicated cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Instance expiration time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Cluster status. 1: in process; 2: running; 3: isolated.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Basic control resource package.
                     */
                    std::vector<ResourceBundle> m_baseBundles;
                    bool m_baseBundlesHasBeenSet;

                    /**
                     * Resource package list.
                     */
                    std::vector<ResourceBundle> m_resourceBundles;
                    bool m_resourceBundlesHasBeenSet;

                    /**
                     * Local dedicated cluster ID.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CDCRESOURCE_H_
