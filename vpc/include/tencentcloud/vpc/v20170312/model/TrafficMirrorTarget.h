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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Traffic mirroring collection target type.
                */
                class TrafficMirrorTarget : public AbstractModel
                {
                public:
                    TrafficMirrorTarget();
                    ~TrafficMirrorTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Receiving IP address for traffic mirroring.
                     * @return TargetIps Receiving IP address for traffic mirroring.
                     * 
                     */
                    std::vector<std::string> GetTargetIps() const;

                    /**
                     * 设置Receiving IP address for traffic mirroring.
                     * @param _targetIps Receiving IP address for traffic mirroring.
                     * 
                     */
                    void SetTargetIps(const std::vector<std::string>& _targetIps);

                    /**
                     * 判断参数 TargetIps 是否已赋值
                     * @return TargetIps 是否已赋值
                     * 
                     */
                    bool TargetIpsHasBeenSet() const;

                    /**
                     * 获取Receiving IP address group for traffic mirroring. Load balancing rule. Valid values: ENI/FIVE_TUPLE_FLOW (VPC) and FIVE_TUPLE_FLOW (public IP address).
                     * @return AlgHash Receiving IP address group for traffic mirroring. Load balancing rule. Valid values: ENI/FIVE_TUPLE_FLOW (VPC) and FIVE_TUPLE_FLOW (public IP address).
                     * 
                     */
                    std::string GetAlgHash() const;

                    /**
                     * 设置Receiving IP address group for traffic mirroring. Load balancing rule. Valid values: ENI/FIVE_TUPLE_FLOW (VPC) and FIVE_TUPLE_FLOW (public IP address).
                     * @param _algHash Receiving IP address group for traffic mirroring. Load balancing rule. Valid values: ENI/FIVE_TUPLE_FLOW (VPC) and FIVE_TUPLE_FLOW (public IP address).
                     * 
                     */
                    void SetAlgHash(const std::string& _algHash);

                    /**
                     * 判断参数 AlgHash 是否已赋值
                     * @return AlgHash 是否已赋值
                     * 
                     */
                    bool AlgHashHasBeenSet() const;

                    /**
                     * 获取Receiving endpoint for traffic mirroring (public IP address).
                     * @return TargetEndPoints Receiving endpoint for traffic mirroring (public IP address).
                     * 
                     */
                    std::vector<std::string> GetTargetEndPoints() const;

                    /**
                     * 设置Receiving endpoint for traffic mirroring (public IP address).
                     * @param _targetEndPoints Receiving endpoint for traffic mirroring (public IP address).
                     * 
                     */
                    void SetTargetEndPoints(const std::vector<std::string>& _targetEndPoints);

                    /**
                     * 判断参数 TargetEndPoints 是否已赋值
                     * @return TargetEndPoints 是否已赋值
                     * 
                     */
                    bool TargetEndPointsHasBeenSet() const;

                    /**
                     * 获取Receiving type for traffic mirroring. Valid values: IP, ENI, and CLB.
                     * @return TargetType Receiving type for traffic mirroring. Valid values: IP, ENI, and CLB.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Receiving type for traffic mirroring. Valid values: IP, ENI, and CLB.
                     * @param _targetType Receiving type for traffic mirroring. Valid values: IP, ENI, and CLB.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                private:

                    /**
                     * Receiving IP address for traffic mirroring.
                     */
                    std::vector<std::string> m_targetIps;
                    bool m_targetIpsHasBeenSet;

                    /**
                     * Receiving IP address group for traffic mirroring. Load balancing rule. Valid values: ENI/FIVE_TUPLE_FLOW (VPC) and FIVE_TUPLE_FLOW (public IP address).
                     */
                    std::string m_algHash;
                    bool m_algHashHasBeenSet;

                    /**
                     * Receiving endpoint for traffic mirroring (public IP address).
                     */
                    std::vector<std::string> m_targetEndPoints;
                    bool m_targetEndPointsHasBeenSet;

                    /**
                     * Receiving type for traffic mirroring. Valid values: IP, ENI, and CLB.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGET_H_
