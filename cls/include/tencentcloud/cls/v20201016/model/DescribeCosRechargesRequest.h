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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESREQUEST_H_

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
                * DescribeCosRecharges request structure.
                */
                class DescribeCosRechargesRequest : public AbstractModel
                {
                public:
                    DescribeCosRechargesRequest();
                    ~DescribeCosRechargesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the log topic.
                     * @return TopicId ID of the log topic.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the log topic.
                     * @param _topicId ID of the log topic.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
                     * @return Status Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
                     * @param _status Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     * @return Enable Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     * @param _enable Whether the configuration is enabled. `0`: Not enabled, `1`: Enabled
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * ID of the log topic.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Status. `0`: Created, `1`: Running, `2`: Stopped, `3`: Completed, `4`: Run failed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESREQUEST_H_
