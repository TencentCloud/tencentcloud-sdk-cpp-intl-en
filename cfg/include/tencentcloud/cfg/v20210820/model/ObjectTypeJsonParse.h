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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPEJSONPARSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPEJSONPARSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Value returned for container Pod resources
                */
                class ObjectTypeJsonParse : public AbstractModel
                {
                public:
                    ObjectTypeJsonParse();
                    ~ObjectTypeJsonParse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NameSpace Namespace

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置Namespace

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nameSpace Namespace

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取Workload name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkloadName Workload name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置Workload name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workloadName Workload name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取Node IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LanIP Node IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLanIP() const;

                    /**
                     * 设置Node IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lanIP Node IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLanIP(const std::string& _lanIP);

                    /**
                     * 判断参数 LanIP 是否已赋值
                     * @return LanIP 是否已赋值
                     * 
                     */
                    bool LanIPHasBeenSet() const;

                    /**
                     * 获取Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Namespace

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * Workload name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * Node IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lanIP;
                    bool m_lanIPHasBeenSet;

                    /**
                     * Node ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPEJSONPARSE_H_
