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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQCluster request structure.
                */
                class CreateRocketMQClusterRequest : public AbstractModel
                {
                public:
                    CreateRocketMQClusterRequest();
                    ~CreateRocketMQClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * @return Name Cluster name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cluster name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * @param _name Cluster name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Cluster description (up to 128 characters)
                     * @return Remark Cluster description (up to 128 characters)
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cluster description (up to 128 characters)
                     * @param _remark Cluster description (up to 128 characters)
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Cluster name, which can contain 3–64 letters, digits, hyphens, and underscores
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cluster description (up to 128 characters)
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQCLUSTERREQUEST_H_
