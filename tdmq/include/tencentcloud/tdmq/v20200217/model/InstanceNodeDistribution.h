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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_INSTANCENODEDISTRIBUTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_INSTANCENODEDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Information of instance node distribution
                */
                class InstanceNodeDistribution : public AbstractModel
                {
                public:
                    InstanceNodeDistribution();
                    ~InstanceNodeDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ
                     * @return ZoneName AZ
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ
                     * @param _zoneName AZ
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneId AZ ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeCount Number of nodes
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeCount Number of nodes
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取This flag is true if there is a scheduling task with no switchback AZs.
                     * @return NodePermWipeFlag This flag is true if there is a scheduling task with no switchback AZs.
                     * 
                     */
                    bool GetNodePermWipeFlag() const;

                    /**
                     * 设置This flag is true if there is a scheduling task with no switchback AZs.
                     * @param _nodePermWipeFlag This flag is true if there is a scheduling task with no switchback AZs.
                     * 
                     */
                    void SetNodePermWipeFlag(const bool& _nodePermWipeFlag);

                    /**
                     * 判断参数 NodePermWipeFlag 是否已赋值
                     * @return NodePermWipeFlag 是否已赋值
                     * 
                     */
                    bool NodePermWipeFlagHasBeenSet() const;

                    /**
                     * 获取Availability zone status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneStatus Availability zone status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneStatus() const;

                    /**
                     * 设置Availability zone status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneStatus Availability zone status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneStatus(const std::string& _zoneStatus);

                    /**
                     * 判断参数 ZoneStatus 是否已赋值
                     * @return ZoneStatus 是否已赋值
                     * 
                     */
                    bool ZoneStatusHasBeenSet() const;

                private:

                    /**
                     * AZ
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * AZ ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * This flag is true if there is a scheduling task with no switchback AZs.
                     */
                    bool m_nodePermWipeFlag;
                    bool m_nodePermWipeFlagHasBeenSet;

                    /**
                     * Availability zone status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_INSTANCENODEDISTRIBUTION_H_
