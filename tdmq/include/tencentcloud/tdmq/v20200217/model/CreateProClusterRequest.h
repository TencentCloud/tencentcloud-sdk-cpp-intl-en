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
                     * 获取Specifies multi-az deployment with three azs, for example [200002,200003,200004].

Single-AZ deployment selects an availability zone. example: [200002].
                     * @return ZoneIds Specifies multi-az deployment with three azs, for example [200002,200003,200004].

Single-AZ deployment selects an availability zone. example: [200002].
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置Specifies multi-az deployment with three azs, for example [200002,200003,200004].

Single-AZ deployment selects an availability zone. example: [200002].
                     * @param _zoneIds Specifies multi-az deployment with three azs, for example [200002,200003,200004].

Single-AZ deployment selects an availability zone. example: [200002].
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
                     * 获取Cluster specification code.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     * @return ProductName Cluster specification code.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Cluster specification code.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     * @param _productName Cluster specification code.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
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
                     * 获取Specifies the storage specification.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     * @return StorageSize Specifies the storage specification.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Specifies the storage specification.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     * @param _storageSize Specifies the storage specification.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
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
                     * 获取`1`: true. enables automatic monthly renewal.

false. disables automatic monthly renewal.
                     * @return AutoRenewFlag `1`: true. enables automatic monthly renewal.

false. disables automatic monthly renewal.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置`1`: true. enables automatic monthly renewal.

false. disables automatic monthly renewal.
                     * @param _autoRenewFlag `1`: true. enables automatic monthly renewal.

false. disables automatic monthly renewal.
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
                     * 获取Purchase duration. value range: 1–50.
                     * @return TimeSpan Purchase duration. value range: 1–50.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration. value range: 1–50.
                     * @param _timeSpan Purchase duration. value range: 1–50.
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
                     * 获取Specifies the cluster name, which does not support chinese characters and special characters other than hyphens and underscores, with a length of no more than 64 characters.
                     * @return ClusterName Specifies the cluster name, which does not support chinese characters and special characters other than hyphens and underscores, with a length of no more than 64 characters.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Specifies the cluster name, which does not support chinese characters and special characters other than hyphens and underscores, with a length of no more than 64 characters.
                     * @param _clusterName Specifies the cluster name, which does not support chinese characters and special characters other than hyphens and underscores, with a length of no more than 64 characters.
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
                     * 获取Whether to automatically select voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * @return AutoVoucher Whether to automatically select voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically select voucher. valid values: 1 (yes), 0 (no). default is 0.
                     * @param _autoVoucher Whether to automatically select voucher. valid values: 1 (yes), 0 (no). default is 0.
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
                     * 获取Specifies the vpc network tag.
                     * @return Vpc Specifies the vpc network tag.
                     * 
                     */
                    VpcInfo GetVpc() const;

                    /**
                     * 设置Specifies the vpc network tag.
                     * @param _vpc Specifies the vpc network tag.
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
                     * 获取Tag list of the cluster (abandoned).
                     * @return Tags Tag list of the cluster (abandoned).
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list of the cluster (abandoned).
                     * @param _tags Tag list of the cluster (abandoned).
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Specifies multi-az deployment with three azs, for example [200002,200003,200004].

Single-AZ deployment selects an availability zone. example: [200002].
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Cluster specification code.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Specifies the storage specification.
Refers to professional cluster specifications (https://www.tencentcloud.comom/document/product/1179/83705?from_cn_redirect=1).
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * `1`: true. enables automatic monthly renewal.

false. disables automatic monthly renewal.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Purchase duration. value range: 1–50.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Specifies the cluster name, which does not support chinese characters and special characters other than hyphens and underscores, with a length of no more than 64 characters.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Whether to automatically select voucher. valid values: 1 (yes), 0 (no). default is 0.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Specifies the vpc network tag.
                     */
                    VpcInfo m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * Tag list of the cluster (abandoned).
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_
