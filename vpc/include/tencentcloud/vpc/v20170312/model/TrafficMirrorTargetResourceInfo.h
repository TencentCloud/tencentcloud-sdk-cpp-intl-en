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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGETRESOURCEINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGETRESOURCEINFO_H_

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
                * Traffic mirroring receiving traffic information, returned when the receiving target is ENI or CLB.
                */
                class TrafficMirrorTargetResourceInfo : public AbstractModel
                {
                public:
                    TrafficMirrorTargetResourceInfo();
                    ~TrafficMirrorTargetResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID belonging to the receiving target.
                     * @return TargetId Resource ID belonging to the receiving target.
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Resource ID belonging to the receiving target.
                     * @param _targetId Resource ID belonging to the receiving target.
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Resource name belonging to the receiving target.
                     * @return TargetName Resource name belonging to the receiving target.
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置Resource name belonging to the receiving target.
                     * @param _targetName Resource name belonging to the receiving target.
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                private:

                    /**
                     * Resource ID belonging to the receiving target.
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Resource name belonging to the receiving target.
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGETRESOURCEINFO_H_
