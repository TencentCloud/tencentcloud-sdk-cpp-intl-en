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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_AUTOSCALINGADDED_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_AUTOSCALINGADDED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Nodes that are added in scale-out
                */
                class AutoscalingAdded : public AbstractModel
                {
                public:
                    AutoscalingAdded();
                    ~AutoscalingAdded() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of nodes that are being added
                     * @return Joining Number of nodes that are being added
                     */
                    int64_t GetJoining() const;

                    /**
                     * 设置Number of nodes that are being added
                     * @param Joining Number of nodes that are being added
                     */
                    void SetJoining(const int64_t& _joining);

                    /**
                     * 判断参数 Joining 是否已赋值
                     * @return Joining 是否已赋值
                     */
                    bool JoiningHasBeenSet() const;

                    /**
                     * 获取Number of nodes that are being initialized
                     * @return Initializing Number of nodes that are being initialized
                     */
                    int64_t GetInitializing() const;

                    /**
                     * 设置Number of nodes that are being initialized
                     * @param Initializing Number of nodes that are being initialized
                     */
                    void SetInitializing(const int64_t& _initializing);

                    /**
                     * 判断参数 Initializing 是否已赋值
                     * @return Initializing 是否已赋值
                     */
                    bool InitializingHasBeenSet() const;

                    /**
                     * 获取Number of normal nodes
                     * @return Normal Number of normal nodes
                     */
                    int64_t GetNormal() const;

                    /**
                     * 设置Number of normal nodes
                     * @param Normal Number of normal nodes
                     */
                    void SetNormal(const int64_t& _normal);

                    /**
                     * 判断参数 Normal 是否已赋值
                     * @return Normal 是否已赋值
                     */
                    bool NormalHasBeenSet() const;

                    /**
                     * 获取Total number of nodes
                     * @return Total Total number of nodes
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total number of nodes
                     * @param Total Total number of nodes
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Number of nodes that are being added
                     */
                    int64_t m_joining;
                    bool m_joiningHasBeenSet;

                    /**
                     * Number of nodes that are being initialized
                     */
                    int64_t m_initializing;
                    bool m_initializingHasBeenSet;

                    /**
                     * Number of normal nodes
                     */
                    int64_t m_normal;
                    bool m_normalHasBeenSet;

                    /**
                     * Total number of nodes
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_AUTOSCALINGADDED_H_
