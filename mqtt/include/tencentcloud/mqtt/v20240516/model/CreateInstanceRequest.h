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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Tag.h>
#include <tencentcloud/mqtt/v20240516/model/VpcInfo.h>
#include <tencentcloud/mqtt/v20240516/model/IpRule.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateInstance request structure.
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance type, which needs to correspond to SkuCode. for details, see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api.
BASIC: basic edition.
PRO edition.
PLATINUM version.

                     * @return InstanceType Instance type, which needs to correspond to SkuCode. for details, see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api.
BASIC: basic edition.
PRO edition.
PLATINUM version.

                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type, which needs to correspond to SkuCode. for details, see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api.
BASIC: basic edition.
PRO edition.
PLATINUM version.

                     * @param _instanceType Instance type, which needs to correspond to SkuCode. for details, see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api.
BASIC: basic edition.
PRO edition.
PLATINUM version.

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
                     * 获取Specifies the cluster name, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * @return Name Specifies the cluster name, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the cluster name, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     * @param _name Specifies the cluster name, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
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
                     * 获取Product specification, which must correspond to InstanceType. see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api to obtain details.
                     * @return SkuCode Product specification, which must correspond to InstanceType. see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api to obtain details.
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Product specification, which must correspond to InstanceType. see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api to obtain details.
                     * @param _skuCode Product specification, which must correspond to InstanceType. see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api to obtain details.
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取Specifies the remark information with a maximum length of 128 characters.
                     * @return Remark Specifies the remark information with a maximum length of 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark information with a maximum length of 128 characters.
                     * @param _remark Specifies the remark information with a maximum length of 128 characters.
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
                     * 获取Tag list
                     * @return TagList Tag list
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Tag list
                     * @param _tagList Tag list
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Specifies the VPC information associated with the instance. the available VPC and SUBNET under the current user must be provided.
                     * @return VpcList Specifies the VPC information associated with the instance. the available VPC and SUBNET under the current user must be provided.
                     * 
                     */
                    std::vector<VpcInfo> GetVpcList() const;

                    /**
                     * 设置Specifies the VPC information associated with the instance. the available VPC and SUBNET under the current user must be provided.
                     * @param _vpcList Specifies the VPC information associated with the instance. the available VPC and SUBNET under the current user must be provided.
                     * 
                     */
                    void SetVpcList(const std::vector<VpcInfo>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取Whether public network access is enabled. default false (disabled).
                     * @return EnablePublic Whether public network access is enabled. default false (disabled).
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置Whether public network access is enabled. default false (disabled).
                     * @param _enablePublic Whether public network access is enabled. default false (disabled).
                     * 
                     */
                    void SetEnablePublic(const bool& _enablePublic);

                    /**
                     * 判断参数 EnablePublic 是否已赋值
                     * @return EnablePublic 是否已赋值
                     * 
                     */
                    bool EnablePublicHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth (unit: Mbps). this field is mandatory and must be more than 0 when EnablePublic is True.
                     * @return Bandwidth Public network bandwidth (unit: Mbps). this field is mandatory and must be more than 0 when EnablePublic is True.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Public network bandwidth (unit: Mbps). this field is mandatory and must be more than 0 when EnablePublic is True.
                     * @param _bandwidth Public network bandwidth (unit: Mbps). this field is mandatory and must be more than 0 when EnablePublic is True.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Public network access allowlist. if not passed, it means deny all IP network access.
                     * @return IpRules Public network access allowlist. if not passed, it means deny all IP network access.
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置Public network access allowlist. if not passed, it means deny all IP network access.
                     * @param _ipRules Public network access allowlist. if not passed, it means deny all IP network access.
                     * 
                     */
                    void SetIpRules(const std::vector<IpRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取Whether the instance is automatically renewed (0: no auto-renewal; 1: auto-renewal). this parameter is valid only when you purchase a prepaid cluster. default value: 1 (auto-renewal).
                     * @return RenewFlag Whether the instance is automatically renewed (0: no auto-renewal; 1: auto-renewal). this parameter is valid only when you purchase a prepaid cluster. default value: 1 (auto-renewal).
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Whether the instance is automatically renewed (0: no auto-renewal; 1: auto-renewal). this parameter is valid only when you purchase a prepaid cluster. default value: 1 (auto-renewal).
                     * @param _renewFlag Whether the instance is automatically renewed (0: no auto-renewal; 1: auto-renewal). this parameter is valid only when you purchase a prepaid cluster. default value: 1 (auto-renewal).
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Specifies the purchase duration (measurement unit: month). this parameter is valid only when you purchase a prepaid cluster. default: 1m (month). valid values: 1-12, 24, 36, 48, 60.
                     * @return TimeSpan Specifies the purchase duration (measurement unit: month). this parameter is valid only when you purchase a prepaid cluster. default: 1m (month). valid values: 1-12, 24, 36, 48, 60.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Specifies the purchase duration (measurement unit: month). this parameter is valid only when you purchase a prepaid cluster. default: 1m (month). valid values: 1-12, 24, 36, 48, 60.
                     * @param _timeSpan Specifies the purchase duration (measurement unit: month). this parameter is valid only when you purchase a prepaid cluster. default: 1m (month). valid values: 1-12, 24, 36, 48, 60.
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
                     * 获取Payment mode (0: postpaid; 1: prepaid). default: 0 (postpaid).
                     * @return PayMode Payment mode (0: postpaid; 1: prepaid). default: 0 (postpaid).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode (0: postpaid; 1: prepaid). default: 0 (postpaid).
                     * @param _payMode Payment mode (0: postpaid; 1: prepaid). default: 0 (postpaid).
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * Instance type, which needs to correspond to SkuCode. for details, see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api.
BASIC: basic edition.
PRO edition.
PLATINUM version.

                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specifies the cluster name, cannot be empty, 3-64 characters, only comprised of digits, letters, "-", and "_".
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Product specification, which must correspond to InstanceType. see the [get MQTT product sales spec](https://www.tencentcloud.com/document/api/1778/116232?from_cn_redirect=1) api to obtain details.
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * Specifies the remark information with a maximum length of 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Specifies the VPC information associated with the instance. the available VPC and SUBNET under the current user must be provided.
                     */
                    std::vector<VpcInfo> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * Whether public network access is enabled. default false (disabled).
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * Public network bandwidth (unit: Mbps). this field is mandatory and must be more than 0 when EnablePublic is True.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Public network access allowlist. if not passed, it means deny all IP network access.
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * Whether the instance is automatically renewed (0: no auto-renewal; 1: auto-renewal). this parameter is valid only when you purchase a prepaid cluster. default value: 1 (auto-renewal).
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Specifies the purchase duration (measurement unit: month). this parameter is valid only when you purchase a prepaid cluster. default: 1m (month). valid values: 1-12, 24, 36, 48, 60.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Payment mode (0: postpaid; 1: prepaid). default: 0 (postpaid).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_
