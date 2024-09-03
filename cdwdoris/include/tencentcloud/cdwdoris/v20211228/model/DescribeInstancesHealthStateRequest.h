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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESHEALTHSTATEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESHEALTHSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeInstancesHealthState request structure.
                */
                class DescribeInstancesHealthStateRequest : public AbstractModel
                {
                public:
                    DescribeInstancesHealthStateRequest();
                    ~DescribeInstancesHealthStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceID Cluster ID
                     * @deprecated
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceID Cluster ID
                     * @deprecated
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取If this parameter is left blank, all clusters corresponding to the current appId are involved. Otherwise, a specific cluster is involved.
                     * @return Input If this parameter is left blank, all clusters corresponding to the current appId are involved. Otherwise, a specific cluster is involved.
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置If this parameter is left blank, all clusters corresponding to the current appId are involved. Otherwise, a specific cluster is involved.
                     * @param _input If this parameter is left blank, all clusters corresponding to the current appId are involved. Otherwise, a specific cluster is involved.
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * If this parameter is left blank, all clusters corresponding to the current appId are involved. Otherwise, a specific cluster is involved.
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEINSTANCESHEALTHSTATEREQUEST_H_
