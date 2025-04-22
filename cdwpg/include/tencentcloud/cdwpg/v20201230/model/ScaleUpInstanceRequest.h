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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEUPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/CNResourceSpec.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ScaleUpInstance request structure.
                */
                class ScaleUpInstanceRequest : public AbstractModel
                {
                public:
                    ScaleUpInstanceRequest();
                    ~ScaleUpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取InstanceId.
                     * @return InstanceId InstanceId.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId.
                     * @param _instanceId InstanceId.
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
                     * 获取Modifies the resource type.
                     * @return Case Modifies the resource type.
                     * 
                     */
                    std::string GetCase() const;

                    /**
                     * 设置Modifies the resource type.
                     * @param _case Modifies the resource type.
                     * 
                     */
                    void SetCase(const std::string& _case);

                    /**
                     * 判断参数 Case 是否已赋值
                     * @return Case 是否已赋值
                     * 
                     */
                    bool CaseHasBeenSet() const;

                    /**
                     * 获取Modified parameters.
                     * @return ModifySpec Modified parameters.
                     * 
                     */
                    CNResourceSpec GetModifySpec() const;

                    /**
                     * 设置Modified parameters.
                     * @param _modifySpec Modified parameters.
                     * 
                     */
                    void SetModifySpec(const CNResourceSpec& _modifySpec);

                    /**
                     * 判断参数 ModifySpec 是否已赋值
                     * @return ModifySpec 是否已赋值
                     * 
                     */
                    bool ModifySpecHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * InstanceId.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Modifies the resource type.
                     */
                    std::string m_case;
                    bool m_caseHasBeenSet;

                    /**
                     * Modified parameters.
                     */
                    CNResourceSpec m_modifySpec;
                    bool m_modifySpecHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEUPINSTANCEREQUEST_H_
