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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALTARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Real server information of a classic CLB
                */
                class ClassicalTarget : public AbstractModel
                {
                public:
                    ClassicalTarget();
                    ~ClassicalTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Real server type. Value range: CVM, ENI (coming soon)
                     * @return Type Real server type. Value range: CVM, ENI (coming soon)
                     */
                    std::string GetType() const;

                    /**
                     * 设置Real server type. Value range: CVM, ENI (coming soon)
                     * @param Type Real server type. Value range: CVM, ENI (coming soon)
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     * @return InstanceId Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     * @param InstanceId Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     * @return Weight Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     * @param Weight Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIpAddresses Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PublicIpAddresses Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIpAddresses Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PrivateIpAddresses Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceName Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Real server status
1: failed; 2: running; 3: creating; 4: shut down; 5: returned; 6: returning; 7: restarting; 8: starting; 9: shutting down; 10: resetting password; 11: formatting; 12: making image; 13: setting bandwidth; 14: reinstalling system; 19: upgrading; 21: hot migrating
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunFlag Real server status
1: failed; 2: running; 3: creating; 4: shut down; 5: returned; 6: returning; 7: restarting; 8: starting; 9: shutting down; 10: resetting password; 11: formatting; 12: making image; 13: setting bandwidth; 14: reinstalling system; 19: upgrading; 21: hot migrating
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRunFlag() const;

                    /**
                     * 设置Real server status
1: failed; 2: running; 3: creating; 4: shut down; 5: returned; 6: returning; 7: restarting; 8: starting; 9: shutting down; 10: resetting password; 11: formatting; 12: making image; 13: setting bandwidth; 14: reinstalling system; 19: upgrading; 21: hot migrating
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RunFlag Real server status
1: failed; 2: running; 3: creating; 4: shut down; 5: returned; 6: returning; 7: restarting; 8: starting; 9: shutting down; 10: resetting password; 11: formatting; 12: making image; 13: setting bandwidth; 14: reinstalling system; 19: upgrading; 21: hot migrating
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRunFlag(const int64_t& _runFlag);

                    /**
                     * 判断参数 RunFlag 是否已赋值
                     * @return RunFlag 是否已赋值
                     */
                    bool RunFlagHasBeenSet() const;

                private:

                    /**
                     * Real server type. Value range: CVM, ENI (coming soon)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Unique ID of a real server, which can be obtained from the unInstanceId field in the return of the DescribeInstances API
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Forwarding weight of a real server. Value range: [0, 100]. Default value: 10.
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Public IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Private IP of a real server
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * Real server instance names
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Real server status
1: failed; 2: running; 3: creating; 4: shut down; 5: returned; 6: returning; 7: restarting; 8: starting; 9: shutting down; 10: resetting password; 11: formatting; 12: making image; 13: setting bandwidth; 14: reinstalling system; 19: upgrading; 21: hot migrating
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_runFlag;
                    bool m_runFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALTARGET_H_
