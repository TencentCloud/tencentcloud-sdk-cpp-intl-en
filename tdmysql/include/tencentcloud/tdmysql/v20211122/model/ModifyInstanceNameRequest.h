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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENAMEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyInstanceName request structure.
                */
                class ModifyInstanceNameRequest : public AbstractModel
                {
                public:
                    ModifyInstanceNameRequest();
                    ~ModifyInstanceNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance id that needs to be modified.
                     * @return InstanceId Instance id that needs to be modified.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id that needs to be modified.
                     * @param _instanceId Instance id that needs to be modified.
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
                     * 获取Modified instance name. required length: 1-60. can contain chinese, english uppercase and lowercase letters, digits, -, _.
                     * @return InstanceName Modified instance name. required length: 1-60. can contain chinese, english uppercase and lowercase letters, digits, -, _.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Modified instance name. required length: 1-60. can contain chinese, english uppercase and lowercase letters, digits, -, _.
                     * @param _instanceName Modified instance name. required length: 1-60. can contain chinese, english uppercase and lowercase letters, digits, -, _.
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
                     * Instance id that needs to be modified.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Modified instance name. required length: 1-60. can contain chinese, english uppercase and lowercase letters, digits, -, _.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCENAMEREQUEST_H_
