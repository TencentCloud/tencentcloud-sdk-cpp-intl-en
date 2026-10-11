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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceScaleOutInstance request structure.
                */
                class InquiryPriceScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceScaleOutInstanceRequest();
                    ~InquiryPriceScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @return TimeUnit <p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @param _timeUnit <p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
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
                     * 获取<p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @return TimeSpan <p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @param _timeSpan <p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
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
                     * 获取<p>ID of the AZ to which the instance belongs, for example, 100003. This parameter can be obtained from the ZoneId field in the response of <a href="https://www.tencentcloud.com/document/api/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * @return ZoneId <p>ID of the AZ to which the instance belongs, for example, 100003. This parameter can be obtained from the ZoneId field in the response of <a href="https://www.tencentcloud.com/document/api/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>ID of the AZ to which the instance belongs, for example, 100003. This parameter can be obtained from the ZoneId field in the response of <a href="https://www.tencentcloud.com/document/api/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * @param _zoneId <p>ID of the AZ to which the instance belongs, for example, 100003. This parameter can be obtained from the ZoneId field in the response of <a href="https://www.tencentcloud.com/document/api/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of Core nodes to be scaled out.</p>
                     * @return CoreCount <p>Number of Core nodes to be scaled out.</p>
                     * 
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置<p>Number of Core nodes to be scaled out.</p>
                     * @param _coreCount <p>Number of Core nodes to be scaled out.</p>
                     * 
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of Task nodes to be scaled out.</p>
                     * @return TaskCount <p>Number of Task nodes to be scaled out.</p>
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置<p>Number of Task nodes to be scaled out.</p>
                     * @param _taskCount <p>Number of Task nodes to be scaled out.</p>
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

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
                     * 获取<p>Number of Router nodes to be scaled out.</p>
                     * @return RouterCount <p>Number of Router nodes to be scaled out.</p>
                     * 
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置<p>Number of Router nodes to be scaled out.</p>
                     * @param _routerCount <p>Number of Router nodes to be scaled out.</p>
                     * 
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     * 
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of Master nodes to be scaled out.</p>
                     * @return MasterCount <p>Number of Master nodes to be scaled out.</p>
                     * 
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置<p>Number of Master nodes to be scaled out.</p>
                     * @param _masterCount <p>Number of Master nodes to be scaled out.</p>
                     * 
                     */
                    void SetMasterCount(const uint64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取<p>The type can be ComputeResource, EMR, or a default value. The default value is EMR.</p>
                     * @return ResourceBaseType <p>The type can be ComputeResource, EMR, or a default value. The default value is EMR.</p>
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置<p>The type can be ComputeResource, EMR, or a default value. The default value is EMR.</p>
                     * @param _resourceBaseType <p>The type can be ComputeResource, EMR, or a default value. The default value is EMR.</p>
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Computing resource ID.</p>
                     * @return ComputeResourceId <p>Computing resource ID.</p>
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置<p>Computing resource ID.</p>
                     * @param _computeResourceId <p>Computing resource ID.</p>
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Scale-out resource type.</p>
                     * @return HardwareResourceType <p>Scale-out resource type.</p>
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置<p>Scale-out resource type.</p>
                     * @param _hardwareResourceType <p>Scale-out resource type.</p>
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Node group ID.</p>
                     * @return NodeGroupId <p>Node group ID.</p>
                     * 
                     */
                    std::string GetNodeGroupId() const;

                    /**
                     * 设置<p>Node group ID.</p>
                     * @param _nodeGroupId <p>Node group ID.</p>
                     * 
                     */
                    void SetNodeGroupId(const std::string& _nodeGroupId);

                    /**
                     * 判断参数 NodeGroupId 是否已赋值
                     * @return NodeGroupId 是否已赋值
                     * 
                     */
                    bool NodeGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>ID of the AZ to which the instance belongs, for example, 100003. This parameter can be obtained from the ZoneId field in the response of <a href="https://www.tencentcloud.com/document/api/213/15707?from_cn_redirect=1">DescribeZones</a>.</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Number of Core nodes to be scaled out.</p>
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * <p>Number of Task nodes to be scaled out.</p>
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * <p>Currency type. Valid values:</p><li>CNY: RMB</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>Number of Router nodes to be scaled out.</p>
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * <p>Number of Master nodes to be scaled out.</p>
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * <p>The type can be ComputeResource, EMR, or a default value. The default value is EMR.</p>
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * <p>Computing resource ID.</p>
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * <p>Scale-out resource type.</p>
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * <p>Node group ID.</p>
                     */
                    std::string m_nodeGroupId;
                    bool m_nodeGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICESCALEOUTINSTANCEREQUEST_H_
