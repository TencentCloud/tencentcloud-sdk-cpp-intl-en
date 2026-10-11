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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/MultiZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateInstance request structure.
                */
                class InquiryPriceCreateInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateInstanceRequest();
                    ~InquiryPriceCreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @return TimeUnit <p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @param _timeUnit <p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @return TimeSpan <p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @param _timeSpan <p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>Currency type. Valid values:</p><li>CNY: RMB</li>
                     * @return Currency <p>Currency type. Valid values:</p><li>CNY: RMB</li>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>Currency type. Valid values:</p><li>CNY: RMB</li>
                     * @param _currency <p>Currency type. Valid values:</p><li>CNY: RMB</li>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * @return PayMode <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * @param _payMode <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable high availability for the node. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * @return SupportHA <p>Whether to enable high availability for the node. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * 
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置<p>Whether to enable high availability for the node. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * @param _supportHA <p>Whether to enable high availability for the node. Valid values:</p><li>0: no</li><li>1: yes</li>
                     * 
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取<p>List of deployed components. For different EMR product IDs, different required component lists need to be set (ProductId: For details about its meaning, see the ProductId parameter). Valid values: <li>When ProductId is set to 2 (EMR-V2.0.1), the required components include hdfs-2.7.3, yarn-2.7.3, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 16 (EMR-V2.3.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.5.5, and knox-1.2.0.</li><li>When ProductId is set to 20 (EMR-V2.5.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 30 (EMR-V2.6.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 38 (EMR-V2.7.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 57 (EMR-V2.8.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 7 (EMR-V3.0.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 25 (EMR-V3.1.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 31 (EMR-V3.1.1), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 28 (EMR-V3.2.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 33 (EMR-V3.2.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 34 (EMR-V3.3.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 37 (EMR-V3.4.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 44 (EMR-V3.5.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 53 (EMR-V3.6.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 58 (EMR-V3.6.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.46, and knox-1.6.1.</li><li>When ProductId is set to 47 (EMR-V4.0.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li></p>
                     * @return Software <p>List of deployed components. For different EMR product IDs, different required component lists need to be set (ProductId: For details about its meaning, see the ProductId parameter). Valid values: <li>When ProductId is set to 2 (EMR-V2.0.1), the required components include hdfs-2.7.3, yarn-2.7.3, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 16 (EMR-V2.3.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.5.5, and knox-1.2.0.</li><li>When ProductId is set to 20 (EMR-V2.5.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 30 (EMR-V2.6.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 38 (EMR-V2.7.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 57 (EMR-V2.8.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 7 (EMR-V3.0.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 25 (EMR-V3.1.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 31 (EMR-V3.1.1), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 28 (EMR-V3.2.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 33 (EMR-V3.2.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 34 (EMR-V3.3.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 37 (EMR-V3.4.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 44 (EMR-V3.5.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 53 (EMR-V3.6.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 58 (EMR-V3.6.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.46, and knox-1.6.1.</li><li>When ProductId is set to 47 (EMR-V4.0.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li></p>
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置<p>List of deployed components. For different EMR product IDs, different required component lists need to be set (ProductId: For details about its meaning, see the ProductId parameter). Valid values: <li>When ProductId is set to 2 (EMR-V2.0.1), the required components include hdfs-2.7.3, yarn-2.7.3, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 16 (EMR-V2.3.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.5.5, and knox-1.2.0.</li><li>When ProductId is set to 20 (EMR-V2.5.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 30 (EMR-V2.6.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 38 (EMR-V2.7.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 57 (EMR-V2.8.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 7 (EMR-V3.0.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 25 (EMR-V3.1.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 31 (EMR-V3.1.1), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 28 (EMR-V3.2.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 33 (EMR-V3.2.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 34 (EMR-V3.3.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 37 (EMR-V3.4.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 44 (EMR-V3.5.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 53 (EMR-V3.6.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 58 (EMR-V3.6.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.46, and knox-1.6.1.</li><li>When ProductId is set to 47 (EMR-V4.0.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li></p>
                     * @param _software <p>List of deployed components. For different EMR product IDs, different required component lists need to be set (ProductId: For details about its meaning, see the ProductId parameter). Valid values: <li>When ProductId is set to 2 (EMR-V2.0.1), the required components include hdfs-2.7.3, yarn-2.7.3, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 16 (EMR-V2.3.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.5.5, and knox-1.2.0.</li><li>When ProductId is set to 20 (EMR-V2.5.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 30 (EMR-V2.6.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 38 (EMR-V2.7.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 57 (EMR-V2.8.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 7 (EMR-V3.0.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 25 (EMR-V3.1.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 31 (EMR-V3.1.1), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 28 (EMR-V3.2.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 33 (EMR-V3.2.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 34 (EMR-V3.3.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 37 (EMR-V3.4.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 44 (EMR-V3.5.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 53 (EMR-V3.6.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 58 (EMR-V3.6.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.46, and knox-1.6.1.</li><li>When ProductId is set to 47 (EMR-V4.0.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li></p>
                     * 
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取<p>Node specifications for price inquiry.</p>
                     * @return ResourceSpec <p>Node specifications for price inquiry.</p>
                     * 
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>Node specifications for price inquiry.</p>
                     * @param _resourceSpec <p>Node specifications for price inquiry.</p>
                     * 
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * @return Placement <p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * @param _placement <p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取<p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * @return VPCSettings <p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置<p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * @param _vPCSettings <p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @return MetaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @param _metaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>EMR-MetaDB instance.</p>
                     * @return UnifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置<p>EMR-MetaDB instance.</p>
                     * @param _unifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom MetaDB information.</p>
                     * @return MetaDBInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>Custom MetaDB information.</p>
                     * @param _metaDBInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取<p>Product ID. Different product IDs indicate different EMR product versions. Valid values: <li>2: EMR-V2.0.1</li><li>16: EMR-V2.3.0</li><li>20: EMR-V2.5.0</li><li>30: EMR-V2.6.0</li><li>38: EMR-V2.7.0</li><li>57: EMR-V2.8.0</li><li>7: EMR-V3.0.0</li><li>25: EMR-V3.1.0</li><li>31: EMR-V3.1.1</li><li>28: EMR-V3.2.0</li><li>33: EMR-V3.2.1</li><li>34: EMR-V3.3.0</li><li>37: EMR-V3.4.0</li><li>44: EMR-V3.5.0</li><li>53: EMR-V3.6.0</li><li>58: EMR-V3.6.1</li><li>47: EMR-V4.0.0</li></p>
                     * @return ProductId <p>Product ID. Different product IDs indicate different EMR product versions. Valid values: <li>2: EMR-V2.0.1</li><li>16: EMR-V2.3.0</li><li>20: EMR-V2.5.0</li><li>30: EMR-V2.6.0</li><li>38: EMR-V2.7.0</li><li>57: EMR-V2.8.0</li><li>7: EMR-V3.0.0</li><li>25: EMR-V3.1.0</li><li>31: EMR-V3.1.1</li><li>28: EMR-V3.2.0</li><li>33: EMR-V3.2.1</li><li>34: EMR-V3.3.0</li><li>37: EMR-V3.4.0</li><li>44: EMR-V3.5.0</li><li>53: EMR-V3.6.0</li><li>58: EMR-V3.6.1</li><li>47: EMR-V4.0.0</li></p>
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置<p>Product ID. Different product IDs indicate different EMR product versions. Valid values: <li>2: EMR-V2.0.1</li><li>16: EMR-V2.3.0</li><li>20: EMR-V2.5.0</li><li>30: EMR-V2.6.0</li><li>38: EMR-V2.7.0</li><li>57: EMR-V2.8.0</li><li>7: EMR-V3.0.0</li><li>25: EMR-V3.1.0</li><li>31: EMR-V3.1.1</li><li>28: EMR-V3.2.0</li><li>33: EMR-V3.2.1</li><li>34: EMR-V3.3.0</li><li>37: EMR-V3.4.0</li><li>44: EMR-V3.5.0</li><li>53: EMR-V3.6.0</li><li>58: EMR-V3.6.1</li><li>47: EMR-V4.0.0</li></p>
                     * @param _productId <p>Product ID. Different product IDs indicate different EMR product versions. Valid values: <li>2: EMR-V2.0.1</li><li>16: EMR-V2.3.0</li><li>20: EMR-V2.5.0</li><li>30: EMR-V2.6.0</li><li>38: EMR-V2.7.0</li><li>57: EMR-V2.8.0</li><li>7: EMR-V3.0.0</li><li>25: EMR-V3.1.0</li><li>31: EMR-V3.1.1</li><li>28: EMR-V3.2.0</li><li>33: EMR-V3.2.1</li><li>34: EMR-V3.3.0</li><li>37: EMR-V3.4.0</li><li>44: EMR-V3.5.0</li><li>53: EMR-V3.6.0</li><li>58: EMR-V3.6.1</li><li>47: EMR-V4.0.0</li></p>
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>Scenario-based values: Hadoop-Kudu, Hadoop-Zookeeper, Hadoop-Presto, and Hadoop-Hbase.</p>
                     * @return SceneName <p>Scenario-based values: Hadoop-Kudu, Hadoop-Zookeeper, Hadoop-Presto, and Hadoop-Hbase.</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>Scenario-based values: Hadoop-Kudu, Hadoop-Zookeeper, Hadoop-Presto, and Hadoop-Hbase.</p>
                     * @param _sceneName <p>Scenario-based values: Hadoop-Kudu, Hadoop-Zookeeper, Hadoop-Presto, and Hadoop-Hbase.</p>
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取<p>Shared component information.</p>
                     * @return ExternalService <p>Shared component information.</p>
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置<p>Shared component information.</p>
                     * @param _externalService <p>Shared component information.</p>
                     * 
                     */
                    void SetExternalService(const std::vector<ExternalService>& _externalService);

                    /**
                     * 判断参数 ExternalService 是否已赋值
                     * @return ExternalService 是否已赋值
                     * 
                     */
                    bool ExternalServiceHasBeenSet() const;

                    /**
                     * 获取<p>Default value: 0. It is changed to 1 after the cross-AZ feature is supported.</p>
                     * @return VersionID <p>Default value: 0. It is changed to 1 after the cross-AZ feature is supported.</p>
                     * 
                     */
                    uint64_t GetVersionID() const;

                    /**
                     * 设置<p>Default value: 0. It is changed to 1 after the cross-AZ feature is supported.</p>
                     * @param _versionID <p>Default value: 0. It is changed to 1 after the cross-AZ feature is supported.</p>
                     * 
                     */
                    void SetVersionID(const uint64_t& _versionID);

                    /**
                     * 判断参数 VersionID 是否已赋值
                     * @return VersionID 是否已赋值
                     * 
                     */
                    bool VersionIDHasBeenSet() const;

                    /**
                     * 获取<p>Specification information of the AZ.</p>
                     * @return MultiZoneSettings <p>Specification information of the AZ.</p>
                     * 
                     */
                    std::vector<MultiZoneSetting> GetMultiZoneSettings() const;

                    /**
                     * 设置<p>Specification information of the AZ.</p>
                     * @param _multiZoneSettings <p>Specification information of the AZ.</p>
                     * 
                     */
                    void SetMultiZoneSettings(const std::vector<MultiZoneSetting>& _multiZoneSettings);

                    /**
                     * 判断参数 MultiZoneSettings 是否已赋值
                     * @return MultiZoneSettings 是否已赋值
                     * 
                     */
                    bool MultiZoneSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Database version.</p>
                     * @return DefaultMetaVersion <p>Database version.</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>Database version.</p>
                     * @param _defaultMetaVersion <p>Database version.</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * @return NeedCdbAudit <p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * @param _needCdbAudit <p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     * 
                     */
                    void SetNeedCdbAudit(const int64_t& _needCdbAudit);

                    /**
                     * 判断参数 NeedCdbAudit 是否已赋值
                     * @return NeedCdbAudit 是否已赋值
                     * 
                     */
                    bool NeedCdbAuditHasBeenSet() const;

                    /**
                     * 获取<p>Custom database data.</p>
                     * @return MetaDBGroupInfo <p>Custom database data.</p>
                     * 
                     */
                    std::vector<CustomMetaDBInfo> GetMetaDBGroupInfo() const;

                    /**
                     * 设置<p>Custom database data.</p>
                     * @param _metaDBGroupInfo <p>Custom database data.</p>
                     * 
                     */
                    void SetMetaDBGroupInfo(const std::vector<CustomMetaDBInfo>& _metaDBGroupInfo);

                    /**
                     * 判断参数 MetaDBGroupInfo 是否已赋值
                     * @return MetaDBGroupInfo 是否已赋值
                     * 
                     */
                    bool MetaDBGroupInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Time unit for purchasing instances. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Instance purchase duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Currency type. Valid values:</p><li>CNY: RMB</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Whether to enable high availability for the node. Valid values:</p><li>0: no</li><li>1: yes</li>
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * <p>List of deployed components. For different EMR product IDs, different required component lists need to be set (ProductId: For details about its meaning, see the ProductId parameter). Valid values: <li>When ProductId is set to 2 (EMR-V2.0.1), the required components include hdfs-2.7.3, yarn-2.7.3, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 16 (EMR-V2.3.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.5.5, and knox-1.2.0.</li><li>When ProductId is set to 20 (EMR-V2.5.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 30 (EMR-V2.6.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 38 (EMR-V2.7.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 57 (EMR-V2.8.0), the required components include hdfs-2.8.5, yarn-2.8.5, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 7 (EMR-V3.0.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.4.9, and knox-1.2.0.</li><li>When ProductId is set to 25 (EMR-V3.1.0), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 31 (EMR-V3.1.1), the required components include hdfs-3.1.2, yarn-3.1.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 28 (EMR-V3.2.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, and knox-1.2.0.</li><li>When ProductId is set to 33 (EMR-V3.2.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 34 (EMR-V3.3.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.1, openldap-2.4.44, and knox-1.2.0.</li><li>When ProductId is set to 37 (EMR-V3.4.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 44 (EMR-V3.5.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 53 (EMR-V3.6.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li><li>When ProductId is set to 58 (EMR-V3.6.1), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.46, and knox-1.6.1.</li><li>When ProductId is set to 47 (EMR-V4.0.0), the required components include hdfs-3.2.2, yarn-3.2.2, zookeeper-3.6.3, openldap-2.4.44, and knox-1.6.1.</li></p>
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * <p>Node specifications for price inquiry.</p>
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>Location of the instance. This parameter can be used to specify attributes such as the AZ and associated project of the instance.</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>VPC-related information configuration. This parameter can be used to specify the VPC ID, subnet ID, and so on.</p>
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * <p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>EMR-MetaDB instance.</p>
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * <p>Custom MetaDB information.</p>
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>Product ID. Different product IDs indicate different EMR product versions. Valid values: <li>2: EMR-V2.0.1</li><li>16: EMR-V2.3.0</li><li>20: EMR-V2.5.0</li><li>30: EMR-V2.6.0</li><li>38: EMR-V2.7.0</li><li>57: EMR-V2.8.0</li><li>7: EMR-V3.0.0</li><li>25: EMR-V3.1.0</li><li>31: EMR-V3.1.1</li><li>28: EMR-V3.2.0</li><li>33: EMR-V3.2.1</li><li>34: EMR-V3.3.0</li><li>37: EMR-V3.4.0</li><li>44: EMR-V3.5.0</li><li>53: EMR-V3.6.0</li><li>58: EMR-V3.6.1</li><li>47: EMR-V4.0.0</li></p>
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>Scenario-based values: Hadoop-Kudu, Hadoop-Zookeeper, Hadoop-Presto, and Hadoop-Hbase.</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>Shared component information.</p>
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * <p>Default value: 0. It is changed to 1 after the cross-AZ feature is supported.</p>
                     */
                    uint64_t m_versionID;
                    bool m_versionIDHasBeenSet;

                    /**
                     * <p>Specification information of the AZ.</p>
                     */
                    std::vector<MultiZoneSetting> m_multiZoneSettings;
                    bool m_multiZoneSettingsHasBeenSet;

                    /**
                     * <p>Database version.</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>Whether to enable audit. Valid values: 0 (no) and 1 (yes).</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>Custom database data.</p>
                     */
                    std::vector<CustomMetaDBInfo> m_metaDBGroupInfo;
                    bool m_metaDBGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICECREATEINSTANCEREQUEST_H_
