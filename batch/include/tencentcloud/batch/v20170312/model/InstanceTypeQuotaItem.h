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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEQUOTAITEM_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEQUOTAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Externals.h>
#include <tencentcloud/batch/v20170312/model/LocalDiskType.h>
#include <tencentcloud/batch/v20170312/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes instance model quota.
                */
                class InstanceTypeQuotaItem : public AbstractModel
                {
                public:
                    InstanceTypeQuotaItem();
                    ~InstanceTypeQuotaItem() = default;
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
                     * 获取Instance model.
                     * @return InstanceType Instance model.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model.
                     * @param InstanceType Instance model.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance billing plan. Valid values: <br><li>POSTPAID_BY_HOUR: pay after use. You are billed for your traffic by the hour.<br><li>`CDHPAID`: [`CDH`](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) billing plan. Applicable to `CDH` only, not the instances on the host.
                     * @return InstanceChargeType Instance billing plan. Valid values: <br><li>POSTPAID_BY_HOUR: pay after use. You are billed for your traffic by the hour.<br><li>`CDHPAID`: [`CDH`](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) billing plan. Applicable to `CDH` only, not the instances on the host.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing plan. Valid values: <br><li>POSTPAID_BY_HOUR: pay after use. You are billed for your traffic by the hour.<br><li>`CDHPAID`: [`CDH`](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) billing plan. Applicable to `CDH` only, not the instances on the host.
                     * @param InstanceChargeType Instance billing plan. Valid values: <br><li>POSTPAID_BY_HOUR: pay after use. You are billed for your traffic by the hour.<br><li>`CDHPAID`: [`CDH`](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) billing plan. Applicable to `CDH` only, not the instances on the host.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取ENI type. For example, 25 represents an ENI of 25 GB.
                     * @return NetworkCard ENI type. For example, 25 represents an ENI of 25 GB.
                     */
                    int64_t GetNetworkCard() const;

                    /**
                     * 设置ENI type. For example, 25 represents an ENI of 25 GB.
                     * @param NetworkCard ENI type. For example, 25 represents an ENI of 25 GB.
                     */
                    void SetNetworkCard(const int64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     */
                    bool NetworkCardHasBeenSet() const;

                    /**
                     * 获取Additional data.
Note: This field may return null, indicating that no valid value is found.
                     * @return Externals Additional data.
Note: This field may return null, indicating that no valid value is found.
                     */
                    Externals GetExternals() const;

                    /**
                     * 设置Additional data.
Note: This field may return null, indicating that no valid value is found.
                     * @param Externals Additional data.
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetExternals(const Externals& _externals);

                    /**
                     * 判断参数 Externals 是否已赋值
                     * @return Externals 是否已赋值
                     */
                    bool ExternalsHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores of an instance model.
                     * @return Cpu Number of CPU cores of an instance model.
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores of an instance model.
                     * @param Cpu Number of CPU cores of an instance model.
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Instance memory capacity; unit: `GB`.
                     * @return Memory Instance memory capacity; unit: `GB`.
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Instance memory capacity; unit: `GB`.
                     * @param Memory Instance memory capacity; unit: `GB`.
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Instance model family.
                     * @return InstanceFamily Instance model family.
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Instance model family.
                     * @param InstanceFamily Instance model family.
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Model name.
                     * @return TypeName Model name.
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Model name.
                     * @param TypeName Model name.
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取List of local disk specifications. If the parameter returns null, it means that local disks cannot be created.
                     * @return LocalDiskTypeList List of local disk specifications. If the parameter returns null, it means that local disks cannot be created.
                     */
                    std::vector<LocalDiskType> GetLocalDiskTypeList() const;

                    /**
                     * 设置List of local disk specifications. If the parameter returns null, it means that local disks cannot be created.
                     * @param LocalDiskTypeList List of local disk specifications. If the parameter returns null, it means that local disks cannot be created.
                     */
                    void SetLocalDiskTypeList(const std::vector<LocalDiskType>& _localDiskTypeList);

                    /**
                     * 判断参数 LocalDiskTypeList 是否已赋值
                     * @return LocalDiskTypeList 是否已赋值
                     */
                    bool LocalDiskTypeListHasBeenSet() const;

                    /**
                     * 获取Whether an instance model is available. Valid values: <br><li>SELL: available <br><li>SOLD_OUT: sold out
                     * @return Status Whether an instance model is available. Valid values: <br><li>SELL: available <br><li>SOLD_OUT: sold out
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether an instance model is available. Valid values: <br><li>SELL: available <br><li>SOLD_OUT: sold out
                     * @param Status Whether an instance model is available. Valid values: <br><li>SELL: available <br><li>SOLD_OUT: sold out
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Price of an instance model.
                     * @return Price Price of an instance model.
                     */
                    ItemPrice GetPrice() const;

                    /**
                     * 设置Price of an instance model.
                     * @param Price Price of an instance model.
                     */
                    void SetPrice(const ItemPrice& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Details of out-of-stock items
Note: this field may return null, indicating that no valid value is obtained.
                     * @return SoldOutReason Details of out-of-stock items
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string GetSoldOutReason() const;

                    /**
                     * 设置Details of out-of-stock items
Note: this field may return null, indicating that no valid value is obtained.
                     * @param SoldOutReason Details of out-of-stock items
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    void SetSoldOutReason(const std::string& _soldOutReason);

                    /**
                     * 判断参数 SoldOutReason 是否已赋值
                     * @return SoldOutReason 是否已赋值
                     */
                    bool SoldOutReasonHasBeenSet() const;

                    /**
                     * 获取Private network bandwidth, in Gbps.
                     * @return InstanceBandwidth Private network bandwidth, in Gbps.
                     */
                    double GetInstanceBandwidth() const;

                    /**
                     * 设置Private network bandwidth, in Gbps.
                     * @param InstanceBandwidth Private network bandwidth, in Gbps.
                     */
                    void SetInstanceBandwidth(const double& _instanceBandwidth);

                    /**
                     * 判断参数 InstanceBandwidth 是否已赋值
                     * @return InstanceBandwidth 是否已赋值
                     */
                    bool InstanceBandwidthHasBeenSet() const;

                    /**
                     * 获取The max packet sending and receiving capability (in 10k PPS).
                     * @return InstancePps The max packet sending and receiving capability (in 10k PPS).
                     */
                    int64_t GetInstancePps() const;

                    /**
                     * 设置The max packet sending and receiving capability (in 10k PPS).
                     * @param InstancePps The max packet sending and receiving capability (in 10k PPS).
                     */
                    void SetInstancePps(const int64_t& _instancePps);

                    /**
                     * 判断参数 InstancePps 是否已赋值
                     * @return InstancePps 是否已赋值
                     */
                    bool InstancePpsHasBeenSet() const;

                    /**
                     * 获取Number of local storage blocks.
                     * @return StorageBlockAmount Number of local storage blocks.
                     */
                    int64_t GetStorageBlockAmount() const;

                    /**
                     * 设置Number of local storage blocks.
                     * @param StorageBlockAmount Number of local storage blocks.
                     */
                    void SetStorageBlockAmount(const int64_t& _storageBlockAmount);

                    /**
                     * 判断参数 StorageBlockAmount 是否已赋值
                     * @return StorageBlockAmount 是否已赋值
                     */
                    bool StorageBlockAmountHasBeenSet() const;

                    /**
                     * 获取CPU type.
                     * @return CpuType CPU type.
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU type.
                     * @param CpuType CPU type.
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取Number of GPUs of the instance.
                     * @return Gpu Number of GPUs of the instance.
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置Number of GPUs of the instance.
                     * @param Gpu Number of GPUs of the instance.
                     */
                    void SetGpu(const int64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取Number of FPGAs of the instance.
                     * @return Fpga Number of FPGAs of the instance.
                     */
                    int64_t GetFpga() const;

                    /**
                     * 设置Number of FPGAs of the instance.
                     * @param Fpga Number of FPGAs of the instance.
                     */
                    void SetFpga(const int64_t& _fpga);

                    /**
                     * 判断参数 Fpga 是否已赋值
                     * @return Fpga 是否已赋值
                     */
                    bool FpgaHasBeenSet() const;

                    /**
                     * 获取Descriptive information of the instance.
                     * @return Remark Descriptive information of the instance.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Descriptive information of the instance.
                     * @param Remark Descriptive information of the instance.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Availability zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance model.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance billing plan. Valid values: <br><li>POSTPAID_BY_HOUR: pay after use. You are billed for your traffic by the hour.<br><li>`CDHPAID`: [`CDH`](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) billing plan. Applicable to `CDH` only, not the instances on the host.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * ENI type. For example, 25 represents an ENI of 25 GB.
                     */
                    int64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                    /**
                     * Additional data.
Note: This field may return null, indicating that no valid value is found.
                     */
                    Externals m_externals;
                    bool m_externalsHasBeenSet;

                    /**
                     * Number of CPU cores of an instance model.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Instance memory capacity; unit: `GB`.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Instance model family.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Model name.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * List of local disk specifications. If the parameter returns null, it means that local disks cannot be created.
                     */
                    std::vector<LocalDiskType> m_localDiskTypeList;
                    bool m_localDiskTypeListHasBeenSet;

                    /**
                     * Whether an instance model is available. Valid values: <br><li>SELL: available <br><li>SOLD_OUT: sold out
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Price of an instance model.
                     */
                    ItemPrice m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Details of out-of-stock items
Note: this field may return null, indicating that no valid value is obtained.
                     */
                    std::string m_soldOutReason;
                    bool m_soldOutReasonHasBeenSet;

                    /**
                     * Private network bandwidth, in Gbps.
                     */
                    double m_instanceBandwidth;
                    bool m_instanceBandwidthHasBeenSet;

                    /**
                     * The max packet sending and receiving capability (in 10k PPS).
                     */
                    int64_t m_instancePps;
                    bool m_instancePpsHasBeenSet;

                    /**
                     * Number of local storage blocks.
                     */
                    int64_t m_storageBlockAmount;
                    bool m_storageBlockAmountHasBeenSet;

                    /**
                     * CPU type.
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * Number of GPUs of the instance.
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * Number of FPGAs of the instance.
                     */
                    int64_t m_fpga;
                    bool m_fpgaHasBeenSet;

                    /**
                     * Descriptive information of the instance.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCETYPEQUOTAITEM_H_
