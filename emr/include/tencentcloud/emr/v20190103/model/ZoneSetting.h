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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ZONESETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ZONESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AZ configuration description.
                */
                class ZoneSetting : public AbstractModel
                {
                public:
                    ZoneSetting();
                    ~ZoneSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone name
                     * @return Zone Availability zone name
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone name
                     * @param _zone Availability zone name
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
                     * 获取AZ VPC and subnet.
                     * @return VPCSettings AZ VPC and subnet.
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置AZ VPC and subnet.
                     * @param _vPCSettings AZ VPC and subnet.
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
                     * 获取Number of AZ nodes.
                     * @return NodeNum Number of AZ nodes.
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of AZ nodes.
                     * @param _nodeNum Number of AZ nodes.
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                private:

                    /**
                     * Availability zone name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ VPC and subnet.
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * Number of AZ nodes.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ZONESETTING_H_
