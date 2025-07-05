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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_LOADSPEC_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_LOADSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Concurrency.h>
#include <tencentcloud/pts/v20210728/model/RequestsPerSecond.h>
#include <tencentcloud/pts/v20210728/model/ScriptOrigin.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Load configuration.
                */
                class LoadSpec : public AbstractModel
                {
                public:
                    LoadSpec();
                    ~LoadSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration for concurrency mode.

Note: This field may return null, indicating that no valid value is found.
                     * @return Concurrency Configuration for concurrency mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Concurrency GetConcurrency() const;

                    /**
                     * 设置Configuration for concurrency mode.

Note: This field may return null, indicating that no valid value is found.
                     * @param _concurrency Configuration for concurrency mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetConcurrency(const Concurrency& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取Configuration for RPS mode.

Note: This field may return null, indicating that no valid value is found.
                     * @return RequestsPerSecond Configuration for RPS mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    RequestsPerSecond GetRequestsPerSecond() const;

                    /**
                     * 设置Configuration for RPS mode.

Note: This field may return null, indicating that no valid value is found.
                     * @param _requestsPerSecond Configuration for RPS mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRequestsPerSecond(const RequestsPerSecond& _requestsPerSecond);

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取Built-in script mode.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScriptOrigin Built-in script mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    ScriptOrigin GetScriptOrigin() const;

                    /**
                     * 设置Built-in script mode.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scriptOrigin Built-in script mode.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScriptOrigin(const ScriptOrigin& _scriptOrigin);

                    /**
                     * 判断参数 ScriptOrigin 是否已赋值
                     * @return ScriptOrigin 是否已赋值
                     * 
                     */
                    bool ScriptOriginHasBeenSet() const;

                private:

                    /**
                     * Configuration for concurrency mode.

Note: This field may return null, indicating that no valid value is found.
                     */
                    Concurrency m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * Configuration for RPS mode.

Note: This field may return null, indicating that no valid value is found.
                     */
                    RequestsPerSecond m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * Built-in script mode.

Note: This field may return null, indicating that no valid value is found.
                     */
                    ScriptOrigin m_scriptOrigin;
                    bool m_scriptOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_LOADSPEC_H_
