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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ModifyInstanceAttributesConfig.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyInstanceAttributes request structure.
                */
                class ModifyInstanceAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAttributesRequest();
                    ~ModifyInstanceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     * @return MsgRetentionTime Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     * @param MsgRetentionTime Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     * @return InstanceName Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     * @param InstanceName Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance configuration
                     * @return Config Instance configuration
                     */
                    ModifyInstanceAttributesConfig GetConfig() const;

                    /**
                     * 设置Instance configuration
                     * @param Config Instance configuration
                     */
                    void SetConfig(const ModifyInstanceAttributesConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Maximum retention period in minutes for instance log, which can be up to 30 days. 0 indicates not to enable the log retention period policy
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * Instance name string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance configuration
                     */
                    ModifyInstanceAttributesConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEATTRIBUTESREQUEST_H_
