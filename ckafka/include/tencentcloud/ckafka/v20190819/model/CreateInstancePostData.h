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
                     * 获取This parameter has a fixed value of 0 returned by `CreateInstancePre`. It is only used for backend data alignment  and cannot be used as the query condition for `CheckTaskStatus`. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return FlowId This parameter has a fixed value of 0 returned by `CreateInstancePre`. It is only used for backend data alignment  and cannot be used as the query condition for `CheckTaskStatus`. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置This parameter has a fixed value of 0 returned by `CreateInstancePre`. It is only used for backend data alignment  and cannot be used as the query condition for `CheckTaskStatus`. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @param _flowId This parameter has a fixed value of 0 returned by `CreateInstancePre`. It is only used for backend data alignment  and cannot be used as the query condition for `CheckTaskStatus`. 
Note:  This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of order IDs Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealNames List of order IDs Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置List of order IDs Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealNames List of order IDs Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance ID. When multiple instances are purchased, the ID of the first one is returned by default . Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID. When multiple instances are purchased, the ID of the first one is returned by default . Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. When multiple instances are purchased, the ID of the first one is returned by default . Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID. When multiple instances are purchased, the ID of the first one is returned by default . Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mapping between orders and the purchased instances.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealNameInstanceIdMapping Mapping between orders and the purchased instances.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DealInstanceDTO> GetDealNameInstanceIdMapping() const;

                    /**
                     * 设置Mapping between orders and the purchased instances.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealNameInstanceIdMapping Mapping between orders and the purchased instances.  Note: This field may return null, indicating that no valid values can be obtained.
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
                     * This parameter has a fixed value of 0 returned by `CreateInstancePre`. It is only used for backend data alignment  and cannot be used as the query condition for `CheckTaskStatus`. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * List of order IDs Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * Instance ID. When multiple instances are purchased, the ID of the first one is returned by default . Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Mapping between orders and the purchased instances.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DealInstanceDTO> m_dealNameInstanceIdMapping;
                    bool m_dealNameInstanceIdMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPOSTDATA_H_
