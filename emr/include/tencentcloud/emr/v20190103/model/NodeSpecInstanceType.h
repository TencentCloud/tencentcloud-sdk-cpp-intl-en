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
                     * 获取<p>Specifications.</p>
                     * @return InstanceType <p>Specifications.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Specifications.</p>
                     * @param _instanceType <p>Specifications.</p>
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
                     * 获取<p>4</p>
                     * @return Cpu <p>4</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>4</p>
                     * @param _cpu <p>4</p>
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
                     * 获取<p>8, unit: GB.</p>
                     * @return Memory <p>8, unit: GB.</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>8, unit: GB.</p>
                     * @param _memory <p>8, unit: GB.</p>
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
                     * 获取<p>Sorting order. Smaller values come first.</p>
                     * @return Order <p>Sorting order. Smaller values come first.</p>
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置<p>Sorting order. Smaller values come first.</p>
                     * @param _order <p>Sorting order. Smaller values come first.</p>
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
                     * 获取<p>Quantity.</p>
                     * @return Num <p>Quantity.</p>
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置<p>Quantity.</p>
                     * @param _num <p>Quantity.</p>
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
                     * 获取<p>Sold-out reason.</p>
                     * @return SellOutReason <p>Sold-out reason.</p>
                     * 
                     */
                    std::string GetSellOutReason() const;

                    /**
                     * 设置<p>Sold-out reason.</p>
                     * @param _sellOutReason <p>Sold-out reason.</p>
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
                     * 获取<p>System disk.</p>
                     * @return SystemDisk <p>System disk.</p>
                     * 
                     */
                    std::vector<NodeSpecDisk> GetSystemDisk() const;

                    /**
                     * 设置<p>System disk.</p>
                     * @param _systemDisk <p>System disk.</p>
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
                     * 获取<p>Data disk.</p>
                     * @return DataDisk <p>Data disk.</p>
                     * 
                     */
                    std::vector<NodeSpecDisk> GetDataDisk() const;

                    /**
                     * 设置<p>Data disk.</p>
                     * @param _dataDisk <p>Data disk.</p>
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
                     * 获取<p>Local data disk.</p>
                     * @return LocalDataDisk <p>Local data disk.</p>
                     * 
                     */
                    std::vector<NodeSpecDisk> GetLocalDataDisk() const;

                    /**
                     * 设置<p>Local data disk.</p>
                     * @param _localDataDisk <p>Local data disk.</p>
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
                     * 获取<p>Sold-out reason.</p>
                     * @return SoldOutReason <p>Sold-out reason.</p>
                     * 
                     */
                    std::string GetSoldOutReason() const;

                    /**
                     * 设置<p>Sold-out reason.</p>
                     * @param _soldOutReason <p>Sold-out reason.</p>
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
                     * 获取<p>Instance family.</p>
                     * @return InstanceFamily <p>Instance family.</p>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置<p>Instance family.</p>
                     * @param _instanceFamily <p>Instance family.</p>
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
                     * 获取<p>Node name.</p>
                     * @return NodeName <p>Node name.</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>Node name.</p>
                     * @param _nodeName <p>Node name.</p>
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
                     * 获取<p>Node type.</p>
                     * @return NodeType <p>Node type.</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node type.</p>
                     * @param _nodeType <p>Node type.</p>
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
                     * 获取<p>Category.</p>
                     * @return Type <p>Category.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Category.</p>
                     * @param _type <p>Category.</p>
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
                     * 获取<p>Category name.</p>
                     * @return TypeName <p>Category name.</p>
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置<p>Category name.</p>
                     * @param _typeName <p>Category name.</p>
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
                     * 获取<p>Category classification.</p>
                     * @return FamilyName <p>Category classification.</p>
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置<p>Category classification.</p>
                     * @param _familyName <p>Category classification.</p>
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
                     * 获取<p>CPU type.</p>
                     * @return CpuType <p>CPU type.</p>
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置<p>CPU type.</p>
                     * @param _cpuType <p>CPU type.</p>
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
                     * 获取<p>RunOut: sold out; Less: low inventory; Enough: sufficient inventory</p>
                     * @return Remark <p>RunOut: sold out; Less: low inventory; Enough: sufficient inventory</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>RunOut: sold out; Less: low inventory; Enough: sufficient inventory</p>
                     * @param _remark <p>RunOut: sold out; Less: low inventory; Enough: sufficient inventory</p>
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
                     * 获取<p>Original price.</p>
                     * @return OriginPrice <p>Original price.</p>
                     * 
                     */
                    double GetOriginPrice() const;

                    /**
                     * 设置<p>Original price.</p>
                     * @param _originPrice <p>Original price.</p>
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
                     * 获取<p>Purchase duration supported by instance types using the committed use billing mode.</p>
                     * @return PrepaidUnderwritePeriods <p>Purchase duration supported by instance types using the committed use billing mode.</p>
                     * 
                     */
                    std::vector<int64_t> GetPrepaidUnderwritePeriods() const;

                    /**
                     * 设置<p>Purchase duration supported by instance types using the committed use billing mode.</p>
                     * @param _prepaidUnderwritePeriods <p>Purchase duration supported by instance types using the committed use billing mode.</p>
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
                     * 获取<p>GPU information.</p>
                     * @return GpuDesc <p>GPU information.</p>
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置<p>GPU information.</p>
                     * @param _gpuDesc <p>GPU information.</p>
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                    /**
                     * 获取<p>Number of quotas.</p>
                     * @return QuotaNum <p>Number of quotas.</p>
                     * 
                     */
                    int64_t GetQuotaNum() const;

                    /**
                     * 设置<p>Number of quotas.</p>
                     * @param _quotaNum <p>Number of quotas.</p>
                     * 
                     */
                    void SetQuotaNum(const int64_t& _quotaNum);

                    /**
                     * 判断参数 QuotaNum 是否已赋值
                     * @return QuotaNum 是否已赋值
                     * 
                     */
                    bool QuotaNumHasBeenSet() const;

                    /**
                     * 获取<p>Quota unit.</p>
                     * @return QuotaUnit <p>Quota unit.</p>
                     * 
                     */
                    std::string GetQuotaUnit() const;

                    /**
                     * 设置<p>Quota unit.</p>
                     * @param _quotaUnit <p>Quota unit.</p>
                     * 
                     */
                    void SetQuotaUnit(const std::string& _quotaUnit);

                    /**
                     * 判断参数 QuotaUnit 是否已赋值
                     * @return QuotaUnit 是否已赋值
                     * 
                     */
                    bool QuotaUnitHasBeenSet() const;

                    /**
                     * 获取<p>Whether a high-performance computing cluster needs to be provided.</p>
                     * @return NeedHpcClusterId <p>Whether a high-performance computing cluster needs to be provided.</p>
                     * 
                     */
                    bool GetNeedHpcClusterId() const;

                    /**
                     * 设置<p>Whether a high-performance computing cluster needs to be provided.</p>
                     * @param _needHpcClusterId <p>Whether a high-performance computing cluster needs to be provided.</p>
                     * 
                     */
                    void SetNeedHpcClusterId(const bool& _needHpcClusterId);

                    /**
                     * 判断参数 NeedHpcClusterId 是否已赋值
                     * @return NeedHpcClusterId 是否已赋值
                     * 
                     */
                    bool NeedHpcClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a GPU instance type.</p>
                     * @return IsGpuInstance <p>Whether it is a GPU instance type.</p>
                     * 
                     */
                    bool GetIsGpuInstance() const;

                    /**
                     * 设置<p>Whether it is a GPU instance type.</p>
                     * @param _isGpuInstance <p>Whether it is a GPU instance type.</p>
                     * 
                     */
                    void SetIsGpuInstance(const bool& _isGpuInstance);

                    /**
                     * 判断参数 IsGpuInstance 是否已赋值
                     * @return IsGpuInstance 是否已赋值
                     * 
                     */
                    bool IsGpuInstanceHasBeenSet() const;

                    /**
                     * 获取<p>GPU resource definition in the Kubernetes scenario.</p>
                     * @return GpuResourceKey <p>GPU resource definition in the Kubernetes scenario.</p>
                     * 
                     */
                    std::string GetGpuResourceKey() const;

                    /**
                     * 设置<p>GPU resource definition in the Kubernetes scenario.</p>
                     * @param _gpuResourceKey <p>GPU resource definition in the Kubernetes scenario.</p>
                     * 
                     */
                    void SetGpuResourceKey(const std::string& _gpuResourceKey);

                    /**
                     * 判断参数 GpuResourceKey 是否已赋值
                     * @return GpuResourceKey 是否已赋值
                     * 
                     */
                    bool GpuResourceKeyHasBeenSet() const;

                    /**
                     * 获取<p>Number of GPU cards.</p>
                     * @return GpuNum <p>Number of GPU cards.</p>
                     * 
                     */
                    int64_t GetGpuNum() const;

                    /**
                     * 设置<p>Number of GPU cards.</p>
                     * @param _gpuNum <p>Number of GPU cards.</p>
                     * 
                     */
                    void SetGpuNum(const int64_t& _gpuNum);

                    /**
                     * 判断参数 GpuNum 是否已赋值
                     * @return GpuNum 是否已赋值
                     * 
                     */
                    bool GpuNumHasBeenSet() const;

                private:

                    /**
                     * <p>Specifications.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>4</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>8, unit: GB.</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>Sorting order. Smaller values come first.</p>
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Quantity.</p>
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * <p>Sold-out reason.</p>
                     */
                    std::string m_sellOutReason;
                    bool m_sellOutReasonHasBeenSet;

                    /**
                     * <p>System disk.</p>
                     */
                    std::vector<NodeSpecDisk> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>Data disk.</p>
                     */
                    std::vector<NodeSpecDisk> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * <p>Local data disk.</p>
                     */
                    std::vector<NodeSpecDisk> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                    /**
                     * <p>Sold-out reason.</p>
                     */
                    std::string m_soldOutReason;
                    bool m_soldOutReasonHasBeenSet;

                    /**
                     * <p>Instance family.</p>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * <p>Node name.</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>Node type.</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Category.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Category name.</p>
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * <p>Category classification.</p>
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                    /**
                     * <p>CPU type.</p>
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * <p>RunOut: sold out; Less: low inventory; Enough: sufficient inventory</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Original price.</p>
                     */
                    double m_originPrice;
                    bool m_originPriceHasBeenSet;

                    /**
                     * <p>Purchase duration supported by instance types using the committed use billing mode.</p>
                     */
                    std::vector<int64_t> m_prepaidUnderwritePeriods;
                    bool m_prepaidUnderwritePeriodsHasBeenSet;

                    /**
                     * <p>GPU information.</p>
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                    /**
                     * <p>Number of quotas.</p>
                     */
                    int64_t m_quotaNum;
                    bool m_quotaNumHasBeenSet;

                    /**
                     * <p>Quota unit.</p>
                     */
                    std::string m_quotaUnit;
                    bool m_quotaUnitHasBeenSet;

                    /**
                     * <p>Whether a high-performance computing cluster needs to be provided.</p>
                     */
                    bool m_needHpcClusterId;
                    bool m_needHpcClusterIdHasBeenSet;

                    /**
                     * <p>Whether it is a GPU instance type.</p>
                     */
                    bool m_isGpuInstance;
                    bool m_isGpuInstanceHasBeenSet;

                    /**
                     * <p>GPU resource definition in the Kubernetes scenario.</p>
                     */
                    std::string m_gpuResourceKey;
                    bool m_gpuResourceKeyHasBeenSet;

                    /**
                     * <p>Number of GPU cards.</p>
                     */
                    int64_t m_gpuNum;
                    bool m_gpuNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECINSTANCETYPE_H_
