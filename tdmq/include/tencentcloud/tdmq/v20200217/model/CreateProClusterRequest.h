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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcInfo.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateProCluster request structure.
                */
                class CreateProClusterRequest : public AbstractModel
                {
                public:
                    CreateProClusterRequest();
                    ~CreateProClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Multi-AZ deployment selects three AZs, example [200002,200003,200004]<br>Single-AZ deployment selects one availability zone, example [200002]</p><p>When PULSAR.P2.MINI1 is selected, it only supports two AZs. Other models support three AZs.</p>
                     * @return ZoneIds <p>Multi-AZ deployment selects three AZs, example [200002,200003,200004]<br>Single-AZ deployment selects one availability zone, example [200002]</p><p>When PULSAR.P2.MINI1 is selected, it only supports two AZs. Other models support three AZs.</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>Multi-AZ deployment selects three AZs, example [200002,200003,200004]<br>Single-AZ deployment selects one availability zone, example [200002]</p><p>When PULSAR.P2.MINI1 is selected, it only supports two AZs. Other models support three AZs.</p>
                     * @param _zoneIds <p>Multi-AZ deployment selects three AZs, example [200002,200003,200004]<br>Single-AZ deployment selects one availability zone, example [200002]</p><p>When PULSAR.P2.MINI1 is selected, it only supports two AZs. Other models support three AZs.</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster specification code<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * @return ProductName <p>Cluster specification code<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>Cluster specification code<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * @param _productName <p>Cluster specification code<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>1: true, enable automatic monthly renewal</p><p>0: false, disable automatic monthly renewal</p>
                     * @return AutoRenewFlag <p>1: true, enable automatic monthly renewal</p><p>0: false, disable automatic monthly renewal</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>1: true, enable automatic monthly renewal</p><p>0: false, disable automatic monthly renewal</p>
                     * @param _autoRenewFlag <p>1: true, enable automatic monthly renewal</p><p>0: false, disable automatic monthly renewal</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Purchase period, value ranges from 1 to 50</p>
                     * @return TimeSpan <p>Purchase period, value ranges from 1 to 50</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Purchase period, value ranges from 1 to 50</p>
                     * @param _timeSpan <p>Purchase period, value ranges from 1 to 50</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name cannot be empty. It supports numbers, letters, Chinese, and symbols "-_=:.", with length not exceeding 64 characters.</p>
                     * @return ClusterName <p>Cluster name cannot be empty. It supports numbers, letters, Chinese, and symbols "-_=:.", with length not exceeding 64 characters.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name cannot be empty. It supports numbers, letters, Chinese, and symbols "-_=:.", with length not exceeding 64 characters.</p>
                     * @param _clusterName <p>Cluster name cannot be empty. It supports numbers, letters, Chinese, and symbols "-_=:.", with length not exceeding 64 characters.</p>
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
                     * 获取<p>Whether to automatically select voucher 1 Yes 0 No Default is 0</p>
                     * @return AutoVoucher <p>Whether to automatically select voucher 1 Yes 0 No Default is 0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to automatically select voucher 1 Yes 0 No Default is 0</p>
                     * @param _autoVoucher <p>Whether to automatically select voucher 1 Yes 0 No Default is 0</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Storage specification<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * @return StorageSize <p>Storage specification<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置<p>Storage specification<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * @param _storageSize <p>Storage specification<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>vpc network tag</p>
                     * @return Vpc <p>vpc network tag</p>
                     * 
                     */
                    VpcInfo GetVpc() const;

                    /**
                     * 设置<p>vpc network tag</p>
                     * @param _vpc <p>vpc network tag</p>
                     * 
                     */
                    void SetVpc(const VpcInfo& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取<p>Tag list of the cluster (abandoned)</p>
                     * @return Tags <p>Tag list of the cluster (abandoned)</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag list of the cluster (abandoned)</p>
                     * @param _tags <p>Tag list of the cluster (abandoned)</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster version information</p>
                     * @return InstanceVersion <p>Cluster version information</p>
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置<p>Cluster version information</p>
                     * @param _instanceVersion <p>Cluster version information</p>
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Multi-AZ deployment selects three AZs, example [200002,200003,200004]<br>Single-AZ deployment selects one availability zone, example [200002]</p><p>When PULSAR.P2.MINI1 is selected, it only supports two AZs. Other models support three AZs.</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Cluster specification code<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>1: true, enable automatic monthly renewal</p><p>0: false, disable automatic monthly renewal</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>Purchase period, value ranges from 1 to 50</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Cluster name cannot be empty. It supports numbers, letters, Chinese, and symbols "-_=:.", with length not exceeding 64 characters.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Whether to automatically select voucher 1 Yes 0 No Default is 0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Storage specification<br>See <a href="https://www.tencentcloud.com/document/product/1179/83705?from_cn_redirect=1">professional cluster specifications</a></p>
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>vpc network tag</p>
                     */
                    VpcInfo m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * <p>Tag list of the cluster (abandoned)</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Cluster version information</p>
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_
