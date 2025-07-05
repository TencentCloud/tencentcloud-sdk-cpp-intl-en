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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Services referencing this origin group
                */
                class OriginGroupReference : public AbstractModel
                {
                public:
                    OriginGroupReference();
                    ~OriginGroupReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Services referencing the origin group. Values:
<li>`AccelerationDomain`: Acceleration domain name</li>
<li>`RuleEngine`: Rules engine</li>
<li>`Loadbalance`: Load balancer</li>
<li>`ApplicationProxy`: L4 proxy</li>
                     * @return InstanceType Services referencing the origin group. Values:
<li>`AccelerationDomain`: Acceleration domain name</li>
<li>`RuleEngine`: Rules engine</li>
<li>`Loadbalance`: Load balancer</li>
<li>`ApplicationProxy`: L4 proxy</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Services referencing the origin group. Values:
<li>`AccelerationDomain`: Acceleration domain name</li>
<li>`RuleEngine`: Rules engine</li>
<li>`Loadbalance`: Load balancer</li>
<li>`ApplicationProxy`: L4 proxy</li>
                     * @param _instanceType Services referencing the origin group. Values:
<li>`AccelerationDomain`: Acceleration domain name</li>
<li>`RuleEngine`: Rules engine</li>
<li>`Loadbalance`: Load balancer</li>
<li>`ApplicationProxy`: L4 proxy</li>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取ID of the instances referencing the origin group
                     * @return InstanceId ID of the instances referencing the origin group
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instances referencing the origin group
                     * @param _instanceId ID of the instances referencing the origin group
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
                     * 获取Name of the instance referencing the origin group
                     * @return InstanceName Name of the instance referencing the origin group
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the instance referencing the origin group
                     * @param _instanceName Name of the instance referencing the origin group
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Services referencing the origin group. Values:
<li>`AccelerationDomain`: Acceleration domain name</li>
<li>`RuleEngine`: Rules engine</li>
<li>`Loadbalance`: Load balancer</li>
<li>`ApplicationProxy`: L4 proxy</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * ID of the instances referencing the origin group
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the instance referencing the origin group
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_
