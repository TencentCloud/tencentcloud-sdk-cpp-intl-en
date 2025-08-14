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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/SLInstance.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSLInstance response structure.
                */
                class DescribeSLInstanceResponse : public AbstractModel
                {
                public:
                    DescribeSLInstanceResponse();
                    ~DescribeSLInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Character string identifier of the instance.
                     * @return InstanceId Character string identifier of the instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go; 1 indicates prepaid, i.e., monthly subscription.
                     * @return PayMode Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go; 1 indicates prepaid, i.e., monthly subscription.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance storage type.
                     * @return DiskType Instance storage type.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Instance single-node disk capacity, in GB.
                     * @return DiskSize Instance single-node disk capacity, in GB.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Instance node specifications.
                     * @return NodeType Instance node specifications.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Detailed configuration of the instance AZ, including the AZ name, VPC information, and number of nodes.
                     * @return ZoneSettings Detailed configuration of the instance AZ, including the AZ name, VPC information, and number of nodes.
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取List of tags bound to the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags List of tags bound to the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Numeric identifier of the instance.
                     * @return ClusterId Numeric identifier of the instance.
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance region ID.
                     * @return RegionId Instance region ID.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Primary AZ of the instance.
                     * @return Zone Primary AZ of the instance.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance expiration time. For post-paid instances, the API returns 0000-00-00 00:00:00.
                     * @return ExpireTime Instance expiration time. For post-paid instances, the API returns 0000-00-00 00:00:00.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Instance isolation time. For instances that are not isolated, the API returns 0000-00-00 00:00:00.
                     * @return IsolateTime Instance isolation time. For instances that are not isolated, the API returns 0000-00-00 00:00:00.
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Instance creation time.
                     * @return CreateTime Instance creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance status code: -2: "TERMINATED", 2: "RUNNING", 14: "TERMINATING", 19: "ISOLATING", 22: "ADJUSTING", and 201: "ISOLATED".
                     * @return Status Instance status code: -2: "TERMINATED", 2: "RUNNING", 14: "TERMINATING", 19: "ISOLATING", 22: "ADJUSTING", and 201: "ISOLATED".
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew. If the business does not support renewal, the value is 0.
                     * @return AutoRenewFlag Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew. If the business does not support renewal, the value is 0.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Total number of instance nodes.
                     * @return NodeNum Total number of instance nodes.
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取
                     * @return SLInstance 
                     * 
                     */
                    std::vector<SLInstance> GetSLInstance() const;

                    /**
                     * 判断参数 SLInstance 是否已赋值
                     * @return SLInstance 是否已赋值
                     * 
                     */
                    bool SLInstanceHasBeenSet() const;

                private:

                    /**
                     * Character string identifier of the instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. 0 indicates postpaid, i.e., pay-as-you-go; 1 indicates prepaid, i.e., monthly subscription.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance storage type.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Instance single-node disk capacity, in GB.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Instance node specifications.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Detailed configuration of the instance AZ, including the AZ name, VPC information, and number of nodes.
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * List of tags bound to the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Numeric identifier of the instance.
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance region ID.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Primary AZ of the instance.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance expiration time. For post-paid instances, the API returns 0000-00-00 00:00:00.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Instance isolation time. For instances that are not isolated, the API returns 0000-00-00 00:00:00.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Instance creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance status code: -2: "TERMINATED", 2: "RUNNING", 14: "TERMINATING", 19: "ISOLATING", 22: "ADJUSTING", and 201: "ISOLATED".
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Auto-renewal flag. 0: notify before expiration but do not auto-renew; 1: notify before expiration and auto-renew; and 2: do not notify before expiration and do not auto-renew. If the business does not support renewal, the value is 0.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Total number of instance nodes.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SLInstance> m_sLInstance;
                    bool m_sLInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCERESPONSE_H_
