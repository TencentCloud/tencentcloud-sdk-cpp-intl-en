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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyCosRecharge request structure.
                */
                class ModifyCosRechargeRequest : public AbstractModel
                {
                public:
                    ModifyCosRechargeRequest();
                    ~ModifyCosRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS import configuration ID.
                     * @return Id COS import configuration ID.
                     */
                    std::string GetId() const;

                    /**
                     * 设置COS import configuration ID.
                     * @param Id COS import configuration ID.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取ID of the log topic.
                     * @return TopicId ID of the log topic.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
                     * @param TopicId ID of the log topic.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取COS import task name.
                     * @return Name COS import task name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置COS import task name.
                     * @param Name COS import task name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     * @return Enable Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     * @param Enable Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * COS import configuration ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * ID of the log topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * COS import task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCOSRECHARGEREQUEST_H_
