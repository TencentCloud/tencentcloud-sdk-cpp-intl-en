/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取RO group ID.
                     * @return RoGroupId RO group ID.
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置RO group ID.
                     * @param RoGroupId RO group ID.
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     */
                    bool RoGroupIdHasBeenSet() const;

                    /**
                     * 获取RO group details.
                     * @return RoGroupInfo RO group details.
                     */
                    RoGroupAttr GetRoGroupInfo() const;

                    /**
                     * 设置RO group details.
                     * @param RoGroupInfo RO group details.
                     */
                    void SetRoGroupInfo(const RoGroupAttr& _roGroupInfo);

                    /**
                     * 判断参数 RoGroupInfo 是否已赋值
                     * @return RoGroupInfo 是否已赋值
                     */
                    bool RoGroupInfoHasBeenSet() const;

                    /**
                     * 获取Weights of instances in RO group. If the weighting mode of an RO group is changed to custom mode, this parameter must be set, and a weight value needs to be set for each RO instance.
                     * @return RoWeightValues Weights of instances in RO group. If the weighting mode of an RO group is changed to custom mode, this parameter must be set, and a weight value needs to be set for each RO instance.
                     */
                    std::vector<RoWeightValue> GetRoWeightValues() const;

                    /**
                     * 设置Weights of instances in RO group. If the weighting mode of an RO group is changed to custom mode, this parameter must be set, and a weight value needs to be set for each RO instance.
                     * @param RoWeightValues Weights of instances in RO group. If the weighting mode of an RO group is changed to custom mode, this parameter must be set, and a weight value needs to be set for each RO instance.
                     */
                    void SetRoWeightValues(const std::vector<RoWeightValue>& _roWeightValues);

                    /**
                     * 判断参数 RoWeightValues 是否已赋值
                     * @return RoWeightValues 是否已赋值
                     */
                    bool RoWeightValuesHasBeenSet() const;

                    /**
                     * 获取Whether to rebalance the loads of RO instances in the RO group. Supported values include `1` (yes) and `0` (no). The default value is `0`. Please note that if this value is set to `1`, connections to the RO instances in the RO group will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases.
                     * @return IsBalanceRoLoad Whether to rebalance the loads of RO instances in the RO group. Supported values include `1` (yes) and `0` (no). The default value is `0`. Please note that if this value is set to `1`, connections to the RO instances in the RO group will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases.
                     */
                    int64_t GetIsBalanceRoLoad() const;

                    /**
                     * 设置Whether to rebalance the loads of RO instances in the RO group. Supported values include `1` (yes) and `0` (no). The default value is `0`. Please note that if this value is set to `1`, connections to the RO instances in the RO group will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases.
                     * @param IsBalanceRoLoad Whether to rebalance the loads of RO instances in the RO group. Supported values include `1` (yes) and `0` (no). The default value is `0`. Please note that if this value is set to `1`, connections to the RO instances in the RO group will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases.
                     */
                    void SetIsBalanceRoLoad(const int64_t& _isBalanceRoLoad);

                    /**
                     * 判断参数 IsBalanceRoLoad 是否已赋值
                     * @return IsBalanceRoLoad 是否已赋值
                     */
                    bool IsBalanceRoLoadHasBeenSet() const;

                private:

                    /**
                     * RO group ID.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * RO group details.
                     */
                    RoGroupAttr m_roGroupInfo;
                    bool m_roGroupInfoHasBeenSet;

                    /**
                     * Weights of instances in RO group. If the weighting mode of an RO group is changed to custom mode, this parameter must be set, and a weight value needs to be set for each RO instance.
                     */
                    std::vector<RoWeightValue> m_roWeightValues;
                    bool m_roWeightValuesHasBeenSet;

                    /**
                     * Whether to rebalance the loads of RO instances in the RO group. Supported values include `1` (yes) and `0` (no). The default value is `0`. Please note that if this value is set to `1`, connections to the RO instances in the RO group will be interrupted transiently; therefore, you should ensure that your application can reconnect to the databases.
                     */
                    int64_t m_isBalanceRoLoad;
                    bool m_isBalanceRoLoadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYROGROUPINFOREQUEST_H_
