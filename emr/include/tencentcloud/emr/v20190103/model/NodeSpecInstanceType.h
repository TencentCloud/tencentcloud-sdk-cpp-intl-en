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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecDisk.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Node specifications type.
                */
                class NodeSpecInstanceType : public AbstractModel
                {
                public:
                    NodeSpecInstanceType();
                    ~NodeSpecInstanceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifications.
                     * @return InstanceType Specifications.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specifications.
                     * @param _instanceType Specifications.
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
                     * 获取4
                     * @return Cpu 4
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置4
                     * @param _cpu 4
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取8, in GB.
                     * @return Memory 8, in GB.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置8, in GB.
                     * @param _memory 8, in GB.
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Order, with the smaller coming first.
                     * @return Order Order, with the smaller coming first.
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Order, with the smaller coming first.
                     * @param _order Order, with the smaller coming first.
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Quantity.
                     * @return Num Quantity.
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置Quantity.
                     * @param _num Quantity.
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Reasons for running out of stock.
                     * @return SellOutReason Reasons for running out of stock.
                     * 
                     */
                    std::string GetSellOutReason() const;

                    /**
                     * 设置Reasons for running out of stock.
                     * @param _sellOutReason Reasons for running out of stock.
                     * 
                     */
                    void SetSellOutReason(const std::string& _sellOutReason);

                    /**
                     * 判断参数 SellOutReason 是否已赋值
                     * @return SellOutReason 是否已赋值
                     * 
                     */
                    bool SellOutReasonHasBeenSet() const;

                    /**
                     * 获取System disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SystemDisk System disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeSpecDisk> GetSystemDisk() const;

                    /**
                     * 设置System disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _systemDisk System disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemDisk(const std::vector<NodeSpecDisk>& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataDisk Data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeSpecDisk> GetDataDisk() const;

                    /**
                     * 设置Data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataDisk Data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDisk(const std::vector<NodeSpecDisk>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取Local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocalDataDisk Local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeSpecDisk> GetLocalDataDisk() const;

                    /**
                     * 设置Local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _localDataDisk Local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocalDataDisk(const std::vector<NodeSpecDisk>& _localDataDisk);

                    /**
                     * 判断参数 LocalDataDisk 是否已赋值
                     * @return LocalDataDisk 是否已赋值
                     * 
                     */
                    bool LocalDataDiskHasBeenSet() const;

                    /**
                     * 获取Reasons for running out of stock.
                     * @return SoldOutReason Reasons for running out of stock.
                     * 
                     */
                    std::string GetSoldOutReason() const;

                    /**
                     * 设置Reasons for running out of stock.
                     * @param _soldOutReason Reasons for running out of stock.
                     * 
                     */
                    void SetSoldOutReason(const std::string& _soldOutReason);

                    /**
                     * 判断参数 SoldOutReason 是否已赋值
                     * @return SoldOutReason 是否已赋值
                     * 
                     */
                    bool SoldOutReasonHasBeenSet() const;

                    /**
                     * 获取Model category.
                     * @return InstanceFamily Model category.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Model category.
                     * @param _instanceFamily Model category.
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Category.
                     * @return Type Category.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Category.
                     * @param _type Category.
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
                     * 获取Category name.
                     * @return TypeName Category name.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Category name.
                     * @param _typeName Category name.
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
                     * 获取Category classification.
                     * @return FamilyName Category classification.
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置Category classification.
                     * @param _familyName Category classification.
                     * 
                     */
                    void SetFamilyName(const std::string& _familyName);

                    /**
                     * 判断参数 FamilyName 是否已赋值
                     * @return FamilyName 是否已赋值
                     * 
                     */
                    bool FamilyNameHasBeenSet() const;

                    /**
                     * 获取CPU type.
                     * @return CpuType CPU type.
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU type.
                     * @param _cpuType CPU type.
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取RunOut (denoting running out of stock), Less (denoting low inventory), and Enough (denoting sufficient).
                     * @return Remark RunOut (denoting running out of stock), Less (denoting low inventory), and Enough (denoting sufficient).
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置RunOut (denoting running out of stock), Less (denoting low inventory), and Enough (denoting sufficient).
                     * @param _remark RunOut (denoting running out of stock), Less (denoting low inventory), and Enough (denoting sufficient).
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Original price.
                     * @return OriginPrice Original price.
                     * 
                     */
                    double GetOriginPrice() const;

                    /**
                     * 设置Original price.
                     * @param _originPrice Original price.
                     * 
                     */
                    void SetOriginPrice(const double& _originPrice);

                    /**
                     * 判断参数 OriginPrice 是否已赋值
                     * @return OriginPrice 是否已赋值
                     * 
                     */
                    bool OriginPriceHasBeenSet() const;

                    /**
                     * 获取Supported purchase terms for committed use billing models.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrepaidUnderwritePeriods Supported purchase terms for committed use billing models.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置Supported purchase terms for committed use billing models.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _prepaidUnderwritePeriods Supported purchase terms for committed use billing models.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrepaidUnderwritePeriods(const std::vector<int64_t>& _prepaidUnderwritePeriods);

                    /**
                     * 判断参数 PrepaidUnderwritePeriods 是否已赋值
                     * @return PrepaidUnderwritePeriods 是否已赋值
                     * 
                     */
                    bool PrepaidUnderwritePeriodsHasBeenSet() const;

                    /**
                     * 获取GPU information.
                     * @return GpuDesc GPU information.
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置GPU information.
                     * @param _gpuDesc GPU information.
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                private:

                    /**
                     * Specifications.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 4
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 8, in GB.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Order, with the smaller coming first.
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Quantity.
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Reasons for running out of stock.
                     */
                    std::string m_sellOutReason;
                    bool m_sellOutReasonHasBeenSet;

                    /**
                     * System disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeSpecDisk> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeSpecDisk> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * Local data disk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeSpecDisk> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                    /**
                     * Reasons for running out of stock.
                     */
                    std::string m_soldOutReason;
                    bool m_soldOutReasonHasBeenSet;

                    /**
                     * Model category.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node type.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Category.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Category name.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Category classification.
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                    /**
                     * CPU type.
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * RunOut (denoting running out of stock), Less (denoting low inventory), and Enough (denoting sufficient).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Original price.
                     */
                    double m_originPrice;
                    bool m_originPriceHasBeenSet;

                    /**
                     * Supported purchase terms for committed use billing models.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

                    /**
                     * GPU information.
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_
