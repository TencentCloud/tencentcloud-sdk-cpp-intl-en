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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENAMEWEIGHT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENAMEWEIGHT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance weight.
                */
                class InstanceNameWeight : public AbstractModel
                {
                public:
                    InstanceNameWeight();
                    ~InstanceNameWeight() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance name. specifies the name defined by InstanceInitInfo.InstanceName in cluster creation.
                     * @return InstanceName Instance name. specifies the name defined by InstanceInitInfo.InstanceName in cluster creation.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. specifies the name defined by InstanceInitInfo.InstanceName in cluster creation.
                     * @param _instanceName Instance name. specifies the name defined by InstanceInitInfo.InstanceName in cluster creation.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Weight
                     * @return Weight Weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight
                     * @param _weight Weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Instance name. specifies the name defined by InstanceInitInfo.InstanceName in cluster creation.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENAMEWEIGHT_H_
