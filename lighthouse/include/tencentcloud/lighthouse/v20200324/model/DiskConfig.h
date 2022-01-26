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
                     * 获取Availability zone.
                     * @return Zone Availability zone.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone.
                     * @param Zone Availability zone.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Cloud disk type.
                     * @return DiskType Cloud disk type.
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk type.
                     * @param DiskType Cloud disk type.
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk sale status.
                     * @return DiskSalesState Cloud disk sale status.
                     */
                    std::string GetDiskSalesState() const;

                    /**
                     * 设置Cloud disk sale status.
                     * @param DiskSalesState Cloud disk sale status.
                     */
                    void SetDiskSalesState(const std::string& _diskSalesState);

                    /**
                     * 判断参数 DiskSalesState 是否已赋值
                     * @return DiskSalesState 是否已赋值
                     */
                    bool DiskSalesStateHasBeenSet() const;

                    /**
                     * 获取Maximum cloud disk size.
                     * @return MaxDiskSize Maximum cloud disk size.
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置Maximum cloud disk size.
                     * @param MaxDiskSize Maximum cloud disk size.
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取Minimum cloud disk size.
                     * @return MinDiskSize Minimum cloud disk size.
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置Minimum cloud disk size.
                     * @param MinDiskSize Minimum cloud disk size.
                     */
                    void SetMinDiskSize(const int64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取Cloud disk increment.
                     * @return DiskStepSize Cloud disk increment.
                     */
                    int64_t GetDiskStepSize() const;

                    /**
                     * 设置Cloud disk increment.
                     * @param DiskStepSize Cloud disk increment.
                     */
                    void SetDiskStepSize(const int64_t& _diskStepSize);

                    /**
                     * 判断参数 DiskStepSize 是否已赋值
                     * @return DiskStepSize 是否已赋值
                     */
                    bool DiskStepSizeHasBeenSet() const;

                private:

                    /**
                     * Availability zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Cloud disk type.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Cloud disk sale status.
                     */
                    std::string m_diskSalesState;
                    bool m_diskSalesStateHasBeenSet;

                    /**
                     * Maximum cloud disk size.
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * Minimum cloud disk size.
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * Cloud disk increment.
                     */
                    int64_t m_diskStepSize;
                    bool m_diskStepSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_
