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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERDETAIL_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Details of the tenant’s RocketMQ cluster
                */
                class RocketMQClusterDetail : public AbstractModel
                {
                public:
                    RocketMQClusterDetail();
                    ~RocketMQClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic cluster information.
                     * @return Info Basic cluster information.
                     * 
                     */
                    RocketMQClusterInfo GetInfo() const;

                    /**
                     * 设置Basic cluster information.
                     * @param _info Basic cluster information.
                     * 
                     */
                    void SetInfo(const RocketMQClusterInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Cluster configuration information.
                     * @return Config Cluster configuration information.
                     * 
                     */
                    RocketMQClusterConfig GetConfig() const;

                    /**
                     * 设置Cluster configuration information.
                     * @param _config Cluster configuration information.
                     * 
                     */
                    void SetConfig(const RocketMQClusterConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Cluster status. 0: Creating; 1: Normal; 2: Terminating; 3: Deleted; 4. Isolated; 5. Creation failed; 6: Deletion failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Cluster status. 0: Creating; 1: Normal; 2: Terminating; 3: Deleted; 4. Isolated; 5. Creation failed; 6: Deletion failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. 0: Creating; 1: Normal; 2: Terminating; 3: Deleted; 4. Isolated; 5. Creation failed; 6: Deletion failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Cluster status. 0: Creating; 1: Normal; 2: Terminating; 3: Deleted; 4. Isolated; 5. Creation failed; 6: Deletion failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Basic cluster information.
                     */
                    RocketMQClusterInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Cluster configuration information.
                     */
                    RocketMQClusterConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Cluster status. 0: Creating; 1: Normal; 2: Terminating; 3: Deleted; 4. Isolated; 5. Creation failed; 6: Deletion failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERDETAIL_H_
