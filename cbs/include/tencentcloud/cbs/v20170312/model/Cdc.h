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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CDC_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CDC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/CdcSize.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 
                */
                class Cdc : public AbstractModel
                {
                public:
                    Cdc();
                    ~Cdc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return CageId 
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置
                     * @param _cageId 
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster status. value ranges from:<br><li>NORMAL: NORMAL;</li><br><li>CLOSED: CLOSED. at this time, the exclusive cluster will be unavailable to create new cloud disks;</li><br><li>FAULT: abnormal exclusive cluster status. at this point, the exclusive cluster will be inoperable, and the tencent cloud ops team will promptly fix the cluster;</li><br><li>ISOLATED: the exclusive cluster is ISOLATED due to not renewed timely. at this moment, the exclusive cluster will be unavailable to create new cloud disks, and the corresponding cloud disks will also be inoperable.</li>.
                     * @return CdcState Exclusive cluster status. value ranges from:<br><li>NORMAL: NORMAL;</li><br><li>CLOSED: CLOSED. at this time, the exclusive cluster will be unavailable to create new cloud disks;</li><br><li>FAULT: abnormal exclusive cluster status. at this point, the exclusive cluster will be inoperable, and the tencent cloud ops team will promptly fix the cluster;</li><br><li>ISOLATED: the exclusive cluster is ISOLATED due to not renewed timely. at this moment, the exclusive cluster will be unavailable to create new cloud disks, and the corresponding cloud disks will also be inoperable.</li>.
                     * 
                     */
                    std::string GetCdcState() const;

                    /**
                     * 设置Exclusive cluster status. value ranges from:<br><li>NORMAL: NORMAL;</li><br><li>CLOSED: CLOSED. at this time, the exclusive cluster will be unavailable to create new cloud disks;</li><br><li>FAULT: abnormal exclusive cluster status. at this point, the exclusive cluster will be inoperable, and the tencent cloud ops team will promptly fix the cluster;</li><br><li>ISOLATED: the exclusive cluster is ISOLATED due to not renewed timely. at this moment, the exclusive cluster will be unavailable to create new cloud disks, and the corresponding cloud disks will also be inoperable.</li>.
                     * @param _cdcState Exclusive cluster status. value ranges from:<br><li>NORMAL: NORMAL;</li><br><li>CLOSED: CLOSED. at this time, the exclusive cluster will be unavailable to create new cloud disks;</li><br><li>FAULT: abnormal exclusive cluster status. at this point, the exclusive cluster will be inoperable, and the tencent cloud ops team will promptly fix the cluster;</li><br><li>ISOLATED: the exclusive cluster is ISOLATED due to not renewed timely. at this moment, the exclusive cluster will be unavailable to create new cloud disks, and the corresponding cloud disks will also be inoperable.</li>.
                     * 
                     */
                    void SetCdcState(const std::string& _cdcState);

                    /**
                     * 判断参数 CdcState 是否已赋值
                     * @return CdcState 是否已赋值
                     * 
                     */
                    bool CdcStateHasBeenSet() const;

                    /**
                     * 获取Specifies the AZ ID of the exclusive cluster.
                     * @return Zone Specifies the AZ ID of the exclusive cluster.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Specifies the AZ ID of the exclusive cluster.
                     * @param _zone Specifies the AZ ID of the exclusive cluster.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取
                     * @return CdcName 
                     * 
                     */
                    std::string GetCdcName() const;

                    /**
                     * 设置
                     * @param _cdcName 
                     * 
                     */
                    void SetCdcName(const std::string& _cdcName);

                    /**
                     * 判断参数 CdcName 是否已赋值
                     * @return CdcName 是否已赋值
                     * 
                     */
                    bool CdcNameHasBeenSet() const;

                    /**
                     * 获取Specifies the capacity size of the dedicated cluster.
                     * @return CdcResource Specifies the capacity size of the dedicated cluster.
                     * 
                     */
                    CdcSize GetCdcResource() const;

                    /**
                     * 设置Specifies the capacity size of the dedicated cluster.
                     * @param _cdcResource Specifies the capacity size of the dedicated cluster.
                     * 
                     */
                    void SetCdcResource(const CdcSize& _cdcResource);

                    /**
                     * 判断参数 CdcResource 是否已赋值
                     * @return CdcResource 是否已赋值
                     * 
                     */
                    bool CdcResourceHasBeenSet() const;

                    /**
                     * 获取
                     * @return CdcId 
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置
                     * @param _cdcId 
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster type. valid values: <br><li>CLOUD_BASIC: BASIC CLOUD disk cluster</li><br><li>CLOUD_PREMIUM: high-performance CLOUD block storage cluster</li><br><li>CLOUD_SSD: SSD CLOUD disk cluster.</li>.
                     * @return DiskType Exclusive cluster type. valid values: <br><li>CLOUD_BASIC: BASIC CLOUD disk cluster</li><br><li>CLOUD_PREMIUM: high-performance CLOUD block storage cluster</li><br><li>CLOUD_SSD: SSD CLOUD disk cluster.</li>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Exclusive cluster type. valid values: <br><li>CLOUD_BASIC: BASIC CLOUD disk cluster</li><br><li>CLOUD_PREMIUM: high-performance CLOUD block storage cluster</li><br><li>CLOUD_SSD: SSD CLOUD disk cluster.</li>.
                     * @param _diskType Exclusive cluster type. valid values: <br><li>CLOUD_BASIC: BASIC CLOUD disk cluster</li><br><li>CLOUD_PREMIUM: high-performance CLOUD block storage cluster</li><br><li>CLOUD_SSD: SSD CLOUD disk cluster.</li>.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Expiry time of the dedicated cloud disk cluster.
                     * @return ExpiredTime Expiry time of the dedicated cloud disk cluster.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiry time of the dedicated cloud disk cluster.
                     * @param _expiredTime Expiry time of the dedicated cloud disk cluster.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Creation time of the resource pool.
                     * @return CreatedTime Creation time of the resource pool.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the resource pool.
                     * @param _createdTime Creation time of the resource pool.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Number of cloud disks created in the current cluster.
                     * @return DiskNumber Number of cloud disks created in the current cluster.
                     * 
                     */
                    uint64_t GetDiskNumber() const;

                    /**
                     * 设置Number of cloud disks created in the current cluster.
                     * @param _diskNumber Number of cloud disks created in the current cluster.
                     * 
                     */
                    void SetDiskNumber(const uint64_t& _diskNumber);

                    /**
                     * 判断参数 DiskNumber 是否已赋值
                     * @return DiskNumber 是否已赋值
                     * 
                     */
                    bool DiskNumberHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * Exclusive cluster status. value ranges from:<br><li>NORMAL: NORMAL;</li><br><li>CLOSED: CLOSED. at this time, the exclusive cluster will be unavailable to create new cloud disks;</li><br><li>FAULT: abnormal exclusive cluster status. at this point, the exclusive cluster will be inoperable, and the tencent cloud ops team will promptly fix the cluster;</li><br><li>ISOLATED: the exclusive cluster is ISOLATED due to not renewed timely. at this moment, the exclusive cluster will be unavailable to create new cloud disks, and the corresponding cloud disks will also be inoperable.</li>.
                     */
                    std::string m_cdcState;
                    bool m_cdcStateHasBeenSet;

                    /**
                     * Specifies the AZ ID of the exclusive cluster.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cdcName;
                    bool m_cdcNameHasBeenSet;

                    /**
                     * Specifies the capacity size of the dedicated cluster.
                     */
                    CdcSize m_cdcResource;
                    bool m_cdcResourceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Exclusive cluster type. valid values: <br><li>CLOUD_BASIC: BASIC CLOUD disk cluster</li><br><li>CLOUD_PREMIUM: high-performance CLOUD block storage cluster</li><br><li>CLOUD_SSD: SSD CLOUD disk cluster.</li>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Expiry time of the dedicated cloud disk cluster.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Creation time of the resource pool.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Number of cloud disks created in the current cluster.
                     */
                    uint64_t m_diskNumber;
                    bool m_diskNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CDC_H_
