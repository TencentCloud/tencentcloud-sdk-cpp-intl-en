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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DEALINSTANCEDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DEALINSTANCEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Mapping between orders and CKafka instances for monthly subscribed and pay-as-you-go instance APIs.
                */
                class DealInstanceDTO : public AbstractModel
                {
                public:
                    DealInstanceDTO();
                    ~DealInstanceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealName Order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dealName Order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取ID list of the purchased CKafka instances corresponding to the order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIdList ID list of the purchased CKafka instances corresponding to the order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置ID list of the purchased CKafka instances corresponding to the order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceIdList ID list of the purchased CKafka instances corresponding to the order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                private:

                    /**
                     * Order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * ID list of the purchased CKafka instances corresponding to the order list.  Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DEALINSTANCEDTO_H_
