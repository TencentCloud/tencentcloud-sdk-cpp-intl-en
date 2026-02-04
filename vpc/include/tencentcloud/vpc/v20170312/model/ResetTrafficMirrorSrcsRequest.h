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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORSRCSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORSRCSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ResetTrafficMirrorSrcs request structure.
                */
                class ResetTrafficMirrorSrcsRequest : public AbstractModel
                {
                public:
                    ResetTrafficMirrorSrcsRequest();
                    ~ResetTrafficMirrorSrcsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Traffic mirroring instance ID.
                     * @return TrafficMirrorId Traffic mirroring instance ID.
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置Traffic mirroring instance ID.
                     * @param _trafficMirrorId Traffic mirroring instance ID.
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring collection object.
                     * @return CollectorSrcs Traffic mirroring collection object.
                     * 
                     */
                    std::vector<std::string> GetCollectorSrcs() const;

                    /**
                     * 设置Traffic mirroring collection object.
                     * @param _collectorSrcs Traffic mirroring collection object.
                     * 
                     */
                    void SetCollectorSrcs(const std::vector<std::string>& _collectorSrcs);

                    /**
                     * 判断参数 CollectorSrcs 是否已赋值
                     * @return CollectorSrcs 是否已赋值
                     * 
                     */
                    bool CollectorSrcsHasBeenSet() const;

                private:

                    /**
                     * Traffic mirroring instance ID.
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * Traffic mirroring collection object.
                     */
                    std::vector<std::string> m_collectorSrcs;
                    bool m_collectorSrcsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESETTRAFFICMIRRORSRCSREQUEST_H_
