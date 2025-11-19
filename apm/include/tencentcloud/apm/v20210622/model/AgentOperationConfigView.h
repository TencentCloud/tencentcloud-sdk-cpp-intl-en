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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_AGENTOPERATIONCONFIGVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_AGENTOPERATIONCONFIGVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Related configurations of the probe APIs.
                */
                class AgentOperationConfigView : public AbstractModel
                {
                public:
                    AgentOperationConfigView();
                    ~AgentOperationConfigView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether allowlist configuration is enabled for the current API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionValid Whether allowlist configuration is enabled for the current API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRetentionValid() const;

                    /**
                     * 设置Whether allowlist configuration is enabled for the current API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionValid Whether allowlist configuration is enabled for the current API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionValid(const bool& _retentionValid);

                    /**
                     * 判断参数 RetentionValid 是否已赋值
                     * @return RetentionValid 是否已赋值
                     * 
                     */
                    bool RetentionValidHasBeenSet() const;

                    /**
                     * 获取Effective when RetentionValid is false. It indicates blocklist configuration in API settings. The APIs specified in the configuration do not support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoreOperation Effective when RetentionValid is false. It indicates blocklist configuration in API settings. The APIs specified in the configuration do not support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIgnoreOperation() const;

                    /**
                     * 设置Effective when RetentionValid is false. It indicates blocklist configuration in API settings. The APIs specified in the configuration do not support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ignoreOperation Effective when RetentionValid is false. It indicates blocklist configuration in API settings. The APIs specified in the configuration do not support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIgnoreOperation(const std::string& _ignoreOperation);

                    /**
                     * 判断参数 IgnoreOperation 是否已赋值
                     * @return IgnoreOperation 是否已赋值
                     * 
                     */
                    bool IgnoreOperationHasBeenSet() const;

                    /**
                     * 获取Effective when RetentionValid is true. It indicates allowlist configuration in API settings. Only the APIs specified in the configuration support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionOperation Effective when RetentionValid is true. It indicates allowlist configuration in API settings. Only the APIs specified in the configuration support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRetentionOperation() const;

                    /**
                     * 设置Effective when RetentionValid is true. It indicates allowlist configuration in API settings. Only the APIs specified in the configuration support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionOperation Effective when RetentionValid is true. It indicates allowlist configuration in API settings. Only the APIs specified in the configuration support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionOperation(const std::string& _retentionOperation);

                    /**
                     * 判断参数 RetentionOperation 是否已赋值
                     * @return RetentionOperation 是否已赋值
                     * 
                     */
                    bool RetentionOperationHasBeenSet() const;

                private:

                    /**
                     * Whether allowlist configuration is enabled for the current API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_retentionValid;
                    bool m_retentionValidHasBeenSet;

                    /**
                     * Effective when RetentionValid is false. It indicates blocklist configuration in API settings. The APIs specified in the configuration do not support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ignoreOperation;
                    bool m_ignoreOperationHasBeenSet;

                    /**
                     * Effective when RetentionValid is true. It indicates allowlist configuration in API settings. Only the APIs specified in the configuration support collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_retentionOperation;
                    bool m_retentionOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_AGENTOPERATIONCONFIGVIEW_H_
