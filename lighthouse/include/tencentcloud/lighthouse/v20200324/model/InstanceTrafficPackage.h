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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCETRAFFICPACKAGE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCETRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/TrafficPackage.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Instance traffic package details
                */
                class InstanceTrafficPackage : public AbstractModel
                {
                public:
                    InstanceTrafficPackage();
                    ~InstanceTrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取List of traffic package details.
                     * @return TrafficPackageSet List of traffic package details.
                     * 
                     */
                    std::vector<TrafficPackage> GetTrafficPackageSet() const;

                    /**
                     * 设置List of traffic package details.
                     * @param _trafficPackageSet List of traffic package details.
                     * 
                     */
                    void SetTrafficPackageSet(const std::vector<TrafficPackage>& _trafficPackageSet);

                    /**
                     * 判断参数 TrafficPackageSet 是否已赋值
                     * @return TrafficPackageSet 是否已赋值
                     * 
                     */
                    bool TrafficPackageSetHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * List of traffic package details.
                     */
                    std::vector<TrafficPackage> m_trafficPackageSet;
                    bool m_trafficPackageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCETRAFFICPACKAGE_H_
