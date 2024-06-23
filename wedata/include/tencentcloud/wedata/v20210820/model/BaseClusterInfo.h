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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASECLUSTERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASECLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Cluster Basic Information
                */
                class BaseClusterInfo : public AbstractModel
                {
                public:
                    BaseClusterInfo();
                    ~BaseClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterId Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterId Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Cluster Type, EMR/CDW, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterType Cluster Type, EMR/CDW, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster Type, EMR/CDW, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterType Cluster Type, EMR/CDW, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterName Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterName Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Region Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RegionCn Region Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegionCn() const;

                    /**
                     * 设置Region Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _regionCn Region Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegionCn(const std::string& _regionCn);

                    /**
                     * 判断参数 RegionCn 是否已赋值
                     * @return RegionCn 是否已赋值
                     * 
                     */
                    bool RegionCnHasBeenSet() const;

                    /**
                     * 获取Region English
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RegionEn Region English
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegionEn() const;

                    /**
                     * 设置Region English
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _regionEn Region English
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegionEn(const std::string& _regionEn);

                    /**
                     * 判断参数 RegionEn 是否已赋值
                     * @return RegionEn 是否已赋值
                     * 
                     */
                    bool RegionEnHasBeenSet() const;

                    /**
                     * 获取RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RegionArea RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _regionArea RegionNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegionArea(const std::string& _regionArea);

                    /**
                     * 判断参数 RegionArea 是否已赋值
                     * @return RegionArea 是否已赋值
                     * 
                     */
                    bool RegionAreaHasBeenSet() const;

                    /**
                     * 获取Whether the Cluster is Used
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Used Whether the Cluster is Used
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetUsed() const;

                    /**
                     * 设置Whether the Cluster is Used
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _used Whether the Cluster is Used
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUsed(const bool& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取Cluster StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Cluster StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Cluster StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Cluster StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cluster State Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StatusInfo Cluster State Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatusInfo() const;

                    /**
                     * 设置Cluster State Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _statusInfo Cluster State Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatusInfo(const std::string& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取Cluster Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StorageType Cluster Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Cluster Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _storageType Cluster Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Cluster Computing Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComputeType Cluster Computing Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetComputeType() const;

                    /**
                     * 设置Cluster Computing Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _computeType Cluster Computing Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetComputeType(const std::string& _computeType);

                    /**
                     * 判断参数 ComputeType 是否已赋值
                     * @return ComputeType 是否已赋值
                     * 
                     */
                    bool ComputeTypeHasBeenSet() const;

                    /**
                     * 获取Cluster Resource Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClusterResource Cluster Resource Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterResource() const;

                    /**
                     * 设置Cluster Resource Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _clusterResource Cluster Resource Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetClusterResource(const std::string& _clusterResource);

                    /**
                     * 判断参数 ClusterResource 是否已赋值
                     * @return ClusterResource 是否已赋值
                     * 
                     */
                    bool ClusterResourceHasBeenSet() const;

                    /**
                     * 获取Cluster Payment Method
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChargeType Cluster Payment Method
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Cluster Payment Method
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _chargeType Cluster Payment Method
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Cluster Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Cluster Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Cluster Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Cluster Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Additional Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtraConf Additional Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExtraConf() const;

                    /**
                     * 设置Additional Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extraConf Additional Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtraConf(const std::string& _extraConf);

                    /**
                     * 判断参数 ExtraConf 是否已赋值
                     * @return ExtraConf 是否已赋值
                     * 
                     */
                    bool ExtraConfHasBeenSet() const;

                    /**
                     * 获取Ranger Account Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RangerUserName Ranger Account Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRangerUserName() const;

                    /**
                     * 设置Ranger Account Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rangerUserName Ranger Account Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRangerUserName(const std::string& _rangerUserName);

                    /**
                     * 判断参数 RangerUserName 是否已赋值
                     * @return RangerUserName 是否已赋值
                     * 
                     */
                    bool RangerUserNameHasBeenSet() const;

                    /**
                     * 获取CDW Account (for display)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CdwUserName CDW Account (for display)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCdwUserName() const;

                    /**
                     * 设置CDW Account (for display)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cdwUserName CDW Account (for display)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCdwUserName(const std::string& _cdwUserName);

                    /**
                     * 判断参数 CdwUserName 是否已赋值
                     * @return CdwUserName 是否已赋值
                     * 
                     */
                    bool CdwUserNameHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster Type, EMR/CDW, etc.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region Chinese
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_regionCn;
                    bool m_regionCnHasBeenSet;

                    /**
                     * Region English
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_regionEn;
                    bool m_regionEnHasBeenSet;

                    /**
                     * RegionNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * Whether the Cluster is Used
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * Cluster StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster State Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * Cluster Storage Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Cluster Computing Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_computeType;
                    bool m_computeTypeHasBeenSet;

                    /**
                     * Cluster Resource Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_clusterResource;
                    bool m_clusterResourceHasBeenSet;

                    /**
                     * Cluster Payment Method
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Cluster Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Additional Configuration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_extraConf;
                    bool m_extraConfHasBeenSet;

                    /**
                     * Ranger Account Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_rangerUserName;
                    bool m_rangerUserNameHasBeenSet;

                    /**
                     * CDW Account (for display)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cdwUserName;
                    bool m_cdwUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASECLUSTERINFO_H_
