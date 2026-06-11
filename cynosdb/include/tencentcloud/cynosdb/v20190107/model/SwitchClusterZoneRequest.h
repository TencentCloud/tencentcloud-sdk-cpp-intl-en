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
                     * 获取<p>Cluster Id</p>
                     * @return ClusterId <p>Cluster Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster Id</p>
                     * @param _clusterId <p>Cluster Id</p>
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
                     * 获取<p>Current availability zone</p>
                     * @return OldZone <p>Current availability zone</p>
                     * 
                     */
                    std::string GetOldZone() const;

                    /**
                     * 设置<p>Current availability zone</p>
                     * @param _oldZone <p>Current availability zone</p>
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
                     * 获取<p>Availability zone to switch to</p>
                     * @return NewZone <p>Availability zone to switch to</p>
                     * 
                     */
                    std::string GetNewZone() const;

                    /**
                     * 设置<p>Availability zone to switch to</p>
                     * @param _newZone <p>Availability zone to switch to</p>
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
                     * 获取<p>Execute during maintenance period - yes, immediately execute - no</p>
                     * @return IsInMaintainPeriod <p>Execute during maintenance period - yes, immediately execute - no</p>
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置<p>Execute during maintenance period - yes, immediately execute - no</p>
                     * @param _isInMaintainPeriod <p>Execute during maintenance period - yes, immediately execute - no</p>
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
                     * <p>Cluster Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Current availability zone</p>
                     */
                    std::string m_oldZone;
                    bool m_oldZoneHasBeenSet;

                    /**
                     * <p>Availability zone to switch to</p>
                     */
                    std::string m_newZone;
                    bool m_newZoneHasBeenSet;

                    /**
                     * <p>Execute during maintenance period - yes, immediately execute - no</p>
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERZONEREQUEST_H_
