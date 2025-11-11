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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREDATA_H_

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
                * Data returned by the `CreateInstancePre` API.
                */
                class CreateInstancePreData : public AbstractModel
                {
                public:
                    CreateInstancePreData();
                    ~CreateInstancePreData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CreateInstancePre returns fixed as 0. it cannot be used as a query condition for CheckTaskStatus. this is merely to ensure alignment with the backend data structure.
                     * @return FlowId CreateInstancePre returns fixed as 0. it cannot be used as a query condition for CheckTaskStatus. this is merely to ensure alignment with the backend data structure.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置CreateInstancePre returns fixed as 0. it cannot be used as a query condition for CheckTaskStatus. this is merely to ensure alignment with the backend data structure.
                     * @param _flowId CreateInstancePre returns fixed as 0. it cannot be used as a query condition for CheckTaskStatus. this is merely to ensure alignment with the backend data structure.
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
                     * 获取Order ID list
                     * @return DealNames Order ID list
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置Order ID list
                     * @param _dealNames Order ID list
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
                     * 获取The ckafka cluster instance Id. by default, returns the Id of the first purchased instance when purchasing multiple instances.
                     * @return InstanceId The ckafka cluster instance Id. by default, returns the Id of the first purchased instance when purchasing multiple instances.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id. by default, returns the Id of the first purchased instance when purchasing multiple instances.
                     * @param _instanceId The ckafka cluster instance Id. by default, returns the Id of the first purchased instance when purchasing multiple instances.
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
                     * 获取Order and purchase mapping list corresponding to the instance.
                     * @return DealNameInstanceIdMapping Order and purchase mapping list corresponding to the instance.
                     * 
                     */
                    std::vector<DealInstanceDTO> GetDealNameInstanceIdMapping() const;

                    /**
                     * 设置Order and purchase mapping list corresponding to the instance.
                     * @param _dealNameInstanceIdMapping Order and purchase mapping list corresponding to the instance.
                     * 
                     */
                    void SetDealNameInstanceIdMapping(const std::vector<DealInstanceDTO>& _dealNameInstanceIdMapping);

                    /**
                     * 判断参数 DealNameInstanceIdMapping 是否已赋值
                     * @return DealNameInstanceIdMapping 是否已赋值
                     * 
                     */
                    bool DealNameInstanceIdMappingHasBeenSet() const;

                private:

                    /**
                     * CreateInstancePre returns fixed as 0. it cannot be used as a query condition for CheckTaskStatus. this is merely to ensure alignment with the backend data structure.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Order ID list
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * The ckafka cluster instance Id. by default, returns the Id of the first purchased instance when purchasing multiple instances.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Order and purchase mapping list corresponding to the instance.
                     */
                    std::vector<DealInstanceDTO> m_dealNameInstanceIdMapping;
                    bool m_dealNameInstanceIdMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREDATA_H_
