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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesAttributes request structure.
                */
                class DescribeInstancesAttributesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesAttributesRequest();
                    ~DescribeInstancesAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance attributes to be obtained. Valid value(s): 
UserData: Custom data of instances.
                     * @return Attributes Instance attributes to be obtained. Valid value(s): 
UserData: Custom data of instances.
                     * 
                     */
                    std::vector<std::string> GetAttributes() const;

                    /**
                     * 设置Instance attributes to be obtained. Valid value(s): 
UserData: Custom data of instances.
                     * @param _attributes Instance attributes to be obtained. Valid value(s): 
UserData: Custom data of instances.
                     * 
                     */
                    void SetAttributes(const std::vector<std::string>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取Instance ID list.
                     * @return InstanceIds Instance ID list.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list.
                     * @param _instanceIds Instance ID list.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Instance attributes to be obtained. Valid value(s): 
UserData: Custom data of instances.
                     */
                    std::vector<std::string> m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * Instance ID list.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESATTRIBUTESREQUEST_H_
