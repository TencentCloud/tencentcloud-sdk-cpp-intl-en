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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DealInstanceDTO.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Data structure returned by the pay-as-you-go instance creation API
                */
                class CreateInstancePostData : public AbstractModel
                {
                public:
                    CreateInstancePostData();
                    ~CreateInstancePostData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CreateInstancePre returns fixed as 0 and cannot be used as a query condition for CheckTaskStatus. It is merely to ensure alignment with the backend data structure.</p>
                     * @return FlowId <p>CreateInstancePre returns fixed as 0 and cannot be used as a query condition for CheckTaskStatus. It is merely to ensure alignment with the backend data structure.</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>CreateInstancePre returns fixed as 0 and cannot be used as a query condition for CheckTaskStatus. It is merely to ensure alignment with the backend data structure.</p>
                     * @param _flowId <p>CreateInstancePre returns fixed as 0 and cannot be used as a query condition for CheckTaskStatus. It is merely to ensure alignment with the backend data structure.</p>
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>Order number list</p>
                     * @return DealNames <p>Order number list</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置<p>Order number list</p>
                     * @param _dealNames <p>Order number list</p>
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>Cluster instance Id of ckafka. When you purchase multiple instances, the first instance Id is returned by default.</p>
                     * @return InstanceId <p>Cluster instance Id of ckafka. When you purchase multiple instances, the first instance Id is returned by default.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Cluster instance Id of ckafka. When you purchase multiple instances, the first instance Id is returned by default.</p>
                     * @param _instanceId <p>Cluster instance Id of ckafka. When you purchase multiple instances, the first instance Id is returned by default.</p>
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
                     * 获取<p>Order and purchase mapping list corresponding to the instance</p>
                     * @return DealNameInstanceIdMapping <p>Order and purchase mapping list corresponding to the instance</p>
                     * 
                     */
                    std::vector<DealInstanceDTO> GetDealNameInstanceIdMapping() const;

                    /**
                     * 设置<p>Order and purchase mapping list corresponding to the instance</p>
                     * @param _dealNameInstanceIdMapping <p>Order and purchase mapping list corresponding to the instance</p>
                     * 
                     */
                    void SetDealNameInstanceIdMapping(const std::vector<DealInstanceDTO>& _dealNameInstanceIdMapping);

                    /**
                     * 判断参数 DealNameInstanceIdMapping 是否已赋值
                     * @return DealNameInstanceIdMapping 是否已赋值
                     * 
                     */
                    bool DealNameInstanceIdMappingHasBeenSet() const;

                    /**
                     * 获取<p>Event ID returned by CAM authentication</p>
                     * @return EventId <p>Event ID returned by CAM authentication</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>Event ID returned by CAM authentication</p>
                     * @param _eventId <p>Event ID returned by CAM authentication</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * <p>CreateInstancePre returns fixed as 0 and cannot be used as a query condition for CheckTaskStatus. It is merely to ensure alignment with the backend data structure.</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Order number list</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>Cluster instance Id of ckafka. When you purchase multiple instances, the first instance Id is returned by default.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Order and purchase mapping list corresponding to the instance</p>
                     */
                    std::vector<DealInstanceDTO> m_dealNameInstanceIdMapping;
                    bool m_dealNameInstanceIdMappingHasBeenSet;

                    /**
                     * <p>Event ID returned by CAM authentication</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTDATA_H_
