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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDERITEM_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC sub-order
                */
                class DedicatedClusterOrderItem : public AbstractModel
                {
                public:
                    DedicatedClusterOrderItem();
                    ~DedicatedClusterOrderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDC type id
                     * @return DedicatedClusterTypeId CDC type id
                     * 
                     */
                    std::string GetDedicatedClusterTypeId() const;

                    /**
                     * 设置CDC type id
                     * @param _dedicatedClusterTypeId CDC type id
                     * 
                     */
                    void SetDedicatedClusterTypeId(const std::string& _dedicatedClusterTypeId);

                    /**
                     * 判断参数 DedicatedClusterTypeId 是否已赋值
                     * @return DedicatedClusterTypeId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdHasBeenSet() const;

                    /**
                     * 获取List of supported storage types
                     * @return SupportedStorageType List of supported storage types
                     * 
                     */
                    std::vector<std::string> GetSupportedStorageType() const;

                    /**
                     * 设置List of supported storage types
                     * @param _supportedStorageType List of supported storage types
                     * 
                     */
                    void SetSupportedStorageType(const std::vector<std::string>& _supportedStorageType);

                    /**
                     * 判断参数 SupportedStorageType 是否已赋值
                     * @return SupportedStorageType 是否已赋值
                     * 
                     */
                    bool SupportedStorageTypeHasBeenSet() const;

                    /**
                     * 获取Supported uplink switch transmission rate (GiB)
                     * @return SupportedUplinkSpeed Supported uplink switch transmission rate (GiB)
                     * 
                     */
                    std::vector<int64_t> GetSupportedUplinkSpeed() const;

                    /**
                     * 设置Supported uplink switch transmission rate (GiB)
                     * @param _supportedUplinkSpeed Supported uplink switch transmission rate (GiB)
                     * 
                     */
                    void SetSupportedUplinkSpeed(const std::vector<int64_t>& _supportedUplinkSpeed);

                    /**
                     * 判断参数 SupportedUplinkSpeed 是否已赋值
                     * @return SupportedUplinkSpeed 是否已赋值
                     * 
                     */
                    bool SupportedUplinkSpeedHasBeenSet() const;

                    /**
                     * 获取List of supported instance families
                     * @return SupportedInstanceFamily List of supported instance families
                     * 
                     */
                    std::vector<std::string> GetSupportedInstanceFamily() const;

                    /**
                     * 设置List of supported instance families
                     * @param _supportedInstanceFamily List of supported instance families
                     * 
                     */
                    void SetSupportedInstanceFamily(const std::vector<std::string>& _supportedInstanceFamily);

                    /**
                     * 判断参数 SupportedInstanceFamily 是否已赋值
                     * @return SupportedInstanceFamily 是否已赋值
                     * 
                     */
                    bool SupportedInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Floor weight capacity (KG)
                     * @return Weight Floor weight capacity (KG)
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Floor weight capacity (KG)
                     * @param _weight Floor weight capacity (KG)
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Power requirements (KW)
                     * @return PowerDraw Power requirements (KW)
                     * 
                     */
                    double GetPowerDraw() const;

                    /**
                     * 设置Power requirements (KW)
                     * @param _powerDraw Power requirements (KW)
                     * 
                     */
                    void SetPowerDraw(const double& _powerDraw);

                    /**
                     * 判断参数 PowerDraw 是否已赋值
                     * @return PowerDraw 是否已赋值
                     * 
                     */
                    bool PowerDrawHasBeenSet() const;

                    /**
                     * 获取Order status
                     * @return SubOrderStatus Order status
                     * 
                     */
                    std::string GetSubOrderStatus() const;

                    /**
                     * 设置Order status
                     * @param _subOrderStatus Order status
                     * 
                     */
                    void SetSubOrderStatus(const std::string& _subOrderStatus);

                    /**
                     * 判断参数 SubOrderStatus 是否已赋值
                     * @return SubOrderStatus 是否已赋值
                     * 
                     */
                    bool SubOrderStatusHasBeenSet() const;

                    /**
                     * 获取Order creation time
                     * @return CreateTime Order creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Order creation time
                     * @param _createTime Order creation time
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
                     * 获取Sub-order ID
                     * @return SubOrderId Sub-order ID
                     * 
                     */
                    std::string GetSubOrderId() const;

                    /**
                     * 设置Sub-order ID
                     * @param _subOrderId Sub-order ID
                     * 
                     */
                    void SetSubOrderId(const std::string& _subOrderId);

                    /**
                     * 判断参数 SubOrderId 是否已赋值
                     * @return SubOrderId 是否已赋值
                     * 
                     */
                    bool SubOrderIdHasBeenSet() const;

                    /**
                     * 获取Number of linked cluster types
                     * @return Count Number of linked cluster types
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of linked cluster types
                     * @param _count Number of linked cluster types
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Brief description of type
                     * @return Name Brief description of type
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Brief description of type
                     * @param _name Brief description of type
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
                     * 获取Detailed description of type
                     * @return Description Detailed description of type
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Detailed description of type
                     * @param _description Detailed description of type
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
                     * 获取Number of CPUs
                     * @return TotalCpu Number of CPUs
                     * 
                     */
                    int64_t GetTotalCpu() const;

                    /**
                     * 设置Number of CPUs
                     * @param _totalCpu Number of CPUs
                     * 
                     */
                    void SetTotalCpu(const int64_t& _totalCpu);

                    /**
                     * 判断参数 TotalCpu 是否已赋值
                     * @return TotalCpu 是否已赋值
                     * 
                     */
                    bool TotalCpuHasBeenSet() const;

                    /**
                     * 获取Number of memories
                     * @return TotalMem Number of memories
                     * 
                     */
                    int64_t GetTotalMem() const;

                    /**
                     * 设置Number of memories
                     * @param _totalMem Number of memories
                     * 
                     */
                    void SetTotalMem(const int64_t& _totalMem);

                    /**
                     * 判断参数 TotalMem 是否已赋值
                     * @return TotalMem 是否已赋值
                     * 
                     */
                    bool TotalMemHasBeenSet() const;

                    /**
                     * 获取Total GPUs
                     * @return TotalGpu Total GPUs
                     * 
                     */
                    int64_t GetTotalGpu() const;

                    /**
                     * 设置Total GPUs
                     * @param _totalGpu Total GPUs
                     * 
                     */
                    void SetTotalGpu(const int64_t& _totalGpu);

                    /**
                     * 判断参数 TotalGpu 是否已赋值
                     * @return TotalGpu 是否已赋值
                     * 
                     */
                    bool TotalGpuHasBeenSet() const;

                    /**
                     * 获取English type name
                     * @return TypeName English type name
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置English type name
                     * @param _typeName English type name
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Type display 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return ComputeFormat Type display 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetComputeFormat() const;

                    /**
                     * 设置Type display 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _computeFormat Type display 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetComputeFormat(const std::string& _computeFormat);

                    /**
                     * 判断参数 ComputeFormat 是否已赋值
                     * @return ComputeFormat 是否已赋值
                     * 
                     */
                    bool ComputeFormatHasBeenSet() const;

                    /**
                     * 获取Type family 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return TypeFamily Type family 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetTypeFamily() const;

                    /**
                     * 设置Type family 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _typeFamily Type family 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetTypeFamily(const std::string& _typeFamily);

                    /**
                     * 判断参数 TypeFamily 是否已赋值
                     * @return TypeFamily 是否已赋值
                     * 
                     */
                    bool TypeFamilyHasBeenSet() const;

                    /**
                     * 获取0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return SubOrderPayStatus 0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetSubOrderPayStatus() const;

                    /**
                     * 设置0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _subOrderPayStatus 0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetSubOrderPayStatus(const int64_t& _subOrderPayStatus);

                    /**
                     * 判断参数 SubOrderPayStatus 是否已赋值
                     * @return SubOrderPayStatus 是否已赋值
                     * 
                     */
                    bool SubOrderPayStatusHasBeenSet() const;

                private:

                    /**
                     * CDC type id
                     */
                    std::string m_dedicatedClusterTypeId;
                    bool m_dedicatedClusterTypeIdHasBeenSet;

                    /**
                     * List of supported storage types
                     */
                    std::vector<std::string> m_supportedStorageType;
                    bool m_supportedStorageTypeHasBeenSet;

                    /**
                     * Supported uplink switch transmission rate (GiB)
                     */
                    std::vector<int64_t> m_supportedUplinkSpeed;
                    bool m_supportedUplinkSpeedHasBeenSet;

                    /**
                     * List of supported instance families
                     */
                    std::vector<std::string> m_supportedInstanceFamily;
                    bool m_supportedInstanceFamilyHasBeenSet;

                    /**
                     * Floor weight capacity (KG)
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Power requirements (KW)
                     */
                    double m_powerDraw;
                    bool m_powerDrawHasBeenSet;

                    /**
                     * Order status
                     */
                    std::string m_subOrderStatus;
                    bool m_subOrderStatusHasBeenSet;

                    /**
                     * Order creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Sub-order ID
                     */
                    std::string m_subOrderId;
                    bool m_subOrderIdHasBeenSet;

                    /**
                     * Number of linked cluster types
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Brief description of type
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Detailed description of type
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of CPUs
                     */
                    int64_t m_totalCpu;
                    bool m_totalCpuHasBeenSet;

                    /**
                     * Number of memories
                     */
                    int64_t m_totalMem;
                    bool m_totalMemHasBeenSet;

                    /**
                     * Total GPUs
                     */
                    int64_t m_totalGpu;
                    bool m_totalGpuHasBeenSet;

                    /**
                     * English type name
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Type display 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_computeFormat;
                    bool m_computeFormatHasBeenSet;

                    /**
                     * Type family 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_typeFamily;
                    bool m_typeFamilyHasBeenSet;

                    /**
                     * 0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_subOrderPayStatus;
                    bool m_subOrderPayStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDERITEM_H_
