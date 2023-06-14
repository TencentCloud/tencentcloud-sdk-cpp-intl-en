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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCTRIGGERCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCTRIGGERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/RetryConfig.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Async retry configuration details of function
                */
                class AsyncTriggerConfig : public AbstractModel
                {
                public:
                    AsyncTriggerConfig();
                    ~AsyncTriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Async retry configuration of function upon user error
                     * @return RetryConfig Async retry configuration of function upon user error
                     * 
                     */
                    std::vector<RetryConfig> GetRetryConfig() const;

                    /**
                     * 设置Async retry configuration of function upon user error
                     * @param _retryConfig Async retry configuration of function upon user error
                     * 
                     */
                    void SetRetryConfig(const std::vector<RetryConfig>& _retryConfig);

                    /**
                     * 判断参数 RetryConfig 是否已赋值
                     * @return RetryConfig 是否已赋值
                     * 
                     */
                    bool RetryConfigHasBeenSet() const;

                    /**
                     * 获取Message retention period
                     * @return MsgTTL Message retention period
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置Message retention period
                     * @param _msgTTL Message retention period
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                private:

                    /**
                     * Async retry configuration of function upon user error
                     */
                    std::vector<RetryConfig> m_retryConfig;
                    bool m_retryConfigHasBeenSet;

                    /**
                     * Message retention period
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ASYNCTRIGGERCONFIG_H_
