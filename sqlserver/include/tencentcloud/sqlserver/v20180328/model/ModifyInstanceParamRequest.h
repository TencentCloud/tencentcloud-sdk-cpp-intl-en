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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/Parameter.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyInstanceParam request structure.
                */
                class ModifyInstanceParamRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamRequest();
                    ~ModifyInstanceParamRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取List of modified parameters. Each list element has two fields: `Name` and `CurrentValue`. Set `Name` to the parameter name and `CurrentValue` to the new value after modification. <b>Note</b>: if the instance needs to be <b>restarted</b> for the modified parameter to take effect, it will be <b>restarted</b> immediately or during the maintenance time. Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                     * @return ParamList List of modified parameters. Each list element has two fields: `Name` and `CurrentValue`. Set `Name` to the parameter name and `CurrentValue` to the new value after modification. <b>Note</b>: if the instance needs to be <b>restarted</b> for the modified parameter to take effect, it will be <b>restarted</b> immediately or during the maintenance time. Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置List of modified parameters. Each list element has two fields: `Name` and `CurrentValue`. Set `Name` to the parameter name and `CurrentValue` to the new value after modification. <b>Note</b>: if the instance needs to be <b>restarted</b> for the modified parameter to take effect, it will be <b>restarted</b> immediately or during the maintenance time. Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                     * @param _paramList List of modified parameters. Each list element has two fields: `Name` and `CurrentValue`. Set `Name` to the parameter name and `CurrentValue` to the new value after modification. <b>Note</b>: if the instance needs to be <b>restarted</b> for the modified parameter to take effect, it will be <b>restarted</b> immediately or during the maintenance time. Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                     * 
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取When to execute the parameter modification task. Valid values: `0` (execute immediately), `1` (execute during maintenance time). Default value: `0`.
                     * @return WaitSwitch When to execute the parameter modification task. Valid values: `0` (execute immediately), `1` (execute during maintenance time). Default value: `0`.
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置When to execute the parameter modification task. Valid values: `0` (execute immediately), `1` (execute during maintenance time). Default value: `0`.
                     * @param _waitSwitch When to execute the parameter modification task. Valid values: `0` (execute immediately), `1` (execute during maintenance time). Default value: `0`.
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                private:

                    /**
                     * Instance ID list.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of modified parameters. Each list element has two fields: `Name` and `CurrentValue`. Set `Name` to the parameter name and `CurrentValue` to the new value after modification. <b>Note</b>: if the instance needs to be <b>restarted</b> for the modified parameter to take effect, it will be <b>restarted</b> immediately or during the maintenance time. Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * When to execute the parameter modification task. Valid values: `0` (execute immediately), `1` (execute during maintenance time). Default value: `0`.
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
