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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SwitchClusterZone request structure.
                */
                class SwitchClusterZoneRequest : public AbstractModel
                {
                public:
                    SwitchClusterZoneRequest();
                    ~SwitchClusterZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The current AZ
                     * @return OldZone The current AZ
                     * 
                     */
                    std::string GetOldZone() const;

                    /**
                     * 设置The current AZ
                     * @param _oldZone The current AZ
                     * 
                     */
                    void SetOldZone(const std::string& _oldZone);

                    /**
                     * 判断参数 OldZone 是否已赋值
                     * @return OldZone 是否已赋值
                     * 
                     */
                    bool OldZoneHasBeenSet() const;

                    /**
                     * 获取New AZ
                     * @return NewZone New AZ
                     * 
                     */
                    std::string GetNewZone() const;

                    /**
                     * 设置New AZ
                     * @param _newZone New AZ
                     * 
                     */
                    void SetNewZone(const std::string& _newZone);

                    /**
                     * 判断参数 NewZone 是否已赋值
                     * @return NewZone 是否已赋值
                     * 
                     */
                    bool NewZoneHasBeenSet() const;

                    /**
                     * 获取Valid values: `yes` (execute during maintenance time), `no` (execute now)
                     * @return IsInMaintainPeriod Valid values: `yes` (execute during maintenance time), `no` (execute now)
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置Valid values: `yes` (execute during maintenance time), `no` (execute now)
                     * @param _isInMaintainPeriod Valid values: `yes` (execute during maintenance time), `no` (execute now)
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The current AZ
                     */
                    std::string m_oldZone;
                    bool m_oldZoneHasBeenSet;

                    /**
                     * New AZ
                     */
                    std::string m_newZone;
                    bool m_newZoneHasBeenSet;

                    /**
                     * Valid values: `yes` (execute during maintenance time), `no` (execute now)
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_
