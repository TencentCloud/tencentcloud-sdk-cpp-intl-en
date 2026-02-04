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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTRAFFICMIRRORATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTRAFFICMIRRORATTRIBUTEREQUEST_H_

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
                * ModifyTrafficMirrorAttribute request structure.
                */
                class ModifyTrafficMirrorAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTrafficMirrorAttributeRequest();
                    ~ModifyTrafficMirrorAttributeRequest() = default;
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
                     * 获取Traffic mirroring instance name.
                     * @return TrafficMirrorName Traffic mirroring instance name.
                     * 
                     */
                    std::string GetTrafficMirrorName() const;

                    /**
                     * 设置Traffic mirroring instance name.
                     * @param _trafficMirrorName Traffic mirroring instance name.
                     * 
                     */
                    void SetTrafficMirrorName(const std::string& _trafficMirrorName);

                    /**
                     * 判断参数 TrafficMirrorName 是否已赋值
                     * @return TrafficMirrorName 是否已赋值
                     * 
                     */
                    bool TrafficMirrorNameHasBeenSet() const;

                    /**
                     * 获取Traffic mirroring instance description information.
                     * @return TrafficMirrorDescription Traffic mirroring instance description information.
                     * 
                     */
                    std::string GetTrafficMirrorDescription() const;

                    /**
                     * 设置Traffic mirroring instance description information.
                     * @param _trafficMirrorDescription Traffic mirroring instance description information.
                     * 
                     */
                    void SetTrafficMirrorDescription(const std::string& _trafficMirrorDescription);

                    /**
                     * 判断参数 TrafficMirrorDescription 是否已赋值
                     * @return TrafficMirrorDescription 是否已赋值
                     * 
                     */
                    bool TrafficMirrorDescriptionHasBeenSet() const;

                private:

                    /**
                     * Traffic mirroring instance ID.
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * Traffic mirroring instance name.
                     */
                    std::string m_trafficMirrorName;
                    bool m_trafficMirrorNameHasBeenSet;

                    /**
                     * Traffic mirroring instance description information.
                     */
                    std::string m_trafficMirrorDescription;
                    bool m_trafficMirrorDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYTRAFFICMIRRORATTRIBUTEREQUEST_H_
