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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEMEXTRAINFO_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEMEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Unified list display for 4.x clusters and 5.0 clusters shows the 4.x special data carrying interface.
                */
                class InstanceItemExtraInfo : public AbstractModel
                {
                public:
                    InstanceItemExtraInfo();
                    ~InstanceItemExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is a vip.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsVip Whether it is a vip.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置Whether it is a vip.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isVip Whether it is a vip.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Specifies the dedicated cluster status of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VipInstanceStatus Specifies the dedicated cluster status of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVipInstanceStatus() const;

                    /**
                     * 设置Specifies the dedicated cluster status of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vipInstanceStatus Specifies the dedicated cluster status of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVipInstanceStatus(const int64_t& _vipInstanceStatus);

                    /**
                     * 判断参数 VipInstanceStatus 是否已赋值
                     * @return VipInstanceStatus 是否已赋值
                     * 
                     */
                    bool VipInstanceStatusHasBeenSet() const;

                    /**
                     * 获取Specifies the peak bandwidth of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxBandWidth Specifies the peak bandwidth of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置Specifies the peak bandwidth of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxBandWidth Specifies the peak bandwidth of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Exclusive cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Exclusive cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specName Exclusive cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Specifies the quantity of exclusive cluster nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeCount Specifies the quantity of exclusive cluster nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Specifies the quantity of exclusive cluster nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeCount Specifies the quantity of exclusive cluster nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum storage of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxStorage Specifies the maximum storage of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置Specifies the maximum storage of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxStorage Specifies the maximum storage of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum retention time of the dedicated cluster. the unit is hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxRetention Specifies the maximum retention time of the dedicated cluster. the unit is hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置Specifies the maximum retention time of the dedicated cluster. the unit is hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxRetention Specifies the maximum retention time of the dedicated cluster. the unit is hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRetention(const int64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取Special project cluster maximum retention time, unit: hr.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinRetention Special project cluster maximum retention time, unit: hr.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置Special project cluster maximum retention time, unit: hr.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minRetention Special project cluster maximum retention time, unit: hr.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinRetention(const int64_t& _minRetention);

                    /**
                     * 判断参数 MinRetention 是否已赋值
                     * @return MinRetention 是否已赋值
                     * 
                     */
                    bool MinRetentionHasBeenSet() const;

                    /**
                     * 获取Status of 4.0 shared cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStatus Status of 4.0 shared cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Status of 4.0 shared cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceStatus Status of 4.0 shared cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Whether it is frozen.
                     * @return IsFrozen Whether it is frozen.
                     * 
                     */
                    bool GetIsFrozen() const;

                    /**
                     * 设置Whether it is frozen.
                     * @param _isFrozen Whether it is frozen.
                     * 
                     */
                    void SetIsFrozen(const bool& _isFrozen);

                    /**
                     * 判断参数 IsFrozen 是否已赋值
                     * @return IsFrozen 是否已赋值
                     * 
                     */
                    bool IsFrozenHasBeenSet() const;

                private:

                    /**
                     * Whether it is a vip.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Specifies the dedicated cluster status of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vipInstanceStatus;
                    bool m_vipInstanceStatusHasBeenSet;

                    /**
                     * Specifies the peak bandwidth of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Exclusive cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Specifies the quantity of exclusive cluster nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Specifies the maximum storage of the dedicated cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Specifies the maximum retention time of the dedicated cluster. the unit is hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * Special project cluster maximum retention time, unit: hr.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * Status of 4.0 shared cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Whether it is frozen.
                     */
                    bool m_isFrozen;
                    bool m_isFrozenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEMEXTRAINFO_H_
