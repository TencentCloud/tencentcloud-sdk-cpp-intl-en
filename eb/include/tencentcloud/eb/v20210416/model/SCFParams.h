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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_SCFPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_SCFPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * SCF parameter
                */
                class SCFParams : public AbstractModel
                {
                public:
                    SCFParams();
                    ~SCFParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum waiting time for batch delivery
                     * @return BatchTimeout Maximum waiting time for batch delivery
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置Maximum waiting time for batch delivery
                     * @param BatchTimeout Maximum waiting time for batch delivery
                     */
                    void SetBatchTimeout(const int64_t& _batchTimeout);

                    /**
                     * 判断参数 BatchTimeout 是否已赋值
                     * @return BatchTimeout 是否已赋值
                     */
                    bool BatchTimeoutHasBeenSet() const;

                    /**
                     * 获取Maximum number of events in batch delivery
                     * @return BatchEventCount Maximum number of events in batch delivery
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置Maximum number of events in batch delivery
                     * @param BatchEventCount Maximum number of events in batch delivery
                     */
                    void SetBatchEventCount(const int64_t& _batchEventCount);

                    /**
                     * 判断参数 BatchEventCount 是否已赋值
                     * @return BatchEventCount 是否已赋值
                     */
                    bool BatchEventCountHasBeenSet() const;

                    /**
                     * 获取Enables batch delivery
                     * @return EnableBatchDelivery Enables batch delivery
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置Enables batch delivery
                     * @param EnableBatchDelivery Enables batch delivery
                     */
                    void SetEnableBatchDelivery(const bool& _enableBatchDelivery);

                    /**
                     * 判断参数 EnableBatchDelivery 是否已赋值
                     * @return EnableBatchDelivery 是否已赋值
                     */
                    bool EnableBatchDeliveryHasBeenSet() const;

                private:

                    /**
                     * Maximum waiting time for batch delivery
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * Maximum number of events in batch delivery
                     */
                    int64_t m_batchEventCount;
                    bool m_batchEventCountHasBeenSet;

                    /**
                     * Enables batch delivery
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SCFPARAMS_H_
