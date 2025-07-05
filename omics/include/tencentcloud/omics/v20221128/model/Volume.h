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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUME_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Volume
                */
                class Volume : public AbstractModel
                {
                public:
                    Volume();
                    ~Volume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Volume ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VolumeId Volume ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置Volume ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _volumeId Volume ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                    /**
                     * 获取Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentId Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _environmentId Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Volume type. Valid values:
* SHARED: Multi-point mount shared storage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Volume type. Valid values:
* SHARED: Multi-point mount shared storage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Volume type. Valid values:
* SHARED: Multi-point mount shared storage
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Volume type. Valid values:
* SHARED: Multi-point mount shared storage
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Spec Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _spec Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Volume size (GB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Capacity Volume size (GB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置Volume size (GB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _capacity Volume size (GB)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取Volume usage (Byte)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Usage Volume usage (Byte)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUsage() const;

                    /**
                     * 设置Volume usage (Byte)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usage Volume usage (Byte)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsage(const uint64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Volume throughput upper limit (MiB/s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthLimit Volume throughput upper limit (MiB/s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetBandwidthLimit() const;

                    /**
                     * 设置Volume throughput upper limit (MiB/s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidthLimit Volume throughput upper limit (MiB/s)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidthLimit(const double& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取Default mount path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultMountPath Default mount path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultMountPath() const;

                    /**
                     * 设置Default mount path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultMountPath Default mount path
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultMountPath(const std::string& _defaultMountPath);

                    /**
                     * 判断参数 DefaultMountPath 是否已赋值
                     * @return DefaultMountPath 是否已赋值
                     * 
                     */
                    bool DefaultMountPathHasBeenSet() const;

                    /**
                     * 获取Whether it is the default volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDefault Whether it is the default volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDefault Whether it is the default volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Volume ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                    /**
                     * Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Environment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Volume type. Valid values:
* SHARED: Multi-point mount shared storage
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Volume specifications. Valid values:

- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Volume size (GB)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * Volume usage (Byte)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Volume throughput upper limit (MiB/s)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * Default mount path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultMountPath;
                    bool m_defaultMountPathHasBeenSet;

                    /**
                     * Whether it is the default volume.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUME_H_
