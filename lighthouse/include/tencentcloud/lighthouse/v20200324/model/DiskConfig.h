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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Cloud disk configuration
                */
                class DiskConfig : public AbstractModel
                {
                public:
                    DiskConfig();
                    ~DiskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<P>Availability zone.</p>.
                     * @return Zone <P>Availability zone.</p>.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<P>Availability zone.</p>.
                     * @param _zone <P>Availability zone.</p>.
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
                     * 获取<p>CLOUD disk type. valid values as follows:</p><li>CLOUD_BASIC: ordinary CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_SSD: SSD CLOUD disk</li>.
                     * @return DiskType <p>CLOUD disk type. valid values as follows:</p><li>CLOUD_BASIC: ordinary CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_SSD: SSD CLOUD disk</li>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>CLOUD disk type. valid values as follows:</p><li>CLOUD_BASIC: ordinary CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_SSD: SSD CLOUD disk</li>.
                     * @param _diskType <p>CLOUD disk type. valid values as follows:</p><li>CLOUD_BASIC: ordinary CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_SSD: SSD CLOUD disk</li>.
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
                     * 获取<P>Cloud block storage (cbs) saleable state.</p>.
                     * @return DiskSalesState <P>Cloud block storage (cbs) saleable state.</p>.
                     * 
                     */
                    std::string GetDiskSalesState() const;

                    /**
                     * 设置<P>Cloud block storage (cbs) saleable state.</p>.
                     * @param _diskSalesState <P>Cloud block storage (cbs) saleable state.</p>.
                     * 
                     */
                    void SetDiskSalesState(const std::string& _diskSalesState);

                    /**
                     * 判断参数 DiskSalesState 是否已赋值
                     * @return DiskSalesState 是否已赋值
                     * 
                     */
                    bool DiskSalesStateHasBeenSet() const;

                    /**
                     * 获取<p>Maximum CBS size.</p><p>unit: GB</p>.
                     * @return MaxDiskSize <p>Maximum CBS size.</p><p>unit: GB</p>.
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置<p>Maximum CBS size.</p><p>unit: GB</p>.
                     * @param _maxDiskSize <p>Maximum CBS size.</p><p>unit: GB</p>.
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Minimum CBS disk size.</p><p>unit: GB</p>.
                     * @return MinDiskSize <p>Minimum CBS disk size.</p><p>unit: GB</p>.
                     * 
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置<p>Minimum CBS disk size.</p><p>unit: GB</p>.
                     * @param _minDiskSize <p>Minimum CBS disk size.</p><p>unit: GB</p>.
                     * 
                     */
                    void SetMinDiskSize(const int64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     * 
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Cloud block storage (cbs) step length.</p><p>unit: GB</p>.
                     * @return DiskStepSize <p>Cloud block storage (cbs) step length.</p><p>unit: GB</p>.
                     * 
                     */
                    int64_t GetDiskStepSize() const;

                    /**
                     * 设置<p>Cloud block storage (cbs) step length.</p><p>unit: GB</p>.
                     * @param _diskStepSize <p>Cloud block storage (cbs) step length.</p><p>unit: GB</p>.
                     * 
                     */
                    void SetDiskStepSize(const int64_t& _diskStepSize);

                    /**
                     * 判断参数 DiskStepSize 是否已赋值
                     * @return DiskStepSize 是否已赋值
                     * 
                     */
                    bool DiskStepSizeHasBeenSet() const;

                private:

                    /**
                     * <P>Availability zone.</p>.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>CLOUD disk type. valid values as follows:</p><li>CLOUD_BASIC: ordinary CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_SSD: SSD CLOUD disk</li>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <P>Cloud block storage (cbs) saleable state.</p>.
                     */
                    std::string m_diskSalesState;
                    bool m_diskSalesStateHasBeenSet;

                    /**
                     * <p>Maximum CBS size.</p><p>unit: GB</p>.
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * <p>Minimum CBS disk size.</p><p>unit: GB</p>.
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * <p>Cloud block storage (cbs) step length.</p><p>unit: GB</p>.
                     */
                    int64_t m_diskStepSize;
                    bool m_diskStepSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_
