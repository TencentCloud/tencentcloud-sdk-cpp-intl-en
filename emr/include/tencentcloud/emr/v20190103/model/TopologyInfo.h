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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SubnetInfo.h>
#include <tencentcloud/emr/v20190103/model/ShortNodeInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Cluster node topology information
                */
                class TopologyInfo : public AbstractModel
                {
                public:
                    TopologyInfo();
                    ~TopologyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ZoneId AZ ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _zoneId AZ ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取AZ information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Zone AZ information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _zone AZ information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Subnet information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SubnetInfoList Subnet information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SubnetInfo> GetSubnetInfoList() const;

                    /**
                     * 设置Subnet information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _subnetInfoList Subnet information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubnetInfoList(const std::vector<SubnetInfo>& _subnetInfoList);

                    /**
                     * 判断参数 SubnetInfoList 是否已赋值
                     * @return SubnetInfoList 是否已赋值
                     * 
                     */
                    bool SubnetInfoListHasBeenSet() const;

                    /**
                     * 获取Node information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return NodeInfoList Node information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ShortNodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置Node information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _nodeInfoList Node information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeInfoList(const std::vector<ShortNodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                private:

                    /**
                     * AZ ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * AZ information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Subnet information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<SubnetInfo> m_subnetInfoList;
                    bool m_subnetInfoListHasBeenSet;

                    /**
                     * Node information
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<ShortNodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYINFO_H_
