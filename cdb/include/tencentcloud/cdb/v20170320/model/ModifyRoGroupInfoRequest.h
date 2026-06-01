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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoGroupAttr.h>
#include <tencentcloud/cdb/v20170320/model/RoWeightValue.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyRoGroupInfo request structure.
                */
                class ModifyRoGroupInfoRequest : public AbstractModel
                {
                public:
                    ModifyRoGroupInfoRequest();
                    ~ModifyRoGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the RO group, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * @return RoGroupId ID of the RO group, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置ID of the RO group, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * @param _roGroupId ID of the RO group, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                    /**
                     * 获取RO group details.
                     * @return RoGroupInfo RO group details.
                     * 
                     */
                    RoGroupAttr GetRoGroupInfo() const;

                    /**
                     * 设置RO group details.
                     * @param _roGroupInfo RO group details.
                     * 
                     */
                    void SetRoGroupInfo(const RoGroupAttr& _roGroupInfo);

                    /**
                     * 判断参数 RoGroupInfo 是否已赋值
                     * @return RoGroupInfo 是否已赋值
                     * 
                     */
                    bool RoGroupInfoHasBeenSet() const;

                    /**
                     * 获取Weight of instances in the RO group. If modification is needed to set the weight mode of the RO group to user-defined mode (custom), this parameter must be set, and the weight value of each read-only instance needs to be set. The RO instance ID can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * @return RoWeightValues Weight of instances in the RO group. If modification is needed to set the weight mode of the RO group to user-defined mode (custom), this parameter must be set, and the weight value of each read-only instance needs to be set. The RO instance ID can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<RoWeightValue> GetRoWeightValues() const;

                    /**
                     * 设置Weight of instances in the RO group. If modification is needed to set the weight mode of the RO group to user-defined mode (custom), this parameter must be set, and the weight value of each read-only instance needs to be set. The RO instance ID can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * @param _roWeightValues Weight of instances in the RO group. If modification is needed to set the weight mode of the RO group to user-defined mode (custom), this parameter must be set, and the weight value of each read-only instance needs to be set. The RO instance ID can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     * 
                     */
                    void SetRoWeightValues(const std::vector<RoWeightValue>& _roWeightValues);

                    /**
                     * 判断参数 RoWeightValues 是否已赋值
                     * @return RoWeightValues 是否已赋值
                     * 
                     */
                    bool RoWeightValuesHasBeenSet() const;

                    /**
                     * 获取Whether to rebalance the loads of read-only replicas in the RO group. Valid values: `1` (yes), `0` (no). Default value: `0`. If this parameter is set to `1`, connections to the read-only replicas in the RO group will be interrupted transiently. Please ensure that your application has a reconnection mechanism.
                     * @return IsBalanceRoLoad Whether to rebalance the loads of read-only replicas in the RO group. Valid values: `1` (yes), `0` (no). Default value: `0`. If this parameter is set to `1`, connections to the read-only replicas in the RO group will be interrupted transiently. Please ensure that your application has a reconnection mechanism.
                     * 
                     */
                    int64_t GetIsBalanceRoLoad() const;

                    /**
                     * 设置Whether to rebalance the loads of read-only replicas in the RO group. Valid values: `1` (yes), `0` (no). Default value: `0`. If this parameter is set to `1`, connections to the read-only replicas in the RO group will be interrupted transiently. Please ensure that your application has a reconnection mechanism.
                     * @param _isBalanceRoLoad Whether to rebalance the loads of read-only replicas in the RO group. Valid values: `1` (yes), `0` (no). Default value: `0`. If this parameter is set to `1`, connections to the read-only replicas in the RO group will be interrupted transiently. Please ensure that your application has a reconnection mechanism.
                     * 
                     */
                    void SetIsBalanceRoLoad(const int64_t& _isBalanceRoLoad);

                    /**
                     * 判断参数 IsBalanceRoLoad 是否已赋值
                     * @return IsBalanceRoLoad 是否已赋值
                     * 
                     */
                    bool IsBalanceRoLoadHasBeenSet() const;

                    /**
                     * 获取This field has been deprecated.
                     * @return ReplicationDelayTime This field has been deprecated.
                     * @deprecated
                     */
                    int64_t GetReplicationDelayTime() const;

                    /**
                     * 设置This field has been deprecated.
                     * @param _replicationDelayTime This field has been deprecated.
                     * @deprecated
                     */
                    void SetReplicationDelayTime(const int64_t& _replicationDelayTime);

                    /**
                     * 判断参数 ReplicationDelayTime 是否已赋值
                     * @return ReplicationDelayTime 是否已赋值
                     * @deprecated
                     */
                    bool ReplicationDelayTimeHasBeenSet() const;

                private:

                    /**
                     * ID of the RO group, which can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * RO group details.
                     */
                    RoGroupAttr m_roGroupInfo;
                    bool m_roGroupInfoHasBeenSet;

                    /**
                     * Weight of instances in the RO group. If modification is needed to set the weight mode of the RO group to user-defined mode (custom), this parameter must be set, and the weight value of each read-only instance needs to be set. The RO instance ID can be obtained through the [DescribeRoGroups](https://www.tencentcloud.com/document/api/236/40939?from_cn_redirect=1) API.
                     */
                    std::vector<RoWeightValue> m_roWeightValues;
                    bool m_roWeightValuesHasBeenSet;

                    /**
                     * Whether to rebalance the loads of read-only replicas in the RO group. Valid values: `1` (yes), `0` (no). Default value: `0`. If this parameter is set to `1`, connections to the read-only replicas in the RO group will be interrupted transiently. Please ensure that your application has a reconnection mechanism.
                     */
                    int64_t m_isBalanceRoLoad;
                    bool m_isBalanceRoLoadHasBeenSet;

                    /**
                     * This field has been deprecated.
                     */
                    int64_t m_replicationDelayTime;
                    bool m_replicationDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_
